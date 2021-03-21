#include<bits/stdc++.h>

using namespace std;


//vector function syntax
//send actuall storage of vector
void printVector(vector<pair<int,int> > &v) // more efficient for ref
{
    cout<<"Size = "<<v.size()<<endl;
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }

    cout<<endl;
}


int main()
{

    std::vector<pair<int, int> > v = {{1,2}, {3,4}, {5,6}};

    printVector(v);

    // how to take input in vector of pair
    std::vector<pair<int, int> > v2;
    int n;
    cin>>n;
    int x,y;

    for(int i=0; i<n; i++)
    {
        cin>>x>>y;
        //v2.push_back({x,y});
        v2.push_back(make_pair(x,y));
    }
    cout<<endl;
    printVector(v2);



    return 0;

}
