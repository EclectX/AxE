#include "util.h"
#include "print.h"
#include "memmgr.h"
 
#define V 8
#define INF 99999
#define N 99999

void printSolution(int dist[][V]);

int dist[V][V];

void floydWarshall (int graph[][V]){
  int i, j, k;
  for (i = 0; i < V; i++)
    for (j = 0; j < V; j++)
      dist[i][j] = graph[i][j];
  for (k = 0; k < V; k++)
  {
    for (i = 0; i < V; i++)
    {
      for (j = 0; j < V; j++)
      {
        if (dist[i][k] + dist[k][j] < dist[i][j])
          dist[i][j] = dist[i][k] + dist[k][j];
      }
    }
  }
}
void printSolution(int dist[][V])
{
    display_print (0,0,"Following matrix shows the shortest distances"
                   " between every pair of vertices \n");
    for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < V; j++)
        {
            if (dist[i][j] == INF)
                Print(" %s ",PRINTVARS("INF"));
            else
                Print(" %d ",PRINTVARS(dist[i][j]));
        }
        display_print(0,0,"\n");
    }
}
void my_main()
{
#ifdef notdef
  int graph[V][V] = { {0,   5,  INF, 10},
                      {INF, 0,   3, INF},
                      {INF, INF, 0,   1},
                      {INF, INF, INF, 0}
                    };
#endif
	int graph[V][V] = {
  // Vertex # A  B  C  D  E  F  G  H	   Vertex
            { 0, N, 4, N, N, 7, N, N }, // A
			      { N, 0, N, N, 9, N, N, 3 }, // B
			      { 4, N, 0, 3, N, 2, 9, N }, // C	
			      { N, N, 3, 0, 3, N, 7, N }, // D
			      { N, 9, N, 3, 0, N, 2, 7 }, // E
			      { 7, N, 2, N, N, 0, 8, N }, // F
			      { N, N, 9, 7, 2, 8, 0, 3 }, // G
			      { N, 3, N, N, 7, N, 3, 0 } };//H

  floydWarshall(graph);
 
  printSolution(dist);

}
