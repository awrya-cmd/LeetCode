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
    ListNode* deleteMiddle(ListNode* head)
    {
        //edge case handling, zero or one node only. deleteing middle leaves nothing.
        if(head == nullptr || head->next == nullptr)
            return nullptr;
        ListNode* temp = head;
        int n = 0;
        while(temp != nullptr)
        {
            n++;
            temp = temp->next;
        }
        int count = 0;
        temp = head;
        while(count != n/2 - 1)
        {
            count++;
            temp = temp->next;
        }
        temp->next = temp->next->next;
        return head;
    }
};