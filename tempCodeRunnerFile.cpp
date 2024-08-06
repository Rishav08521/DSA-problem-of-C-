#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function for binary search
int binarySearch(int arr[], int low, int high, int key) {
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key)
            return mid;

        if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1; // key not found
}

int main() {
    int n, key;
   cout<<"enter the size of array";
   cin>>n;
   cout<<"enter the number to search"
   cin>>key;
   vector<int> arr[n];
   for (int i=0; i<n; i++){
    arr[i]=i;
   }
    struct timespec start, end;

    // Record start time
    clock_gettime(CLOCK_MONOTONIC, &start);

    // Perform binary search
    int result = binarySearch(arr, 0, n - 1, key );

    // Record end time
    clock_gettime(CLOCK_MONOTONIC, &end);

    if (result != -1)
        printf("Element found at index %d\n", result);
    else
        printf("Element not found\n");

    // Calculate CPU time in nanoseconds
    long long elapsed_ns = (end.tv_sec - start.tv_sec) * 1e9 + (end.tv_nsec - start.tv_nsec);
    printf("CPU time: %lld nanoseconds\n", elapsed_ns);

    return 0;
}