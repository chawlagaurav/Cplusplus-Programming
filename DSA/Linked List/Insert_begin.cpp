#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
    
};
Node *insertBegin(Node *head,int data){
        Node *temp= new Node(data);
        temp->next=head;
        return temp;
    }
int main()
{
    Node *head=NULL;
    head = insertBegin(head,10);
    cout<<head->data<<" ";
    head = insertBegin(head,20);
    cout<<head->data<<" ";
    head = insertBegin(head,30);
    cout<<head->data<<" ";

 return 0;
}