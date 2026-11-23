#include<stdio.h>

int main(){
	double c, d;
	scanf("%lf", &d);
	if(d <= 1){
		c = d * 15000;
		printf("%0.lf", c);
		return 0;
	}else	if( d <= 5){
		c = 15000 + (d-1) * 13000;
		printf("%0.lf", c);
		return 0;
	}else{
		c = 15000 + 4 * 13000 + (d-5) * 11000;
		printf("%0.lf", c);
		return 0;
	}
}