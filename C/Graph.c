#include <stdio.h>
#include <stdbool.h>

#define MAX 100

void createGraph(int n);
void BFS(int start, int n);
void DFSUtil(int v, int n);
bool isConnected(int n);
void enqueue(int item);
int dequeue();
bool isEmpty();

int graph[MAX][MAX];
bool visited[MAX];
int queue[MAX];
int front = -1, rear = -1;

void printGraph(int n) {
    int i, j;
    printf("Adjacency Matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", graph[i][j]);
        }
        printf("\n");
    }
}


void createGraph(int n) {
    int i, j;
    printf("Enter the adjacency matrix for the graph:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &graph[i][j]);
        }
    }
}

void BFS(int start, int n) {
    int i, current;
    printf("Nodes reachable from node %d using BFS: ", start);
    visited[start] = true;
    enqueue(start);
    while (!isEmpty()) {
        current = dequeue();
        printf("%d ", current);
        for (i = 0; i < n; i++) {
            if (graph[current][i] == 1 && !visited[i]) {
                visited[i] = true;
                enqueue(i);
            }
        }
    }
    printf("\n");
}

void DFSUtil(int v, int n) {
    int i;
    visited[v] = true;
    for (i = 0; i < n; i++) {
        if (graph[v][i] == 1 && !visited[i]) {
            DFSUtil(i, n);
        }
    }
}

bool isConnected(int n) {
    int i;
    for (i = 0; i < n; i++) {
        visited[i] = false;
    }
    for (i = 0; i < n; i++) {
        if (!visited[i]) {
            DFSUtil(i, n);
            break;
        }
    }
    for (i = 0; i < n; i++) {
        if (!visited[i]) {
            return false;
        }
    }
    return true;
}

void enqueue(int item) {
    if (rear == MAX - 1) {
        printf("Queue Overflow\n");
        return;
    }
    if (front == -1) {
        front = 0;
    }
    rear++;
    queue[rear] = item;
}

int dequeue() {
    int item;
    if (front == -1 || front > rear) {
        printf("Queue Underflow\n");
        return -1;
    }
    item = queue[front];
    front++;
    return item;
}

bool isEmpty() {
    return (front == -1 || front > rear);
}

int main() {
    int numCities, startNode;
    printf("Enter the number of cities (maximum %d): ", MAX);
    scanf("%d", &numCities);
    createGraph(numCities);
    printGraph(numCities);

    printf("Enter the starting node for BFS: ");
    scanf("%d", &startNode);
    BFS(startNode, numCities);

    if (isConnected(numCities)) {
        printf("The graph is connected.\n");
    } else {
        printf("The graph is not connected.\n");
    }

    return 0;
}
