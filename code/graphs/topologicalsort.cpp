#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

// c++ graph
struct Vertex
{
    int info;
    struct Vertex *nextVertex; /*next vertex in the linked list of vertices*/
    struct Edge *firstEdge;    /*first Edge of the adjacency list of this vertex*/
    Vertex(int info)
    {
        this->info = info;
        nextVertex = NULL;
        firstEdge = NULL;
    }
};

int main()
{
    fastio;
    // code goes here
    return 0;
}