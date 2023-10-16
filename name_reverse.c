#include <stdio.h> //written by Dakota Hack
void reverse_order(char* nm){
    char firstnm[20]; 
    char lastnm[20];
    int ckr = 0;
    int counter = 0;
    for (char c = *nm; c; c=*++nm) { // When at the end of the string pointer the null charcter will end the loop 
        if (c == ' '){ // This will change the ckr varible letting the program know we are done finding the first name
            ckr = 1;
            counter = 0;
            continue;
        }
        else if (ckr == 0){ 
            firstnm[counter] = c; // This if statment makes the firstnm varible
            counter++;
        }
        else if (ckr == 1){
            lastnm[counter] = c; // This if statement makes the lastnm varible
            counter ++;
        }

}
    lastnm[counter] = ' '; //For a reason I don't know if I dont do this it will have a non asci charcter at then end this just rmoves it
    printf("My name reversed is: %s%s",lastnm,firstnm); //prints the name in reverse order


}
