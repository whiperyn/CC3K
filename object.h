#ifndef OBJECT_H
#define OBJECT_H
#include <string>
#include <iostream>
#include "charStatus.h"
#include <vector>
#include <memory>

class Object {
    public:
        virtual Character getCharacter() const = 0;
        virtual void move(int x, int y) = 0;
        //virtual bool getLive() const = 0;
        //void generateChar(string type, int x, int y);
        //virtual ~Object() = 0;
};

#endif
