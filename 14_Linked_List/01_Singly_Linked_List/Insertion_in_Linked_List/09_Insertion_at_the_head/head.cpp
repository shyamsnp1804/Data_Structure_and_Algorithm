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

  Node(int val, Node *nextNode)
  {
    data = val;
    next = nextNode;
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

Node *insertionAtHead(Node *head, int val)
{
  Node *temp = new Node(val, head);
  return temp;
}

int main()
{
  vector<int> arr = {2, 5, 8, 7};

  int val = 100;

  Node *head = arrayToLinkedList(arr);

  head = insertionAtHead(head, val);

  printList(head);

  return 0;
}

/*

Time Complexity
O(1) The function performs a single memory allocation and pointer assignment, independent of the number of nodes in the list.

Space Complexity
O(1) The function allocates a single new node in heap memory, independent of the size of the existing list.

 */