#include<stdio.h>
int main(){
    int a, b;
    printf("Enter two integer numbers: ");
    scanf("%d %d", &a, &b);

    int sum = a + b;
    printf("sum = %d\n", sum);

    return 0;
}
