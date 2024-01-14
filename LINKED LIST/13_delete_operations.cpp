#include<iostream>

using namespace std;

class Node{
    public:
    int data;
    Node* next;

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
        Node * new_node = new Node(data);
        if(head == NULL)
        {
            head = new_node;
            return;
        }
        Node* temp = head;
        while(temp ->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new_node;
        temp = new_node;
        temp->data = data;
    }


    void delete_At_head()
    {
        if(head == NULL)
        {
            return;
        }
    Node * temp = head;
    head = head ->next;
    free(temp);
    }

void delete_At_tail()
{
    Node * temp = head;
    Node * deleteNode = head;
    while(temp ->next->next != NULL)
    {
        temp = temp ->next;
    }
    deleteNode = temp ->next;
    temp->next = NULL;
    free(deleteNode);

}
void delete_At_given_pos(int k)
{
    int currPos = 0;
    Node * temp = head;
    Node *deleteNode = head;
    if(k == 0)
    {
        delete_At_head();
        return;
    }
    while(currPos != (k - 1))
    {
        temp = temp ->next;
        currPos++;
    }
    deleteNode = temp ->next;
    temp->next = temp ->next ->next;
    free(deleteNode);

}
 void display()
{
    Node * temp = head;

    while(temp != NULL)
    {
        cout<<temp ->data<<" -> ";
        temp = temp->next;

    }cout<<"NULL"<<endl;
}

};

int main()
{
 LinkedList ll;
 ll.Insert_At_end(5);
 ll.display();
 ll.Insert_At_end(6);
 ll.display();
 ll.Insert_At_end(9);
 ll.display();
 ll.Insert_At_end(16);
 ll.display();
 ll.Insert_At_end(20);
 ll.display();
 ll.delete_At_head();
 ll.display();

 ll.delete_At_tail();
 ll.display();
 cout<<"new Inserted element"<<endl;
 ll.Insert_At_end(76);
 ll.Insert_At_end(12);
 ll.display();
 ll.delete_At_given_pos(2);
 ll.display();
 ll.delete_At_given_pos(3);
 ll.display();
 ll.delete_At_given_pos(1);
 ll.display();

}