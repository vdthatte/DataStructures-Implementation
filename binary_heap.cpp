/*

Code written by Vidyadhar Thatte

filename: binary_heap.cpp

*/

#include <iostream>
#include <vector>

using namespace std;

template <class Comparable>
class BinaryHeap{
private:
	int theSize;  // Number of elements in heap
    vector<Comparable> array;    // The heap array
    void buildHeap();
    void percolateDown( int hole );
public:
	// Constructors
	BinaryHeap();
	BinaryHeap( const vector<Comparable> & v );

	bool isEmpty( ) const;
    const Comparable & findMin( ) const;
    void insert( const Comparable & x );
    void insert( Comparable && x );
    void deleteMin( );
};

int main(){

}