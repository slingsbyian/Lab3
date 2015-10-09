#include "People.h"
#include <string>
#include <iostream>
#include <ctype.h>

using namespace std;

// Set Variable for input
string x;

// Sets the name of the person
void People::set_name(){

    cout << "What is your first name?: ";
    cin >> x;
    first_name = x;

    cout << "What is your last name?: ";
    cin >> x;
    last_name = x;
}

void People::set_maiden(){
    cout << "What is your mother's maiden name?: ";
    cin >> x;
    maiden_name = x;
    }

void People::set_birth(){
    cout << "What is your birth town?: ";
    cin >> x;
    birth_town = x;
}
string People::gen_star_wars(void){
    part1 = last_name.substr(0,3);
    part2 = first_name.substr(0,2);
    part3 = maiden_name.substr(0,2);
    part4 = birth_town.substr(0,3);

    // lower case the first letters of part 2 and part3
    part2[0] = tolower(part2[0]);
    part1[0] = toupper(part1[0]);
    part3[0] = toupper(part3[0]);

    star_wars_name = part1 + part2 + " " + part3 + part4;
    return star_wars_name;
}

void People::set_info(){
    set_name();
    set_maiden();
    set_birth();
}

void People::print(){
}

