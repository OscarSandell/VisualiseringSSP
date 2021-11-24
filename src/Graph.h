#ifndef GRAPH_H
#define GRAPH_H
#include <vector>

class Graph
{
class Node;
public:
    Graph();
    void BFS();
    void Astar();


private:
    class Node
    {
        int x;
        int y;
        std::vector<Node*> neighbours;
    };

    std::vector<Node*> Nodes;
};

#endif