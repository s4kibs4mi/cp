#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <vector>
#include <map>
#include <stack>
#include <queue>
#include <list>

using namespace std;

list<int> *graph;

void BFS(int n,int s){
    vector<bool> visited;
    for(int i = 0; i < n; i++)
        visited.push_back(false);

    visited[s] = true;

    queue<int> q;
    q.push(s);

    list<int> :: iterator it;
    while(!q.empty()){
        int x = q.front();
        cout << x; // track bfs
        q.pop();

        for(it = graph[x].begin(); it != graph[x].end(); it++){
            if(!visited[*it]){
                visited[*it] = true;
                q.push(*it);
            }
        }
    }
}

int main(){
    int nodes, edges, u, v;
    cin >> nodes >> edges;
    graph = new list<int>[nodes];

    for(int i = 0; i < edges; i++){
        cin >> u >> v;
        graph[u].push_back(v);
    }

    BFS(nodes, 2);

    return 0;
}
