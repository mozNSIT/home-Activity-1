#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, char const *argv[])
{
	char string[27];
	cin>>string;
	int size;

	for(size=0;string[size]!='\0';size++);

	for(int i=0;i<size;i++){
		bool chk=true;
		for (int j = 1; j < size-i ; ++j)
		{
			
			if(string[j]<string[j-1]){
				char temp=string[j-1];
				string[j-1]=string[j];
				string[j]=temp;
				chk=false;
			}
		}
		if(chk==true)
			break;
	}

	puts(string);
	return 0;
} 