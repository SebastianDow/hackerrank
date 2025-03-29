#include <stdio.h>
#include <stdlib.h>

char * timeConversion( char * s ){
    char * r = malloc(8 * sizeof(char));
    int h12 = (*s - 48) * 10 + (*(s + 1) - 48);
    int i;
    if( *(s + 8) == 65 && h12 == 12 )
        h12 = 0;
    else if( *(s + 8) == 80 && h12 != 12)
        h12 += 12;
    *r = h12 / 10 + 48; *(r + 1) = h12 % 10 + 48;
    for( i = 2; i < 8; i++ ) *(r + i) = *(s + i);
    return r;
}

int main(){
    char * s = malloc(10 * sizeof(char));
    scanf("%s", s);
    printf("%s", timeConversion(s));
    return 0;
}
