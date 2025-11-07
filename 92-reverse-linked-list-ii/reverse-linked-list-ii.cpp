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
private:
    void reverse(ListNode* head,ListNode* tail){
        ListNode* curr=head;
        ListNode* prev=NULL;
        ListNode* next=NULL;
        ListNode* tailnext=tail->next;
        while(curr != tailnext){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
    }
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* temp=head;
        ListNode* dummy= new ListNode(0);
        dummy->next=head;

        ListNode* slow=dummy;
        //moving slow to node just before the 'left position'
        for(int i=1;i<left;i++){
            slow=slow->next;
        }
        //fast should be point to 'left node'
        ListNode* fast=slow->next;


        //move 'fast ' to right position
        for(int i=left;i<right;i++){
            fast=fast->next;
        }

        ListNode* rightNext=fast->next;
        ListNode* rslow=slow->next;

        reverse(rslow,fast);

        slow->next=fast;
        rslow->next=rightNext;
        return dummy->next;

    }
};