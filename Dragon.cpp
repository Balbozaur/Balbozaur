#include <iostream>
#include <string>
#include <vector>
#include <random>
#include <time.h>
using namespace std;
class Elements {
    vector<string> Tablica; 
};

class PlayersAbillities {
public:
    void feed()
    {

    }
    void play()
    {

    }
    void hunt()
    {

    }

};

class Dragon {

public:
    string Title;
    string Name;
    int ArmorClass;
    int HitPoints;
    int Hunger;
    int Love;
    void Birth()
    {
        srand(time(NULL));
        cin >> Name;
        vector<string> Title;
        int NewTitle = rand() % Title.size - 1;
    }
};


int main()
{
    std::cout << "Hello World!\n";
}
