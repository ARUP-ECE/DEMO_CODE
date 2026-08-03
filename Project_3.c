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
    printf(CYAN"\t\t\t:----UNLIMITED LED BLINKING----:\n"RESET);
    printf(CYAN"\t\t\t\t" "STARTING LED SIMULATION\n"RESET);
    while(1)
    {
      printf(PINK"Blinking number :%d\n"RESET,count);
      printf(GREEN"\t\t[LED ON]\n"RESET);
      Sleep(1500);

      printf(RED"\t\t[LED OFF]\n"RESET);
      Sleep(1500);
      count++;
    }
    return 0;
  }
