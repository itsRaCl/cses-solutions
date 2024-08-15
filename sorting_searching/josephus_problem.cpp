#include <iostream>

using namespace std;

struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *ptr) : val(x), next(ptr) {}
};

int main() {
  int n;
  cin >> n;
  ListNode *head = new ListNode(1);
  ListNode *temp = head;
  for (int i = 2; i <= n; i++) {
    temp->next = new ListNode(i);
    temp = temp->next;
  }
  temp->next = head;
  temp = head;
  ListNode *temp2;
  int val;
  while (temp->next != temp) {
    temp2 = temp->next;
    val = temp2->val;
    cout << val << " ";
    temp->next = temp2->next;
    temp = temp->next;
    free(temp2);
  }

  cout << temp->val;
}
