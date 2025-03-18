#include <stdio.h>
#include <stdlib.h>

void miniMaxsum( int * a ){
    int i, total = 0, minSum, maxSum;
    int min = * a, max = * a;
    for( i = 0; i < 5; i++ ){
        total += * (a + i);
        if( min > * (a + i) ) min = * (a + i);
        if( max < * (a + i) ) max = * (a + i);
    }
    minSum = total - max;
    maxSum = total - min;
    printf("%d %d", minSum, maxSum);
}

int main(){
    int i;
    int * a = malloc(sizeof(int) * 5);
    for( i = 0; i < 5; i++)
        scanf("%d", (a + i));
    miniMaxsum(a);
    return 0;
}
