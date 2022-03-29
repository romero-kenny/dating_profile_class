#include <vector>
#include <string>
#include <iostream>

class Profile{
    std::string name;
    int age;
    std::string city;
    std::string country;
    std::string pronouns;
    std::vector<std::string> hobbies;

    public:
        Profile(std::string newName, int newAge); //initiator
        ~Profile(); //destructor

        //hobbies functions
        void printHobbies(); //prints hobbies with a new line between each one
        void addHobbies(std::string newHobby); // adds hobbies to vector
        void undoHobby(); //undoes recently added hobby
        void removeHobby(std::string ref); //ref shorthand for reference, and used to remove hobby

        //basic change functions
        void changeName(std::string ref); //changes name variable
        void changeAge(int ref); //tinder doesn't let you, so I am
        void changeCity(std::string ref); //changes city variable
        void changeCountry(std::string ref); //changes country variable
        void changePronouns(std::string ref); //changes pronoun variable



        //basic fetch functions
        std::string getName();
        int getAge();
        std::string getCity();
        std::string getCountry();
        std::string getPronouns();
        
        //fetches specifically called string you are refering too
        /* ex.
        sam.getHobbies("Driving"); 
        returns Driving as its String Value
        does not return position of String
        */
        std::string getHobbies(std::string ref);

        //fetches specified hobby position in vector
        /* ex.
        sam.getHobbiesPosition("Driving"); 
        returns an int of where "Driving" is in vector
        */
        int getHobbiesPosition(std::string ref); //if returns -1, means specified string is not in vector
};

//using ref as a placeholder for references inorder to allow for 
//literal strings to be inputed. however, should change that 
//later down the line