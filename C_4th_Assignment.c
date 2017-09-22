#include <stdio.h>
int main()
{
	int r,c,a[100][100],i,j,count=0;
	printf("Enter rows and columns of matrix:");
	scanf("%d %d",&r,&c);
 
	printf("Enter element of matrix:\n");
	for(i=0; i<r; ++i){
		for(j=0; j<c; ++j){
			printf("Enter element a%d%d:",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	printf("Entered Matrix:");
	for(i=0; i<r; ++i){
		for(j=0; j<c; ++j){
			if(count++%c==0)
				puts("");
			else
				printf("");
			printf(" %d ",a[i][j]);
		}
	}
	puts("");
 
	printf("Transpose of Matrix:");
	for(j=0; j<c; ++j){
		for(i=0; i<r; ++i){
			if(count++%r==0)
				puts("");
			else
				printf("");
			printf(" %d ",a[i][j]);
		}
	}
	puts("");
	return 0;
}