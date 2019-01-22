
#include <stdio.h>

int main()
{
  char type;
  int temp;
  float degrees_c, degrees_f;

    printf("Type of Temperature you are entering: Enter C for Celsius or F for Fahrenheit\n");
    scanf("%c", &type);
    printf("Enter the temperature:\n");
    scanf("%i", &temp);

  if ( type == 'c'|| type == 'C')
  {
    degrees_f = 5(temp-32)/9;
    printf("The Fahrenheit Temperature is: %lf", degrees_f );

  }
  else if ( type == 'f' || type == 'F' )
  {
    degrees_c = (9(temp)/5) + 32;
    printf("The Celsius Temperature is: %lf", degrees_c );
  }
  return 0;
}
