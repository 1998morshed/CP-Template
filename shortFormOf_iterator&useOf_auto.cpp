#include<bits/stdc++.h>
using namespace std;



int main(){
    std::vector<int> v ={1, 2, 3, 4};
   
   //range base for loop & it's actually copy of Vector
    for(int i:v)
        cout<<i<<" ";

    cout<<endl;

    //reference
    for(int &i:v)
        i++;

    //increas each value
    for(int i:v)
        cout<<i<<" ";

    cout<<endl;


    //pair
    std::vector<pair<int, int>> v_p={{10,20},{30,40}};
    for(pair<int,int> &value: v_p)
        cout<<value.first<<" "<<value.second<<endl;

    //pair using auto
    cout<<endl<<"pair using auto:"<<endl;
    for(auto &value: v_p)
        cout<<value.first<<" "<<value.second<<endl;


    //auto
    cout<<endl<<"It is vector using auto:"<<endl;
    for(auto it=v.begin(); it!=v.end(); ++it)
        cout<<(*it)<<" ";
    cout<<endl;
    

    return 0;
}
