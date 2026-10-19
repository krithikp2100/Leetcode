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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *h=NULL;
         ListNode *t=h;
        ListNode *temp1=l1;
        ListNode *temp2=l2;
        int sum,cary=0;
            while(temp1!=NULL||temp2!=NULL||cary!=0){
                sum=cary;
                if(temp1!=NULL){
                    sum+=temp1->val;
                    temp1=temp1->next;
                }
                if(temp2!=NULL){
                    sum+=temp2->val;
                    temp2=temp2->next;
                }
                cary=sum/10;
                int digit=sum%10;
                if(t==NULL){
                    ListNode *n=new ListNode;
                    n->val=digit;
                    h=n;
                    t=n;
                }else{
                     ListNode *n=new ListNode;
                     n->val=digit;
                     t->next=n;
                     t=t->next;

                }


            }
            return h;



    }
    
};
