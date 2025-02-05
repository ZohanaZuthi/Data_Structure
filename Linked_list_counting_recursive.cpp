#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<bits/stdc++.h>
#define f(a,n,i) for(int i=a;i<n;i+=1)
using namespace std;
const int N=1e5+10;
#define YES cout<<"YES"<<endl
#define NO cout<<"NO"<<endl
#define el endl


#define pb push_back
#define ff first
#define ss second
typedef long long int ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<ld, ld> pld;
const int INF = 1e9;
const ll LLINF = 1e18;
const int MOD = 1e9 + 7;

struct Node{
    int data;
    struct Node*next;
}*first;
// for directly accessing there we created a pointer
// creating linked list 
void create(int A[],int n)
{
    int i;
    struct Node *t,*last;
    first=(struct Node*)malloc(sizeof(struct Node));
    first->data=A[0];
    first->next=NULL;
    last=first;

    for(int i=1;i<n;i++)
    {
        t=(struct Node*)malloc(sizeof(struct Node));
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
// finding the length of a linked list
int Rcount(struct Node*p)
{
    if(p!=NULL)
       return Rcount(p->next)+1;
    else return 0;
}
int main(int argc, char const *argv[])
{
    int A[]={3,5,7,10,15};
    create(A,5);
    cout<<Rcount(first)<<endl;
    
    return 0;
}
