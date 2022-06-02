#include <stdio.h>
#define size 100
int main(){
	int a[3][3]={1,2,3,4,5,6,7,8,9}, i, j, s1=0, s2=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i==j)
			s1+=a[i][j];
			else if(i+j==2)
			s2+=a[i][j];
		} 
	}
	printf("%d\n",s1);
	printf("%d",s2);
	return 0;
}

