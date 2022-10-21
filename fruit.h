#ifndef FRUIT_H
#define FRUIT_H


#include "seed.h"


class Fruit{
    protected:
        string color;
        int numSeeds;
        Seed seedType;
    public: 
        Fruit();
        Fruit(string, int, Seed);
        Fruit(const Fruit&);

        void setColor(string);
        string getColor();

        void setNumSeeds(int);
        int getNumSeeds();

        void setSeedType(Seed);
        Seed getSeedType();

        void printFruit();
};
#endif
