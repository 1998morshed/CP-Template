#include<bits/stdc++.h>
using namespace std;
const int N=100005;

std::vector<int> graph[N];
std::vector<int> topological;

bool visited[N];

void dfs(int source)
{
    visited[source] = true;
    for(int i=0; i<graph[source].size();i++)
    {
        int next = graph[source][i];
        if(visited[next]==false)
            dfs(next);
    }
    topological.push_back(source);
}

int main(){
    
    int nodes, edges;
    cin>>nodes>>edges;

    for(int i=0;i<edges; i++)
    {
        int u,v;
        cin>>u>>v;
        graph[u].push_back(v);
        
    }

    for(int i=1; i<=nodes; i++)
    {
        if(visited[i]==false)
            dfs(i);
    }

    reverse(topological.begin(), topological.end());
    cout<<"Topological Order: "<<endl;
    for(int i=0;i<topological.size();i++)
        cout<<topological[i]<<" ";

    cout<<endl;


    return 0;
}
