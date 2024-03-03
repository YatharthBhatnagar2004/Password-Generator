#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *next;
    node(int x)
    {
        data = x;
        next = NULL;
    }
};
void print(node *head)
{
    // node *curr = head;
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}
void printr(node *head)
{
    if (head == NULL)
    {
        return;
    }
    cout << head->data << " ";
    printr(head->next);
}
int search(node *head, int x)
{
    int pos = 1;
    node *curr = head;
    while (curr != NULL)
    {
        if (curr->data == x)
        {
            return pos;
        }
        curr = curr->next;
        pos++;
    }
}
int pos = 1;
int searchr(node *head, int x)
{
    if (head == NULL)
    {
        return -1;
    }
    if (head->data == x)
    {
        return 1;
    }
    else
    {
        int res = searchr(head->next, x);
        if (res == -1)
        {
            return -1;
        }
        else
        {
            return res + 1;
        }
    }
}
node *insertbegin(node *head, int x)
{
    node *temp = new node(x);
    temp->next = head;
    return temp;
}
node *insertend(node *head, int x)
{
    node *temp = new node(x);
    if (head == NULL)
    {
        return temp;
    }
    {
        node *curr = head;
        while (curr->next != NULL)
        {
            curr = curr->next;
        }
        curr->next = temp;
        return head;
    }
}
node *deletefront(node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    node *temp = head->next;
    delete head;
    return temp;
}
node *delend(node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    if (head->next == NULL)
    {
        delete head;
        return NULL;
    }
    node *curr = head;
    while (curr->next->next != NULL)
    {
        curr = curr->next;
    }
    delete curr->next;
    curr->next = NULL;
    return head;
}
void insert(node *head, int pos, int x)
{
    node *curr = head;
    int a = 1;
    while (a < pos - 1)
    {
        curr = curr->next;
        a++;
    }
    node *temp = new node(x);
    temp->next = curr->next;
    // node *temp1 = curr->next->next;
    curr->next = temp;
}
node *sortedinser(node *head, int x)
{
    node *temp = new node(x);
    if (head->data > x)
    {
        temp->next = head;
        return temp;
    }
    node *curr = head;
    while (curr->next != NULL && curr->next->data < x)
    {
        cout << 1;
        curr = curr->next;
    }

    temp->next = curr->next;
    curr->next = temp;
    return head;
}
void middle(node *head)
{
    if (head == NULL)
    {
        return;
    }
    node *slow = head;
    node *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    cout << (slow->data) << endl;
    return;
}
void printnth(node *head,int n){
    if(head==NULL){
        return;
    }
    node *first=head;
    for(int i=0;i<n;++i){
        if(first==NULL){
            return;
        }
        first=first->next;
    }
    node *second=head;
    while(first!=NULL){
        second=second->next;
        first=first->next;
    }
    cout<<second->data;
}
node *revesre(node *head)
{
    node *curr = head;
    node *prev = NULL;
    while (curr != NULL)
    {
        node *next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}
node *recurrev(node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    node *rest_head = recurrev(head->next);
    node *rest_tail = head->next;
    rest_tail->next = head;
    head->next = NULL;
    return rest_head;
}
node *rev(node *curr, node *prev)
{
    if (curr == NULL)
    {
        return prev;
    }
    node *next = curr->next;
    curr->next = prev;
    return rev(next, curr);
}
void remdupli(node *head)
{
    node *curr = head;
    while (curr != NULL || curr->next != NULL)
    {
        if (curr->data == curr->next->data)
        {
            node *temp = curr->next;
            curr->next = curr->next->next;
            delete (temp);
        }
        else
        {
            curr = curr->next;
        }
    }
}
int main()
{

    // node *head = NULL;
    node *head = new node(10);
    node *temp1 = new node(30);
    node *temp2 = new node(50);
    head->next = temp1;
    temp1->next = temp2;
    head->next->next->next = new node(70);
    // cout << searchr(head, 10);
    // head = insertbegin(head, 50);
    head = insertbegin(head, 0);
    // head = insertend(head, 40);
    // head = insertend(head, 50);
    // head = insertend(head, 60);
    // head = insertend(head, 500);
    // head = insertend(head, 40);
    // head = deletefront(head);
    // head = delend(head);
    // insert(head, 1, 20);
    // head = sortedinser(head, 80);
    // print(head);
    // cout << endl;
    head = revesre(head);
    print(head);
    cout << endl;
    // head = recurrev(head);
    print(rev(head, NULL));
    cout << endl;
}
