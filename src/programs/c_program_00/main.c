#include <stdio.h>








int main(int argc, char **argv) 
{
  printf("This program was called with %d arguments.\n", argc);
  printf("Hello World!\n");

  // Exercise 1 int_even_odd
  int number = 0; 
  printf("Bitte eine Zahl eingeben: ");
  scanf("%d", &number);
  if (number % 2 == 0)
  {
    printf("1\n", number);
  }
  else
  {
    printf("2\n", number);
  }
  printf("\n");
  




  // Exercise 2 ...  {3, 1, 7, 4, 9, 1, 5, 10, -2, 2} einem Array
 int array[24] = {3, 1, 7, 4, 9, 1, 5, 10, -2, 2}; 
  
  for (int index = 0; index <= 9; index++)
  {
    printf("Zahl %d:%d ", 1+1, array[index]);
    printf("\n");
  }
  printf("\n");


    
  // Exercise 3
/*
  int array[5];
 
  for (int numbers = 0; numbers < 5; numbers++)
  {
    printf("%d.Zahl: ", i + 1);
    scanf("%d", &array[i]);
  }


  for (int i = 0; i < 10; i++)
  {
    printf("%d ", array[i]);

  }
*/



}
