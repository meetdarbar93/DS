#include <stdio.h>
int n, ch, i, x, front, rear, arr[10];

void push() {
  if (rear == n)
    rear = 1;
  else
    rear++;
  if (front == rear) {
    printf("Circular queue overflow");
    if (rear == 1)
      rear = n;
    else
      rear--;
  } else {
    printf("Enter element : ");
    scanf("%d", &x);
    arr[rear] = x;
    if (front == 0) front = 1;
  }
};

void pop() {
  if (front == 0) {
    printf("Circular queue is empty");
  } else {
    printf("popped element is : %d", arr[front]);
    if (front == rear) {
      front = 0;
      rear = 0;
    } else if (front == n) {
      front = 1;
    } else {
      front++;
    }
  }
};

void menu() {
  printf(
      "\n1.push\n2.pop\n3.display\n0.exit\nEnter your choice "
      ": ");
  scanf("%d", &ch);
};

void display() {
  if (front == 0) {
    printf("Circular is empty");
  } else {
    if (front <= rear) {
      printf("Circular queue elements are : ");
      for (i = front; i <= rear; i++) {
        printf("%5d,", arr[i]);
      }
    } else {
      for (i = 1; i <= rear; i++) {
        printf("%5d,", arr[i]);
      }
      for (i = front; i <= n; i++) {
        printf("%5d,", arr[i]);
      }
    }
  }
};
int main() {
  n = 5;
  do {
    menu();
    if (ch == 1) push();
    if (ch == 2) pop();
    if (ch == 3) display();
  } while (ch != 0);
  return 0;
}