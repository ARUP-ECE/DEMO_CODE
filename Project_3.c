//UnlImited Light Blincking-------------
#include <stdio.h>
#include <windows.h>

 #define RED  "\033[1;31m"
  #define GREEN  "\033[1;32m"
    #define ORANGE "\033[38;5;208m"
  #define CYAN  "\033[1;36m"
  #define RESET  "\033[0m"
  #define BLUE "\033[1;34m"
  #define PINK "\033[1;35m"
  #define YELLOW "\033[0;33m"
  int main()
  {
    int count=1;
    printf(":----UNLIMITED LED BLINKING----:\n\t\t");
    printf("STARTING LED SIMULATION\n\t\t");
    while(1)
    {
      printf("Blinking number :%d\n",count);
      printf(GREEN"[LED ON]\n"RESET);
      Sleep(1500);

      printf(RED"[LED OFF]\n"RESET);
      Sleep(1500);
      count++;
    }
    return 0;
  }
