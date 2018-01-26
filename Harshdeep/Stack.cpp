#include <iostream>
#include <vector>
#include<iomanip>

using namespace std;

class Stack
{
	int arr[20],size;
public:
	Stack(){
		size=0;
	}

	Stack(int entry){
		arr[0]=entry;
		size=1;
	}

	void push(int n){
		arr[size]=n;
		size++;
	}

	void pop(){
		arr[size-1]=NULL;
		size--;
	}

	void display(){
		
		cout<<setw(2)<<"->"<<arr[0]<<endl;
		for (int i = 1; i < size; i++)
		{
			cout<<setw(3)<<arr[i]<<endl;
		}
	}
	
};

int main(int argc, char const *argv[])
{
	Stack stk=Stack(9);
	stk.push(8);
	stk.push(3);
	stk.push(1);
	stk.pop();
	stk.display();

	//stk.display();
	return 0;
}