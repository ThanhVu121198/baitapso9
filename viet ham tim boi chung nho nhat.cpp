// tim boi chung nho nhat 
#include<stdio.h>
int bcnn(int a, int b){
	int min,i,ucln,bcnn;
	if(a<b){
		min=a;
	}else{
		min=b;
	}
	for(i=1;i<min;i++){
		if(a%i==0&&b%i==0){
			ucln=i;
		}
	}
	int j;
	j=(a*b)/ucln;
	bcnn=j;
	return bcnn;
}
int main(){
	int a,b;
	printf("Nhap a: ");
	scanf("%d",&a);
	printf("Nhap b: ");
	scanf("%d",&b);
	printf("Boi chung nho nhat la:%d",bcnn(a,b));
}
