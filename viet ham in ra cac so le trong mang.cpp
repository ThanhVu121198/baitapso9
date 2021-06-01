// viet ham in ra cac so le trong mang
#include<stdio.h>
int incacsole(int a[],int n){
	int i;
	for(i=0;i<n;i++){
		if(a[i]%2!=0){
		 printf("%5d",a[i]);
		}
		}
	}
int main(){
	int n,i;
	int a[1000];
	printf("Nhap so luong phan tu mang: ");
	scanf("%d",&n);
	printf("Nhap gia tri cua mang:\n");
	for(i=0;i<n;i++){
		printf("a[%d]: ",i);
		scanf("%d",&a[i]);
	}
			printf("mang co so le la: ");
			incacsole(a,n);

	}
