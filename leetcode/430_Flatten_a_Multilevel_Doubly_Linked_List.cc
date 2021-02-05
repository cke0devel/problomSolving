/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {
        if(head == nullptr) {
            return nullptr;
        }
        
        for(Node *node = head; node!=nullptr; node=node->next) {
            if(node->child) {
                Node *nextNode = node->next;
                
                flatten(node->child);
                node->next = node->child;
                node->child->prev = node;
                node->child = nullptr;
                
                while(node->next != nullptr) node = node->next;
                node->next = nextNode;
                nextNode->prev = node;
            }
        }
        
        return head;
    }
};
