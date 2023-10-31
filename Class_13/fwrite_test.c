// https://cplusplus.com/reference/cstdio/fwrite/

#include <stdio.h>

int main ()
{
  FILE * pFile;
  //char buffer[] = { 'x' , 'y' , 'z' };

  //int buffer[] = { 0x78 , 0x79 , 0x7a };
                // 0x78 -> 0000 0000  0000 0000  0000 0000  0111 1000
                // 0x79 -> 0000 0000  0000 0000  0000 0000  0111 1001
                // 0x7a -> 0000 0000  0000 0000  0000 0000  0111 1010
  int buffer[] = { 4564 , -45654 , 675540 };
                // 4564 -> 0000 0000  0000 0000  0001 0001  1101 0100


  pFile = fopen ("myfile.bin", "wb");
  //fwrite (buffer , sizeof(char), sizeof(buffer), pFile);

  fwrite (buffer , sizeof(int), sizeof(buffer)/sizeof(int) , pFile);

  fclose (pFile);
  return 0;
}
