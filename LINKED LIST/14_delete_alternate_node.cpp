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
    Node *head;
    LinkedList()
    {
        head = NULL;
    }

    void Insert_At_end(int data)
    {
        Node * New_node  = new Node(data);
        if(head == NULL)
        {
            head = New_node;
            return;
        }

    Node * temp = head;

        while(temp -> next != NULL)
        {
            temp = temp ->next;
        }
        temp->next = New_node;

    }


void Display()
{
    Node * temp = head;

    while(temp != NULL)
    {
        cout<<temp->data<<" -> ";
        temp = temp ->next;
    }cout<<"NULL"<<endl;
}
};

void deleteAlternateNode(Node * &head)
{
    Node * curr_node = head;

    while(curr_node != NULL && curr_node ->next != NULL)
    {
        Node *temp = curr_node->next;
        curr_node ->next = curr_node->next->next;
        free(temp);
        curr_node = curr_node->next;
    }


}
 void deleteAtHead(Node * &head)
 {
    if(head == NULL)
    {
        return;
    }
    Node* temp = head;
    head = head ->next;
    free(temp);
 }
int main()
{
    LinkedList ll;
    ll.Insert_At_end(4);
    ll.Display();
    ll.Insert_At_end(6);
    ll.Display();
    ll.Insert_At_end(5);
    ll.Display();
    ll.Insert_At_end(2);
    ll.Display();
    deleteAtHead(ll.head);
    ll.Display();
    deleteAlternateNode(ll.head);
    ll.Display();


}

