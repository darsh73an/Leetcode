#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int val) {
        data = val;
        next = prev = NULL;
    }
};

class DoublyList {
public:
    Node* head;
    Node* tail;

    DoublyList() {
        head = tail = NULL;
    }

    void push_front(int val) {
        Node* newNode = new Node(val);

        if (head == NULL) {
            head = tail = newNode;
        } else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }

    void push_back(int val) {
        Node* newNode = new Node(val);

        if (head == NULL) {
            head = tail = newNode;
        } else {
            newNode->prev = tail;
            tail->next = newNode;
            tail = newNode;
        }
    }

    void pop_front() {
       if(head == NULL){
        return;
       }

       Node* temp = head;
       if(head == tail){ // one element
            head = tail = NULL;
       }else{
            head = head->next;
            head->prev = NULL;
       }
       delete temp;
    }

    void pop_back() {
       if(tail == NULL){
        return;
       }

       Node* temp = tail;

       if(head == tail){
            head = tail = NULL;
       }else{
            tail = tail->prev;
            tail->next = NULL;
       }
       delete temp;
    }

    // Insert in middle
    void push_mid(int val) {
        Node* newNode = new Node(val);

        if (head == NULL) {
            head = tail = newNode;
            return;
        }

        Node* slow = head;
        Node* fast = head;

        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }

        newNode->next = slow;
        newNode->prev = slow->prev;

        if (slow->prev != NULL)
            slow->prev->next = newNode;
        else
            head = newNode;

        slow->prev = newNode;
    }

    // Delete middle node
    void pop_mid() {
        if (head == NULL)
            return;

        Node* slow = head;
        Node* fast = head;

        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }

        if (slow == head) {
            pop_front();
            return;
        }

        if (slow == tail) {
            pop_back();
            return;
        }

        slow->prev->next = slow->next;
        slow->next->prev = slow->prev;

        delete slow;
    }

    void print() {
        Node* temp = head;

        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {

    DoublyList dl;

    // push_front
    dl.push_front(3);
    dl.push_front(2);
    dl.push_front(1);

    cout << "After push_front: ";
    dl.print();      // 1 2 3

    // push_back
    dl.push_back(4);
    dl.push_back(5);

    cout << "After push_back: ";
    dl.print();      // 1 2 3 4 5

    // push_mid
    dl.push_mid(99);

    cout << "After push_mid(99): ";
    dl.print();      // 1 2 99 3 4 5

    // pop_front
    dl.pop_front();

    cout << "After pop_front: ";
    dl.print();      // 2 99 3 4 5

    // pop_back
    dl.pop_back();

    cout << "After pop_back: ";
    dl.print();      // 2 99 3 4

    // pop_mid
    dl.pop_mid();

    cout << "After pop_mid: ";
    dl.print();      // 2 99 4

    return 0;
}