#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5

int main(void)
 {
 int seed_of_random_number_generator, random_number;

 seed_of_random_number_generator = time(NULL);
 // https://cplusplus.com/reference/ctime/time/
 printf("Seed of random generator (time in seconds since 00:00 hours, Jan 1, 1970 UTC): ");
 printf("%d\n", seed_of_random_number_generator);

 // https://cplusplus.com/reference/cstdlib/srand/
 srand(seed_of_random_number_generator);
 // this is initialization of random number generator
 // one and the same seed leads to one and the sequence of numbers

 random_number = rand();
 // https://cplusplus.com/reference/cstdlib/rand/
 printf("The random number is: %d\n", random_number);

 if( random_number % N == 0 ) // NB! opeartions are not executed simulteniously
  {
  printf("The number %d is multiple %d.\n", random_number,N);
  }
 else
  {
  printf("The number %d is not multiple %d.\n", random_number,N);
  }

 if( random_number % N ) // it is not obligatory to compare, because finally is observed numerical
                         // value obtained inside ()
                         // this value could be "pure" 0 - all bits of obtained result are 0
                         // or at least one bit isn't 0
  {
  printf("The number %d is not multiple %d.\n", random_number,N);
  }
 else
  {
  printf("The number %d is multiple %d.\n", random_number,N);
  }


 return 0;
 }
