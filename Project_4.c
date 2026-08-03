 //Limited light blinking---------
 #include <stdio.h>
 #include <windows.h>

  #define RESET  "\033[0m"
  #define RED  "\033[1;31m"
  #define GREEN  "\033[1;32m"
  #define CYAN  "\033[1;36m"
  #define PINK "\033[1;35m"
  #define YELLOW "\033[0;33m"

 int main()
{
  int Blink;
  int count;
  printf(PINK"\t\t\t::---LIMITED LED BLINKIG---::\n"RESET);
  printf(CYAN"\n\t\tEnter the Blinking Number :"RESET);
  scanf("%d", &Blink);
  for(count=1;count<=Blink;count++)
 {
  printf(PINK"Blinking Number :%d\n"RESET,count);
  printf(GREEN"\t\t[LED ON]\n"RESET);
  Sleep(1500);

  printf(RED"\t\t[LED OFF]\n"RESET);
  Sleep(1500);
 }
  printf(YELLOW"\n\t\tLED IS PARMANANTLY OFF"RESET);

  return 0;
}