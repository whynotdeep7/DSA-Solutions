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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        //explanation is written below
        ListNode* dummy=new ListNode(-1);//we create dummy node first so that we an ink another nodes to it
        ListNode* temp=dummy;//dummy node head;
        while(list1!=NULL&&list2!=NULL){//while lis1 and list 2 both are not NULL
            if(list1->val<=list2->val){//if list's value id less than list2 value then temp->next will be list 1 as we are linking in ascending order    
                temp->next=list1;//same as written in above line
                list1=list1->next;//moving list1 node to next;
            }
            else{
                temp->next=list2;//if list2's value is less than list 1 so we will link the next to list2's node
                list2=list2->next;//moving list2 to next node
            }
            temp=temp->next;//also moving temp to temp next node
        }

        //after full while loop complete if we have any remaining elements i.e. List1 elements >>> List2 elements,,
        //                                                                     OR List1 elements <<< List2 elements,,
        if(list1!=NULL){
            temp->next=list1;//link temp->next to that remaining
        }
        else{
            temp->next=list2;//link temp->next to that remainig node
        }
        
        ListNode* head=dummy->next;//changing the head of dummy node to dummy->next 
        delete dummy;
        return head;

        
    }
};