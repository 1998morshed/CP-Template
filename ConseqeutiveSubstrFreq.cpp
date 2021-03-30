#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void Print_Freq(string s, int k)
{
    map<string, int> mp;
    for(int i=0;i<s.size()-k; i++)
    {
        string a = s.substr(i,k);
        mp[a]++;
    }

    for(auto i:mp)
    {
        if(i.second>1) cout<<i.first<<" --> "<<i.second<<endl;
    }
}

int main()
{

	string s;
	cin>>s;
	int k;
	cin>>k;

	Print_Freq(s, k);

	return 0;
}
