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

Node *insertionAtKth(Node *head, int val, int k)
{
  // If the list is empty
  if (head == nullptr)
  {
    // Insert only if position is 1
    if (k == 1)
    {
      return new Node(val);
    }
    else
    {
      return head; // Invalid position
    }
  }

  // Insertion at the beginning
  if (k == 1)
  {
    return new Node(val, head);
  }

  int cnt = 0;
  Node *temp = head;

  // Traverse the list to find the (k-1)th node
  while (temp != nullptr)
  {
    cnt++;

    // When we reach the node before the insertion position
    if (cnt == k - 1)
    {
      // Create new node and link it to the next node
      Node *x = new Node(val, temp->next);

      // Connect current node to the new node
      temp->next = x;

      break; // Insertion complete
    }

    temp = temp->next;
  }

  return head; // Return updated head
}

int main()
{
  vector<int> arr = {2, 5, 8, 7};

  int val = 100;
  int k = 3;
  Node *head = arrayToLinkedList(arr);

  head = insertionAtKth(head, val, k);

  printList(head);

  return 0;
}

/*

Time Complexity
O(k) where k is the target position because the loop iterates k-1 times to find the insertion point.

Space Complexity
O(1) because only a constant amount of extra space is used for variables (cnt, temp) and the new node allocation.

 */