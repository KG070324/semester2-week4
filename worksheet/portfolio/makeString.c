
/*
Name: Kardo Ghaffouri
Student ID: zgpn0703
*/

#include <stdio.h>
#include <string.h>

int main( int argc, char **argv ) {

    // define appropriate data to hold your answer
    char mainString[100] = ""; // 100 is safe amount 


    // process the command-line data using appropriate string functions
    for (int i = 1; i < argc; i++){

        strcat(mainString, argv[i]); // append curent arg

        if (i < argc - 1){ // if not last arg the append hyphen
            strcat(mainString, "-"); 
        }
    }

    printf("%s\n",mainString); // use only this single print statement in your submitted code

    return 0;
}