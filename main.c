#include<stdio.h>
#include<limits.h>
int main(){
  int n, kq = INT_MIN;
  for(int i = 0; i < 3; i++){
    scanf("%d", &n);
    if(n > kq){
      	kq = n;}
	}
  printf("%d", kq);

}