#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

class Queue {
private:
    Node* head; // Front of queue
    Node* tail; // Rear of queue

public:
    Queue() {
        head = tail = NULL;
    }

    // Insert at rear (tail)
    void enqueue(int val) {
       Node* newNode = new Node(val);

       if(head == NULL){
            head = tail = newNode;
            return;
       }else{
            tail->next = newNode;
            tail = newNode;
       }
    }

    // Delete from front (head)
    void dequeue() {
        Node* temp = head;

        if(head == NULL){
            return;
        }else{
            cout << temp->data << " head ele going to be deleted" << endl;
            head = head->next;
        }

        // single element where head and tail points to same node
        if(head == NULL){  tail = NULL;  }
        
        delete temp;
    }

    void peek() {
        if (head == NULL) {
            cout << "Queue is empty\n";
            return;
        }

        cout << "Front element: " << head->data << endl;
    }

    void display() {
        if (head == NULL) {
            cout << "Queue is empty\n";
            return;
        }

        Node* temp = head;

        cout << "Queue: ";
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.display();      // 10 20 30

    q.dequeue();      // Deletes 10
    q.display();      // 20 30

    q.peek();         // 20

    return 0;
}