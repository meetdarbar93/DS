#include <conio.h>
#include <stdio.h>
int n, ch, top, i, arr[10], x;
void menu() {
  printf(
      "\n1.push\n2.pop\n3.display\n4.peep\n5.change\n0.exit\nEnter your choice "
      ": ");
  scanf("%d", &ch);
};

void push() {
  if (top >= n)
    printf("Stack overflow");
  else {
    top++;
    printf("Enter element : ");
    scanf("%d", &x);
    arr[top] = x;
  }
};

void pop() {
  if (top == 0)
    printf("Stack is underflow");
  else {
    printf("Popped element is  : %d", arr[top]);
    top--;
  }
};

void display() {
  if (top == 0)
    printf("Stack is empty");
  else {
    printf("Stack elements are : \n");
    for (i = top; i > 0; i--) {
      printf("%5d,", arr[i]);
    }
  }
};

void peep() {
  if (top == 0) {
    printf("Stack is empty");
  } else {
    printf("\nEnter position : ");
    scanf("%d", &i);
    if (top - i + 1 <= 0) {
      printf("Stack underflow in peep");
    } else {
      printf("Peeped element is : %d", arr[top - i + 1]);
    }
  }
};

void change() {
  if (top == 0) {
    printf("Stack is empty");
  } else {
    printf("\nEnter position : ");
    scanf("%d", &i);
    if (top - i + 1 <= 0) {
      printf("Stack underflow in peep");
    } else {
      printf("Enter new element : ");
      scanf("%d", &x);
      arr[top - i + 1] = x;
    }
  }
};

void main() {
  n = 5;
  do {
    menu();
    if (ch == 1) push();
    if (ch == 2) pop();
    if (ch == 3) display();
    if (ch == 4) peep();
    if (ch == 5) change();
    getch();
  } while (ch != 0);
}
