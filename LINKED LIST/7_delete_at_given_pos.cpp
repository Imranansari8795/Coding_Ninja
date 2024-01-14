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
        if(head == NULL){
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
node * deleteAtGivenPos(node * head,int pos)
{ 

 if(head == NULL)
 {
    return head;
 }  
 if(pos < 0)
 {
    return head;
 }
 if(pos == 0 && head != NULL)
 {    
    node * ml = head ->next;
    head -> next = NULL;
    delete head;
    return ml;
 } 
 int count = 0;
 node * temp = head;
 while(count < pos - 1  && temp != NULL)
 {
    temp = temp -> next;
    count++;
 }
 if(temp != NULL && temp -> next != NULL){
 node * a = temp -> next;
 temp -> next = temp -> next ->next;
 a -> next = NULL;
 delete a;
 return head;
 }
 return head;
}
void print(node * head)
{
    node * temp = head;
  while(temp != NULL)
  {
    cout<<temp ->data<<" -> ";
    temp = temp -> next;
  }
  cout<<"NULL";
  cout<<endl;
}
int main()
{
   node * head = takeInput();
   print(head);
   int pos;
   cin>>pos;
   node * store = deleteAtGivenPos(head,pos);
   print(store);


}