#include<bits/stdc++.h>

using namespace std;

//vector function syntax
//send a copy of vector
int printVector(vector<int> v)
{
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}


//vector function syntax
//send actuall storage of vector
int printVector2(vector<int> &v) // more efficient for ref
{
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    v.push_back(25);
    cout<<endl;
}


int main()
{

    //normal vector implementation
    vector<int> v;
    v.push_back(10);
    for(int i=1; i<6; i++)
    {
        int x;
        cin>>x;
        v.push_back(x); //O(1)
    }

    //vector function
    printVector(v);

    v.pop_back(); //time comp- O(1)

    printVector(v);



    //printVector();


    //declare 10 size vector with 3 value in all space
    vector<int> v2(10, 3);
    for(int i=0; i<v2.size(); i++) cout<<v2[i]<<" ";
    cout<<endl;


    //vetor Copy
    std::vector<int> v3 = v; // O(n)
    //for actual vector 
    //std::vector<int> &v3 = v;
    

    printVector(v3);
    v3.push_back(20);
    printVector(v3);

    printVector2(v3);
    printVector2(v3); //add 25


    return 0;

}
