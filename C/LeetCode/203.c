#include <stdio.h>

struct ListNode {
      int val;
      struct ListNode *next;
 };

struct ListNode* removeElements(struct ListNode* head, int val) 
{

    // 如果頭節點須刪除(換head的next到前節點則前節點變成新節點)
    struct ListNode * temp;
    while (head && head->val == val)
    {
        temp = head;
        head = head->next;
        free(temp);
    }

    struct ListNode *cur = head;
    while (cur && (temp = cur->next))
    {
        if(temp->val == val)
        {
            cur->next = temp->next;
            free(temp);
        }
        else
        {
            cur = cur->next;
        }
    }
    
    return head;
    
}