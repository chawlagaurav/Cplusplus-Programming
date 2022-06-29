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
Node *insertAt(Node *head,int y)
{
    Node *temp = new Node(y);
    if(head==NULL){
        return temp;
    }
    if(y<head->data){
        temp->next=head;
        return temp;
    }
    Node *curr= head;
    while(curr!=NULL && (curr->next->data)<y)
    {
        curr=curr->next;
    }
    temp->next=curr->next;
    curr->next=temp;
    return head;
}
void printList(Node *head){
        Node *curr=head;
        while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
        }
}
int main()
{
    Node *head = new Node(10);
    head->next= new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    insertAt(head,25);
    printList(head);
}