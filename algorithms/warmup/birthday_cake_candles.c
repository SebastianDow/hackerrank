#include <stdio.h>
#include <stdlib.h>

int birthdayCakeCandles( int * candles, int n ){
    int count = 0, i, max = 0;
    for( i = 0; i < n; i++ ){
        if( *(candles + i) > max ){
            max = *(candles + i);
            count = 1;
        } else if( *(candles + i) == max )
            count++;
    }
    return count;
}

int main(){
    int n, i;
    scanf("%d", &n);
    int * candles = malloc(n * sizeof(int));
    for( i = 0; i < n; i++ )
        scanf("%d", (candles + i));
    printf("%d", birthdayCakeCandles(candles, n));
    return 0;
}
