#include<iostream>
using namespace std;
pair<int, int> ans;
        int range = INT_MAX;

        // Create a min-heap to track the minimum element from each array.
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minHeap;

        // Initialize an array of pointers to track the current element index in each array.
        vector<int> pointers(k, 0);

        int maxElement = INT_MIN;

        // Initialize the min-heap with the first element from each array.
        for (int i = 0; i < k; i++) {
            minHeap.push({KSortedArray[i][0], i});
            maxElement = max(maxElement, KSortedArray[i][0]);
        }

        while (true) {
            // Get the minimum element from the min-heap.
            pair<int, int> current = minHeap.top();
            minHeap.pop();

            int currentMin = current.first;
            int arrayIndex = current.second;

            // Calculate the current range.
            if (maxElement - currentMin < range) {
                range = maxElement - currentMin;
                ans = {currentMin, maxElement};
            }

            // If we reach the end of any array, break the loop.
            if (pointers[arrayIndex] == n - 1)
                break;

            // Move the pointer of the array with the minimum element.
            pointers[arrayIndex]++;
            int nextElement = KSortedArray[arrayIndex][pointers[arrayIndex]];

            // Update the min-heap with the next element.
            minHeap.push({nextElement, arrayIndex});
            maxElement = max(maxElement, nextElement);
        }

        return ans;
