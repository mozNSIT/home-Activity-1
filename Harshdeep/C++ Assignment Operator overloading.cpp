#include <iostream>

using namespace std;

class Rational
{
private:
	int numerator,denominator;
public:
	Rational(int num=0, int den=0){
		numerator=num;
		denominator=den;
	}

	Rational operator +(Rational obj){
		Rational final;
		final.numerator=(numerator*obj.denominator)+(obj.numerator*denominator);
		final.denominator=denominator*obj.denominator;
		return final;
	}

	Rational operator -(Rational obj){
		Rational final;
		final.numerator=(numerator*obj.denominator)-(obj.numerator*denominator);
		final.denominator=denominator*obj.denominator;
		return final;
	}

	Rational operator *(Rational obj){
		Rational final;
		final.numerator=numerator*obj.numerator;
		final.denominator=denominator*obj.denominator;
		return final;
	}

	Rational operator /(Rational obj){
		Rational final;
		final.numerator=numerator*obj.denominator;
		final.denominator=denominator*obj.numerator;
		return final;
	}

	friend ostream & operator <<(ostream &out,Rational d);
	// void print(){
	// 	cout<<numerator<<"/"<<denominator<<endl;
	// } 
	
};

	ostream & operator <<(ostream &out,Rational d){
		out<<d.numerator<<"/"<<d.denominator<<endl;
		return out;
	}

int main(int argc, char const *argv[])
{
	/* code */
	Rational rt=Rational(3,2);
	Rational n=Rational(4,5);
	Rational th=rt+n;
	cout<<th;
	// th=rt-n;
	// th.print();
	// th=rt*n;
	// th.print();
	// th=rt/n;
	// %th;



	return 0;
}