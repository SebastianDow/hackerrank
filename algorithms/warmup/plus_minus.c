#include <stdio.h>
#include <stdlib.h>

void plusMinus( int * a, int n ){
    int i, p = 0, m = 0, z = 0;
    float pf, nf, zf;
    for( i = 0; i < n; i++ ){
        if( * (a + i) > 0 ) p++;
        else if( * (a + i) < 0 ) m++;
        else z++;
    }
    pf = (float)p / n;
    nf = (float)m / n;
    zf = (float)z / n;
    printf("%.6f\n%.6f\n%.6f", pf, nf, zf);
}

int main(){
    int n, i;
    scanf("%d", &n);
    int * a = malloc(sizeof(int) * n);
    for( i = 0; i < n; i++ )
        scanf("%d", (a + i));
    plusMinus(a, n);
    return 0;
}
