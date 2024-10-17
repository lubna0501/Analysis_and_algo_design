//PROGRAM NO.-8

//WRITE A PROGRAM TO IMPLEMENT GRAPH TRAVERSAL : BFS AND DFS
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<assert.h>

#define maxVertices   100

typedef struct Queue
{
int capacity;
int size;
int front;
int rear;
int *elements;
}Queue;

Queue * CreateQueue(int maxElements)
{

Queue *Q;
Q = (Queue *)malloc(sizeof(Queue));

Q->elements = (int *)malloc(sizeof(int)*maxElements);
Q->size = 0;
Q->capacity = maxElements;
Q->front = 0;
Q->rear = -1;

return Q;
}
void Dequeue(Queue *Q)
{

if(Q->size==0)
{
printf("Queue is Empty\n");
return;
}

else
{
Q->size--;
Q->front++;
if(Q->front==Q->capacity)
{
Q->front=0;
}
}
return;
}
int Front(Queue *Q)
{
if(Q->size==0)
{
printf("Queue is Empty\n");
exit(0);
}
return Q->elements[Q->front];
}
void Enqueue(Queue *Q,int element)
{
if(Q->size == Q->capacity)
{
printf("Queue is Full\n");
}
else
{
Q->size++;
Q->rear = Q->rear + 1;
if(Q->rear == Q->capacity)
{
Q->rear = 0;
}
Q->elements[Q->rear] = element;
}
return;
}
void Bfs(int graph[][maxVertices], int *size, int presentVertex,int *visited)
{
visited[presentVertex] = 1;
Queue *Q = CreateQueue(maxVertices);
Enqueue(Q,presentVertex);
while(Q->size)
{
presentVertex = Front(Q);
printf("Now visiting vertex %d\n",presentVertex);
Dequeue(Q);
int iter;
for(iter=0;iter<size[presentVertex];iter++)
{
if(!visited[graph[presentVertex][iter]])
{
visited[graph[presentVertex][iter]] = 1;
Enqueue(Q,graph[presentVertex][iter]);
}
}
}
return;
}
int main()
{
int graph[maxVertices][maxVertices], size[maxVertices]={0}, visited[maxVertices]={0};
int vertices,edges,iter;
printf("ENTER NO. OF VERTICES AND EDGES IN GRAPH:\n");
scanf("%d%d",&vertices,&edges);
int vertex1,vertex2;
printf("\nEnter the pair of vertices for directed edges:");
for(iter=0;iter<edges;iter++)
{
scanf("%d%d",&vertex1,&vertex2);
assert(vertex1>=0 && vertex1<vertices);
assert(vertex2>=0 && vertex2<vertices);
graph[vertex1][size[vertex1]++] = vertex2;
}
int presentVertex;
for(presentVertex=0;presentVertex<vertices;presentVertex++)
{
if(!visited[presentVertex])
{
Bfs(graph,size,presentVertex,visited);
}
}
getch();
return 0;
}

