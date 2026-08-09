/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution
{
public:
    bool hasCycle(ListNode *head)
    {
        unordered_map<ListNode*, int> mp;
        ListNode *temp = head;
        int i;
        while(temp != NULL)
        {
            i = 1;
            if(mp.find(temp) != mp.end()) return true;
            mp[temp] = i;
            i++;
            temp = temp->next;
        }
        return false;
    }
};