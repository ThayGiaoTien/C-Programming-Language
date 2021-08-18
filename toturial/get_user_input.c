#include <stdio.h>
#include <stdlib.h>

int main(){
    int year_of_birth;
    printf("When you was born? ");

    scanf alllows the user to enter in some information into our program. 
    &-ampercent  is a pointer
    scanf("%d", &year_of_birth);  
    printf("You are %d years old.\n", 2021-year_of_birth);


    char felling[200]; // Need to tell to allocate enough memory for this variable
    printf("How you're doin' man?\n");
   // scanf("%s", felling); // For string you don't need the pointer.
    fgets(felling, 20, stdin);
    printf("Everything of mine is also %s", felling);
    
    // But scanf only grabs the characters up to the first space. So we use:
   


    return 0;
}