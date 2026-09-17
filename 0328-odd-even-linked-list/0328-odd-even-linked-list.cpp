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

 //thi stake sc of (n)
// class Solution {
// public:
//     ListNode* oddEvenList(ListNode* head) {
//         if(head==NULL || head->next==NULL){
//             return head;
//         }
//         ListNode*temp=head;
//         int arr[100];
//         int index=0;
        
//         while(temp!=NULL && temp->next!=NULL){
//             arr[index]=temp->val;
//             index++;
//             //all odd index add first....
//             temp=temp->next->next;
//         }
//         if(temp) arr[index]=temp->val;
//         index++;

//         temp=head->next;
//         while(temp!=NULL && temp->next!=NULL){
//             arr[index]=temp->val;
//             index++;
//             //all even index added then... 
//             temp=temp->next->next;
//         }
//         if(temp) arr[index]=temp->val;
//         index++;//if elemst areledt it i as case as temp->nxt->nxt condition has aslo a case it cause skip elemnts 
//         temp=head;
//         int i=0;
//         while(temp!=NULL){
//             temp->val=arr[i];
//             i++;
//             temp=temp->next;

//         }
//         return head;
//     }
// };
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
            if(head==NULL || head->next==NULL){
            return head;
        }
        
        ListNode*odd=head;
        ListNode*even=head->next;
        ListNode*temp1=head;//same place at odd is initialised
        ListNode*temp2=head->next;//same place at where even is initialised 
        while(even!=NULL && even->next!=NULL){
            //condition in while is for even as even is 1 step ago from  oddd as it reaches null fisrt before the odd , so we use only even condition
            odd->next=odd->next->next;
            even->next=even->next->next;
            //agge badao thenn
            odd=odd->next;
            even=even->next;
        }
        odd->next=temp2;
        return temp1;


    }
};