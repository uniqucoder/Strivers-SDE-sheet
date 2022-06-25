#include <bits/stdc++.h> 
/************************************************************

    Following is the linked list node structure.
    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

************************************************************/

Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    // Write your code here.
    if(first == NULL)
    {
        return second;
    }
    if(second == NULL)
    {
        return first;
    }
    Node<int>* temp = new Node<int>(-1);
    Node<int>* head1 = temp;
    while(first != NULL && second != NULL)
    {
        if(first -> data  <= second -> data )
        {
            temp ->next = first;
            first = first -> next;
        }
        else
        {
            temp -> next = second;
            second = second -> next;
        }
        
        temp = temp->next;
    }
    
    
    if(first != NULL)
    {
        temp -> next = first;
    }
    if(second != NULL)
    {
        temp -> next = second;
    }
    
    return head1->next;
 
}
