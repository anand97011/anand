#include<stdio.h>
void max();
int main()
{
	max();
	printf("end of main\n");
	return 1;
}
void max()
{
	int a,b;
	printf("enter any 2 no:");
	scanf("%d%d",&a,&b);
	if(a>b)
	printf("max=%d\n",a);
	else
	printf("max=%d\n",b);
}
