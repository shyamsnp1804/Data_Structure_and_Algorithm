#include <iostream>
#include <vector>
using namespace std;

struct Node
{
  int data;
  Node *prev;
  Node *next;

  Node(int val)
  {
    data = val;
    prev = next = nullptr;
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
    Node *newNode = new Node(arr[i]);

    current->next = newNode;
    newNode->prev = current; 

    current = newNode;
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
  if (head == nullptr || head->next == nullptr) // Edge cases: If the list is empty and has only one node
    return nullptr;

  Node *temp = head; // Store old head
  head = head->next; // Move head to next node
  head->prev = nullptr;
  temp->next = nullptr;
  delete temp;
  return head;
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

Time Complexity: O(1) because removing the head node from a doubly linked list is a constant-time operation. It's independent of the list's size, as it involves updating references to the head and the new head.

Space Complexity: O(1) as no extra space is used.

 */