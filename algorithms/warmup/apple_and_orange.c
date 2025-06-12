#include <stdio.h>
#include <stdlib.h>

int * countApplesAndOranges( int, int, int, int, int *, int, int *, int );
int countFruits( int *, int, int, int, int );

int main(){
    int s, t, appleTree, orangeTree, m, n, i;
    scanf("%d%d", &s, &t);
    scanf("%d%d", &appleTree, &orangeTree);
    scanf("%d%d", &m, &n);
    int * apples = malloc( sizeof(int) * m );
    int * oranges = malloc( sizeof(int) * n );
    for( i = 0; i < m; i++ )
        scanf("%d", apples + i);
    for( i = 0; i < n; i++ )
        scanf("%d", oranges + i);
    int * count = countApplesAndOranges( s, t, appleTree, orangeTree, 
                                        apples, m, oranges, n );
    printf( "%d\n%d", *count, *(count + 1) );
    free(apples);
    free(oranges);
    free(count);
    return 0;
}

int * countApplesAndOranges( int s, int t, int appleTree, int orangeTree,
                             int * apples, int m, int * oranges, int n ){
    int * count = malloc( 2 * sizeof( int ) );   
    int i;
    *count = countFruits( apples, m, appleTree, s, t );
    *(count + 1) = countFruits( oranges, n, orangeTree, s, t);
    return count;
}

int countFruits( int * fruits, int size, int treeLocation, int s, int t ){
    int count = 0, i;
    for( i = 0; i < size; i++ )
        if( ( *(fruits + i) + treeLocation ) >= s &&
            ( *(fruits + i) + treeLocation ) <= t )
            count++;
    return count;
}
