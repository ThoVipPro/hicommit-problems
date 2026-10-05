#include<stdio.h>

//typedef long long ll;
int main(){

	int distance, cost;
	scanf("%d", &distance);
    scanf("%d", &cost);
	if(distance <= 0 || cost <= 0 ){
		printf("INVALID");
	}
	else if(distance <= 15 && cost >= 500000){
		printf("%d",0);
	}
	else if(distance <= 5){
		printf("%d", 15000);
		return 0;
	}
	else if(distance <= 15){
		printf("%d", 25000);
		return 0;
	}else
	printf("%d",40000);
}