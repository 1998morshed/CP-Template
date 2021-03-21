#include<bits/stdc++.h>
using namespace std;

std::vector<int> graph[5];

bool visited[5];

void dfs(int source)
{
    visited[source] = true;
    for(int i=0;i<graph[source].size();i++)
    {
        int next = graph[source][i];
        if(visited[next]==false)
            dfs(next);
    }
}

int main(){
    
    int nodes, edges;
    cin>>nodes>>edges;

    for(int i=0;i<edges; i++)
    {
        int u,v;
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    dfs(2);

    for(int i=0;i<nodes;i++){
        if(visited[i]==true) cout<<"Node "<<i<<" is visited"<<endl;
        else cout<<"Node "<<i<<" is not visited"<<endl;
    }


    return 0;
}
