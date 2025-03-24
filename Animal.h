#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

class Animal {
protected:
    int age;
    std::string gender;
    std::string birthSeason;
    std::string color;
    double weight;
    std::string origin;
    std::string species;
    std::string id;

public:
    Animal(int age, std::string gender, std::string birthSeason,
           std::string color, double weight, std::string origin,
           std::string species);
    
    virtual ~Animal() = default;

    // Getters
    int getAge() const { return age; }
    std::string getGender() const { return gender; }
    std::string getBirthSeason() const { return birthSeason; }
    std::string getColor() const { return color; }
    double getWeight() const { return weight; }
    std::string getOrigin() const { return origin; }
    std::string getSpecies() const { return species; }
    std::string getId() const { return id; }

    // Virtual methods
    virtual void setId(int number) = 0;
    virtual std::string getDescription() const = 0;
};

#endif // ANIMAL_H
