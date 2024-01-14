#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node*next;

node(int data)
{
    this -> data = data;
    next = NULL;
}
};

void print(node * head)
{
    
    // if we want to print linked list twice then we have to store head in another variable

    // node * temp = head; 
    while(head != NULL)
    {
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
    // while(head != NULL)
    // {
    //     cout<<head->data<<" ";
    //     head = head->next;
    // }
}
int main()
{

    //  statically


    // node n1(3);
    // node n2(8);
    // n1.next = &n2;

    // cout<<n1.data<<" "<<n1.next -> data<<endl;


//     node n1(6);
//    node *head = &n1;
//    node n2(56);
//    n1.next = &n2;
//    cout<<head->data<<" "<<head ->next ->data<<endl;


// dynamically



// node *n1 = new node(34);
// node *n2 = new node(345);

// n1 -> next = n2;

// cout<<n1 ->data<<" "<<n1->next->data<<endl;



node n5(456);
node * head = &n5;

node n6(45);
node n7(33);
node n8(44);
node n9(12);
 n5.next = &n6;
 n6.next = &n7;
 n7.next = &n8;
 n8.next = &n9;

// cout<<head->data<<" "<<head->next->data<<" "<<head->next->next->data<<" "<<head->next->next->next->data<<" "<<head->next->next->next->next->data<<endl;

print(head);
print(head);
print(head);



}