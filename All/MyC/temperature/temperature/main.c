//
//  main.c
//  temperature
//
//  Created by Angela Bonsol on 11/8/18.
//  Copyright © 2018 Angela Bonsol. All rights reserved.
//

#include <stdio.h>

int main(){
    char type;
    float temp, degrees_c, degrees_f;
    
    printf("Type of Temperature you are entering (Enter C for Celsius or F for Fahrenheit):\n");
    scanf("%c", &type);
    printf("Enter the temperature:\n");
    scanf("%f", &temp);
    
    if ( type == 'c'|| type == 'C')
    {
        degrees_f = 9 * temp / 5 + 32;
        printf("The Fahrenheit Temperature is: %.2f F\n", degrees_f );
        
    }
    else if ( type == 'f' || type == 'F' )
    {
        degrees_c = 5 * temp - 32 / 9 ;
        printf("The Celsius Temperature is: %.2f C\n", degrees_c );
    }
    return 0;
}
