
// insertion -->, deletion-->, searching
#include<iostream>
using namespace std;


class LinkedList{
private: 
	class Node{
	    public : 
		int data;
		Node* next;
		Node(int info){
			data = info;
			next = nullptr;
		}
	};

    Node* head = NULL;
    
public:     
    void insertAtHead(int );
    void InsertInMiddle(int info, int pos);
    void insertAtTail(int );
    void print();
    void deleteHead();
    void deleteMid(int);
    void deleteTail();
    bool search(int key);
    void takeInput();
};

void LinkedList::insertAtHead(int info){
    
    Node* node = new Node(info);
    node -> next = head;
    head = node;
}


void LinkedList::InsertInMiddle(int info,int pos){
    

    if(pos == 0){
        insertAtHead(info);
        return;
    }
    Node* prev = head;
    while(pos > 0){
        prev = prev->next;
        pos--;
    }
    
    Node* temp = new Node(info);
    temp->next = prev->next;
    prev->next = temp;
    
}


void LinkedList::insertAtTail(int info){
    
    if(head == NULL){
        insertAtHead(info);
        return;
    }
    
    Node* tail = head;
    while(tail->next != NULL){
        tail = tail -> next;
    }
    
    tail -> next = new Node(info);
}

void LinkedList::print(){
    
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp  = temp -> next;
    }
    cout<<endl;
}

void LinkedList::deleteHead(){
    Node* temp = head;
    head = temp->next;
    delete temp;
}

void LinkedList::deleteTail(){
    
    if(head == NULL){
        return;
    }
    
    Node* tail = head;
    Node* prev = NULL;
    while(tail->next != NULL){
        prev = tail;
        tail = tail->next;    
    }
    
    prev->next = NULL;
    delete tail;
}

void LinkedList::deleteMid(int pos){
    
    if(pos == 0){
        deleteHead();
        return;
    }
    
    Node* temp = head;
    Node* prev = NULL;
    while(pos>0 && (temp->next != NULL)){// to check whether the pos is within the length of LinkedList
        prev = temp;
        temp = temp -> next;
        pos--;
    }
    
    prev->next = temp->next;
    delete temp;
}

bool LinkedList::search(int key){
 Node* temp = head;
 while(temp != NULL ){
     if(temp->data == key){
         return true;
     }
     temp = temp->next;
 }
 return false;
}

void LinkedList::takeInput(){
    int a ;
    cin>>a;
    while(a != -1){
        insertAtHead(a);
        cin>>a;
    }
}
//operator overloading
void operator>>(istream &is, LinkedList& obj){
    obj.takeInput();   
}
void operator<<(ostream &os, LinkedList& obj){
    obj.print();   
}

int main(){
    
    LinkedList ll;
    
    ll.insertAtHead(3);ll.insertAtHead(7);ll.insertAtHead(34);ll.insertAtHead(13);
    ll.InsertInMiddle(2,3);ll.InsertInMiddle(1,2);ll.InsertInMiddle(2,3);ll.InsertInMiddle(5,3);
    // ll.insertAtHead(3);ll.insertAtHead(7);ll.insertAtHead(34);ll.insertAtHead(13);
    // ll.InsertInMiddle(2,3);ll.InsertInMiddle(1,2);ll.InsertInMiddle(2,3);ll.InsertInMiddle(5,3);
    ll.deleteHead();
    // ll.deleteHead();ll.deleteHead();
    ll.deleteTail();
    // ll.deleteTail();ll.deleteTail();
    ll.deleteMid(3);
    // ll.deleteMid(1);ll.deleteMid(5);
    // ll.deleteMid(43);
    // ll.deleteMid(12);
    ll.print();    
    cout<<ll.search(12)<<endl;
    
    cout<<endl;
    // ll.takeInput();
    ll.print();
    //cin>>ll;
    cout<<ll;
    return 0;
}






















