/*

Code written by Vidyadhar Thatte

filename: graphs_DF_traversal.cpp

A stack is used for depth first traversal of a graph.

*/

#include <iostream>
#include <stack>
using namespace std;

class TheGraph{
private:
	template<class content, class distance, class link>
	struct node{
		content cont;
		distance dist;
		link lk;
	};
public:
	void BFS();
};

template<class content>
void TheGraph::BFS(){
	stack<content> helper_stack;
	std::vector<node*> visited;
}


int main(){

}