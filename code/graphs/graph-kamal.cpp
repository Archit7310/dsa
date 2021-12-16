
// #include <bits/stdc++.h>
// using namespace std;

// // Add edge
// void addEdge(vector<int> adj[], int s, int d)
// {
//     adj[s].push_back(d);
// }

// // Print the graph
// void printGraph(vector<int> adj[], int V)
// {
//     for (int d = 0; d < V; ++d)
//     {
//         cout << "\n Vertex "
//              << d << ":";
//         for (auto x : adj[d])
//             cout << "-> " << x;
//         printf("\n");
//     }
// }

// // shortest path from vertex s to vertex d
// void shortestPath(vector<int> adj[], int s, int d, int V)
// {
//     // Create a vector to store distances
//     vector<int> dist(V, INT_MAX);
//     // Create a vector to store the path
//     vector<int> path(V, -1);
//     // Create a queue to store the vertices
//     queue<int> q;
//     // Initialize the distance of source vertex as 0
//     dist[s] = 0;

//     // Enqueue the source vertex
//     q.push(s);

//     // While the queue is not empty
//     while (!q.empty())
//     {
//         // Dequeue a vertex from the queue
//         int u = q.front();
//         q.pop();

//         // For each adjacent vertex v of u
//         for (auto v : adj[u])
//         {
//             // If there is a shorter path to v through u
//             if (dist[v] > dist[u] + 1)
//             {
//                 // Update the distance of v
//                 dist[v] = dist[u] + 1;

//                 // Update the path
//                 path[v] = u;

//                 // Enqueue v
//                 q.push(v);
//             }
//         }
//     }

//     // Print the shortest distance
//     cout << "\nShortest distance from "
//          << s << " to " << d << " is " << dist[d] << "\n";

//     // Print the path
//     cout << "Path is ";
//     int i = d;
//     while (i != -1)
//     {
//         cout << i << " ";
//         i = path[i];
//     }
//     cout << "\n";
// }

// int main()
// {
//     int V = 21;

//     // Create a graph
//     vector<int> adj[V];

//     // Add edges
//     addEdge(adj, 9, 12);
//     addEdge(adj, 9, 21);
//     addEdge(adj, 10, 9);
//     addEdge(adj, 12, 15);
//     addEdge(adj, 13, 10);
//     addEdge(adj, 13, 14);
//     addEdge(adj, 13, 16);
//     addEdge(adj, 13, 17);
//     addEdge(adj, 14, 16);
//     addEdge(adj, 14, 18);
//     addEdge(adj, 15, 17);
//     addEdge(adj, 15, 18);
//     addEdge(adj, 17, 19);
//     addEdge(adj, 18, 19);
//     addEdge(adj, 18, 20);
//     addEdge(adj, 20, 19);
//     shortestPath(adj, 10, 19, V);
//     printGraph(adj, V);
// }

#include <bits/stdc++.h>
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
        printf("\n");
    }
}

void shortestPath(vector<int> adj[], int s, int d, int V)
{
    vector<int> dist(V, INT_MAX);
    vector<int> path(V, -1);
    queue<int> q;
    dist[s] = 0;
    q.push(s);
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        for (auto v : adj[u])
        {
            if (dist[v] > dist[u] + 1)
            {
                dist[v] = dist[u] + 1;
                path[v] = u;
                q.push(v);
            }
        }
    }

    cout << "\nShortest distance from "
         << s << " to " << d << " is " << dist[d] << "\n";

    cout << "Path is ";
    int i = d;
    while (i != -1)
    {
        cout << i << " ";
        i = path[i];
    }
    cout << "\n";
}

int main()
{
    int V = 21;

    vector<int> adj[V];

    addEdge(adj, 9, 12);
    addEdge(adj, 9, 21);
    addEdge(adj, 10, 9);
    addEdge(adj, 12, 15);
    addEdge(adj, 13, 10);
    addEdge(adj, 13, 14);
    addEdge(adj, 13, 16);
    addEdge(adj, 13, 17);
    addEdge(adj, 14, 16);
    addEdge(adj, 14, 18);
    addEdge(adj, 15, 17);
    addEdge(adj, 15, 18);
    addEdge(adj, 17, 19);
    addEdge(adj, 18, 19);
    addEdge(adj, 18, 20);
    addEdge(adj, 20, 19);
    shortestPath(adj, 10, 19, V);
    printGraph(adj, V);
}