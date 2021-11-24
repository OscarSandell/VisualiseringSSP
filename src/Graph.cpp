#include "Graph.h"
#include <queue>

Graph::Graph() : Nodes{}
{

}
/*
void Graph::Astar(int from, int to)
{
    auto comparison = [](Node*a,Node*b){return a->getglobaldistance() > b->getglobaldistance();};
    std::priority_queue<Node*,std::vector<Node*>,decltype(comparison)> queue(comparison); 
}

void Graph::BFS(int from,int to)
{
    std::queue<Node*> queue;

}
*/
/*class Graph
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
};*/