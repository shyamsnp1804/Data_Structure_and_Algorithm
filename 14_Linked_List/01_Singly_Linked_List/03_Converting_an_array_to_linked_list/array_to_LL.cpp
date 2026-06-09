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

int main()
{
  vector<int> arr = {2, 5, 8, 7};

  Node *head = arrayToLinkedList(arr);

  printList(head);

  return 0;
}