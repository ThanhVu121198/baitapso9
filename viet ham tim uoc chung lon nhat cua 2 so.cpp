//tim uoc chung lon nhat cua 2 so
#include<stdio.h>
int ucln(int a, int b){
	int min,i,ucln;
	if(a<b){
		min=a;
	}else{
		min=b;
	}
	for(i=1;i<=min;i++){
		if(a%i==0&&b%i==0){
			ucln=i;
		}
	}return ucln;
}
int main(){
	int a,b;
	printf("Nhap a: ");
	scanf("%d",&a);
	printf("Nhap b: ");
	scanf("%d",&b);
	printf("Uoc chung lon nhat la:%d",ucln(a,b));
}
