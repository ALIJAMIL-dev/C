// Basics - 6
#include <stdio.h>

void greet()
{
    printf("Hello, welcome!\n");
}

int sum(int a, int b)
{
    return a + b;
}

int main(void) 
{
    // integer
    int age = 20;

    int var = 22;
    
    printf("var = %d", var);

    // floating-point
    float height = 5.7;
    
    float val = 12.45;
    
    printf("val = %f", val);

    // double-precision floating-point
    double pi = 3.14159;

    double val = 1.4521;
    
    printf("val = %lf", val);

    // character
    char grade = 'A';

    char ch = 'A';
    
    printf("ch = %c", ch);

    printf("Age: %d\n", age);
    printf("Height: %.1f\n", height);
    printf("Pi: %.5lf\n", pi);
    printf("Grade: %c\n", grade);
    printf("The size of int: %d\n", sizeof(int));
    printf("The size of char: %d\n", sizeof(char));
    printf("The size of float: %d\n", sizeof(float));
    printf("The size of double: %d", sizeof(double));
    greet();
    return 0;
}
