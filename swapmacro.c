#include <stdio.h> //written by Dakota Hack
#define swap(x,y) { x = x + y; y = x - y; x = x - y; }// most elegant way I could figure out how to do it without creating another varible

int main(){
    int x = 1; //declares the c and y varible
    int y = 2;

    printf("Value of X before swap: %d\n",x); //prints value pre swap
    printf("Value of Y before swap: %d\n",y);
    swap(x,y);                               //where hte varibles are swaped
    printf("Value of X after swap: %d\n",x);
    printf("Value of Y after swap: %d\n",y); //prints post swap values

    return 0;
}