#include <stdio.h>
#include <stdlib.h>

void staircase( int n ){
    int i, j;
    for( i = 1; i <= n; i++ ){
        for( j = 0; j < n - i; j++ )
            printf(" ");
        for( j = 0; j < i; j++ )
            printf("#");
        printf("\n");
    }
}

int main(){
    int n;
    scanf("%d", &n);
    staircase(n);
    return 0;
}
