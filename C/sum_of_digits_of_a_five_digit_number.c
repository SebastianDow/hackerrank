#include <stdio.h>
#include <stdlib.h>

unsigned int * sum_digits( unsigned int * );

int main() {
    unsigned int sum = 0;
    unsigned int * n = malloc( sizeof( unsigned int ) );
    scanf( "%u", n );
    sum = * sum_digits( n );
    printf( "%d", sum );
    return 0;
}

unsigned int * sum_digits( unsigned int * n ){
    unsigned int * result = calloc( 1, sizeof( unsigned int ) );
    unsigned int temp = * n;
    do{
        * result += temp % 10;
        temp /= 10;
    } while( temp > 0 );
    return result;
}
