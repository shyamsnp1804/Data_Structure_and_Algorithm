#include <iostream>
#include <vector>
using namespace std;

struct Node
{
  int data;
  Node *next;

  Node(int val)
  {
    data = val;
    next = nullptr;
  }
};

Node *arrayToLinkedList(vector<int> &arr)
{
  if (arr.size() == 0)
    return nullptr;

  // head node
  Node *head = new Node(arr[0]);

  // current node pointer
  Node *current = head;

  // Create remaining nodes
  for (int i = 1; i < arr.size(); i++)
  {
    current->next = new Node(arr[i]);
    current = current->next;
  }
  return head;
}

void printList(Node *head)
{
  while (head != nullptr)
  {
    cout << head->data << "->";
    head = head->next;
  }
  cout << "NULL";
}

Node *deleteHead(Node *head)
{
  if (head == nullptr) // Empty list
    return nullptr;

  Node *temp = head; // Store old head
  head = head->next; // Move head to next node

  delete temp; // Free memory

  return head; // Return new head
}

int main()
{
  vector<int> arr = {2, 5, 8, 7};

  Node *head = arrayToLinkedList(arr);

  head = deleteHead(head);

  printList(head);

  return 0;
}

/* 

Time Complexity
O(1) The function performs a constant number of operations including a null check, pointer reassignment, and memory deallocation regardless of list size.

Space Complexity
O(1) No additional data structures are created; only a single pointer variable is used for reference.

 */