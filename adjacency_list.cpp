/*

Code written by Vidyadhar Thatte

filename: adjacency_list.cpp

STRUTURE OF THE LIST:

element1 -> element2 -> element3
element2 -> element1
element3 -> element1

*/

#include <iostream>
#include <list>
#include <unordered_map>

using namespace std;

template<class element>
class AdjList{
public:
	void addAdjacentElement( const element& head, const element& link ){
		map[head].push_back(link);
	}
	void displayElement( const element& head ){
		cout << head << endl;
		element link;
		typename std::list<element>::const_iterator iterator;
		for( iterator = map[head].begin(); iterator != map[head].end(); ++iterator){
			std::cout << *iterator << endl;
		}
	}
private:
	unordered_map< element, list<element> > map;
};

int main(){
	AdjList<string> a;
	a.addAdjacentElement( "hello", "ayy lmao" );
	a.addAdjacentElement( "hello", "namaste" );
	a.displayElement("hello");
}