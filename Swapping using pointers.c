// Program to swap two integers using pointers
#include <stdio.h>
void swap(int *a, int *b);
int main() {
    int a=5;
    int b=6;
    printf("***Before swapping***\n");
    printf("a=%d , b=%d\n",a,b);
    printf("***After swapping***\n");
    swap(&a,&b);//calls function
    printf("a=%d , b=%d\n",a,b);
    return 0;
}
void swap(int *a, int *b){
    int x;
    x= *b;
    *b= *a;
    *a=x;
}