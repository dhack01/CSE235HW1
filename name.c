#include <stdio.h> //written by Dakota Hack
#include "name_reverse.h"
#include "name_length.h"

int main(){
    char* nm = "Dakota Hack"; //creates the char pointer
    reverse_order(nm);
    letter_count(nm);
    return 0;
}