#include <stdio.h>
 
// Aufgabe 1
int int_even_odd(int n)
{
  if (n == 0)
    return 0;
  else if (n % 2 == 0)
    return 2;
  else
    return 1;
}
 
int main(int argc, char **argv)
{
  // Aufgabe 1
  int test1 = 0, test2 = 7, test3 = 8;
  printf("int_even_odd(%d) = %d\n", test1, int_even_odd(test1));
  printf("int_even_odd(%d) = %d\n", test2, int_even_odd(test2));
  printf("int_even_odd(%d) = %d\n", test3, int_even_odd(test3));
 
 
  // Aufgabe 2
  int array[10] = {3, 1, 7, 4, 9, 1, 5, 10, -2, 2};
  for (int i = 0; i < 10; i++)
  {
    printf("Zahl %d: %d\n", i + 1, array[i]);
  }
 
 
  // Aufgabe 3
  int int_numbers[5];
  int gerade = 0, ungerade = 0, summe = 0;
 
  for (int i = 0; i < 5; i++)
  {
    printf("Geben Sie Zahl %d ein: ", i + 1);
    scanf("%d", &int_numbers[i]);
  }
 
  for (int i = 0; i < 5; i++)
  {
    summe += int_numbers[i];
    if (int_numbers[i] % 2 == 0)
      gerade++;
    else
      ungerade++;
  }
 
  printf("Anzahl der geraden Zahlen: %d\n", gerade);
  printf("Anzahl der ungeraden Zahlen: %d\n", ungerade);
  printf("Summe aller Zahlen: %d\n", summe);
 
  return 0;
}
 
 