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

Node *deleteTail(Node *head)
{
  if (head == nullptr || head->next == nullptr) // Edge cases: If the list is empty and has only one node
    return nullptr;

  Node *tail = head;
  while (tail->next != nullptr)
  {
    tail = tail->next;
  }

  Node *temp = tail->prev;
  temp->next = nullptr;
  tail->prev = nullptr;

  delete tail;

  return head;
}
int main()
{
  vector<int> arr = {2, 5, 8, 7};

  Node *head = arrayToLinkedList(arr);

  head = deleteTail(head);

  printList(head);

  return 0;
}

/*

Time Complexity: O(N), where N is the number of nodes in the DLL.
This is because we traverse the entire DLL to reach the end to delete the tail.

Space Complexity: O(1) as no extra space used.

 */