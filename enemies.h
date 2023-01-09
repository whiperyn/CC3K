#ifndef ENEMIES_H
#define ENEMIES_H
#include "object.h"
#include "enemy.h"
#include "player.h"
class item;
class Vampire: public Enemy {
    Character c;
    Status s;
    bool isLive = true;
    bool isHostile = true;
    bool compass = false;
    public:
        Vampire(int x, int y);
        Character getCharacter() const override;
        void move(int x, int y) override;
        void setStatus(double hp, double atk, double def);
        double getEffect(double pdef);
        void takeDamage(shared_ptr<Player> p);
        bool getLive();
        void takeCompass() {compass = true;}
        bool getCompass() {return compass;}
        Status getStatus() {return s;}
        bool access_Hostile() {return isHostile;}
        void getHostile() {isHostile = true;}
        void not_live() {isLive = false;}
};

class Werewolf: public Enemy {
    Character c;
    Status s;
    bool isLive = true;
    bool isHostile = true;
    bool compass = false;
    public:
        Werewolf(int x, int y);
        Character getCharacter() const override;
        void move(int x, int y) override;
        void setStatus(double hp, double atk, double def);
        double getEffect(double patk);
        void takeDamage(shared_ptr<Player> p);
        bool getLive();
        void takeCompass() {compass = true;}
        bool getCompass() {return compass;}
        Status getStatus() {return s;}
        bool access_Hostile() {return isHostile;}
        void getHostile() {isHostile = true;}
        void not_live() {isLive = false;}
};

class Goblin: public Enemy {
    Character c;
    Status s;
    bool isLive = true;
    bool isHostile = true;
    bool compass = false;
    public:
        Goblin(int x, int y);
        Character getCharacter() const override;
        void move(int x, int y) override;
        void setStatus(double hp, double atk, double def);
        double getEffect(double patk);
        void takeDamage(shared_ptr<Player> p);
        bool getLive();
        void takeCompass() {compass = true;}
        bool getCompass() {return compass;}
        Status getStatus() {return s;}
        bool access_Hostile() {return isHostile;}
        void getHostile() {isHostile = true;}
        void not_live() {isLive = false;}
};

class Merchant: public Enemy {
    Character c;
    Status s;
    bool isLive = true;
    bool isHostile = false;
    bool compass = false;
    public:
        Merchant(int x, int y);
        Character getCharacter() const override;
        void move(int x, int y) override;
        void setStatus(double hp, double atk, double def);
        double getEffect(double patk);
        void takeDamage(shared_ptr<Player> p);
        bool getLive();
        void takeCompass() {compass = true;}
        bool getCompass() {return compass;}
        Status getStatus() {return s;}
        bool access_Hostile() {return isHostile;}
        void getHostile() {isHostile = true;}
        void not_live() {isLive = false;}
};

class Dragon: public Enemy {
    Character c;
    Status s;
    bool isLive = true;
    bool isHostile = false;
    bool compass = false;
    shared_ptr<item> gold_ptr = nullptr;
    shared_ptr<item> barrier_ptr = nullptr;
    public:
        Dragon(int x, int y);
        Character getCharacter() const override;
        void move(int x, int y) override;
        void setStatus(double hp, double atk, double def);
        bool hasHoard();
        double getEffect(double patk);
        void takeDamage(shared_ptr<Player> p);
        bool getLive();
        void takeCompass() {compass = true;}
        shared_ptr<item> getGold() {return gold_ptr;}
        shared_ptr<item> getBarrier() {return barrier_ptr;}
        void set_gold(shared_ptr<item> given) {gold_ptr = given;}
        void set_barrier(shared_ptr<item> given) {barrier_ptr = given;}
        bool getCompass() {return compass;}
        Status getStatus() {return s;}
        bool access_Hostile() {return isHostile;}
        void getHostile() {isHostile = true;}
        void not_live() {isLive = false;}
};

class Phoenix: public Enemy {
    Character c;
    Status s;
    bool isLive = true;
    bool isHostile = true;
    bool compass = false;
    public:
        Phoenix(int x, int y);
        Character getCharacter() const override;
        void move(int x, int y) override;
        void setStatus(double hp, double atk, double def);
        double getEffect(double patk);
        void takeDamage(shared_ptr<Player> p);
        bool getLive();
        void takeCompass() {compass = true;}
        bool getCompass() {return compass;}
        Status getStatus() {return s;}
        bool access_Hostile() {return isHostile;}
        void getHostile() {isHostile = true;}
        void not_live() {isLive = false;}
};

class Troll: public Enemy {
    Character c;
    Status s;
    bool isLive = true;
    bool isHostile = true;
    bool compass = false;
    public:
        Troll(int x, int y);
        Character getCharacter() const override;
        void move(int x, int y) override;
        void setStatus(double hp, double atk, double def);
        double getEffect(double patk);
        void takeDamage(shared_ptr<Player> p);
        bool getLive();
        void takeCompass() {compass = true;}
        bool getCompass() {return compass;}
        Status getStatus() {return s;}
        bool access_Hostile() {return isHostile;}
        void getHostile() {isHostile = true;}
        void not_live() {isLive = false;}
};

#endif
