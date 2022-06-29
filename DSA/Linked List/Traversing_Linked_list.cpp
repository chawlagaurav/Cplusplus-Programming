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

void printlinked(Node *head){
Node *curr = head;
while(curr!=NULL){
    cout<<(curr->data)<<" ";
    curr= curr->next;
}

/* Recursive Solution
if(head==NULL)
{
    return ;
}
cout<<head->data;
printlinked(head->next);
*/

}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(30);
    head->next->next = new Node(40);
    head->next->next->next = new Node(50);
    printlinked(head);
 return 0;
}