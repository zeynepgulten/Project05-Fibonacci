#include <stdio.h>
#include <stdlib.h>

int main() {
	int a,b,c,i,n;
	a=1;
	b=1;
	printf("basamak sayisini girin:");
	scanf("%d",&n);
	printf("%d\n",a);
	printf("%d\n",b);
	
	for(i=4;i<=10;i++)
	{
		c=a+b;
		printf("%d \n",c);
		a=b;
		b=c;
	}
	
	return 0;
}

