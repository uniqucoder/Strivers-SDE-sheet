#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/
int getLen(LinkedListNode<int> *head)
{
    LinkedListNode<int> *temp = head;
    int len=0;
    while(temp != NULL)
    {
        len++;
        temp = temp -> next;
    }
    
    return len;
}
LinkedListNode<int>* removeKthNode(LinkedListNode<int> *head, int K)
{
    // Write your code here.
    if(head == NULL || K==0)
    {
        return head;
    }
    LinkedListNode<int>* curr = head;
    LinkedListNode<int>* prev = NULL;;
    
    int len = getLen(head);
    int t = len - K;
    
    while(t)
    {
        prev = curr;
        curr = curr -> next;
        t--;
    }
    
    if(prev != NULL)
    {
        prev->next = curr ->next;
    }
    else
    {
        head = head -> next;
    }
    
    return  head;
    
    
    
    
}
