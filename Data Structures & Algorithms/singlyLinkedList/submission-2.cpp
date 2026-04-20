class Node {
    public:
        int val;
        Node* next;
    
        
        Node(int val) {
            this->val = val;
            this->next = NULL;
        }
    
        
};

class LinkedList {
    Node* head;
    Node* tail;
public:
    LinkedList() {
     head = tail = NULL;

    }

    int get(int index) {
       
       Node* temp = head;
       for(int i =0;i<index;i++){
       if(temp==NULL){
        return -1;
       }
       
       temp= temp->next;
        
       }  
       if (temp == nullptr) {
        return -1; // index out of bounds
    }
       return temp->val;

    }

    void insertHead(int val) {
        Node* newNode = new Node(val);

        if(head==NULL){
            head = tail = newNode;
            return;
        }
       
            newNode->next = head;
            head = newNode;
        
        
    }
    
    void insertTail(int val) {
       

       if(head==NULL){
        insertHead(val);
        return;
       }
        
       
        Node* newNode = new Node(val);
          tail->next = newNode;
          tail = newNode;

          
       }

    

   bool remove(int index) {
    if (head == nullptr) return false;

    if (index == 0) {
        Node* temp = head;
        head = head->next;
        if (head == nullptr) {
            tail = nullptr;  // ⚠️ List became empty
        }
        delete temp;
        return true;
    }

    Node* curr = head;
    int i = 0;
    while (curr->next != nullptr && i < index - 1) {
        curr = curr->next;
        i++;
    }

    if (curr->next == nullptr) {
        return false; // Index out of bounds
    }

    Node* temp = curr->next;
    curr->next = curr->next->next;

    // ✅ Fix: update tail if we're removing the last node
    if (temp == tail) {
        tail = curr;
    }

    delete temp;
    return true;
}



    vector<int> getValues() {
        std::vector<int> values;
        Node* curr = head;
        while (curr != nullptr) {
            values.push_back(curr->val);
            curr = curr->next;
        }
        return values;
    }
};
