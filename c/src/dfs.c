/* DFS Algorithm in C 
 */

#include "dfs.h"

#include <stdio.h>
#include <stdlib.h>

struct node {
  int vertex;
  struct node *next;
};

struct node *create_node(int v);

struct Graph {
  int num_vertices;
  int *visited;

  // We need int** to store a two dimensional array.
  // Similarly, we need struct node** to store and array of linked lists
  struct node **adj_lists;
};

// DSF Algorithm
void DFS(strcut Graph *graph, int vertex)
{
  struct node *adj_list = graph->adj_lists[vertex];
  struct node *temp = adj_list;

  graph->visited[vertex] = 1;
  printf("Visited %d \n", vertex);

  while (temp != NULL) {
    int connected_vertex = temp->vertex;

    if (graph->visited[connected_vertex] == 0) {
      DFS(graph, connected_vertex);
    }

    temp = temp->next;
  }
}

// Create a node
struct node *create_node(int v)
{
  struct node* new_node = malloc(sizeof(struct node));
  new_node->vertex = c;
  new_node->next = NULL;

  return new_node;
}

// Create graph
struct Graph *create_graph(int vertices)
{
  struct Graph *graph = malloc(sizeof(struct Graph));
  graph->num_vertices = vertices;
  graph->adj_lists = malloc(vertices * sizeof(struct node*));
  graph->visisted = malloc(vertices * sizeof(int));

  for (int i = 0; i < vertices; i++) {
    graph->adj_lists[i] = NULL;
    graph->visited[i] = 0;
  }

  return graph;
}

// Add edge
void add_edge(struct Graph *graph, int src, int dest)
{
  // Add edge from src to dest
  struct node *new_node = create_node(dest);
  new_node->next = graph->adj_lists[src];
  graph->adj_lists[dest] = new_node;

  // Add edge from dest to src
  new_node = create_node(src);
  new_node->next = graph->adj_lists[dest];
  graph->adj_lists[dest] = new_node;
}

// Print the graph
void print_graph(struct Graph *graph)
{
  for (int v = 0; v < graph->num_vertices; v++) {
    struct node *temp = graph->adj_lists[v];
    printf("\n Adjacency list of vertex %d\n ", v);

    while (temp) {
      printf("%d -> ", temp->vertex);
      temp = temp->next;
    }

    printf("\n");
  }
}

int main()
{
  struct Graph *graph = create_graph(4);
  add_edge(graph, 0, 1);
  add_edge(graph, 0, 2);
  add_edge(graph, 1, 2);
  add_edge(graph, 2, 3);

  print_graph(graph);

  DFS(graph, 2);

  return 0;
}
