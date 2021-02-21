
#ifndef Priest_hpp
#define Priest_hpp

#include "Player.hpp"
#include "Player.hpp"
class Priest : public Player
{
    public :
    Priest (string name,Race race) : Player(name,race,100,200)
    {
    
    }
    string attack() const
    {
        return "i will assault you with holy wrath!";
    }
    string className() const
   {
       return "Priest";
   }
   
    
};

#endif /* Priest_hpp */
