#include<iostream>
using namespace std;

int largestnumber(int arr[],int n)
{


int max=arr[0];
for(int i=1 ; i<n; i++)
if(arr[i]>max)
max=arr[i];
return max;
}

int main()
{
	int arr []= {1,2,3,4,67};
	int N=sizeof(arr)/sizeof(arr[0]);
	cout<<"LARGEST NUMBER OF ARRAY"<<largestnumber(arr,N);
	return 0;
	
}

