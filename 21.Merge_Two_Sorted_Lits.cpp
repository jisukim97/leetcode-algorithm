/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
    {
        ListNode *sorted;
        ListNode *ptr;

        //initialize
        if (l1 == nullptr)
            return l2;
        else if (l2 == nullptr)
            return l1;

        if (l1->val <= l2->val)
        {
            sorted = l1;
            l1 = l1->next;
        }
        else
        {
            sorted = l2;
            l2 = l2->next;
        }

        ptr = sorted;

        while (1)
        {
            if (l1 == nullptr)
            {
                ptr->next = l2;
                break;
            }
            else if (l2 == nullptr)
            {
                ptr->next = l1;
                break;
            }

            if (l1->val <= l2->val)
            {
                ptr->next = l1;
                ptr = ptr->next;
                l1 = l1->next;
            }
            else
            {
                ptr->next = l2;
                ptr = ptr->next;
                l2 = l2->next;
            }
        }

        return sorted;
    }
};