#include <stdio.h>

int main() {

  char num;
  double first, second;
  printf("Enter an operator (+, -, *, /): ");
  scanf("%c", &num);
  printf("Enter two operands: ");
  scanf("%lf %lf", &first, &second);

  switch (num) {
    case '+':
      printf("%.1lf + %.1lf = %.1lf", first, second, first + second);
      break;
    case '-':
      printf("%.1lf - %.1lf = %.1lf", first, second, first - second);
      break;
    case '*':
      printf("%.1lf * %.1lf = %.1lf", first, second, first * second);
      break;
    case '/':
      printf("%.1lf / %.1lf = %.1lf", first, second, first / second);
      break;

  }

  return 0;
}
