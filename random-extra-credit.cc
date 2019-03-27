/*
 *        File: random.cc
 *      Author: Hannah Wynne
 *        Date: March 26, 2019
 * Description: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

//function prototypes

int search(int random[], int size, int target);

int main(int argc, char const *argv[]) {
    int randomInteger;
    srand(time(NULL));

    int random[19];
    int size = 20;
    int target;
    int targetLocation;

    for(int i = 0; i < size; i++)
    {
        randomInteger = rand();
        random[i] = randomInteger;
    }

    for (int i = 0; i < size; i++){
        cout << random[i] << endl;
    }

    cout << "Choose a number you wish to know the location of." << endl;
    cin >> target;

    targetLocation = search(random, size, target);
    cout << "The location of the target is: " << targetLocation << endl;



    return 0;
}

//function definition
int search(int random[], int size, int target){
    for (int i = 0; i < size; i++){
        if (target == random[i]){
            return i;
        }
    } return -1;
}


/* Extra credit: Due Tuesday 3/26/2019 (11:59 PM)
 * Write a program that creates 20 random integers and stores them into
 * an array of integers.
 * Write the sequential search function.
 * In your main program, output all the elements of the array. Ask the user for
 * a target number and call the search function to find and locations of the target
 * in the array. Output the location.
 *
 * Create a public repository on GitHub, push your code to the repository and
 * tag me (@nasseef) in the final commit message. Please make sure your program works
 * before you tag me.
 * Do not email me your program.
 */