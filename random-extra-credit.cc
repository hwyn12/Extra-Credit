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
