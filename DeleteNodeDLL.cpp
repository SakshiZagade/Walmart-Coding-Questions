class Solution {
  public:
    // Function to delete a node at given position.
   Node* deleteNode(Node* head, int position) {
    if (!head || position <= 0) return head;

    Node* current = head;

    // If deleting the first node
    if (position == 1) {
        head = current->next;
        if (head) head->prev = nullptr;
        delete current;
        return head;
    }

    // Traverse to the node at the given position
    for (int i = 1; current != nullptr && i < position; i++) {
        current = current->next;
    }

    // If position is out of bounds
    if (!current) return head;

    // Adjust the previous node's next pointer
    if (current->prev) 
        current->prev->next = current->next;

    // Adjust the next node's previous pointer
    if (current->next) 
        current->next->prev = current->prev;

    delete current; // Free memory
    return head;
}

// Function to print the doubly linked list
void printList(Node* head) {
    Node* temp = head;
    while (temp) {
        cout << temp->data << " <-> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
};
