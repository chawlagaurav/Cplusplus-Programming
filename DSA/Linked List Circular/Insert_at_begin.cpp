//The idea is to place the new node after the head and then interchange data of head and new node
#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node(int x)
    {
        data=x;
        next=NULL;
    }
};
Node *insertBegin(Node *head, int z)
{
    Node *temp = new Node(z);
    if(head==NULL)
    {
        temp->next = temp;
        return temp;
    }
    else
    {
        temp->next=head->next;
        head->next=temp;
        int t= head->data;
        head->data=temp->data;
        temp->data=t;
        return head;
    }
    
}
int main()
{
    int z;
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = head;
    cout<<"Enter the new number":
    cin>>z;
    insertBegin(head,z);
}




