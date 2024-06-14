#include<iostream>
using namespace std;
int main()
{
	int arr[]={10,2,-2,-20,10};
	int k=-20;
	int n =sizeof(arr)/sizeof(arr[0]);
	int res=0;
	for(int i=0; i<n; i++)
	{
		int sum=0;
		for(int j=i; j<n; j++)
		{
			sum +=arr[j];
			if(sum==k)
			res++;
		}
	}
	cout<<(res)<<endl;
}
