#include <stdio.h>
struct comp{
	int real;
	int img;
}c1,c2,c3;
int main(){
	printf("Enter first num");
	printf("Enter the real part:");
	scanf("%d",&c1.real);
	printf("Enter the img part:");
	scanf("%d",&c1.img);
	 printf("Enter second num");
        printf("Enter the real part:");
        scanf("%d",&c2.real);
        printf("Enter the img part:");
        scanf("%d",&c2.img);
	c3.real=c1.real*c2.real-(c1.img*c2.img);
	c3.img=c1.real*c2.img+(c2.real*c1.img);
	printf("The comp num is %d + %d*i",c3.real,c3.img);}
