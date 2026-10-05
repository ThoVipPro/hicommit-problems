#include<stdio.h>

typedef long long ll;
int main(){

	ll distance, cost;
	scanf("%d%d", &distance, &cost);

	if(distance <= 0 || cost <= 0 ){
		printf("invalid");
	}
	else if(distance < 15 && cost > 500000){
		printf("0");
	}
	else if(distance <= 5){
		printf("%d", 15000+cost);
		return 0;
	}
	else if(distance <= 15){
		printf("%d", 25000+cost);
		return 0;
	}else
	printf("%d",40000 + cost);
}