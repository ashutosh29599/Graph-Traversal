#include <iostream>
#include "graph.h"

int main()
{
    Graph<int> graph(6);
    //graph.addEdge(0, 1);
    graph.addEdge(0, 3);
    graph.addEdge(1, 2);
    graph.addEdge(3, 2);
    graph.addEdge(3, 4);
    graph.addEdge(4, 5);

    graph.bfs(0);
    graph.dfs(0);

    std::cin.get();
    return 0;
}
