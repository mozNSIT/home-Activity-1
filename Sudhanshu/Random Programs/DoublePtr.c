#include <stdio.h>
int main(){
	int A;
	int *p1;
	int **p2;
	int ***p3;
	A=25;
	p1=&A;
	p2=&p1;
	p3=&p2;
	printf("%d %d %d %d\n", A, *p1, **p2, ***p3 );
	printf("%d %d %d\n", p1, *p2, *p3);
	return 0;
}
