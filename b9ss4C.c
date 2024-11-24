#include<stdio.h>
int main(){
	
	int day,month,year;
	printf("Nhap ngay :");
	scanf("%d",&day);
	printf("Nhap thang :");
	scanf("%d",&month);
	printf("Nhap nam :");
	scanf("%d",&year);
	if(0<day && day<32 && 0<month && month<13){
		printf("Ngay %d, thang %d, nam %d",day,month,year);
	}else{
		printf("Khong hop le. Vui long thu lai");
	} 
	
	return 0;
}
