#ifndef PLAYER_H
#define PLAYER_H
#include "object.h"
#include "enemy.h"
#include "potions.h"
#include <string>
#include <memory>
using namespace std;

class Enemy;
class Player: public Object {
    private:
        vector<shared_ptr<Object>> neighbors;
        int chamber;
    public:
        virtual Character getCharacter() const = 0;
        virtual Status getStatus() const = 0;
        virtual bool getLive() const = 0;
        virtual void move(int x, int y) = 0;
        virtual bool takeDamage(shared_ptr<Enemy> e) = 0;
        virtual void takeEffect(shared_ptr<Potion> p) = 0;
        virtual double getEffect(double edef) = 0;
        virtual void rmEffect() = 0;
        virtual void addGold(int x) = 0;
        virtual void getBS() = 0;
        virtual int getGold() = 0;
        virtual void takeCompass() = 0;
        void attach(shared_ptr<Object> o) { neighbors.emplace_back(o); }
        void neighbors_clear() { neighbors.clear(); }
        vector<shared_ptr<Object>> getNeighbors() { return neighbors; }
        void set_chamber(int n) {chamber = n;}
        int getChamber() {return chamber;}
};

class Human: public Player {
    Character c;
    Status s;
    bool isLive = true;
    bool hasBA = false;
    bool hasBD = false;
    bool hasWA = false;
    bool hasWD = false;
    int gold = 0;
    bool bs = false;
    bool compass = false;
    public:
        Human(int x, int y);
        Character getCharacter() const override;
        Status getStatus() const;
        bool getLive() const override;
        void move(int x, int y) override;
        bool takeDamage(shared_ptr<Enemy> e);
        void takeEffect(shared_ptr<Potion> p);
        double getEffect(double edef);
        void rmEffect();
        void addGold(int x);
        int getGold();
        void getBS();
        void takeCompass() {compass = true;}
};

class Dwarf: public Player {
    Character c;
    Status s;
    bool isLive = true;
    bool hasBA = false;
    bool hasBD = false;
    bool hasWA = false;
    bool hasWD = false;
    int gold = 0;
    bool bs = false;
    bool compass = false;
    public:
        Dwarf(int x, int y);
        Character getCharacter() const override;
        Status getStatus() const;
        bool getLive() const override;
        void move(int x, int y) override;
        bool takeDamage(shared_ptr<Enemy> e);
        void takeEffect(shared_ptr<Potion> p);
        double getEffect(double edef);
        void rmEffect();
        void addGold(int x);
        int getGold();
        void getBS();
        void takeCompass() {compass = true;}
};

class Elves: public Player {
    Character c;
    Status s;
    bool isLive = true;
    bool hasBA = false;
    bool hasBD = false;
    bool hasWA = false;
    bool hasWD = false;
    int gold = 0;
    bool bs = false;
    bool compass = false;
    public:
        Elves(int x, int y);
        Character getCharacter() const override;
        Status getStatus() const;
        bool getLive() const override;
        void move(int x, int y) override;
        bool takeDamage(shared_ptr<Enemy> e);
        void takeEffect(shared_ptr<Potion> p);
        double getEffect(double edef);
        void rmEffect();
        void addGold(int x);
        int getGold();
        void getBS();
        void takeCompass() {compass = true;}
};

class Orc: public Player {
    Character c;
    Status s;
    bool isLive = true;
    bool hasBA = false;
    bool hasBD = false;
    bool hasWA = false;
    bool hasWD = false;
    int gold = 0;
    bool bs = false;
    bool compass = false;
    public:
        Orc(int x, int y);
        Character getCharacter() const override;
        Status getStatus() const;
        bool getLive() const override;
        void move(int x, int y) override;
        bool takeDamage(shared_ptr<Enemy> e);
        void takeEffect(shared_ptr<Potion> p);
        double getEffect(double edef);
        void rmEffect();
        void addGold(int x);
        int getGold();
        void getBS();
        void takeCompass() {compass = true;}
};

#endif
