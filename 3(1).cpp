#include<iostream>
using namespace std;
int a[100];
int partition(int a[],int low,int high)
{
	int i,j,pivot;
	i=low+1;
	j=high;
	pivot=a[low];
	while(1)
	{
		while(a[i]<=pivot && i<=high)
				i++;
			while(a[j]>pivot && j>=low)
				j--;
			if(i<j)
			{
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
			else
			{
				a[low]=a[j];
				a[j]=pivot;
				return j;
			}
	}
}

void quicksort(int a[],int low,int high)
{
	int pivot;
	if(low<high)
	{
		pivot=partition(a,low,high);
		quicksort(a,low,pivot-1);
		quicksort(a,pivot+1,high);
	}
}
int main()
{
	int n,i;
	cout<<"enter the size:";
	cin>>n;
	cout<<"enter the num:";
	for(i=0;i<n;i++)
		cin>>a[i];
		cout<<"sortetd elements:";
		quicksort(a,0,n);
		for(i=1;i<=n;i++)
			cout<<a[i]<<"\n";
			return 0;
}
