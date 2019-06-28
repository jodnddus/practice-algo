#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0
#define MAX_VERTICES 50
#define MAX_QUEUE_SIZE 100

int visited[MAX_VERTICES];

typedef struct GraphNode {
	int vertex;
	struct GraphNode* link;
} GraphNode;

typedef struct GraphType {
	int n;
	GraphNode* adj_list[MAX_VERTICES];
} GraphType;

void graph_init(GraphType* g)
{

}

void insert_vertex(GraphType* g, int v)
{

}

void insert_edge(GraphType* g, int u, int v)
{

}

typedef int element;
typedef struct {
	element queue[MAX_QUEUE_SIZE];
	int front, rear;
} QueueType;

void error(char* message)
{

}

void init(QueueType* q)
{

}

int is_empty(QueueType* q)
{

}

int is_full(QueueType* q)
{

}

void enqueue(QueueType* q, element item)
{

}

element dequeue(QueueType* q)
{

}

element peek(QueueType* q)
{

}

void bfs_list(GraphType* g, int v)
{

}
