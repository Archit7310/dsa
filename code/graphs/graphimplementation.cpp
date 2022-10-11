#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

void addEdge(vector<int> adj[], int s, int d)
{
    adj[s].push_back(d);
}

void printGraph(vector<int> adj[], int V)
{
    for (int d = 0; d < V; ++d)
    {
        cout << "\n Vertex "
             << d << ":";
        for (auto x : adj[d])
            cout << "-> " << x;
        cout << "\n";
    }
}

int main()
{
    fastio;
    int V, E;
    cin >> V >> E;
    vector<int> adj[V];
    for (int i = 0; i < E; i++)
    {
        int s, d;
        cin >> s >> d;
        addEdge(adj, s, d);
    }
    return 0;
}