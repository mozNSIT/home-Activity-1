#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int hour=0,minute=0,second=0;
	while(true){
		for (long i = 0; i <= 1000000000/3; ++i);
		second++;
	if(second==60)
	{
		minute++;
		second=0;
	}
	if (minute==60)
	{
		minute=0;
		hour++;
		/* code */
	}

	system("clear");
	cout<<hour<<":"<<minute<<":"<<second<<endl;

	}
	return 0;
}