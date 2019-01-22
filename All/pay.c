

#include <stdio.h>
#include <stdlib.h>

float gross(float wageRate, int hours);
float net(float gross, float taxRate);

struct employeeRecord{

char lastName[40];
float wageRate, taxRate, grossPay, netPay;
int hours;

};

int main (){
  struct employeeRecord person;
  float localGross, localNet;
  printf("Enter the last name, wage rate, hours, tax rate: ");
  scanf("%s %f %i %f", &person.lastName, &person.wageRate, &person.hours, &person.taxRate );
  localGross = gross(person.wageRate, person.hours);
  localNet = net(localGross, person.taxRate);
  printf("Gross pay for %s is: $%f . Net is $%f", person.lastName, localGross, localNet );
}

float gross(float wageRate, int hours){
  //Calculate the gross and return it.
    float grossPay, extraHours, extraPay;

  if ( hours > 40 ){
    extraHours = hours - 40;
    extraPay = 1.5 * wageRate * extraHours;
    grossPay = 40 * wageRate  + extraPay;
  }
  else {
    grossPay = wageRate * hours;
  }

  return grossPay;
}

float net(float gross, float taxRate){
  //Calculate the net and return it.
  float netPay, tax;

  tax = gross * taxRate;
  netPay = gross - tax;

  return netPay;
}
