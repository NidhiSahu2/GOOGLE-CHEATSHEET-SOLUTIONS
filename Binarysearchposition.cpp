#include<iostream>
using namespace std;
int main()
{
	int arr []= {1,1,2,3,3,3,5,5,6,7,7,8};
	int n= sizeof(arr)/sizeof(arr[0]);
	int target;
	cout<<"Enter target"<<endl;
	cin>>target;
	int lo=0;
	int hi = n-1;
	int idx = -1;
	while(lo<=hi)
	{
		int mid = (lo+hi)/2;
		if(arr[mid]==target){
		
		idx=mid;
		break;
	}
	else if (arr[mid]>target)hi = mid-1;
	else lo = mid+1;
	}
	cout<<idx;
	
	
	
}
