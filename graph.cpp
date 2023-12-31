#include <iostream>
#include <list>
#include <queue>
#include <stack>
#include <unordered_map>

class Graph {
private:
    std::unordered_map<int, std::list<int>> adjList;

public:
    void addVertex(int v)
    {
        adjList[v] = std::list<int>();
    }

    void addEdge(int v1, int v2)
    {
        adjList[v1].push_back(v2);
        adjList[v2].push_back(v1);
    }

    void removeEdge(int v1, int v2)
    {
        adjList[v1].remove(v2);
        adjList[v2].remove(v1);
    }

    void removeVertex(int v)
    {
        adjList.erase(v);
        for (auto& it : adjList)
        {
            it.second.remove(v);
        }
    }

