#include <stdio.h>
#include <math.h>
int main(){
   int x1,y1,x2,y2,x3,y3;
   float side1,side2,side3;
   int a,b,c;
   double Area=0;
   int s=0;
   //Code to prompt user to enter coordinates and they are stored
   printf("Enter x coordinate:  ");
   scanf("%d",&x1);
   printf("Enter y coordinate:  ");
   scanf("%d",&y1);
   printf("Enter x coordinate:  ");
   scanf("%d",&x2);
   printf("Enter y coordinate:  ");
   scanf("%d",&y2);
   printf("Enter x coordinate:  ");
   scanf("%d",&x3);
   printf("Enter y coordinate:  ");
   scanf("%d",&y3);
   printf("***The Coordinates representing the vertices of the triangle***\n");
   printf("(%d,%d), ",x1,y1);
   printf("(%d,%d) and ",x2,y2);
   printf("(%d,%d)\n\n",x3,y3);
   //Working out the different lengths of the sides
   side1 = sqrt(pow((x2 - x1),2) + pow((y2 - y1),2));
   side2 = sqrt(pow((x3 - x2),2) + pow((y3 - y2),2));
   side3 = sqrt(pow((x1 - x3),2) + pow((y1 - y3),2));
   printf("****Length of each side of the triangle****\n");
   printf("Length of side 1= %.0f\n",side1);
   printf("Length of side 2= %.0f\n",side2);
   printf("Length of side 3= %.0f\n",side3);
   //Conditions to check for validity of the triangle
   a=(side1+side2)>side3;
   b=(side1+side3)>side2;
   c=(side2+side3)>side1;
   
  //Checks if one of a,b or c are true then prints valid otherwise prints invalid
   if(a&&b&&c){
       printf("Triangle is valid\n");
 //if triangle is valid, it proceeds to check for the type of triangle
       if(side1==side2&&side2==side3){
           printf("Type of triangle: Equilateral triangle\n");
       }else if(side1==side2||side1==side3||side2==side3){
           printf("Type of triangle: Isosceles triangle\n");
       }else if(side1 !=side2 !=side3){
           printf("Type of triangle: Scalene triangle\n");
       }
       else if((pow(side1,2)+pow(side2,2))==pow(side3,2)||((pow(side1,2)+pow(side3,2)==pow(side2,2)))||((pow(side2,2)+pow(side3,2)==pow(side1,2)))){
           printf("Type of triangle: Right angled triangle");
       }
   }
   else { printf("Triangle is invalid\n");}
   s=((side1+side2+side3)/2);//Calculating s
   Area=sqrt((s) * (s-side1) * (s-side2) * (s-side3));//Area of triangle
   printf("Area of triangle=%.0f square units",Area);
  return 0;
}
  
