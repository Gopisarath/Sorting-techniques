#include<stdio.h>
void main()
{
	int n,i,j,temp;
	printf("Enter size of an array: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter elements of an array: ");
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}
