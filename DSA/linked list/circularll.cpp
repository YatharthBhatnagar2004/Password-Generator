#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *next;
    node(int d)
    {
        data = d;
        next = NULL;
    }
};
void print(node *head)
{
    if (head == NULL)
    {
        return;
    }
    cout << head->data << " ";
    for (node *p = head->next; p != head; p = p->next)
    {
        cout << p->data << " ";
    }
    cout << endl;
}
node *inserthead1(node *head, int x)
{
    node *temp = new node(x);
    if (head == NULL)
    {
        temp->next = temp;
    }
    else
    {
        node *curr = head;
        while (curr->next != head)
        {
            curr = curr->next;
        }
        curr->next = temp;
        temp->next = head;
    }
    return temp;
}
node *inserthead2(node *head, int x)
{
    node *temp = new node(x);
    if (head == NULL)
    {
        temp->next = temp;
        return temp;
    }
    else
    {
        temp->next = head->next;
        head->next = temp;
        int t = head->data;
        head->data = temp->data;
        temp->data = t;
        return head;
    }
}
node *insertend(node *head, int x)
{
    node *temp = new node(x);
    if (head == NULL)
    {
        temp->next = temp;
        return temp;
    }
    else
    {
        temp->next = head->next;
        head->next = temp;
        int t = head->data;
        head->data = temp->data;
        temp->data = t;
        return temp;
    }
}
node *deletehead(node *head)
{
    if(head==NULL){
        return NULL;
    }
    if(head->next==head){
        delete head;
        return NULL;
    }
    head->data = head->next->data;
    node *temp=head->next;
    head->next = head->next->next;
    delete (temp);
    return head;
}
node *deletek(node *head,int k){
    if(head==NULL){
        return head;
    }
    if(k==1){
        return deletehead(head);
    }
    node *curr=head;
    for(int i=0;i<k-2;++i){
        curr=curr->next;
    }
    node *temp=curr->next;
    curr->next=curr->next->next;
    delete temp;
    return head;
}

int main()
{
    node *head = new node(10);
    head->next = new node(5);
    // head->next->next = new node(20);
    // head->next->next->next = new node(15);
    // head->next->next->next->next = head;
    // head = inserthead1(head, 200);
    // head = inserthead2(head, 300);
    // head = insertend(head, 400);
    head = deletehead(head);
    // head=deletek(head,3);
    print(head);
}