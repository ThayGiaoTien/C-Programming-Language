#include <stdio.h>

int main(){
    char characterName[]= "Teacher Forward";

    // Constant
    const int HISAGENOW= 24;

    int characterAge= 24;
    double ielts= 6.9;

    // percent s means placeholder of string
    // percent d means placeholder of number
    // percent f means placeholder of float-decimal number

    printf("There once was a man named %s \n", characterName);
    printf("He was %d years old. \n", characterAge);
    printf("He has ielts %f \n" , ielts);
    characterAge=69;
    printf("He was %d years old. \nBut he is look like %d \n", characterAge, HISAGENOW);

    return 0;
}