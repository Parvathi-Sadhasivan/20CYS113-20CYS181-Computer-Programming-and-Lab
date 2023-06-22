#include <stdio.h>
int main(){
	int i,j,s,c=1,rows=8;
	for (i=1;i<=8;i++){
		for(s=1;s<8-i+1;s++){
			printf(" ");}
		for(j=0;j<=i;j++){
			if(j==0||i==0){
				c=1;
				printf("%d",c);}
			else{
				c=c*(i-j+1)/j;
				printf("%d",c);
			}
		}
		printf("\n");
	}
}
