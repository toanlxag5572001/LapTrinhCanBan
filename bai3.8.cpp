#include<stdio.h>
int TimBCNN(int a, int b)
{
	for(int i=1;i<=1000;i++)
		if(i%a==0 && i%b==0)
		return i;
}
int main()
{
	int a,b;
	printf("nhap so nguyen thu nhat: ");
	scanf("%d", &a);
	printf("nhap so nguyen thu hai: ");
	scanf("%d",&b);
	int BCNN=TimBCNN(a,b);
	printf("Boi chung nho nhat cua hai so %d va %d la %d ", a,b,BCNN);
	return 0;
}
