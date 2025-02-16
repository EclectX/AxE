#include "util.h"
#include "print.h"


	//
// Compute the minimal spanning tree of a randomly generated graph.
// This program implements Kruscal's algorithm (https://en.wikipedia.org/wiki/Kruskal%27s_algorithm)
// over a graph represented as an adjacency matrix (https://en.wikipedia.org/wiki/Adjacency_matrix).
// This algorithm works on graphs with multiple components that are not connected.
// 
#define TRUE (1)
#define FALSE (0)
#define INT_MAX (0x7FFFFFFF)


// V represents the number of vertex in the graph G
const int V = 10;

// this are the names(representation) of each vertex
const char *vertName[] = {"Home","z-mall","st.pet","office","school","motel","restr.","library","airport","barber"};

// find the vertex with min distance from the unknown vertexes
uint32_t
minVal(uint32_t *dist, int *known)
{
	uint32_t min = -1;
	uint32_t distVal = INT_MAX;
			
	for (int i=0; i<V; i++)
  {
		if ( distVal>dist[i] && !known[i])
    {
			distVal = dist[i];
			min = i;
		}					
	}
				
  if (min != -1)
    known[min] = TRUE;
  return min;
}

// find the shortest path from the source to all other vertexes
void
minSpanTree(uint32_t graph[V][V], uint32_t path[V])
{
	uint32_t dist[V];

  // KNOWN[I] set to true when the algorithm has linked node I into the minimal spanning tree being built
	int known[V];
	uint32_t min = 0;
	
	for (int i=0; i<V; i++)
  {
		if (min == i)
    {
			dist[i] = 0;
			known[i] = TRUE;
		}
    else
    {
			dist[i] = INT_MAX;
			known[i] = FALSE;
		}
	}
		
	for (int i=0;i<V;i++)
  {
		for (int j = 0;j<V;j++)
    {
			if (!known[j] && (graph[min][j] != 0) && (graph[min][j] < dist[j]))
      {
				dist[j] = graph[min][j];
				path[j] = min;				
			}
		}
		min = minVal(dist, known);
	}
}

//Used to initialize the graph
void
initializeData(uint32_t graph[V][V])
{
	srand(10);
	for (int i=0; i < V; i++)
  {
		for (int j=0;j<V;j++)
    {
			if (i>j)
				graph[i][j] = graph[j][i];
			else if (i==j)
				graph[i][j] = 0;
			else
      {
				if (rand() % 5 == rand() % 5)
					graph[i][j] = 0;	
				else
					graph[i][j] = rand() % 10;			
			}
		}
	}
}

void
displayGraph(uint32_t graph[V][V])
{
	int index = 0;
	for (int i=-1;i<V;i++)
  {
		for (int j=-1;j<V;j++)
    {
			if (i==-1)
      {
				if (j==-1)
          Print("       ",0);
				else
          Print("%s", PRINTVARS(vertName[j]));
          Print("  ",0);
			}
      else
      {
				if(j==-1)
        {
          Print("%s", PRINTVARS(vertName[index]));
					index++;
				}
        else
          Print("%d", PRINTVARS(graph[i][j]));
          Print("      ",0);
			}
		}
    Print("\n",0);
	}
  Print("\n\n",0);
}

void
displayGraph1(uint32_t graph[V][V], uint32_t path[V])
{
	int index = 0;
	for (int i=-1;i<V;i++)
  {
		for (int j=-1;j<V;j++)
    {
			if (i==-1)
      {
				if (j==-1)
          Print("       ",0);
				else
          Print("%s", PRINTVARS(vertName[j]));
			}
      else
      {
				if(j==-1)
        {
          Print("%s", PRINTVARS(vertName[index]));
					index++;
				}
        else
          Print("%d / %d", PRINTVARS(graph[i][j], path[i]));
			}
		}
    Print("\n",0);
	}
  Print("\n\n",0);
}

//Displays the path from source to destination
void
displayPath(uint32_t source, uint32_t dest, uint32_t path[V])
{
	static int count = 0;
	
	int currPath = dest;
	
	if (count == 0)
  {
    Print("\nSource: %s\tDestination: %s\n\n", PRINTVARS(vertName[source], vertName[currPath]));
    Print("Path: %s", PRINTVARS(vertName[source]));
		count++;
	}	
	if (path[currPath] != source)
  {
		displayPath(source,path[currPath],path);
	}
  Print("-> %s", PRINTVARS(vertName[currPath]));
	if (currPath == dest)
  {
    Print("\n",0);
	}
}

// display the minimum spanning tree
void
displayTree(uint32_t graph[V][V], uint32_t path[V])
{
  int cost = 0;
  Print("minimum spanning tree:\n",0);
  for (int i=1; i < V; i++)
  {
    Print("  %s <-%d-> %s\n", PRINTVARS(vertName[i], graph[i][path[i]], vertName[path[i]]));
    cost += graph[i][path[i]];
  }
  Print("total cost = %d\n", PRINTVARS(cost));
}

int
my_main()
{
	// int32_t source = 0;
	// int32_t destination = 1;
	uint32_t graph[V][V];
	uint32_t path[V];	
	for(int i=0;i<V;i++){
		path[i]=-1;
	}
	initializeData(graph);	
	displayGraph(graph);
  minSpanTree(graph,path);

	// displayPath(source,destination,path);
	// displayGraph1(graph, path);
	displayTree(graph, path);

 
  return 0;
}