#include <stdio.h>

int main()
{
    int month, day, year;

    printf("Enter a date in mm/dd/yyyy format:");
    scanf("%i/%i/%i", &month, &day, &year);

    if (month < 1 || month > 12){
        printf("Not a valid month.");
    }
    else {
      if ((month == 4 || month == 6 || month == 9 || month == 11 ) && (day > 30 || day < 1) ){
          printf("Not a valid day for chosen month.");
      }
      else if ( month == 2 && (day > 29 || day < 1)){
          printf ("Not a valid day for chosen month.");
      }
      else if ( (month == 3 || month ==5 || month == 7 ||month ==8 ||month ==10 || month ==12 ) && (day > 31 || day < 1 ) ){
          printf("Not a valid day for chosen month.");
      }
      else{
          printf("Your date is valid.");
      }
    }
  }
