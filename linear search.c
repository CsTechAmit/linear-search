#include<stdio.h>
int main()
{
	int a[50],n,i,ele,search=0;
	printf("enter the size of the array\n");
	scanf("%d",&n);
	printf("enter the element of the array\n");
	for(i=1;i<n+1;i++)
	scanf("%d",&a[i]);
	printf("enter the search element");
	scanf("%d",&ele);
	for(i=1;i<n+1;i++)
	{
		if(ele==a[i])
		{
			search=1;
			break;
		}
	}
	if(search==1)
	{
		printf("element found at index %d",i);
	}
	else
	{
		printf("element not found at array\n");
	}
	return 0;
}