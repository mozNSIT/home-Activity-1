#include <iostream>
using namespace std;
int main(){
	try{
		int A, B;
		cout<<"Enter the value of A and B (Don't enter A>=B): ";
		cin>>A>>B;
		if(A>=B)
		{
			throw 85;
		}
	}catch(int ERR){
		cout<<"Please follow the damn instructions!"<<" "<<ERR;
	}

	return 0;
}
 