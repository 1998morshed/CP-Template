#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ar[n+1];

    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    int curr=0, best=0;
    int sum =0;
    for(int i=0;i<n;i++)
    {

        if(sum+ar[i]<ar[i]) sum = ar[i];
        else sum = sum + ar[i];

        if(sum>best) best = sum;
    }

    cout<<best<<endl;


    return 0;
}
