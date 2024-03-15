//Delete without head pointer
#include<iostream>
using namespace std;
class Solution
{
    public:
    //Function to delete a node without any reference to head pointer.
    void deleteNode(Node *del_node)
    {
       // Your code here
        del_node->data = del_node->next->data;
        Node* detached_node{del_node->next};
        del_node->next = del_node->next->next;
        
        delete detached_node;
    }

};
