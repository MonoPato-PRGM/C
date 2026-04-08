/*
Name: GenerateRandomNumber
Author: MDS
Description: A program that generates a random number
Date: 8th April 2026
*/

#include <stdio.h>
#include <stdlib.h>


#define MAX 100
#define MIN 0


void askSeed(unsigned *);
int generateRandom(int,int);


int main(){
    unsigned seed;
    printf("\t=================\n");
    printf("\t RANDOM NUMBER \n");
    printf("\t=================\n");
    askSeed(&seed);
    printf("Your random number between %d and %d is: %d\n",MIN,MAX,generateRandom(MIN,MAX));
    return 0;
}
/*
Name: askSeed
Description: Asks the user a specific seed
@param: num I/ parameter that stores the seed value
*/
void askSeed(unsigned *num){
    printf("Introduce a seed: ");
    scanf("%u",num);
    srand(*num);
}

/*
Name: generateRandom
Description: Generates a random number between min and max
@param: max I/ max number
@param: min I/ min number
@return: Random number in the range [min, max].
*/
int generateRandom(int min,int max){
    int random;
    random= rand() % (max-min+1) + min;
    return random;
}