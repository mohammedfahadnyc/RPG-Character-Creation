
#include<iostream>
#include<iomanip>
#include<vector>
#include "Player.hpp"
#include "Warrior.hpp"
#include "Priest.hpp"
#include "Maze.hpp"
using namespace std;
int main()
{
    int num;
    vector<Player*> myVector;                    //vector with Player Class to contain all pointer objects
    cout<<"Which of the following would you like?"<<endl;
    cout<<setw(12)<<" 1 - Create A Warrior"<<endl;
    cout<<setw(12)<<" 2 - Create A Priest"<<endl;
    cout<<setw(12)<<" 3 - Create A Mage"<<endl;
    cout<<setw(12)<<" 0- Finish Creating Players"<<endl;
    cin>>num;
    cin.get();
    while(num!=0)
    if(num == 1 )
    {
        string charname;
        Race race;
        int numRace;
        Player* warrior;        //creating a pointer of player, later we will set it to new Warrior
        cout<<"What Would You like to Name Your Character"<<endl;
        getline(cin,charname);
        cout<<"What race do u want?"<<endl;
        cout<<setw(12)<<" 1 - Human"<<endl;
        cout<<setw(12)<<" 2 - Elf"<<endl;
        cout<<setw(12)<<" 3 - Dwarf"<<endl;
        cout<<setw(12)<<" 4 - Orc"<<endl;
        cout<<setw(12)<<" 5 - Troll"<<endl;
        cin>>numRace;
        if(numRace == 1)
            race = HUMAN;
       else if(numRace == 2)
            race = ELF;
       else if(numRace == 3)
                race = DWARF;
       else if(numRace == 4)
            race = ORC;
        if(numRace == 5)
            race = TROLL;
        warrior = new Warrior(charname,race);
        myVector.push_back(warrior);
        cout<<"Which of the following would you like?"<<endl;
        cout<<setw(12)<<" 1 - Create A Warrior"<<endl;
        cout<<setw(12)<<" 2 - Create A Priest"<<endl;
        cout<<setw(12)<<" 3 - Create A Mage"<<endl;
        cout<<setw(12)<<" 0- Finish Creating Players"<<endl;
        cin>>num;
        cin.get();
        
    }
    else if(num == 2 )
    {
        string charname;
        Race race;
        int numRace;
        Player* priest;
        cout<<"What Would You like to Name Your Character"<<endl;
        getline(cin,charname);
        cout<<"What race do u want?"<<endl;
        cout<<setw(12)<<" 1 - Human"<<endl;
        cout<<setw(12)<<" 2 - Elf"<<endl;
        cout<<setw(12)<<" 3 - Dwarf"<<endl;
        cout<<setw(12)<<" 4 - Orc"<<endl;
        cout<<setw(12)<<" 5 - Troll"<<endl;
        cin>>numRace;
        if(numRace == 1)
            race = HUMAN;
       else if(numRace == 2)
            race = ELF;
       else if(numRace == 3)
                race = DWARF;
       else if(numRace == 4)
            race = ORC;
        if(numRace == 5)
            race = TROLL;
        
        priest = new Priest(charname,race);
        myVector.push_back(priest);
        cout<<"Which of the following would you like?"<<endl;
        cout<<setw(12)<<" 1 - Create A Warrior"<<endl;
        cout<<setw(12)<<" 2 - Create A Priest"<<endl;
        cout<<setw(12)<<" 3 - Create A Mage"<<endl;
        cout<<setw(12)<<" 0- Finish Creating Players"<<endl;
        cin>>num;
        cin.get();
    }
    else if(num == 3 )
    {
        string charname;
        Race race;
        int numRace;
        Player* maze;
        cout<<"What Would You like to Name Your Character"<<endl;
        getline(cin,charname);
        cout<<"What race do u want?"<<endl;
        cout<<setw(12)<<" 1 - Human"<<endl;
        cout<<setw(12)<<" 2 - Elf"<<endl;
        cout<<setw(12)<<" 3 - Dwarf"<<endl;
        cout<<setw(12)<<" 4 - Orc"<<endl;
        cout<<setw(12)<<" 5 - Troll"<<endl;
        cin>>numRace;
        if(numRace == 1)
            race = HUMAN;
       else if(numRace == 2)
            race = ELF;
       else if(numRace == 3)
                race = DWARF;
       else if(numRace == 4)
            race = ORC;
    if(numRace == 5)
            race = TROLL;
        
        maze = new Maze(charname,race);
        myVector.push_back(maze);
        cout<<"Which of the following would you like?"<<endl;
        cout<<setw(12)<<" 1 - Create A Warrior"<<endl;
        cout<<setw(12)<<" 2 - Create A Priest"<<endl;
        cout<<setw(12)<<" 3 - Create A Mage"<<endl;
        cout<<setw(12)<<" 0- Finish Creating Players"<<endl;
        cin>>num;
        cin.get();
        
    }
   
    
    for(int i=0;i<myVector.size();i++)
    {
        cout<<"My name is "<<myVector[i]->getName()<<". My type is "<<myVector[i]->className()<<". My HP is "<<myVector[i]->
        getHitPoints()<<" and my MP is "<<myVector[i]->getMagicPoints();
        cout<<". I am a "<<myVector[i]->whatRace()<<" and my attack is : "<<myVector[i]->attack()<<endl;
    }
   
    for(Player* myPtr : myVector)
    {
        delete myPtr;
        myPtr = nullptr;
    }
    
    myVector.clear();
}

