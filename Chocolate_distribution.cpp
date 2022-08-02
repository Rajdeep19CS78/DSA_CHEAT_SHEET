//Chocolate Distribution problem
#include<bits/stdc++.h>
using namespace std;
int findMinDiff(int arr[],int n,int m)
{
	int min_diff=INT_MAX,diff;
	if(n==0 || m==0)
	  return 0;
	if(n<m)
	   return -1;
	sort(arr,arr+n);
	for(int i=0;i+m-1<n;i++)
	{
		diff=arr[i+m-1]-arr[i];
		if(diff<min_diff)
			min_diff=diff;	    
	}
	return min_diff;
}

int main()
{
	int n,m,diff;
	cin>>n>>m;
	int arr[n];
	cout<<"\n Enter array of number of chocolate packet:";
	for(int i=0;i<n;i++)
	   cin>>arr[i];
	diff=findMinDiff(arr,n,m);
	cout<<"\n Minimum difference: "<<diff;
	return 0;
}
