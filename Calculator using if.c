#include <stdio.h>
int main(){
char operation;
float n1,n2;
float result;
//Prompt user to choose operation
printf("Choose an operation(+,-,*,/): ");
scanf("%c",&operation);
//Prompt user to enter numbers
printf("Enter first number: ");
scanf("%f",&n1);
printf("Enter second number: ");
scanf("%f",&n2);

if(operation=='+'){
    printf("Addition");
    result=n1+n2;
    printf("%.1f + %.1f=%.1f",n1,n2,result);
}else if(operation=='-'){
    printf("Subtraction");
    result=n1-n2;
    printf("%.1f-%.1f=%.1f",n1,n2,result);
}else if(operation=='*'){
    printf("Multiplication");
    result=n1*n2;
    printf("%.1f*%.1f=%.1f",n1,n2,result);
}else if(operation=='/'){
    if(n2==0){
        printf("Mathh error");
    }else{
        printf("Division");
        result=n1/n2;
        printf("%.1f/%.1f=%.1f",n1,n2,result);
    }
}else{
    printf("Syntax error");
}
}