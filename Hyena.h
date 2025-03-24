#ifndef HYENA_H
#define HYENA_H

#include "Animal.h"
#include <sstream>
#include <iomanip>

class Hyena : public Animal {
private:
    static int nextId; // Static counter for generating unique IDs

public:
    // Constructor using base class constructor
    Hyena(int age, std::string gender, std::string birthSeason,
          std::string color, double weight, std::string origin)
        : Animal(age, gender, birthSeason, color, weight, origin, "Hyena") {
        setId(++nextId); // Automatically assign next available ID
    }

    // Implementation of virtual method to set ID with "HY" prefix
    void setId(int number) override {
        std::stringstream ss;
        ss << "HY" << std::setw(2) << std::setfill('0') << number;
        id = ss.str();
    }

    // Implementation of virtual method to get formatted description
    std::string getDescription() const override {
        std::stringstream desc;
        desc << id << "; "
             << age << " year old "
             << gender << " Hyena, "
             << color << ", born in "
             << birthSeason << ", weighing "
             << std::fixed << std::setprecision(2) << weight << " pounds, "
             << "arrived from " << origin;
        return desc.str();
    }
};

// Initialize static member
int Hyena::nextId = 0;

#endif // HYENA_H
