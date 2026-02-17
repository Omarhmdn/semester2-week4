
/*
 * Matrix-vector product
 */

 #include <stdio.h>

 int main( void ) {
    float a[4][4];
    float b[4];
    float c[4];

    /*
    Intialise the matrix a and vector b entries to 1. 
    Write code to compute the product.
    Store your answer in vector c
    Print your final answer
    */
   for (int k=0; k<4; k++) {
      for (int i=0; i<4; i++) {
         a[k][i] = 1;
         b[k] = 1;
         c[k] = a[k][i] * b[k];
      }
      printf("[%d] %f\n", k,c[k]);
    }

    return 0;
 }
