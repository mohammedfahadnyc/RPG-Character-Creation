
#ifndef Warrior_hpp
#define Warrior_hpp

#include "Player.hpp"
class Warrior : public Player
{
    public :
    Warrior (string name,Race race) : Player(name,race,200,0)    //only get two values, rest fixed value
    {
    
    }
    string attack() const
    {
        return "I will destory you with my sword, foul Demon!";
    }
     string className() const
    {
        return "warrior";
    }
    
    
};
#endif
