#include<stdio.h>

int main(){
    int x, y, sum, product;

    printf("Enter number A: ");
    scanf("%d", &x);
    printf("Enter number B: ");
    scanf("%d", &y);

    sum = x + y;
    product = x * y;

    printf("Sum is %d\n", sum);
    printf("Product is %d\n", product);

    return 0;
}