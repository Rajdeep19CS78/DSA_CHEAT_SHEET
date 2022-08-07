#include<iostream>
using namespace std;
bool pairInSortedRotated(int arr[], int N,int sum)
{
	int i;
	for(i=0;i<N;i++)
	{
		if(arr[i]>arr[i+1])
		      break;
	}
	//l is index of smalllest element
	int l=(i+1)%N;
	//r is index of highest element
	int r=i;
	while(l!=r)
	{
		if(arr[l]+arr[r]==sum)
		     return true;
		     
		else if(arr[l]+arr[r]<sum)
		     l=(l+1)%N;
	    else
	        r=(N+r-1)%N;
	}
	return false;
}
int main()
{
	int N;
	cin>>N;
	int arr[N];
	int sum;
	cout<<"\nEnter array elements: ";
	for(int i=0;i<N;i++)
	{
		cin>>arr[i];
	}
	cout<<"\nEnter the sum whose pair in array is to be find:";
	cin>>sum;
	if(pairInSortedRotated(arr, N,sum))
	{
		cout<<"true";
	}
	else
	{
		cout<<"false";
		return 0;
	}
}
