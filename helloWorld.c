#include <stdio.h>

void printMessage(void){
    printf("Programming is fun. \n");
}

int foo = 2;

void calculateTiangularNumber(int n){
    int i , triangularNumber = 0;
    for (i = 1; i <=n; ++i)
        triangularNumber += 1;
    
    printf("Triangular Number %i is %i\n", n, triangularNumber);
}

int main (void) { /* there always be a main */
    _Bool boo = 0;
    int arr[100];
    for(int i = 0; i < 100; i += 3){
        arr[i] = i;
    }
    for(int i = 0; i < 100; i++){
        printf("\n%i\n", arr[i]);
    }
    printf("%i\n", boo);
    // calculateTiangularNumber(10);
    // calculateTiangularNumber(20);
    return 0;
}
