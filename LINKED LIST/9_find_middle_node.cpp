#include <iostream>
using namespace std;

class node {
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
     while(data != -1){

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
 node *  mid(node * head){
    node * temp = head;
if(temp == NULL)
{
    return temp;
}
    node * slow = temp;
    node * fast = temp -> next;

while(fast != NULL && fast -> next != NULL)
{
    slow  = slow -> next;
    fast = fast -> next -> next;
}
if(fast != NULL)
{
    return slow -> next;
}

   return slow;
}
int main()
{
    node * n1 = takeInput();
    node * store = mid(n1);
    if(store != NULL){
    cout<<store ->data<<endl;
    }
}

