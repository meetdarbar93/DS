
#include <stdio.h>
int arr[50], n, low, high, i, j, middle, temp, x, flag, last;
void display() {
  printf("\nArray elements are:");
  for (i = 1; i <= n; i++) printf("%5d,", arr[i]);
}
void binary_search() {
  printf("\nEnter x : ");
  scanf("%d", &x);
  low = 1;
  high = n;
  flag = 0;
  while (low <= high) {
    middle = (low + high) / 2;
    if (x < arr[middle]) {
      high = middle - 1;
    } else if (x > arr[middle]) {
      low = middle + 1;
    } else {
      flag = 1;
      printf("\nSearch successful,, %d is availabel in array", x);
      break;
    }
  }
  if (flag == 0)
    printf("\nUnsuccessful search,%d is not availabel in array", x);
}

void sort() {
  last = n;
  for (j = 1; j <= n - 1; j++) {
    flag = 0;
    for (i = 1; i <= last - 1; i++) {
      if (arr[i] > arr[i + 1]) {
        temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
        flag++;
      }
    }
    if (flag == 0)
      break;
    else
      last--;
  }
}
void read() {
  // enter sorted array for binary search or sort the array using any sorting.
  // here we use bubble sort
  printf("Enter size of an array:");
  scanf("%d", &n);
  for (i = 1; i <= n; i++) {
    printf("Enter array element:");
    scanf("%d", &arr[i]);
  }
}
int main() {
  read();
  sort();
  binary_search();
  display();
  return 0;
}
