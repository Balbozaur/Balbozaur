#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include <random>
using namespace std;

class Creation 
{
    vector<string> species;
    vector<string> elements;
    int x = 0;
    int y = 0;
    string name;
    string type;
    string line;
    public:
    
    void Species()
    {

        ifstream file("Species.txt");
        while (!file.eof())
        {
            
            getline(file, type);
            stringstream ss(type);
            ss >> type;
            species.push_back(type);
            
        }
    }
    void Elements()
    {

        ifstream file("Elements.txt");
        while (!file.eof())
        {

            getline(file, line);
            stringstream ss(line);
            ss >> line;
            elements.push_back(line);
           
        }
    }
    void Beginning()
    {
        cout << "Welcome The Egg Bearer. Today is the great day. You shall begin your watch. Your watch over a dragon." << endl;
        cout << "But beforehand, tell me. What is the make of your soul?" << endl << endl;
        cout << "My soul is... (Choose a number corresponding the make of your soul) " << endl;
         while (x < species.size())
         {
           cout << species[x] << " ";
           x++;
         }
        cin >> x;
        cout << endl;
        if (x == 1 or 2 or 3)
        {
            if (x == 1)
            {
                cout << "Crystalls are beautiful. Especially when they shine. Be a light for your dragon so it may shine." << endl <<"Crystall souls are often self sustaining but may easily crack.";
            }
            if (x == 3)
            {
                cout << "Metall is enduring and strong. Be a shield for your dragon so it may grow powerfull." << endl << "Metallic souls tend to be very durable but may fall to corrosion";
            }
            if (x == 2)
            {
            cout << "Then you know the ways of the world and its machinations. Be a teacher for your dragon, let it grow wise." << endl << "Colorful souls tend to be well balanced with a way to manage in any circumstances";
            }
        }
        else
        {
        cout << "I see you cannot take the matter seriously. Begone than! And next time choose an answer suited for the Egg Bearer!";
        }
        cout << endl << "Now let us proceed to the next question. What is the make of your heart?";
        cout << endl << endl << "My heart is made of..." << endl;
        while (y < elements.size())
        {
            cout << elements[y] << " ";
            y++;
        }
        cin >> y;
        if (y == 1 or 2 or 3 or 5 or 6)
        {
            cout << "Very well then. Now prepare. You shall be granted a dragon with a soul and heart which suits yours." << endl;
            cout << "*As you are holding a warm egg which was entrusted to you it starts to vibrate and thrash in your grasp." << endl;
            cout << "You do your best to hold it in place until... a small draconic head pops from its shell.* Now it is time." << endl << "What shall be the name of your dragon? " << endl;
            cin >> name;
            cout << endl << "Very well then. Guard them with your life. Let them grow, let them learn. You are their parent" << endl << "Go now Egg bearer and you " << name << " The " << species[x - 1] << " " << elements[y - 1] << "." << endl;
            cout << "Be safe!" << endl << endl;

        }
        else
        {
            cout << "I see you cannot take the matter seriously. Begone than! And next time choose an answer suited for the Egg Bearer!";
        }


    }
    string Get_name()
    {
        return name;
    }
    string Get_Species()
    {
        return species[x];
    }
    string Get_Elements()
    {
        return elements[y];
    }

};

//class Dragon 
//{
//    int Health = 50;
//    int Love_and_Fun = 50;
//    int Hunger = 50;
//    
//    string Name;
//    string Species;
//    string Element;
//public: 
//    Dragon(string name, string species, string element)
//    {
//        Name = name;
//        Species = species;
//        Element = element;
//       
//    }
//    int Get_Hunger()
//    {
//        return Hunger;
//    }
//    int Get_Health()
//    {
//        return Health;
//    }
//    int Get_LoveAndFun()
//    {
//        return Love_and_Fun;
//    }
//};

class Statystyka 
{
protected:
    int random1 = rand() % 3;
    int random2 = rand() % 3;
public:
    void Increase()
    {
    }
    void Decrease()
    {
        
    }
};

class Hunger:public Statystyka {
    
    int hunger = 50;
    
public:
   void Increase()
    {
        cout << "Your dragon managed to catch a ";
        if (random1 == 0) {
            cout << "Tiny ";
            hunger = hunger + 5;
        }
        if (random1 == 1) {
            cout << "Small";
            hunger = hunger + 10;
        }
        if (random1 == 2) {
            cout << "Big";
            hunger = hunger + 15;
        }
        if (random1 == 3) {
            cout << "Huge";
            hunger = hunger + 20;
        }
           
            // Miejsce na komentarz o rodzaju jedzenia jakie udało się zdobyć
    }
    void Decrease()
    {
        if (random2 == 0) {
            hunger = hunger - 5;
        }
        if (random2 == 1) {
            hunger = hunger - 10;
        }
        if (random2 == 2) {
            hunger = hunger - 15;
        }
        if (random2 == 3) {
            hunger = hunger - 20;
        }
    }
    int Get_Hunger() 
    {
        return hunger;
    }
};
class Health :public Statystyka {

    int health = 50;
    
public:
    void Increase()
    {
        if (random1 == 0) {
            health = health + 5;
        }
        if (random1 == 1) {
            health = health + 10;
        }
        if (random1 == 2) {
            health = health + 15;
        }
        if (random1 == 3) {
            health = health + 20;
        }
    }
    void Decrease()
    {
        if (random2 == 0) {
            health = health - 5;
        }
        if (random2 == 1) {
            health = health - 10;
        }
        if (random2 == 2) {
            health = health - 15;
        }
        if (random2 == 3) {
            health = health - 20;
        }
    }
    int Get_Health()
    {
        return health;
    }
};
class Love:public Statystyka {
    int LoveAndFun = 50;

public:
    public :
    void Increase()
    {
        if (random1 == 0) {
            LoveAndFun = LoveAndFun + 5;
        }
        if (random1 == 1) {
            LoveAndFun = LoveAndFun + 10;
        }
        if (random1 == 2) {
            LoveAndFun = LoveAndFun + 15;
        }
        if (random1 == 3) {
            LoveAndFun = LoveAndFun + 20;
        }
    }
    void Decrease()
    {
        if (random2 == 0) {
            LoveAndFun = LoveAndFun - 5;
        }
        if (random2 == 1) {
            LoveAndFun = LoveAndFun - 10;
        }
        if (random2 == 2) {
            LoveAndFun = LoveAndFun - 15;
        }
        if (random2 == 3) {
            LoveAndFun = LoveAndFun - 20;
        }
    }
    int Get_Love() 
    {
        return LoveAndFun;
    }
};

int main()
{
    srand(time(NULL));
    int a = 1;
    int z;
    Creation choice;
    choice.Species();
    choice.Elements();
    choice.Beginning();
    Hunger Stat1;
    Health Stat2;
    Love Stat3;
    cout << "*You've returned with your dragon to a cave you prepared for them. The dragon requires nutrition to live but also fun and love to develop well." << endl;
    cout << "In the cave you can choose wheter to go hunting (1), play with your dragon (2) or let him sleep (3). You can also check on your dragon (4) and see his statistics." << endl << "If any statistic falls to 0 your dragon will perish, so take good care of them and good luck." << endl;
    while (a == 1)
    {
        cout << endl << "*What shall I choose...*" << endl;
        cin >> z;
        if (z == 4)
        {
            cout << "Hunger = " << Stat1.Get_Hunger() << "  Health = " << Stat2.Get_Health() << "  Love and Fun = " << Stat3.Get_Love();
        }
    }
   
}

