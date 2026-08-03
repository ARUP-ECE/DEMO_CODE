//Resistence Colore code calculate--------
#include <stdio.h>
#include <math.h>

 #define RED  "\033[1;31m"
  #define GREEN  "\033[1;32m"
    #define ORANGE "\033[38;5;208m"
  #define CYAN  "\033[1;36m"
  #define RESET  "\033[0m"
  #define BLUE "\033[1;34m"
  #define PINK "\033[1;35m"
  #define YELLOW "\033[0;33m"

int getcolorValue(char colour)
{
  switch (colour)
  {
    case 'b': return 0;//blck
    case 'B': return 1;//Brown
    case 'R': return 2;//Red
    case 'O': return 3;//orange
    case 'Y': return 4;//Yellow
    case 'g': return 5;//green
    case 'L': return 6;//blue
    case 'V': return 7; //Violet   
    case 'G': return 8;//Gray
    case 'W': return 9;//white     
    default: return -1;
  }
}
int main()
{
 char band1,band2,band3;
 int v1,v2,v3;
 double Resistance;

 printf(PINK"\t\t\t\t\t:----Resistance Calculetor----:\n"RESET);
 printf(YELLOW"\t\tColor Code : b=black,B=Brown,R=Red,O=Orange,Y=Yellow,g=Green,L=Blue,V=Violet,G=Gray,W=White\n\n"RESET);

 printf(CYAN"\nEnter the first band color :"RESET);
 scanf(" %c",&band1);
 printf(CYAN"\nEnter the Second band color :"RESET);
 scanf(" %c",&band2);
 printf(CYAN"\nEnter the Third band color :"RESET);
 scanf(" %c",&band3);

 v1=getcolorValue(band1);
 v2=getcolorValue(band2);
 v3=getcolorValue(band3);

 if(v1!=-1 && v2!=-1 && v3!=-1)
 {
  Resistance=(v1*10+v2)*pow(10,v3);
  printf(GREEN"\nTotal Resistsnce is :%.2f ohms\n"RESET,Resistance);
 }
else{
  printf(RED"Your Enter color is Invalid\n"RESET);
}
  return 0;
}