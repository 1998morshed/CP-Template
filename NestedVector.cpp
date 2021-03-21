#include<bits/stdc++.h>

using namespace std;


//vector function syntax
//send actuall storage of vector
void printVector(vector<int> &v) // more efficient for ref
{
    cout<<"Size = "<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
   {
        cout<<v[i]<<" ";
   }

   cout<<endl;
}


int main(){
    int N;
    cin>>N;

    std::vector<int> v[N];
    for(int i=0;i<N;i++)
    {
        int n;
        cin>>n;
        for(int j=0;j<n;j++)
        {
            int x;
            cin>>x;
            v[i].push_back(x);
        }
    }
    for(int i=0;i<N;i++) 
        printVector(v[i]);
    return 0;

}
