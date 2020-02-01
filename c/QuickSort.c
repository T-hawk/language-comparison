#include <stdio.h>    

int main() {
  int sort[] = {0, 1, 4, 6};
  int size;
  size = sizeof(sort) / sizeof(sort[0]);
  printf("%d\n", size);
  quicksort(sort);
  return 0;
}

int quicksort(int array[])  {
  printf("%d", (int) sizeof(array) / sizeof(array[0]));
  if ((int) (sizeof(array) / sizeof(array[0])) <= 1) {
      printf("hello there");
  }
  return 0;
}

// int * getRandom( ) {

//    static int  r[10];
//    int i;

//    /* set the seed */
//    srand( (unsigned)time( NULL ) );
  
//    for ( i = 0; i < 10; ++i) {
//       r[i] = rand();
//       printf( "r[%d] = %d\n", i, r[i]);
//    }

//    return r;
// }

// /* main function to call above defined function */
// int main () {

//    /* a pointer to an int */
//    int *p;
//    int i;

//    p = getRandom();
	
//    for ( i = 0; i < 10; i++ ) {
//       printf( "*(p + %d) : %d\n", i, *(p + i));
//    }

//    return 0;
// }