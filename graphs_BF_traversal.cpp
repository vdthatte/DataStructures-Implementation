/*

Code written by Vidyadhar Thatte

filename: graphs_BF_traversal.cpp

A queue is used for breadth first traversal of a graph.

*/

#include <iostream>
#include <queue>
using namespace std;

class Graph{
private:
	template<class content, class distance>
	struct node{
		content cont;
		distance dist;
	};
	std::vector<node*> nodes;
public:
	Graph(){

	}
	void BFS();
};

template<class content>
void Graph::BFS(){
	std queue<content> helper_queue;
	
}

int main(){

}