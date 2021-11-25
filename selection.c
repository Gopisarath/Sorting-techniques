#include<stdio.h>
void main()
{
	int n,i,j,min,temp;
	int a[n];
	printf("ENTER SIZE OF AN ARRAY: ");
	scanf("%d",&n);
	printf("Enter elements of an array: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		min = i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[i])
				min = j;
		}
		temp = a[min];
		a[min] = a[i];
		a[i] = temp;
	}
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}
