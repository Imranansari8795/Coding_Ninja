#include<iostream>

using namespace std;

class node 
{
    public:

    int data;
    node * next;
    node(int data)
    {
        this -> data = data;
        next = NULL;

    }


};
  


  node * takeInput()
  {
    int data;
    cin>>data;
    node * head = NULL;
    node * tail = NULL;

    while(data != -1)  
      {
        node * node1 = new node(data);
        if(head == NULL)
        {
            head = node1;
            tail = node1;
        }
        else{
            tail -> next = node1;
            tail = node1;
        }
        cin>>data;
    }
    return head;
  }

void print(node * head)
{
    node * temp = head;
    while(temp != NULL)
    {
        cout<<temp -> data <<" -> ";
        temp = temp ->next;
    }
    cout<<"NULL"<<endl;
}

int length(node * head)
{
    if(head == NULL)
    {
        return 0;
    }
    int len = 1 + length(head -> next);
    return len;
}
int main()
{
    node * head = takeInput();

    print(head);
    cout<<length(head)<<endl;
}