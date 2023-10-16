#include <stdio.h> //written by Dakota Hack
void letter_count(char* nm){
    int counter = 0; //initalizes the counter
    for (char c = *nm; c; c=*++nm){ // same loop i used in name reverse looping through the pointer until the null charcter
        counter++; //adds 1 for each charcter
    }
    counter--; //removes 1 to account for the space
    printf("\nLength of first name and lastname is: %d\n",counter); //prints the length
}