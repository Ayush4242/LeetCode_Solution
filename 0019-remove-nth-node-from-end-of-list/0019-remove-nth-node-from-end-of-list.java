/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode removeNthFromEnd(ListNode head, int n) {
        int c=0;
        ListNode temp=head;
        while(temp!=null){
            c++;
            temp=temp.next;
        }
        if(n==1 && c==1){
            return head=head.next;
        }
        ListNode slow=head;
        ListNode fast=head;
        int val=n;
        while(val>0){
            fast=fast.next;
            val--;
        }
        if(n==c){
            return head.next;
        }
        while(fast.next!=null){    
            fast=fast.next;
            slow=slow.next;
        }
        
        if(slow.next!=null){
            slow.next=slow.next.next;
        }
        
        return head;
    }
}