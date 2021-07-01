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
        ListNode *nw=head;
        int cnt=0;
        while(nw!=NULL){
            nw=nw->next;
            cnt++;
        }
        nw=head;
        cnt=cnt/2;
        while(cnt--)
            nw=nw->next;
        
        return nw;
    }
};
