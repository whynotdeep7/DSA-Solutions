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


 //got TLE with for loop approach
 //
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == NULL || head->next == NULL) return head;
        
        //calculating length
        ListNode* temp=head;
        int length=1;
        while(temp->next!=NULL){
            length++;
            temp=temp->next;
        }
        //connecting last node to first
        temp->next=head;

        k=k%length;//when k > length {out of bound}
        int end=length-k;
        while(end-- >0){
            temp=temp->next;
        }
        head=temp->next;
        temp->next=NULL;
        return head;
    }
};