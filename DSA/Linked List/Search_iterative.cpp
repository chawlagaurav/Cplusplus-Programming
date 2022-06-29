#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node(int x){
        data=x;
        next=NULL;
    }
};
int searchite(Node *head, int key)
{
    Node *curr = head;
    int count=1;
    while(curr!=NULL){
        if(curr->data== key){
            return count;
        }
        else{
         count++;
        curr=curr->next;
        }
        
    }
    return -1;
}
int main()
{
    int key;
    Node *head= new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    cout<<"Enter the key to search:";
    cin>>key;
    cout<<searchite(head,key);
}