#include<iostream>

using namespace std;

int largest(int arr[],int n);
int smallest(int arr[],int n);
float mean(int arr[],int n);
int median(int arr[],int n);
int highest_frequency(int arr[],int n);
int main()
{
  int n,arr[n],i;
  cout<<"enter number of elements in array\n";
  cin>>n;
  cout<<"enter elements of array\n";
  for(i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  cout<<"the largest element is "<<largest(arr,n)<<endl;
  cout<<"the smallest element is "<< smallest(arr,n)<<endl;
  cout<<"the mean is "<<mean(arr,n)<<endl;
  cout<<"the median is "<<median(arr,n)<<endl;
  cout<<"the highents frequency elemnt is "<<highest_frequency(arr,n)<<endl;

}
int largest(int arr[],int n)
{
  int max=arr[0];
  for(int i=0;i<n;i++)
  {
    if(arr[i]>max)
       max=arr[i];
  }
  return max;

}

int smallest(int arr[],int n)
{
  int min=arr[0];
  for(int i=0;i<n;i++)
  {
    if(arr[i]<min)
     min=arr[i];
  }
   return min;

}

float mean(int arr[],int n)

{
  int s=0;float  m=0.0;
  for(int i=0;i<n;i++)

  {

    s=s+arr[i];

  }

  m=s/n;
  return m;

}

int median(int arr[],int n)

{
  int i,j,l;
  for(i=0;i<n;i++)
  {
     for(j=i+1;j<n;j++)
     {
         if(arr[j]<arr[i])
        {
 	    	l=arr[i];
		    arr[i]=arr[j];	
		    arr[j]=l;
	    }
     }
  }
  
  if(n/2!=0)
  {
    return arr[(n-1)/2];
  }

  else
 {
  int me=0;
  me=(arr[n/2]+arr[n/2-1])/2;
  return me;
 }

  return 0;

}

int highest_frequency(int arr[],int n)

{

  int c, max=0,no;

  for(int i=0;i<n;i++)

  {
    c=0;
    for(int j=i+1;j<n;j++)

    {
     
      if(arr[i]==arr[j])

      {

        c=c+1;

      }

    }

    if(c>max)

    {

      no=arr[i];

      max=c;

      

    } 

  }

  

  return no;

}







  























 
