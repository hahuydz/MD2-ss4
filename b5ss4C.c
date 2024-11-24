#include<stdio.h>
int main(){
	
	 int a,b,c;
	 printf("Nhap 3 so nguyen :");
	 scanf("%d %d %d",&a,&b,&c);
	 if((a<c && c<b) || (b<c && c<a)){
	 	printf("So %d nam trong khoang %d va %d",c,a,b);
	 }else{
	 	printf("So %d khong nam trong khoang %d va %d ",c,a,b);
	 }
	 
	 return 0;
}
