#ifndef CHARSTATUS_H
#define CHARSTATUS_H
#include <string>
using namespace std;
struct Character {
    string type;
    int row;
    int col;
};

struct Status {
    double hp;
    double atk;
    double def;
};


#endif
