
#include <iostream>
using namespace std;
int main()
{
    int n,a[100];
    cin>>n;
    int max=-567799;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>max)
        max=a[i];
     }
    cout<<max;
    return 0;
}
