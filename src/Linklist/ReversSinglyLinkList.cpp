#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <math.h>
#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <queue>
#include <stack>
#include <vector>
#include <map>
#include <set>
#include <functional>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>
#include <bitset>
#include <complex>

using namespace std;

typedef long long LL;
typedef pair<LL, LL> PL;
typedef vector<LL> VL;
typedef vector<PL> VPL;
typedef vector<VL> VVL;

typedef pair<int, int> PI;
typedef vector<int> VI;
typedef vector<PI> VPI;
typedef vector<vector<int>> VVI;
typedef vector<vector<PI>> VVPI;

typedef long double LD;
typedef pair<LD, LD> PLDLD;

typedef complex<double> CD;
typedef vector<CD> VCD;

typedef vector<string> VS;
#define P pop_back
#define MP make_pair
#define PB push_back
#define F first
#define S second
#define LB lower_bound
#define UB upper_bound

#define sz(x) ((int)x.size())
#define LEN(x) ((int)x.length())
#define ALL(x) begin(x), end(x)
#define RSZ resize
#define ASS assign
#define REV(x) reverse(x.begin(), x.end());

#define fr(i, a, b) for (int i = (a); i < (b); i++)
#define fr1(i, a) for (int i = 0; i < (a); i++)
#define FORd(i, a, b) for (int i = (b)-1; i >= (a); i--)
#define F0Rd(i, a) for (int i = (a)-1; i >= 0; i--)
#define trav(a, x) for (auto &a : x)

// =--------------------------------------------Rev-Linkedlist------------------------------------------------------=

class node
{
public:
    int data;
    node *next;
    node(int x) : data(x), next(nullptr) {}
};

// traversing in singly linked list
void TraverseLink(node *&head){
    node*temp=head;

    while (temp!=nullptr)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    
}

        //  NULL  <- H   <-1  <- 2 <- 3 <-  4;                 Recursive reverse

 void RecursiveRev(node*&head,node *curr,node*prev){

   if(curr==NULL){
     head=prev;
    return;
    }
   curr->next=prev;
    node*forward=curr->next;
   RecursiveRev(head,forward, curr);
   curr->next=prev;

 }  
        //  NULL  <- H   <-1  <- 2 <- 3 <-  4;                  iterative reverse

node* Reversing(node*&head){

    node*curr=head;
    node*prev=NULL;
    node*forw=curr->next;

    while(curr!=NULL){
        forw=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forw;
    }
    head=prev;
    return prev;

}

int main()
{
    node *head = new node(1);
    head->next=new node(2);
    head->next->next=new node(3);
    head->next->next->next=new node(4);
    cout<<"Before Reversing: "<<endl;

    // TraverseLink(head);
    // Reversing(head);        // pass by reference
    cout<<"\nAfter Reversing: "<<endl;

    node *curr=head;
    node *prev=NULL;
    // node *ans=
    RecursiveRev(head,curr,prev);  
    TraverseLink(head); 


}
