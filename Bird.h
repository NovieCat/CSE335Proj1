/* 
 * File:   Bird.h
 * Author: rasu
 *
 * Created on February 12, 2018, 12:14 PM
 */

#ifndef BIRD_H
#define BIRD_H

class Bird: public Pet{
protected:
    bool Nocturnal;
    
public:
    //constructors
    Bird(){
        Name = "n/a";
        Type = "unknown";
        Weight = 0;
        Price = 0;
        Nocturnal = true;
    }
    Bird(string newName, string newType, unsigned int newWeight, double newPrice, bool newNocturnal){
        Name = newName;
        Type = newType;
        Weight = newWeight;
        Price = newPrice;
        Nocturnal = newNocturnal;
    }
    Bird(const Bird& baseBird){
        if (this != &baseBird){
            Name = baseBird.Name;
            Type = baseBird.Type;
            Weight = baseBird.Weight;
            Price = baseBird.Price;
            Nocturnal = baseBird.Nocturnal;
        }
    }
    Bird& operator=(const Bird& baseBird){
        if (this != &baseBird){
            Name = baseBird.Name;
            Type = baseBird.Type;
            Weight = baseBird.Weight;
            Price = baseBird.Price;
            Nocturnal = baseBird.Nocturnal;
        }
        return *this;
    }
    //destructor
    virtual ~Bird(){}
    
    //print
    void print(){
        printf("%-20s", "cat");
        printf("meow");
    }
};

#endif /* BIRD_H */

