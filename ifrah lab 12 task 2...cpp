#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	string str1 = "Hello,";
	string str2 = "World!";
	string result = str1.append(str2);
	
	cout<<result;
	return 0;
}