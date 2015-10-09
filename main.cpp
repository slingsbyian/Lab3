#include <iostream>
#include "People.h"

using namespace std;

int main(){

    // Create Object
    People person, person2;

    // Declare Variables
    string sw_name;

    //Initiate Program
    person.set_info();
    sw_name = person.gen_star_wars();
    cout <<"\nYour Star Wars name is " << sw_name << "."<< endl;
}
