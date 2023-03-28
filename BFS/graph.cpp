//
// Created by Ashutosh Kumar on 27/03/23.
//

#include "graph.h"
#include <queue>
#include <map>
#include <iostream>


template<typename T>
void Graph<T>::addEdge(int a, int b)
{
    edges[a].push_back(b);
    edges[b].push_back(a);
}

template <typename T>
void Graph<T>::bfs(T source)
{
    std::map<T, bool> discovered;
    std::queue<T> q;

    for (auto node : discovered)
    {
        node.second = false;
    }

    q.push(source);
    discovered[source] = true;

    while (!q.empty())
    {
        T node = q.front();
        q.pop();
        std::cout << node << " ";

        for (T nbr : edges[node])
        {
            if (!discovered[nbr])
            {
                q.push(nbr);
                discovered[nbr] = true;
            }
        }
    }
    std::cout << std::endl;
}

template<typename T>
void Graph<T>::dfs(T source)
{
    std::map<T, bool> discovered;
    dfs_helper(source, discovered);
    std::cout << std::endl;
}

template<typename T>
void Graph<T>::dfs_helper(T node, std::map<T, bool> &discovered)
{
    discovered[node] = true;
    std::cout << node << " ";

    for (T nbr : edges[node])
    {
        if (!discovered[nbr])
        {
            dfs_helper(nbr, discovered);
        }
    }
}


template class Graph<int>;
