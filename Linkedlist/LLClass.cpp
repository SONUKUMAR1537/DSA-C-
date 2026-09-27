#include<iostream>
using namespace std;

class Node { // User defined data type
public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

class LinkedList { // User defined data structure
public:
    Node* head;
    Node* tail;
    int size;

    LinkedList(){
        head = tail = NULL;
        size = 0;
    }

    void insertAtEnd(int val){
        Node* temp = new Node(val);
        if(size == 0){
            head = tail = temp;
        } else {
            tail->next = temp;
            tail = temp;
        }
        size++;
    }

    void insertAtHead(int val){
        Node* temp = new Node(val);
        if(size == 0){
            head = tail = temp;
        } else {
            temp->next = head;
            head = temp;
        }
        size++;
    }

    void insertAtIdx(int idx, int val){
        if(idx < 0 || idx > size){
            cout << "Invalid Index" << endl;
            return;
        }
        if(idx == 0){
            insertAtHead(val);
            return;
        }
        if(idx == size){
            insertAtEnd(val);
            return;
        }
        Node* t = new Node(val);
        Node* temp = head;
        for(int i = 1; i <= idx-1; i++){
            temp = temp->next;
        }
        t->next = temp->next;
        temp->next = t;
        size++;
    }

    int getAtIdx(int idx){
        if(idx < 0 || idx >= size){
            cout << "Invalid Index" << endl;
            return -1;
        }
        if(idx == 0) return head->val;
        if(idx == size-1) return tail->val;
        Node* temp = head;
        for(int i = 0; i < idx; i++){
            temp = temp->next;
        }
        return temp->val;
    }

    void deleteAtHead(){
        if(size == 0){
            cout << "List is Empty!" << endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
        size--;
        if(size == 0) tail = NULL;
    }

    void deleteAtTail(){
        if(size == 0){
            cout << "List is Empty!" << endl;
            return;
        }
        if(size == 1){
            delete head;
            head = tail = NULL;
            size = 0;
            return;
        }
        Node* temp = head;
        while(temp->next != tail){
            temp = temp->next;
        }
        delete tail;
        tail = temp;
        tail->next = NULL;
        size--;
    }

    void deleteAtIdx(int idx){
        if(size == 0){
            cout << "List is Empty!" << endl;
            return;
        }
        if(idx < 0 || idx >= size){
            cout << "Invalid Index" << endl;
            return;
        }
        if(idx == 0){
            deleteAtHead();
            return;
        }
        if(idx == size-1){
            deleteAtTail();
            return;
        }
        Node* temp = head;
        for(int i = 1; i <= idx-1; i++){
            temp = temp->next;
        }
        Node* delNode = temp->next;
        temp->next = delNode->next;
        delete delNode;
        size--;
    }

    void display(){
        Node* temp = head;
        while(temp != NULL){
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main(){
    LinkedList ll;

    ll.insertAtEnd(10);   // {10}
    ll.insertAtEnd(20);   // {10->20}
    ll.insertAtEnd(30);   // {10->20->30}
    ll.display();

    ll.insertAtHead(50);  // {50->10->20->30}
    ll.display();

    ll.insertAtIdx(2, 80); // {50->10->80->20->30}
    ll.display();

    cout << "Element at index 2: " << ll.getAtIdx(2) << endl;

    ll.deleteAtHead();    // remove 50
    ll.display();

    ll.deleteAtTail();    // remove 30
    ll.display();

    ll.deleteAtIdx(1);    // remove 80
    ll.display();

    return 0;
}
