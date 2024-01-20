//this function generates a random letter by generating a random number from 1-26 using srand
//and using that number to choose an element in an array of the 26 lowercase letters

#include "random.h"
#include <stdio.h>
#include <stdlib.h>

char randchar(){
    char randomChar = 'k';
    //create an array full of alphabet characters
    char alphaArray[] = {'a', 'b','c','d','e','f','g','h','i','j','k','l','m','n','o','p',
            'q','r','s','t','u','v','w','x','y','z'};
            
    
    //choose a random number
    int num = rand() % 26;
    
    //use the random number to select an alphabet character
    //assign that character to randomChar
    
    randomChar = alphaArray[num];
    
    //return randomChar
    
    return randomChar;
}//end randchar()

