#include <conio.h>
#include <stdio.h>
int i, j, arr[50], temp, flag, last, n;
void display() {
  printf("\nArray elements are : ");
  for (i = 1; i <= n; i++) {
    printf("%5d,", arr[i]);
  }
}
void bubble_sort() {
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
    display();
    if (flag == 0)
      break;
    else
      last--;
  }
}
void read() {
  printf("enter size of array : ");
  scanf("%d", &n);
  for (i = 1; i <= n; i++) {
    printf("\nEnter array element : ");
    scanf("%d", &arr[i]);
  }
}
int main() {
  read();
  display();
  bubble_sort();
  display();
  return 0;
}
