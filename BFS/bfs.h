//
// Created by Ashutosh Kumar on 27/03/23.
//

#ifndef GRAPH_TRAVERSAL_BFS_H
#define GRAPH_TRAVERSAL_BFS_H

#include <vector>

template <typename T>
class Graph
{
private:
    std::vector<std::vector<T> > edges;
    int numVertices;

public:
    Graph() {}

    Graph(int numVertices)
    {
        this->numVertices = numVertices;
        edges.resize(numVertices);
    }

    void addEdge(int a, int b);
    void bfs(T source);

};



#endif //GRAPH_TRAVERSAL_BFS_H
