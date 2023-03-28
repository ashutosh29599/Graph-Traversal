//
// Created by Ashutosh Kumar on 27/03/23.
//

#ifndef GRAPH_TRAVERSAL_GRAPH_H
#define GRAPH_TRAVERSAL_GRAPH_H

#include <vector>
#include <map>

template <typename T>
class Graph
{
private:
    std::vector<std::vector<T> > edges;
    int numVertices;

    void dfs_helper(T node, std::map<T, bool> &discovered);

public:
    Graph() {}

    Graph(int numVertices)
    {
        this->numVertices = numVertices;
        edges.resize(numVertices);
    }

    void addEdge(int a, int b);
    void bfs(T source);
    void dfs(T source);

};



#endif //GRAPH_TRAVERSAL_GRAPH_H
