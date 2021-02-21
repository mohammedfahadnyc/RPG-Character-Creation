#include "Player.hpp"

Player :: Player(string name, Race race, int hitPoints, int magicPoints)
{
    this-> name = name;
    this-> race = race;
    this-> hitPoints = hitPoints;
    this-> magicPoints = magicPoints;
}
void Player :: setName(string name)
{
    this-> name = name;
}
void Player :: setRace(Race race)
{
    this-> race = race;
}
void Player :: setHitPoints(int hitPoints)
{
    this->hitPoints = hitPoints;
}
void Player :: setMagicPoints(int magicPoints)
{
    this-> magicPoints = magicPoints;
}
string Player ::  getName() const
{
    return name;
}
Race Player :: getRace() const      //we set the race by getting input and putting in constructor
{                                    //we only use getRace() to get the value in whatRace()
                                    //if the race is set as human,it returns 0
    return race;
}
int Player :: getHitPoints() const
{
    return hitPoints;
}
int Player :: getMagicPoints() const
{
    return magicPoints;
}
string Player :: whatRace() const       //we check getRace and return the string accordingly and return the                                         string for the last part
{
    if(getRace() == HUMAN)
        return "Human";
    if(getRace() == ELF)
        return "Elf";
    if(getRace()== DWARF)
        return "Dwarf";
    if(getRace() == ORC)
        return "Orc";
    if(getRace() == TROLL)
        return "Troll";
    return "invalid race";
}
