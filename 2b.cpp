#include <iostream>
using namespace std;

int main()
{
	int a[100],n,i,j,temp,key;
	cout<<"enter the size:";
	cin>>n;
	cout<<"enter the elements:";
	for(i=0;i<n;i++)
		cin>>a[i];
		cout<<"enter the key:";
		cin>>key;
		for(i=0;i<key-1;i++)
		{
			for(j=0;j<n-1-i;j++)
			{
				if(a[j+1]<a[j])
				{
					temp=a[j+1];
					a[j+1]=a[j];
					a[j]=temp;
				}
			}
		}
		for(i=n-1;i>key;i--)
			cout<<a[i]<<"\t";
			return 0;
}
