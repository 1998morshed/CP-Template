#include<bits/stdc++.h>
using namespace std;
#define N 105

std::vector<int> graph[N];

int visited[N];
int dist[N];

void bfs(int source)
{
    queue<int> q;

    visited[source] = 1;
    dist[source] = 0;
    q.push(source);

    while(!q.empty())
    {
        int target = q.front();
        q.pop();

        for(int i=0; i<graph[target].size(); i++)
      {
        int next = graph[target][i];
        if(visited[next]==0)
        {
            visited[next] = 1;
        dist[next] = dist[target] + 1;
        q.push(next);

        }
        
      }

    }
    
    
}

int main(){


    
    int nodes, edges;
    cin>>nodes>>edges;

    for(int i=1;i<=edges; i++)
    {
        int u,v;
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);

        
    }

    int source;
    cin>>source;

    bfs(source);

    for(int i=1;i<=nodes;i++)
    {
        cout<<source<<" to "<<i<<" distance is "<<dist[i]<<endl;
    }


    return 0;
}
