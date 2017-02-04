#include <stdio.h>
 
int main()
{
   int first, second, add, subtract, multiply;
   float divide;
 
   printf("Enter two integers\n");
   scanf("%d%d", &first, &second);
   add = first + second;
   subtract = first - second;
   multiply = first * second;
   divide = first / (float)second;   
   printf("Sum = %d\n",add);
   printf("Diff = %d\n",subtract);
   printf("Mul = %d\n",multiply);
   printf("Div = %.2f\n",divide);
 
   return 0;
}
