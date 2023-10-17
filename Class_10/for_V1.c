#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5

int main(void)
 {
 int seed_of_random_number_generator, random_number, step_counter = 0;

 seed_of_random_number_generator = time(NULL);
 printf("Seed of random generator (time in seconds since 00:00 hours, Jan 1, 1970 UTC): ");
 printf("%d\n", seed_of_random_number_generator);
 srand(seed_of_random_number_generator);

 step_counter++; // step_counter = step_counter + 1;
                 // step_counter += 1;
                 // ++step_counter;
 random_number = rand();

 for( ; random_number % N ; )
  {
  printf("%d generation - the random number is: %d\n", step_counter,random_number);
  printf("The number %d is not multiple %d.\n", random_number,N);
  step_counter++;
  random_number = rand(); // without this row we will have infinite loop, because random_number will never change
  }

 printf("The number %d is multiple %d.\n", random_number,N);

 return 0;
 }
