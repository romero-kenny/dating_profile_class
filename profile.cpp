#include "profile.hpp"

//basic retrieval of object variables
std::string Profile::getName(){
    return name;
}

int Profile::getAge(){
    return age;
} 

std::string Profile::getCity(){
    return city;
}

std::string Profile::getCountry(){
    return country;
}

std::string Profile::getPronouns(){
    return pronouns;
}

//returns specified hobby
std::string Profile::getHobbies(std::string ref){
    for(int i = 0; i < hobbies.size(); i++){
        if (ref == hobbies.at(i)){
            return hobbies.at(i) + "\n";
        }
    }
    return ref + " not in this profile\n";
}

//returns specified hobby position
int Profile::getHobbiesPosition(std::string ref){
    for(int i = 0; i < hobbies.size(); i++){
        if (ref == hobbies.at(i)){
            return i;
        }
    }
    return -1; 
}


//functions for Profile class
Profile::Profile(std::string newName, int newAge){ 
    //initializes new profiles with 2 basic parameters
    
    name = newName;
    age = newAge;

}

Profile::~Profile(){ 
    //basic descructor
    std::cout << "Goodbye, " << name;
}

/* FUNCTIONS FOR HOBBIES */
void Profile::printHobbies(){
    for (int i = 0; i < hobbies.size(); i++){
        std::cout << hobbies.at(i) << "\n";
    }
}

void Profile::addHobbies(std::string newHobby){
    hobbies.push_back(newHobby);
}

void Profile::undoHobby(){
    hobbies.pop_back();
}

void Profile::removeHobby(std::string ref){
    for (int i = 0; i < hobbies.size(); i++){
        if(hobbies.at(i) == ref){
            hobbies.at(i).erase();
        }
    }
}

/* CHANGE FUNCTIONS FOR VARIABLES */
void Profile::changeName(std::string ref){
    name = ref;
}

void Profile::changeAge(int ref){
    age = ref;
}

void Profile::changeCity(std::string ref){
    city = ref;
}

void Profile::changeCountry(std::string ref){
    country = ref;
}

void Profile::changePronouns(std::string ref){
    pronouns = ref;
}