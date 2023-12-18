// This is an other version of the power function. I'm going to use pow(x,y) function in my function and i will take 2 inputs as base and power from the user and print the result.

// Created by Mehmet Akif Duran.

#include <stdio.h>
#include <math.h>

    // Function definiton.

float powerFunc(float base, float power){

    // Variable Decleration(s)
       
        float result;
            result = pow(base,power);

    return result;
}


    int main(){ // Beginning of the main function.
        
        
        // Variable decleration(s)
        
        float base, power;
        
        // Executable statment(s)
        printf("Please enter the base value and the power value that you want to calculate :\n");
            scanf("%f%f", &base,&power);
        
        printf("The result is %.2f\n", powerFunc(base,power));
        
        
        
        return 0;
} // End of the main function
