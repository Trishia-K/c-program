// Program to swap three integers
#include <stdio.h>
int swap1(int x, int y);
int swap2(int x);
int a;
int main() {
    int a=5;
    int b=7;
    int c=10;
    printf("***Value before first function***\n");
    printf("a=%d, b=%d, c=%d\n",a,b,c);
    printf("***Value after first function***\n");
    swap1(b,c);//calls first function
    printf("a=%d, b=%d, c=%d\n",a,b,c);
    printf("***Value after second function***\n");
    swap2(b);//calls second function
    printf("a=%d, b=%d, c=%d\n",a,b,c);
    return 0;
}
int swap1(int x, int y){
    int z;
    z= x;
    x= y;
    y=z;
}
int swap2(int x){
    int z;
    z=x;
    x=a;
    a=z;
}