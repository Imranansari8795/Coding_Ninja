#include<iostream>

using namespace std;

class Node{
    public:
    int data;
    Node * next;
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

class LinkedList{

    public:
    Node*head;

    LinkedList()
    {
        head = NULL;
    }
    void insertAtTail(int data)
    {

        Node* new_Node = new Node(data);
        if(head == NULL)
        {
            head = new_Node;
            return;
        }

        Node* temp = head;

        while(temp ->next != NULL)
        {
            temp = temp ->next;
        }
        temp ->next = new_Node;

    }

    void InsertAtHead(int data)
    {
        Node * new_Node = new Node(data);
        if(head == NULL){
            head = new_Node;
        }

        new_Node -> next = head;
        head = new_Node;
    }
    void insertAtKthPossition(int data,int k)
    {
        if(k == 0)
        {
            InsertAtHead(data);
            return;
        }
        Node * new_Node = new Node(data);
        int curr_pos = 0;
        Node *temp = head;
        while(curr_pos != k - 1)
        {
            if(temp ->next == NULL)
            {
                return;
            }
            temp = temp ->next;
            curr_pos++;
        }
        
        new_Node ->next = temp->next;
        temp->next = new_Node;
    }

    void UpdateAtgivenPosition(int data,int k)
    {
        Node * temp = head;
        int curr_pos = 0;

        while(curr_pos != k)
        {
            if(temp -> next == NULL)
            {
                cout<<"Position out of bound"<<endl;
                return;
            }
            temp = temp ->next;
            curr_pos++;
        }
        temp->data = data;

    }
    void Display()
    {
        Node * temp = head;

        while(temp != NULL)
        {
            cout<<temp->data<<"->";
            temp = temp ->next;
        }
        cout<<"NULL"<<endl;
    }
};
int main()
{
  LinkedList ll;
  ll.insertAtTail(5);
//   ll.insertAtTail(6);
//   ll.insertAtTail(6);

  ll.Display();
  ll.InsertAtHead(7);
  ll.Display();
  ll.insertAtKthPossition(4,2);
  ll.Display();
  ll.UpdateAtgivenPosition(9,5);
  ll.Display();
}