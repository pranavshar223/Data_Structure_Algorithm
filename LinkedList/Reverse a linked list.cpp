/*
class Node {
 public:
    int data ;
    Node *next ;

    Node(int x) {
        data = x ;
        next = NULL ;
    }
};
*/
#include<iostream>
#include<vector>

using namespace std;

class Solution {
  public:
    Node* reverseList(Node* head) {
        // code here
        if(head==NULL || head->next == NULL){
            return head;
        }
        
        Node* rev = reverseList(head->next);
        
        head->next->next = head;
        
        head->next = NULL;
        
        return rev;
    }
};