#include <iostream>
#include <string.h>
// my library externally
#include".\structlib.h" 
using namespace std;

void insertattail(node *&tail, int d)
{
    node *temp = new node(d);
    tail->next = temp;
    tail = tail->next; // tail=temp;
}
void insertathead(node *&head, int d)
{
    node *temp = new node(d);
    temp->next = head;
    head = temp;
}
void insertatposition(node*&head,node*&tail,int position,int d){
   node*temp=head;
   int cnt=1;
//    starting position
if(position==1){
    insertathead(head,d);
    return;
}
   while(cnt<position-1){
    temp=temp->next;
    cnt++;
   }
// ending position
if(temp->next==NULL){
    insertattail(tail,d);
    return;
}
node* nodetoinsert =new node(d);
nodetoinsert->next=temp->next;
nodetoinsert->next=temp->next;
temp->next=nodetoinsert;
}
void  deletion(node*&head,node*&tail,int position){
node*temp =head;
int cnt=1;
while(cnt<position){
temp =temp->next;
cnt++;
}
// temp->next=



}
void printlinklist(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {

        cout << temp->data << " ";
        // link = link->next;
        // cout<<temp->next<<endl;
        temp = temp->next;
    }
}

int main()
{
    node *link = new node(2);
    node *head = link;
    node *tail = link;
    // insertathead(head,5);
    // insertathead(head,3);
    insertattail(tail, 3);
    insertattail(tail, 4);
    printlinklist(head);
    cout<<endl;
    insertattail(tail, 10);
    insertatposition(head,tail,3,89);
    deletion(head,tail,2);
    printlinklist(head);

    cout<<" tail:"<<tail->data;
    cout<<"  head:"<<head->data;
}
