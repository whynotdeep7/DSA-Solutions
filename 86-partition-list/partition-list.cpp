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
    ListNode* partition(ListNode* head, int x) {
        ListNode* temp=head;

        ListNode* greater=new ListNode(-1);
        ListNode* lesser=new ListNode(-1);

        ListNode* great=greater;
        ListNode* less=lesser;

        while(temp!=NULL){
            if(temp->val>=x){
                great->next=temp;
                great=temp;
            }
            else if(temp->val<x){
                less->next=temp;
                less=temp;
            }
            temp=temp->next;
        }
        great->next=nullptr;
        less->next=greater->next;

        ListNode* newhead=lesser->next;
        delete greater;
        delete lesser;

        return newhead; 
    }
};