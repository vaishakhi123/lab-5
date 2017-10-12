#include<iostream>
using namespace std;

int largest(int arr[],int n);
int smallest(int arr[],int n);



int main()
{ int n1,n2,n,i,j,arr1[100],arr2[100],arr[200];;
  cout<<"enter the size of first arrays\n";
  cin>>n1;
  cout<<"enter the elements for  the array\n";
  for(i=0;i<n1;i++)
  {
        cin>>arr1[i];
  }
  cout<<"enter the size of second array\n";
  cin>>n2;
  cout<<"enter the elments for the second array\n";
  for(i=0;i<n2;i++)
  {
       cin>>arr2[i];
  }
  n=n1+n2;
  
  for(i=0;i<n1;i++)
  {
     arr[i]=arr1[i];
  }
  for(i=0,j=n1;i<n2&&j<n;i++,j++)
  {
     arr[j]=arr2[i];
  }
 
  cout<<"the merged array is\n";
  for(i=0;i<n;i++)
    cout<<arr[i]<<"\n";
   cout<<"the largest number in merged array is "<<largest(arr,n)<<endl;
   cout<<"the smallest element in merged aray is "<<smallest(arr,n)<<endl;
   return 0;
}

int largest(int arr[],int n)
{
     int i,max=arr[0];
     for(i=0;i<n;i++)
     {
          if(arr[0]<arr[i])
            max=arr[i];
     }
     return max;
}
int smallest(int arr[],int n)
{
     int i,min=arr[0];
     for(i=0;i<n;i++)
     {
          if(arr[i]<arr[0])
            min=arr[i];
     }
    return min;
}

