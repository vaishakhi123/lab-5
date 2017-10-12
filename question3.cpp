#include<iostream>
using namespace std;

int ksmall(int arr[],int n,int k);
int klarge(int arr[],int n,int k);
int sort(int arr[],int n);

int main()
{
    int n,i,arr[n],k;
    cout<<"enter the number of elemnts in an array\n";
    cin>>n;
    cout<<"enter the kth term\n";
    cin>>k;
    cout<<"enter the elements of array\n";
    for(i=0;i<n;i++)
    {
         cin>>arr[i];
    }
    
    
    cout<<"kth smallest number is "<<ksmall(arr,n,k)<<"\n";
    cout<<"kth largest number is "<<klarge(arr,n,k);
   return 0;
}

int ksmall(int arr[],int n,int k)
{
    int i,j,l;
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
              if(arr[j]<arr[i])
              {
                     l=arr[i];
                     arr[i]=arr[j];
                     arr[j]=l;
               }
        }
     } 
    return arr[k-1];
}

int klarge(int arr[],int n,int k)
{   
	int i,j,l;
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
              if(arr[j]<arr[i])
              {
                     l=arr[i];
                     arr[i]=arr[j];
                     arr[j]=l;
               }
        }
     } 
	
    return arr[n-k];
}

