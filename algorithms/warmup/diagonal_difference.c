#include <stdio.h>
#include <stdlib.h>

unsigned int diagonalDifference( int * * x, int n ){
    int a = 0, i;
    for( i = 0; i < n; i++ )
        a += * (* (x + i) + i) - * (* (x + i) + (n - i - 1));;
    return abs(a);
}

int * * inputSquareMatrix( int n ){
    int * * x;
    x = malloc(sizeof(int *) * n);
    int i, j;
    for( i = 0; i < n; i++ ){
        int * r = malloc(sizeof(int) * n);
        * (x + i) = r;
        for ( j = 0; j < n; j++ )
            scanf("%d", (r + j));
    }
    return x;
}

int main(){
    int n, i;
    scanf("%d", &n);
    int * * x = inputSquareMatrix(n);
    printf("%d", diagonalDifference(x, n));
    for (i = 0; i < n; i++) {
        free(* (x + i));
    }
    free(x);
    return 0;
}
