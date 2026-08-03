//Make a calculator using c programing--

#include <stdio.h>
  #define RED  "\033[1;31m"
  #define GREEN  "\033[1;32m"
  #define ORANGE "\033[38;5;208m"
  #define CYAN  "\033[1;36m"
  #define RESET  "\033[0m"
int main()
{
  int num1,num2;
  char oparetor;
  float Result;

  printf(ORANGE"Enter the first Number :"RESET);
  scanf("%d",&num1);
  printf(ORANGE"Choose a arithmetic Oparetor(+,-,*,/,%) :"RESET);
  scanf(" %c",&oparetor);
    printf(ORANGE" Enter the second Number :"RESET);
  scanf("%d",&num2);
  switch (oparetor)
  {
  case '+':
     Result=num1+num2;    
    break;
  case '-':
     Result=num1-num2;
     break;
  case '*':
     Result=num1*num2;
     break;
  case '/':
     Result=(float)num1/(float)num2;
     break;
  case '%':
     Result=num1%num2;
     break;           
  default:
     printf(RED"Invalide Oparetor\n"RESET);
    break;
  }
    printf(GREEN"The Result is :%d%c%d=%.2f"RESET,num1,oparetor,num2,Result);
    return 0;
}