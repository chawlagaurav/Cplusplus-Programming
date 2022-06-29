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
void removedup(Node *head)
{
    Node *curr= head;
    while(curr!=NULL && curr->next!=NULL)
    {
        if(curr->data == curr->next->data)
        {
            Node *temp = curr->next;
            curr->next = curr->next->next;
            delete(temp);
        }
        curr=curr->next;
    }
}
int main()
{
    Node *head= new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    removedup(head);
}