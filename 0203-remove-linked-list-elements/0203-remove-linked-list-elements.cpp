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
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* dummyNode = new ListNode(-1);
        dummyNode->next = head;
        ListNode* PreNode = dummyNode;
        ListNode* CurrentNode = head;
        ListNode* nextNode = nullptr;

        while (CurrentNode != nullptr){
            if (CurrentNode->val == val){
                nextNode = CurrentNode->next;
                PreNode->next = nextNode;
            }

            else{
                PreNode = PreNode->next; 
            }

            CurrentNode = CurrentNode->next;
        }

        return dummyNode->next;
    }
};