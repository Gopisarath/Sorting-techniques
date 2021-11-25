#include<stdio.h>
void main()
{
	int n,i,j,key;
	printf("Enter size of an array: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements of an array: ");
	for(i=0;i<n;i++)
	{	
		scanf("%d",&a[i]);
	}
	for(i=1;i<n;i++)
	{
		key = a[i];
		j=i-1;
		while(j>=0 && a[j]>key)
		{
			a[j+1] = a[i];
			j = j-1;
		}
		a[j+1] = key;
	}
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}
