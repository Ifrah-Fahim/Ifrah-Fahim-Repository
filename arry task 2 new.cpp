#include<iostream>
using namespace std;
int main()
{
	int rows, cols;
	int sum=0;
	cout<<"Enter the number of rows:";
	cin>>rows;
	cout<<"Enter mumber of cols";
	cin>>cols;
	int arry[rows][cols];
	for (int i=0; i<rows; i++) {
		for (int j=0; j<cols; j++) {
			cout<<"Elements["<<i<<"]["<<j<<"]:";
			cin>>arry[i][j];
			
		}
	}
	cout<<"\nThe 2D arry is:\n";
	for (int i=0;i<rows; i++){
		for (int j=0; j<cols; j++) {
			cout<<arry[i][j]<<" ";
			sum=sum+arry[i][j];
		}
		cout<<"sum of arry is"<<sum;
	}
	double average;
	average=sum/2;
	cout<<"average of sum is"<<average;
	
	cout<<endl;
	
	return 0;
}