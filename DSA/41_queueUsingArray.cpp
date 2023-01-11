#include <iostream>
using namespace std;

class queue
{
public:
    int front;
    int back;
    int *arr;
    int size;
};

bool isFull(queue *Q)
{
    if (Q->back == Q->size - 1)
        return true;
    return false;
}

bool isEmpty(queue *Q)
{
    if (Q->back == -1)
        return true;
    return false;
}

void enque(queue *Q, int val)
{
    if (isFull(Q))
    {
        cout << "Queue is Full" << endl;
        return;
    }
    Q->back++;
    Q->arr[Q->back] = val;
}

int deque(queue *Q)
{
    if (isEmpty(Q))
    {
        cout << "Queue is Empty" << endl;
        return -1;
    }
    if (Q->front == Q->back)
    {
        cout << "No element to deque" << endl;
        return -1;
    }
    Q->front++;
    return Q->arr[Q->front];
}

void printQueue(queue* Q){
    for(int i=Q->front+1;i<=Q->back;i++){
        cout<<Q->arr[i]<<" ";
    }
    cout<<endl;
}


int main()
{
    queue *Q = new queue();
    Q->size = 5;
    Q->front = -1;
    Q->back = -1;
    Q->arr = new int(Q->size);
    enque(Q,1);
    enque(Q,2);
    enque(Q,3);
    printQueue(Q);
    cout<<deque(Q)<<endl;
    return 0;
}