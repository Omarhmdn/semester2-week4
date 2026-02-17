
/*
 * Factorial
 */

 #include <stdio.h>

 int main( void ) {
    int f[20];

    /*
    Code to compute the factorial of each array index
    Print your final answer
    */
   for ( int k=0; k<21; k++ ){
      if (k == 0)
          f[k]= 1;
      } else{
            for ( int k=0; k<21; k++ ){
               
               f[k] *= f[k-1];
               printf("%d",f[k]);
            } 
         }
   return 0;
 }
