#include <iostream>
using namespace std;

int main()
{
	int a[100],n,min,temp,i,j,key;
	cout<<"enter the num:";
	cin>>n;
	for(i=0;i<n;i++)
		cin>>a[i];
		cout<<"enter the key";
		cin>>key;
		for(i=0;i<key;i++)
		{
			min=i;
			for(j=i+1;j<n;j++)
			{
				if(a[j]<a[min])
					min=j;
			}
			temp=a[i];
			a[i]=a[min];
			a[min]=temp;
		}
		cout<<a[key-1]<<"\n";
		return 0;
}

