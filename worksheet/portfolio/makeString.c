
/*
Name: Omar Hamdan
Student ID: 201972526
*/

#include <stdio.h>
#include <string.h>

int main( int argc, char **argv ) {

    // define appropriate data to hold your answer
    char buffer[256] = "";  

    // process the command-line data using appropriate string functions
    if (argc > 1) {                     // at least one argument provided
        strcpy(buffer, argv[1]);        // start with the first argument
        for (int i = 2; i < argc; i++) {
            strcat(buffer, "-");        // add hyphen before next argument
            strcat(buffer, argv[i]);    // append the next argument
        }
    }

    printf("%s\n",buffer); // use only this single print statement in your submitted code

    return 0;
}