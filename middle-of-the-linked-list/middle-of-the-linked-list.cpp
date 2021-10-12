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
    ListNode* middleNode(ListNode* head) {
        ListNode *curr= head;
        int len=0;
        while(curr!=NULL){
            len++;
            curr= curr->next;
        }
        curr= head;
        int i=0;
        while(i< len/2){
            curr= curr->next;
            i++;
        }
        return curr;
    }
};