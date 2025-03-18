#include <stdio.h>
#include <stdlib.h>

long int * miniMaxsum( long int * a, int size ){
    long int i, total = 0;
    long int * minMax = malloc(2 * sizeof(long int));
    long int min = * a, max = * a;
    for( i = 0; i < size; i++ ){
        total += * (a + i);
        if( min > * (a + i) ) min = * (a + i);
        if( max < * (a + i) ) max = * (a + i);
    }
    * minMax = total - max;
    * (minMax + 1) = total - min;
    return minMax;
}

int main(){
    int i;
    long int * a = malloc(5 * sizeof(long int));
    long int * r;
    for( i = 0; i < 5; i++)
        scanf("%ld", (a + i));
    r = miniMaxsum(a, 5);
    printf("%ld %ld", * r, *(r + 1));
    return 0;
}
