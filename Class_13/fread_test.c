// https://cplusplus.com/reference/cstdio/fread/

#include <stdio.h>
#include <stdlib.h>

int main () {
  FILE * pFile;
  long lSize;
  //char * buffer;
  int * buffer;
  size_t result;

  pFile = fopen ( "myfile.bin" , "rb" );
  if (pFile==NULL) {fputs ("File error",stderr); exit (1);}

  // obtain file size:
  fseek (pFile , 0 , SEEK_END);
  lSize = ftell (pFile);
  rewind (pFile);

  // allocate memory to contain the whole file:
  //buffer = (char*) malloc (sizeof(char)*lSize);
  buffer = (int*) malloc (lSize/sizeof(int));
  if (buffer == NULL) {fputs ("Memory error",stderr); exit (2);}

  // copy the file into the buffer:
  //result = fread (buffer,1,lSize,pFile);
  result = fread (buffer,sizeof(int),lSize/sizeof(int),pFile);
  if (result != lSize/sizeof(int)) {fputs ("Reading error",stderr); exit (3);}

  /* the whole file is now loaded in the memory buffer. */

  for(int i=0; i<lSize/sizeof(int) ; i++)
    printf("Value of %d element - %d\n",i,buffer[i]);

  // terminate
  fclose (pFile);
  free (buffer);
  return 0;
}
