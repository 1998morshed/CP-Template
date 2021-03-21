#include<iostream>

using namespace std;
const int N=10e4+5;
int cnt[N];



int main(){

   pair<int, string>p;

   p = make_pair(1, "morshed");
   cout<<p.first<<" "<<p.second<<endl<<endl;

   int a1[3]={3,4,5};
   int a2[3]={7,8,9};

   pair<int, int> p_array[3];
   for(int i=0;i<3;i++)
   {
    p_array[i].first = a1[i];
    p_array[i].second = a2[i];
   }

    for(int i=0;i<3;i++)
   {
    cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
   }

  
    return 0;

}
