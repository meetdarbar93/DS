#include <stdio.h>
int n, arr[50], flag, i, start, end, temp, key, lb, ub;

void read() {
  printf("\nEnter size of array : ");
  scanf("%d", &n);
  for (i = 1; i <= n; i++) {
    printf("\nenter array element : ");
    scanf("%d", &arr[i]);
  }
}
void quick_sort(int arr[], int lb, int ub) {
  flag = 1;  // Initialization of flag as true to control partition loop

  if (lb < ub) {  // Check if lower bound is less than upper bound
    start = lb;
    end = ub + 1;
    key = arr[lb];  // Choosing the first element as the key

    while (flag) {
      start++;
      while (arr[start] < key)
        start++;  // Move start forward until an element >= key is found
      end--;
      while (arr[end] > key)
        end--;  // Move end backward until an element <= key is found
      if (start < end) {
        // Swap arr[start] and arr[end] if start index is still less than end
        // index
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
      } else {
        flag = 0;  // Exit loop when start crosses end
      }
    }

    // Swap key element with the element at index 'end' to place it correctly
    temp = arr[lb];
    arr[lb] = arr[end];
    arr[end] = temp;

    // Recursively sort the left and right subarrays
    quick_sort(arr, lb, end - 1);  // Left partition
    quick_sort(arr, end + 1, ub);  // Right partition
  }
}

void display() {
  printf("\nArray elements are : ");
  for (i = 1; i <= n; i++) {
    printf("%5d,", arr[i]);
  }
}
int main() {
  read();
  printf("\nBefore sort");
  display();
  quick_sort(arr, 1, n);
  printf("\nAfter sort");
  display();
  return 0;
}