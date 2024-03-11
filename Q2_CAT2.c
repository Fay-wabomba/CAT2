//corrections on the code

//Included #include <stdio.h> at the beginning of the program to include the standard input-output library.
//the main function syntax. It should be int main() instead of main.
//the printf statements should  include  the opening double quotes ".
//a closing parenthesis ) after the format specifier in scanf is missing.
// a  semicolon ; at the end of scanf statement is missing.
// curly braces {} to enclose the body of the if and else blocks.
//Corrected the printf statement in the else block by including opening double quotes ".


//corrected code
#include <stdio.h>

int main() {
    int number;
  
    printf("Enter an integer number: ");
    scanf("%d", &number);

    if (number < 100) {
        printf("Your number is smaller than 100\n");
    } else {
        printf("Your number contains more than two digits\n");
    }

    return 0;
}
