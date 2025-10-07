#include <stdio.h>
#include <stdlib.h>

unsigned int * input_bonds();
void print_range( unsigned int *, unsigned int * );

int main(){
    unsigned int * limits = malloc( 2 * sizeof( unsigned int ) );
    limits = input_bonds();
    print_range( limits , (limits + 1) );
    return 0;
}

unsigned int * input_bonds(){
    unsigned int * range = malloc( 2 * sizeof( unsigned int ) );
    scanf( "%d%d", range, range + 1 );
    return range;
}

void print_range( unsigned int * a, unsigned int * b ){
    int i;
    for( i = * a; i <= * b; i++ ){
        switch( i ) {
        case 1:
            printf( "one" );
            break;
        case 2:
            printf( "two" );
            break;
        case 3:
            printf( "three" );
            break;
        case 4:
            printf( "four" );
            break;
        case 5:
            printf( "five" );
            break;
        case 6:
            printf( "six" );
            break;
        case 7:
            printf( "seven" );
            break;
        case 8:
            printf( "eight" );
            break;
        case 9:
            printf( "nine" );
            break;
        default:
            if( i % 2 ) printf( "odd" );
            else printf( "even" );
        }
        printf("\n");
    }
}
