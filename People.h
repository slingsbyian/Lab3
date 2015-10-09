#ifndef PEOPLE_H
#define PEOPLE_H

#include <string>
using namespace std;

class People {
    private:
        string first_name;
        string last_name;
        string maiden_name;
        string birth_town;
        string part1;
        string part2;
        string part3;
        string part4;
        string star_wars_name;
    public:
        void set_name(void);
        void set_maiden(void);
        void set_birth(void);
        void set_info(void);
        void print(void);

        string gen_star_wars(void);
};

#endif
