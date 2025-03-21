#include <conio.h>
#include <stdio.h>
int n, ch, i, arr[10], x, front, rear;

void push() {
  if (rear == n)
    printf("Queue overflow");
  else {
    rear++;
    printf("\nEnter element : ");
    scanf("%d", &x);
    arr[rear] = x;
    if (front == 0) front = 1;
  }
};

void pop() {
  if (front == 0)
    printf("Queue underflow");
  else {
    printf("Popped element is : %d", arr[front]);
    front++;
  }
};

void display() {
  if (front == 0) {
    printf("Queue is empty");
  } else {
    printf("Queue elements are : ");
    for (i = front; i <= rear; i++) {
      printf("\n\t\t%d", arr[i]);
    }
  }
};

void menu() {
  printf(
      "\n1.push\n2.pop\n3.display\n0.exit\nEnter your choice "
      ": ");
  scanf("%d", &ch);
};

void main() {
  n = 5;
  do {
    menu();
    if (ch == 1) push();
    if (ch == 2) pop();
    if (ch == 3) display();
  } while (ch != 0);
}