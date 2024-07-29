//Values of a parabola for a range of x values
#include <stdio.h>
int Parabola(int x);
int main(){

int xval[14];//accomodates 14 values
printf("X \tY\n");
for(int i=0;i<14;i++){
xval[i]=i-6;//initializes array to accomodate values from -6 to 7
printf("%d \t%d\n",xval[i],Parabola(xval[i]));//returns function
}
return 0;
}
int Parabola(int x){
    int y;
    y=((x*x)-x-42);
    return (y);
}