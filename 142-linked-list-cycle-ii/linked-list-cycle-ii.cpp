/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL || head->next==NULL)return 0;

        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL && fast->next != NULL){
            slow=slow->next;
            fast=fast->next->next;

            if(slow==fast){//cyccle detected
                ListNode* start=head;//new pointer lets say start checking if where start and slow meet  
                while(start!=slow){//there is the start of the cycle
                    start=start->next;
                    slow=slow->next;
                }//loop breaks when start==slow
                return start;//in end returning the start
            }
        }
        return NULL;
    }
};