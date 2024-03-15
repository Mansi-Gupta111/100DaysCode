//Linked List that is Sorted Alternatingly
#include<iostream>
using namespace std;
class Solution
{
    public:
    Node* reverse(Node*&head)
    {
        if(head==NULL || head->next==NULL)
        {
            return head;
        }
        Node*current=head;
        Node*previous=NULL;
        Node*forward=NULL;
        while(current!=NULL)
        {
            forward=current->next;
            current->next=previous;
            previous=current;
            current=forward;
        }
        return previous;
    }

    // your task is to complete this function
    void sort(Node **head)
    {
         // Code here
          if((*head)==NULL || (*head)->next==NULL)
        {
            return;
        }
        Node*temp1=(*head);
        Node*temp2=(*head)->next;
        Node*temp3=(*head)->next;
        while(temp1->next!=NULL && temp2->next!=NULL)
        {
            temp1->next=temp2->next;
            temp2->next=temp2->next->next;
            if(temp2->next!=NULL)
            {
            temp2=temp2->next;
            }
            temp1=temp1->next;
        }
        temp1->next=reverse(temp3);
    }
};