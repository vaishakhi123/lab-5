#include <iostream>
using namespace std;

int sum(int no[],int l);

int main() {
	int n,arr[n],i,s=0;
	cout<<"enter the number of elemnts in an array\n";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	s=sum(arr,n);
	cout<<"the sum of the elements in an array is "<<s;
	return 0;
}
	
int sum(int no[],int k)
{
	int j,sum=0;
	for(j=0;j<k;j++)
	{
		sum=sum+no[j];
	}
	return sum;
}
	
