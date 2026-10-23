#include<stdio.h>
int main(){
	int n,s=0,c=0,so=0;
	//scanf("%d",&n);

	int a[] = {5,7,6,9,10,12,-3,4,1,8};
	
		
	for(int i = 0; i < 10; i++)
	{
		s = s + a[i];
		printf("%d ",a[i]);
		if(a[i]<0){
			c++;
		}
		 if(a[i]==0){
			so++;
		}
	}

	for(int i=0; i<10; i++)
	{
		for(int j= (i+1); j<10; j++){
			if(a[i] > a[j]){
				a[i] = a[i]+a[j];
				a[j] = a[i]-a[j];
				a[i] = a[i] - a[j];
			}
		}
	}
	
	printf("tong: %d\n",s);
	printf("so phan tu am: %d\n",c);
	printf("so phan tu bang 0: %d\n",so);
	for(int i = 0; i < 10; i++){
		printf("%d ",a[i]);
	}

}
