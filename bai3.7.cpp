#include<stdio.h>
int TimUCLN(int a, int b)
{
	for(int i=a;i>=1; i--)
		if(a%i==0 && b%i==0)
		return i;
}

int main()
{
	int a,b;
	printf("nhap so nguyen thu nhat: ");
	scanf("%d", &a);
	printf("nhap so nguyen thu hai: ");
	scanf("%d",&b);
	int UCLN= TimUCLN(a,b);
	printf("Uoc chung lon nhat cua hai so %d va %d la %d",a,b,UCLN);
	return 0;
}
