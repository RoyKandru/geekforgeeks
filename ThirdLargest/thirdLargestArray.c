#include<stdio.h>

void thirdLargest(int a[],int n)
{
	printf("hello\n");
}

int main(){
	int number,n,i;
	scanf("%d\n",&n);
	int a[n-1];

	for(i=0;i<n;i++)
	{
		scanf("%d\n",&a[i] );
	}
	printf("%d\n",a[n-1]);
	thirdLargest(a,n);	
	number--;		
	return 0;
}
