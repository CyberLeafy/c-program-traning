#include<stdio.h>
int main()
{
  printf("-------OjHa Calculator--------\n\nPress 1 For Additation \nPress 2 For Substraction \nPress 3 For Multiplication \nPress 4 For Division \nPress other key for exit!\n\n");

  while (true) {
    int ca_value;
    scanf("%d", &ca_value);

    float a, b;

    printf("Enter first number: ");
      scanf("%f", &a);
          
    printf("Enter second number: ");
    scanf("%f", &b);
    
    switch (ca_value) {
      case 1:
        printf("Additation = %.2f", a + b);
        break;

      case 2:
        printf("Substraction = %.2f", a - b);
        break;

      case 3:
        printf("Multiplication = %.2f", a * b);
        break;

      case 4:
        printf("Division = %.2f", a / b);
        break;

      default:
        printf("exit!");
        break;
    }
    printf("\n\nAgain enter choice or exit!\n\n");
    if (!(int(ca_value))) break;
  } 
  return 0;
}
