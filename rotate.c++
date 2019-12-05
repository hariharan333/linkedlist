/*This is a function problem.You only need to complete the function given below*/
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */
/*  This function should rotate list counter-clockwise
    by k and return new head (if changed) */
Node* rotate(Node* head, int k) {
    // Your code here
    struct Node* head1 = head;
    int i=1;
    while(i!=k)
    {
        head = head->next;
        i++;
    }
    head = head->next;
    struct Node *p = head->next;
    head->next =NULL;
    while(head!=NULL)
    {
        head = head->next;
    }
    head->next = head1;
    return p;
}
