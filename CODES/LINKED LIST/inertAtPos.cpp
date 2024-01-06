#include<iostream>
using namespace std;

// NODE CLASS
class Node{
    public:
    int data;
    Node* next;
    
    Node()
    {
        this->data = 0;
        this->next = nullptr;
    }
    
    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};

// PRINT FUNCTION
void print(Node* &head)
{
    Node* temp = head;
    while(temp != nullptr)
    {
        cout << temp->data <<" ";
        temp = temp->next;
    }
}

// LENGTH OF THE LINKED LIST
int lenghtOfLL(Node* head)
{
    int i = 0;
    Node* temp = head;
    while(temp != nullptr)
    {
        temp = temp -> next;
        i++;
    }
    cout<<"Length of LL is "<< i << endl<<endl;
    
    return i;
}

// INSERT AT HEAD 
void insertAtHead( Node* &head, Node* &tail, int data )
{
    
    if(head == nullptr)
    {
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    
    Node* newNode = new Node(data);
    newNode -> next = head;
    head = newNode;
    
}

// INSERT AT TAIL 
void insertAtTail( Node* &head, Node* &tail, int data )
{
    
    if(head == nullptr)
    {
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    
    Node* newNode = new Node(data);
    tail -> next = newNode;
    tail = newNode;
    
}

// INSERT AT POSITION
void insertAtPosition(Node* &head, Node* &tail, int data, int position)
{
    int size = lenghtOfLL(head);
    // CHECK THE POSITION VALUE IS WITHIN RANGE OR NOT
    if(position > size)
    {
        cout<<"The value of position is out of bound:"<<endl<<endl;
        return;
    }
    
    // IF LINKED LIST IS EMPTY
    if(head == nullptr)
    {
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    
    // IF POSITION IS == 0
    else if(position == 0)
    {
        insertAtHead(head,tail,data);
        return;
    }
    
    // IF POSITION IS LAST
    else if(position == size)
    {
        int i = 1;
        Node* prev = head;
        while( i < position)
        {
           prev = prev -> next;
           i++;
        }
        Node* newNode = new Node(data);
        prev->next = newNode;
        tail = newNode;
        return;
    }
    
    // IF POSITION IS ANY RANDOM VALUE
    else
    {
       int i = 1;
       Node* prev = head;
       while( i < position)
       {
           prev = prev -> next;
           i++;
       }
       Node* curr = prev -> next;
       Node* newNode = new Node(data);
       newNode->next = curr;
       prev->next = newNode;
    }
   
}

int main()
{
    
    Node* head = nullptr;
    Node* tail = nullptr;
    
    // insertAtHead( head ,tail, 05 );
    // insertAtHead( head ,tail, 15 );
    // insertAtHead( head ,tail, 25 );
    // insertAtHead( head ,tail, 35 );
    
    
    insertAtTail ( head ,tail, 05 );
    insertAtTail ( head ,tail, 15 );
    insertAtTail ( head ,tail, 25 );
    insertAtTail ( head ,tail, 35 );
    insertAtTail ( head ,tail, 45 );
    
    cout<<endl;
    cout<< "HEAD DATA IS: "<< head->data << endl;
    cout<< "TAIL DATA IS: "<< tail->data << endl;
    cout<<endl;
    
    insertAtPosition(head,tail,500,3);
    
    cout<<"Printing the LINKED LIST:"<<endl;
    print(head);
    
    cout<<endl;
    cout<<endl;
    cout<< "HEAD DATA IS: "<< head->data << endl;
    cout<< "TAIL DATA IS: "<< tail->data << endl;
    cout<<endl;
    
    
    
}