// C++ Program to find the minimum number of 
// adjacent swaps to arrange similar items together 
  
#include <bits/stdc++.h> 
using namespace std; 
  
// Function to find minimum swaps 
int findMinimumAdjacentSwaps(int arr[], int N) 
{ 
    // visited array to check if value is seen already 
    bool visited[N + 1]; 
  
    int minimumSwaps = 0; 
    memset(visited, false, sizeof(visited)); 
  
    for (int i = 0; i < 2 * N; i++) { 
  
        // If the arr[i] is seen first time 
        if (visited[arr[i]] == false) { 
            visited[arr[i]] = true; 
  
            // stores the number of swaps required to 
            // find the correct position of current 
            // element's partner 
            int count = 0; 
  
            for (int j = i + 1; j < 2 * N; j++) { 
  
                // Increment count only if the current 
                // element has not been visited yet (if is 
                // visited, means it has already been placed 
                // at its correct position) 
                if (visited[arr[j]] == false) 
                    count++; 
  
                // If current element's partner is found 
                else if (arr[i] == arr[j]) 
                    minimumSwaps += count; 
            } 
        } 
    } 
    return minimumSwaps; 
} 
  
// Driver Code 
int main() 
{ 
    int n,i;
    cin>>n;
    int arr[n];

    for(i=0;i<n;i++)
        cin>>arr[i];

    n /= 2; 
  
    cout << findMinimumAdjacentSwaps(arr, n) << endl; 
    return 0; 
} 