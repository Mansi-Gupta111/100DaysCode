//Count Pairs whose sum is equal to X
#include<iostream>
using namespace std;

class Solution{
  public:
    // your task is to complete this function
    int countPairs(struct Node* head1, struct Node* head2, int x) {
        // Code here
         std::unordered_set<int> seen;
        int count = 0;

        // Traverse first linked list and add elements to the set
        while (head1 != nullptr) {
            seen.insert(head1->data);
            head1 = head1->next;
        }

        // Traverse second linked list and search for complementary values in the set
        while (head2 != nullptr) {
            int complement = x - head2->data;
            if (seen.find(complement) != seen.end())
                count++;
            head2 = head2->next;
        }

        return count;
    }
};
