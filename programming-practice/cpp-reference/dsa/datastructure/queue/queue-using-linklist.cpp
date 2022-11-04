#include <bits/stdc++.h>
using namespace std;

struct Node {
    Node *next = nullptr;
    string data;
};

/*
typedef struct _Node {
    Node *next = nullptr;
    string data;
}Node;
*/

class Queue 
{
private:
    Node *front;
    Node *back;
    size_t size;
public:
    explicit Queue() 
    {
        back = front = nullptr;
        size = 0;
    }
    Queue(std::initializer_list<string> list);

    Node* enQueue(string data);
    string deQueue();
    void printNodes();
    size_t getSize() const;

    ~Queue()
     {

     }
};

Queue::Queue(std::initializer_list<string> list) {
    front = back = nullptr;
    size = 0;
    for (const auto &item : list) {
        enQueue(item);
    }
}

Node *Queue::enQueue(string data) 
{
    auto new_node = new Node;
    new_node->data = std::move(data);
    new_node->next = nullptr;
    
    if (front == nullptr){
        front = back = new_node;
    }
    else
    {
    back->next = new_node;
    back = back->next;
    }

    size++;
    return new_node;
}

string Queue::deQueue() 
{
    auto tmp = front;
    
    if (front == nullptr){
        return "";
    }
    else if(front == back)
    {
	    back = nullptr;
    }

    string data = std::move(front->data);
    front = front->next;
    delete tmp;
    size--;
    return data;
}

void Queue::printNodes() {
    auto count = 0;
    auto tmp = front;
    while (tmp){
        cout << "node " << count << " - data: " << tmp->data << endl;
        tmp = tmp->next;
        count++;
    }
}

size_t Queue::getSize() const {
    return size;
}

int main() {
    Queue q1 = { "Precise", "Quantal",
                 "Saucy", "Raring"};

    q1.printNodes();
    cout << "queue size = " << q1.getSize() << endl;
    cout << "/ ------------------------------ / "  << endl;

    q1.enQueue("Xenial");
    q1.enQueue("Bionic");
    q1.printNodes();
    cout << "queue size = " << q1.getSize() << endl;

    cout << "deQueuing..." << endl;
    int size = q1.getSize();
    for(int i=1; i<=size;i++)
    {
	    cout << q1.deQueue() << endl; 
    }
    
    cout << "size of q1 is " << q1.getSize() << endl;

    return EXIT_SUCCESS;
}
