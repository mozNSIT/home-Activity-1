#include <iostream>
#define pi 3.14

using namespace std;

class Shape{
	float area;
public:
	Shape(){
		area=0;
	}

	float Area(float radius){
		area=pi*radius*radius;
		return area;
	}

	float Area(float base, float height){
		area=0.5*base*height;
		return area;
	}
};

int main(int argc, char const *argv[])
{
	Shape triangle,circle;
	cout<<"Area of triangle is: "<<triangle.Area(2,3)<<endl;
	cout<<"Area of circle is: "<<circle.Area(12);
	return 0;
}