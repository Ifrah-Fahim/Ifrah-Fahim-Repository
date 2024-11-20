#include<iostream>
using namespace std;
void passByValue(int num1)
{
	num1=num1-10;
	cout<<"Inside Function (Pass By Value):"<<num1<<endl;
}
void mult(int num2)
{
	num2=num2*10;
	cout<<"Inside Function (mult):"<<num2<<endl;
}
int main() {
	int number1 = 5;
	cout<<"Before Function Call:"<<number1<<endl;
	passByValue(number1);
	cout<<"After Function Call:"<<number1<<endl;
	cout<<"Before Function Call:"<<number2<<endl;
	mult(number2);
	cout<<"After Function Call:"<<number2<<endl;
	return 0;
}