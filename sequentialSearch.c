#include <conio.h>
#include <stdio.h>
int arr[50], n, i, x;

void display() {
  printf("\nArray elements are:");
  for (i = 1; i <= n; i++) printf("%5d,", arr[i]);
}

void read() {
  printf("Enter size of an array:");
  scanf("%d", &n);
  for (i = 1; i <= n; i++) {
    printf("Enter array element:");
    scanf("%d", &arr[i]);
  }
}

void seq_search() {
  printf("enter x : ");
  scanf("%d", &x);
  arr[n + 1] = x;
  i = 1;
  while (arr[i] != x) i++;
  if (i == n + 1)
    printf("\nunsuccessful %d is not present in array", x);
  else
    printf("\n successful search x = %d position = %d", x, i);
}

int main() {
  read();
  seq_search();
  display();
  return 0;
}
