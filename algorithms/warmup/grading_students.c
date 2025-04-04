#include <stdio.h>
#include <stdlib.h>

int * gradingStudents( int * grades, int n ){
    int * newGrades = malloc(n * sizeof(int));
    int i;
    for( i = 0; i < n; i++ )
        *(newGrades + i) = *(grades + i) >= 38 &&
            *(grades + i) % 5 >= 3 ? 
            (*(grades + i) / 5 + 1) * 5 :
            *(grades + i);
    return newGrades;
}
int main(){
    int n, i;
    scanf("%d", &n);
    int * grades = malloc(n * sizeof(int));
    for( i = 0; i < n; i++ )
        scanf("%d", (grades + i));
    int * newGrades = gradingStudents(grades, n);
    for( i = 0; i < n; i++ )
        printf("%d\n", *(newGrades + i));
    return 0;
}
