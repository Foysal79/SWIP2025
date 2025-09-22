# Code :

```cpp
#include<bits/stdc++.h>
using namespace std;

int partition(int arr[], int low, int high) {
    int len = high - low + 1;
    int pivotIndex = (rand() % len) + low;
    swap(arr[pivotIndex], arr[high]);

    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[high]);
    return i + 1;
}

void QuickSort(int arr[], int low, int high) {
    if (low < high) {
        int pivotIndex = partition(arr, low, high);

        QuickSort(arr, low, pivotIndex - 1);
        QuickSort(arr, pivotIndex + 1, high);
    }
}

int main() {
    int arr[] = { 10, 7, 8, 9, 1, 5 };

    int n = 6;

    QuickSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
```

# Complexity :

## Time :

- Best Case:
  প্রতিবার pivot array কে প্রায় সমান দুই ভাগে ভাগ করে।
  Complexity: `O(nlogn)`
  Example: যদি pivot সবসময় মাঝামাঝি থাকে।

- Average Case:
  Random pivot বা arbitrary pivot → গড়ে balanced partition হয়।
  Complexity: `O(nlogn)`

- Worst Case:
  Pivot সবসময় সবচেয়ে ছোট বা সবচেয়ে বড় element হলে।
  তখন array ভাগ হয় না → প্রতি ধাপে শুধু 1 element বাদ যায়।
  Complexity: `O(n^2)`
  Example: যদি input sorted array হয় সবসময় first/last element কে pivot taking ।

# Space Complexity

- Best / Average Case : `O(log n)`
- Worst Case: Recursion depth ≈ `O(n)` (যখন array একপাশে skewed হয়)

# Final Summary :
```
| Case         | Time Complexity | Space Complexity |
| ------------ | --------------- | ---------------- |
| Best Case    | O(n log n)      | O(log n)         |
| Average Case | O(n log n)      | O(log n)         |
| Worst Case   | O(n²)           | O(n)             |
```