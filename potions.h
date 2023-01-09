#ifndef POTION_H
#define POTION_H
#include "object.h"
#include <string>

class Potion: public Object {
    public:
        virtual Character getCharacter() const = 0;
        virtual void move(int x, int y) = 0;
        virtual Status getEffect() = 0;
};

class RH: public Potion {
    Character c;
    Status s;
    public:
        RH(int x, int y);
        Character getCharacter() const;
        void move(int x, int y);
        Status getEffect();
};

class BA: public Potion {
    Character c;
    Status s;
    public:
        BA(int x, int y);
        Character getCharacter() const;
        void move(int x, int y);
        Status getEffect();
};

class BD: public Potion {
    Character c;
    Status s;
    public:
        BD(int x, int y);
        Character getCharacter() const;
        void move(int x, int y);
        Status getEffect();
};

class PH: public Potion {
    Character c;
    Status s;
    public:
        PH(int x, int y);
        Character getCharacter() const;
        void move(int x, int y);
        Status getEffect();
};

class WA: public Potion {
    Character c;
    Status s;
    public:
        WA(int x, int y);
        Character getCharacter() const;
        void move(int x, int y);
        Status getEffect();
};

class WD: public Potion {
    Character c;
    Status s;
    public:
        WD(int x, int y);
        Character getCharacter() const;
        void move(int x, int y);
        Status getEffect();
};

#endif
