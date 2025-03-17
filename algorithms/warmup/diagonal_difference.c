#include <stdio.h>
#include <stdlib.h>

unsigned int diagonalDifference( int * * x, int n ){
    unsigned int r;
    int a = 0, i;
    for( i = 0; i < n; i++ )
        a += * (* (x + i) + i) - * (* (x + i) + (n - i - 1));
    r = abs(a);
    return r;
}

int * * inputSquareMatrix( int n ){
    int * * x;
    x = malloc(sizeof(int *) * n);
    int i, j;
    for( i = 0; i < n; i++ ){
        int * q = malloc(sizeof(int) * n);
        * (x + i) = q;
        for ( j = 0; j < n; j++ )
            scanf("%d", (* (x + i) + j));
    }
    return x;
}

int main(){
    int n;
    scanf("%d", &n);
    int * * x = inputSquareMatrix(n);
    printf("%d", diagonalDifference(x, n));
    return 0;
}
