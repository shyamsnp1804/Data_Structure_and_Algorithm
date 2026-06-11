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

Node *deleteTail(Node *head)
{
  if (head == nullptr || head->next == nullptr) // If the list is empty or has only one node
    return nullptr;

  Node *temp = head; // Store old head

  while (temp->next->next != nullptr) // Traverse to the second last node in the list
  {
    temp = temp->next;
  }

  // Delete the last node
  delete temp->next;

  // Set the next of the second last node to nullptr, effectively removing the last node
  temp->next = nullptr;

  return head ;
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

Time Complexity
O(n) where n is the number of nodes in the linked list, as the loop traverses n-2 nodes to reach the second-to-last element.

Space Complexity
O(1) as the operation uses a constant amount of extra space regardless of the input list size.

 */