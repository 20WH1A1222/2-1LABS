#include <stdio.h>
int rlinear (int a[],int n,int key);
int main()
{
	int n,i,key,pos;
	printf("enter size of array:");
        scanf("%d",&n);
        int a[n];
        printf("enter elements  of array:");
        for (i=0;i<n;i++)
	{
	     scanf("%d",&a[i]);
	}
        printf("enter the element to be searched");
        scanf("%d",&key);
        pos = rlinear(a,n,key);
        if (pos	>= 0)
        {
           printf("Element found at position %d",pos);
	}
	else
	{
           printf("Element not found");
        }
}
int rlinear(int a[],int n,int key)
{
	int rec;
	if(n >= 0)
	{
		if(a[n-1] == key)
		{ 
			return n;
		}
		else
		{
			return rlinear(a,n-1,key);
		}
	}
	return -1;
}
