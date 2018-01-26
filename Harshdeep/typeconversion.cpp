#include <iostream>
using namespace std;

class type2;

class type1{	
	int data;
public:
	type1(int no){
		data=no;
	}
	operator int(){
		return data;
	}
};

class type2
{	
	int roll;
public:
	int getRoll(){return roll;}
	
};

 int a=1;
 int b=0;

 void fibonacci(int n){
	
	if(n==0)
		return;
	else
		{	cout<<a<<"  ";
			int temp=a;
			a=a+b;
			b=temp;
		fibonacci(n-1);
	}
	


}
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	fibonacci(n);
	type1 hello(5);
	int k=hello;
	// cout<<k;
	return 0;
}