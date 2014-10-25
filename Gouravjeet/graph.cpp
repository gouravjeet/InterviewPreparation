
#include <iostream>
using namespace std;
class AdjListNode{
	int dest;
	AdjListNode* next;
};
class AdjList{
	AdjListNode* head;
};
class Graph{
	int V; // size of the array
	AdjList* array;
};
AdjListNode* newAdjListNode(int dest){
	AdjListNode* newNode=new AdjListNode();
	newNode->dest=dest;
	newNode->next=NULL:
	return newNode;
}
Graph* creategraph(int V){
	Graph* graph=new Graph();
	graph->array=new AdjList();
	int i;
	for(i=0;i<V;i++){
		graph->array[i].head=NULL;
	}
	return graph;
}
void addEdge(Graph* graph,int src, int dest){
	AdjListNode* newNode=newAdjListNode(dist);
	newNode->next=graph->array[src].head;
	graph->array[src].head=newNode;

	newNode=newAdjListNode(src);
	newNode->next=graph->array[dest].head;
	graph->array[dest].head=newNode;x
}
void printGraph(Graph* graph){
	//traversing the graph by going through each array
	// and then through each linked list
}

int main()
{
	int V=5;
	Graph* graph=creategraph(V);
	addEdge(graph,0,1);
	addEdge(graph,0,1);
	addEdge(graph,0,1);
	addEdge(graph,0,1);
	addEdge(graph,0,1);
	addEdge(graph,0,1);
	addEdge(graph,0,1);
	printGraph(graph);

	return 0;
}