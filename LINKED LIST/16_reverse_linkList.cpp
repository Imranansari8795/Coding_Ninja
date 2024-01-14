#include<iostream>

using namespace std;

class Node{

    public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        next = NULL;
    }


};

class LinkedList{
    public:
    Node * head;
    LinkedList()
    {
        head = NULL;
    }

void Insert_At_head(int data)
{
     Node * new_Node = new Node(data);
        if(head == NULL){
            head = new_Node;
            return;
        }

        new_Node -> next = head;
        head = new_Node;
}
void display()
    {
        Node * temp = head;
        while(temp != NULL)
        {
            cout<<temp->data<<" -> ";
            temp = temp ->next;
        }
        cout<<"NULL"<<endl;
    }
};
void reverseLinkedList(Node * &head)
{
    if(head == NULL)
    {
        return;
    }
    Node * curr = head;
    Node * prev = NULL;
    // Node * next; 

    while(curr != NULL)
    {
        Node * next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        
    }
    head = prev;

}
int main()
{
        LinkedList ll;
        
        ll.Insert_At_head(4);
        ll.display();

        ll.Insert_At_head(5);
        ll.display();
        ll.Insert_At_head(6);
        ll.display();
        ll.Insert_At_head(9);
        ll.display();
        ll.Insert_At_head(12);
        ll.display();
        reverseLinkedList(ll.head);
        ll.display();
}