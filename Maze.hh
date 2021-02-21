

#ifndef Maze_hpp
#define Maze_hpp

#include "Player.hpp"

#include "Player.hpp"
#include "Player.hpp"
class Maze : public Player
{
    public :
    Maze(string name,Race race) : Player(name,race,150,150)
    {
    
    }
    string attack() const
    {
        return "I will crush you with the power of my arcane missile!";
    }
    string className() const
   {
       return "Maze";
   }
   
    
};
#endif /* Maze_hpp */
