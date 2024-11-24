#include<stdio.h>
int main(){
	
	int number;
	printf("Nhap so nam ban can kiem tra :");
	scanf("%d",&number);
	if(number%4==0 || number%100==0 || number%400==0){
		printf("Nam %d la nam nhuan",number);
	}else{
		printf("Nam %d khong phai la nam nhuan",number);
	}

	return 0;
}
