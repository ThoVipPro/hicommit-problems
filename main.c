#include<stdio.h>

int main(){
  int n, kq = -999999;
  for(int i = 0; i < 3; i++){
    scanf("%d", &n);
    if(n > kq){
      	kq = n;}
	}
  printf("%d", kq);

}