#include <stdio.h>

int main (){
	int i,j;
	
	for(i=2;i<=4;i++)
	{
		for(j=1;j<=10;j++)
			{
		printf("%d * %d = %d",i,j,i*j);
		printf("\n");
			}
			printf("\n");
		}
	return 0;
}
