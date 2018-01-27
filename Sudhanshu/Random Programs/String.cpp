#include <iostream>
#include<cstdio>
#include<cstring>

int main ()
{
	char A[10];
	scanf("%s",&A);
	int l=strlen(A);
	int Ctr=0;
	while(A[Ctr]!='\0')
        Ctr++;
	int s=sizeof(A);
	printf("%d %d %d\n",l ,s, Ctr );
	return 0;
}
