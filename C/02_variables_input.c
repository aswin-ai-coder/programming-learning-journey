Day 2 — Variables & Input in C

#include <stdio.h>   // for input and output

int main()
{
    int age;   // variable to store age (integer)

    printf("Enter your age: ");   // ask user for input
    scanf("%d", &age);            // take input and store in age

    printf("Your age is: %d\n", age);   // print the value

    return 0;
}

Important Concepts
1. Variable
int age;
int → type (only whole numbers)
age → variable name (stores value)
2. Input → scanf
scanf("%d", &age);
%d → format for integer
&age → address of variable (important in C)
3. Output → printf
printf("Your age is: %d", age);
%d prints integer value
🧠 Logic Thinking
Ask user for age
Store the value
Print the value
End
⚠️ Important Rules
Always use & in scanf
Variable type must match (int → %d)
End statements with ;
