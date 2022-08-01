#include<iostream>
#include<conio.h>
using namespace std;
void reverseArray(int arr[],int N)
{
	int start=0;
	int end=N-1;
	while(start<end)
	{
		int temp=arr[start];
		arr[start]=arr[end];
		arr[end]=temp;
		start++;
		end--;
	}
}

int main()
{
	int N;
	cin>>N;
	int arr[N];
	cout<<"\nEnter the elements of an array:";
	for(int i=0;i<N;i++)
	     cin>>arr[i];
	reverseArray(arr,N);
	cout<<"\nReversed Array is:";
	for(int i=0;i<N;i++)
	{
		cout<<arr[i]<<" ";
	}
	getch();
	return 0;
}
