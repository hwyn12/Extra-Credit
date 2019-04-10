/*
 *        File: student-class.cc
 *      Author: Hannah Wynne
 *        Date: April 10, 2019
 * Description: Student structure example with vectors. Extra Credit
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <vector>

using namespace std;
class Student {
public:
    //getters or accessors
    int getId();
    string getName();
    double getScore();

    //setters or mutators
    void setId(int newId);
    void setName(string newName);
    void setScore(double newScore);

    //printer
    void output();

private:
    int id;  //id must be >= 0
    string name;
    double score; //>= 0, -1 default
}; //semicolon is important


// function prototypes
// void printStudent(const Student &st);
// void inputStudent(Student &st);

int main(int argc, char const *argv[]) {

    Student s;
    s.setId(123);
    s.setId(-123);

    cout << "Id: " << s.getId() << endl;

    s.setName("Bob");
    s.setScore(90);


    s.output();



    return 0;
}  // main

int Student::getId() {
    return id;
}

string Student::getName() {
    return name;
}

double Student::getScore() {
    return score;
}

void Student::setId(int newId) {
    if (newId >= 0){
        id = newId;
    }
}

void Student::setName(string newName) {
    name = newName;
}

void Student::setScore(double newScore) {
    if (newScore >= 0){
        score = newScore;
    }
}

void Student::output(){
    cout << "ID: " << id << endl;
    cout << "Name: " << name << endl;
    cout << "Score: " << score << endl;
}