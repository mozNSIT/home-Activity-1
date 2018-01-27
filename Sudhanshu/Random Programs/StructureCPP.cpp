#include <stdio.h>
struct AB{
	int B;
	int C;
}X;


AB ADD(AB X){
	AB C;
	C.B=++X.B;
	C.C=++X.C;
	return C;
}

int main()
{
	X.B=5;
	X.C=5;
	AB C=ADD(X);
	printf("%d %d\n", C.B, C.C );
	return 0;
}

