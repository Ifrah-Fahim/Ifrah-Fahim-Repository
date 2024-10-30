#include<iostream>
using namespace std;
int main()
{
	// 5! 5*4*3*2*1= 120
	int n;
	long factorial = 1.0;
	cout<<"enter a factorial";
	cin>>n;
	if (n < 0)
	cout<<"error! factorail of a negative number doesn't exist";
	
	else {
	int i=1;
	do {
		cout<<"i"<<endl;
		f=factorial*i;
		cout<<f;
		i++;
	}
	while(i<=n);
	cout<<"factorial of"<<n<<"="<<factorial;
	
	}
	return 0;
}