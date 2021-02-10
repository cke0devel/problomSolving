/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head == nullptr) {
            return nullptr;
        }
        
        map<Node*, Node*> m;
        
        Node newHead(0);
        Node *ptr = &newHead;
        
        for(Node *node=head; node!=nullptr; node=node->next) {
            auto it = m.find(node);
            
            if(it != end(m)) {
                ptr->next = it->second;
            } else {
                ptr->next = new Node(node->val);
                m[node] = ptr->next;
            }
            
            it = m.find(node->random);
            if(it != end(m)) {
                ptr->next->random = it->second;
            } else if(node->random) {
                ptr->next->random = new Node(node->random->val);
                m[node->random] = ptr->next->random;
            }
            
            ptr = ptr->next;
        }
        
        return newHead.next;
    }
};
