#include "memmgr.h"
#include "util.h"
#include "print.h"

struct Stack { 
    int data; 
    struct Stack* next; 
}; 

struct Graph { 
    int V;
    struct List* adj; 
}; 

struct List { 
    int data; 
    struct List* next; 
};


struct Stack * createStackNode(int data) { 
  struct Stack* newNode = (struct Stack*)memmgr_alloc(sizeof(struct Stack)); 
  newNode->data = data; 
  newNode->next = NULL; 
  return newNode; 
}

struct List * createListNode(int data) { 
  struct List* newNode = (struct List*)memmgr_alloc(sizeof(struct List)); 
  newNode->data = data; 
  newNode->next = NULL; 
  return newNode; 
}

struct Graph *createGraph(int V) { 
  struct Graph* graph = (struct Graph*)memmgr_alloc(sizeof(struct Graph)); 
  graph->V = V; 
  graph->adj = (struct List*)memmgr_alloc(V * sizeof(struct List)); 
  for (int i = 0; i < V; ++i)
    graph->adj[i].next = NULL; 
  return graph; 
}


void addEdge(struct Graph* graph, int v, int w) { 
  struct List* newNode = createListNode(w); 
  newNode->next = graph->adj[v].next; 
  graph->adj[v].next = newNode;
}

void topologicalSortUtil(struct Graph* graph, int v, int visited[], struct Stack** stack) { 
  visited[v] = 1; 
  
  struct List* current = graph->adj[v].next; 
  while (current != NULL)
  { 
    int adjacentVertex = current->data; 
    if (!visited[adjacentVertex]) 
      topologicalSortUtil(graph, adjacentVertex, visited, stack); 
    current = current->next; 
  } 
  
  struct Stack* newNode = createStackNode(v); 
  newNode->next = *stack; 
  *stack = newNode; 
}

void topologicalSort(struct Graph* graph) { 
    struct Stack* stack = NULL; 
	
    int* visited = (int*)memmgr_alloc(graph->V * sizeof(int)); 
    for (int i = 0; i < graph->V; ++i) { 
        visited[i] = 0; 
    } 
	
    for (int i = 0; i < graph->V; ++i) { 
        if (!visited[i]) { 
            topologicalSortUtil(graph, i, visited, &stack); 
        } 
    } 
	
    while (stack != NULL) { 
		Print("%d ",PRINTVARS(stack->data));
        struct Stack* temp = stack;
        stack = stack->next; 
        memmgr_free(temp); 
    } 
  
    // Free allocated memory 
    memmgr_free(visited); 
    memmgr_free(graph->adj); 
    memmgr_free(graph); 
}

void my_main()
{
  	struct Graph* g = createGraph(6);
	addEdge(g, 5, 2); 
 	addEdge(g, 5, 0); 
 	addEdge(g, 4, 0); 
  	addEdge(g, 4, 1); 
	addEdge(g, 2, 3); 
	addEdge(g, 3, 1);
	display_print(0,0,"\nTopological Sorting Order: \n");
	topologicalSort(g); 
	display_print(0,0,"\n");
}
