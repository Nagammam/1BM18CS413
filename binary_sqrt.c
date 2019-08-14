#include <stdio.h>

int binary_sqrt(int n);
int main()
{
	int n,res;
	printf("enter the no\n");
	scanf("%d",&n);
	res=binary_sqrt(n);
	printf("the sqrt of the no is:%d\n",res);
}
int binary_sqrt(int n){
	int result;
	int beg=0;
	int end=n;
	while(beg<=end)
	{
		int mid=(beg+end)/2;
		if(mid*mid==n)
		{
			return mid;
		}
		if(mid*mid<n){
			beg=mid+1;
			result=mid;
		}
		else
			end=mid-1;
		}
		return result;
		}
