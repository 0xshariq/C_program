#include<stdio.h>

int main() {
  int a;
  printf("Enter number/alphabets/symbols/special characters");
  scanf(" %c",&a);
  if(a > 33 && a < 48)
    printf("Symbols");
  else if(a > 48 && a < 58)
    printf("Numbers");
  else if(a > 58 && a < 65)
    printf("Special Characters");
  else if(a > 65 && a < 91)
    printf("Uppercase Alphabets");
  else if(a > 91 && a < 97)
    printf("Other Symbols");
  else if(a > 97 && a < 123)
    printf("Lowercase Alphabets");
  else if(a > 123 && a < 127)
    printf("Some Other Symbols");
  else
    printf("Invalid Input"); 
}