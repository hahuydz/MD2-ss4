#include<stdio.h>
int main(){
	
	int number;
	
	printf("Nhap mot so nguyen :");
	scanf("%d",&number);
	if(number>0){
		printf("So %d la so duong",number);
	}else if(number<0){
		printf("So %d la so am",number);
	}else{
		printf("So %d khong phai so duong cung khong phai so am",number);
	}
	
	return 0;
}
