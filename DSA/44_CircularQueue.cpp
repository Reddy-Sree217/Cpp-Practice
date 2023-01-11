#include <iostream>
#include <vector>
using namespace std;

class Queue
{
    int head, tail, size;
    vector<int> circQueue;

public:
    Queue() {}
    Queue(int);
    bool enqueue(int);
    bool dequeue();
    bool isFull();
    bool isEmpty();
    int front();
    int rear();
};

Queue::Queue(int val)
{
    head = 0;
    tail = -1;
    size = val;
    circQueue.resize(size);
}

bool Queue::isEmpty()
{
    if (tail == -1)
        return true;
    return false;
}

bool Queue::isFull()
{
    if (tail != -1 && head == (tail + 1) % size)
        return true;
    return false;
}

bool Queue::enqueue(int val)
{
    if (isFull())
        return false;
    tail = (tail + 1) % size;
    circQueue[tail] = val;
    return true;
}

bool Queue::dequeue()
{
    if (isEmpty())
        return false;
    if (head == tail)
    {
        head = 0;
        tail = -1;
        return true;
    }
    head = (head + 1) % size;
    return true;
}

int Queue::front(void)
{
    if (isEmpty())
        return -1;
    return circQueue[head];
}

int Queue::rear(void)
{
    if (isEmpty())
        return -1;
    return circQueue[tail];
}

int main()
{
    Queue *myQ = new Queue(3);
    cout << myQ->enqueue(1) << endl;
    cout << myQ->enqueue(11) << endl;
    cout << myQ->enqueue(111) << endl;
    cout << myQ->dequeue() << endl;
    
    cout << myQ->front() << endl;
    cout << myQ->rear() << endl;
    return 0;
}