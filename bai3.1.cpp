#include<stdio.h>
int KiemTraSoHoanHao( int n)
{
	int TongCacUoc=0;
	for(int i=1; i<n;i++)
		if(n%i==0)
			TongCacUoc=TongCacUoc+i;
	if(TongCacUoc==n)
	return 1;
	else
	return 0;
}
 
 int main()
 {
 	int n;
 	printf("nhap vao mot so nguyen: ");
 	scanf("%d",&n);
 	int Kq= KiemTraSoHoanHao(n);
 	if(Kq==1)
 		printf("%d la so hoan hao",n);
 	else
 		printf("\n %d khong phai la so hoan hao",n);
 	return 0;
	 
 }
