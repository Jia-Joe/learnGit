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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    	int v1,v2,ca=0;
    	ListNode *p1 = l1, *p2 = l2, *hd=new ListNode(-1), *pt=hd;
    	
    	while(p1!=NULL||p2!=NULL){
    	    int v1=p1==NULL? 0:p1->val;
    	    int v2=p2==NULL? 0:p2->val;
    	    int sum=v1+v2+ca;
    	    ca=sum/10;
    	    pt->next=new ListNode(sum%10);
    	    pt=pt->next;
    	    if(p1!=NULL) p1=p1->next;
    	    if(p2!=NULL) p2=p2->next;
    	}
    	if(ca==1)
    	    pt->next=new ListNode(1);
    	return hd->next;
    
    }
};