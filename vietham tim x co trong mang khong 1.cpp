#include <stdio.h>
int timkiem(int a[],int n,int x)
{
  int i,count=0;
  for( i=0;i<n;i++){
    if(a[i]==x){
      count++;
  }
  }return count;
}
int main()
{
  int x,n,i;
	int a[1000];
	printf("Nhap so phan tu mang: ");
	scanf("%d",&n);
	printf("Nhap gia tri cua mang\n");
	for(i=0;i<n;i++){
		printf("a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	printf("Nhap x: ");
	scanf("%d",&x);
   if(timkiem(a,n,x)==0){
   	printf("%d ko nam trong mang\n",x);
   }else{
   	printf("%d co nam trong mang\n",x);
   }
  return 0;
} 
