#include<iostream>

using namespace std;

class node
{
    public:
    int data;
    node *next;

    node(int data)
    {
        this -> data = data;
        next = NULL;
    }

};
node *takeInput()
{
    int data;
    node *next;
    // cout<<"first Data"<<endl;
    cin>>data;
    
    node* head = NULL;
    node * tail = NULL;
    // if(data == -1)
    // {
    //     // cout<<"hello"<<endl;
    //     head = 0;
    //     return head;
    // }
    while(data != -1)
    {

        node *newnode = new node(data);
    
        if(head == NULL)
        {
         head = newnode;
         tail = newnode;
        }

        else{
              tail ->next = newnode;
              tail = newnode;
               
        }
        // cout<<"rest"<<endl;
        cin>>data;
    }
   
   return head;
}
void print(node * head)
{
   node * temp = head;

   while(temp != NULL)
   {
      cout<<temp ->data<<" ";
      temp = temp->next;
   }
}

int main()
{
    node *head = takeInput();
    print(head);

}