#include<iostream>
using namespace std;
int main()
{
	int rows;
	cout<<"Enter the rows"<<endl;
	cin>>rows;
	for (int i=1;i<rows;i++)
	{
		for(int j=1;j<rows-i;j++)
		{
	
			cout<<" ";
		}
			for(int l=1; l<i+i; l++) 
			{
				cout<<"*";
			}
		
		cout<<endl;
	} 
	
return 0;	
}