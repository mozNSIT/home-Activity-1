#include <iostream>
using namespace std;
int main()
{
	int A[3][3], B[3][3], C[3][3];
	int r, c;
	cout<<"ENTER NUMBER OF ROW AND COLUMNS\n";
	cin>>r>>c;
	cout<<"A\n";
	for(int i=0; i<r; ++i)
		for(int j=0; j<c; ++j)
			cin>>A[i][j];
    cout<<"B\n";
	for(int i=0; i<r; ++i)
		for(int j=0; j<c; ++j)
			cin>>B[i][j];
	int ip=0;
	for(int i=0; i<r; ++i)
		for(int j=0; j<c; ++j)
		{
			C[i][j]=0;
			for(int ip=0; ip<r; ++ip)
				C[i][j]=C[i][j]+A[i][ip]*B[ip][j];
		}
	for(int i=0; i<r; ++i)
	{	for (int j = 0; j < c; ++j)
		{
			cout<<C[i][j]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
