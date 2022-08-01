#include<iostream>
#include<conio.h>
using namespace std;
void minmax(int arr[],int n)
{
    int min,max;
    min=max=arr[0];
	for(int i=1;i<n;i++)
	{
		if(arr[i]>max)
		    max=arr[i];
		    
		if(arr[i]<min)
		    min=arr[i];
		    
		
	}
	cout<<"Minimum Element of array is:"<<min;
	cout<<"\nMaximum Element of array is:"<<max;
}

int main()
{
	int N;
	cin>>N;
	int arr[N];
	for(int i=0;i<N;i++)
			cin>>arr[i];
	minmax(arr,N);
	getch();
	return 0;
}
