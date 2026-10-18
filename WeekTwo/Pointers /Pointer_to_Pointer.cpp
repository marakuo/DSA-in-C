#include <stdio.h>
/*
*  pp          p           x
[ &p ] ───► [ &x ] ───► [ 10 ]
 */

int main(void) {
   int x = 10;
    int *p = &x;
    int **pp = &p;
    printf("*p = %d\n", *p); // 10
    printf("**pp = %d\n", **pp); // *(*pp) = *(p) =10
    printf("*pp = %d\n", *pp); // p = address of x
    printf("p = %d\n", p); // p = address of x
    printf("pp = %d\n", pp); // the address of pointer p
    **pp = *p +2; // increment x by 2 
    printf("**pp = %d\n", **pp); 




    return 0;
}

