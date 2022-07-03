#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include <random>
#include <list>
using namespace std;

class GameMode
{
protected:
    string name;
    string type;
    string element;
public:
    void Beginning()
    {

    }
    string Get_name()
    {
        return name;
    }
};



class Creation : public GameMode
{
    vector<string> species;
    vector<string> elements;
    int x = 0;
    int y = 0;
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
            getline(file, element);
            stringstream ss(element);
            ss >> element;
            elements.push_back(element);

        }
    }
    void virtual Beginning()
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
        if (x == 0 or 1 or 2)
        {
            if (x == 0)
            {
                cout << "Crystalls are beautiful. Especially when they shine. Be a light for your dragon so it may shine." << endl << "Crystall souls are often self sustaining but may easily crack.";
            }
            if (x == 2)
            {
                cout << "Metall is enduring and strong. Be a shield for your dragon so it may grow powerfull." << endl << "Metallic souls tend to be very durable but may fall to corrosion";
            }
            if (x == 1)
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
        if (y == 0 or 1 or 2 or 3 or 4)
        {
            cout << "Very well then. Now prepare. You shall be granted a dragon with a soul and heart which suits yours." << endl;
            cout << "*As you are holding a warm egg which was entrusted to you it starts to vibrate and thrash in your grasp." << endl;
            cout << "You do your best to hold it in place until... a small draconic head pops from its shell.* Now it is time." << endl << "What shall be the name of your dragon? " << endl;
            cin >> name;
            cout << endl << "Very well then. Guard them with your life. Let them grow, let them learn. You are their parent." << endl << "Go now Egg bearer and you " << name << " The " << species[x] << " " << elements[y] << "." << endl;
            cout << "Be safe!" << endl << endl;

        }
        else
        {
            cout << "I see you cannot take the matter seriously. Begone than! And next time choose an answer suited for the Egg Bearer!";
        }


    }
    string Get_Species()
    {
        return species[x];
    }
    string Get_Elements()
    {
        return elements[y];
    }
    void Set_Species()
    {
        string species;
        species = type;
    }
    void Set_Element()
    {
        string Element;
        Element = element;
        
    }

};
class Health {

    int health = 50;


public:
    int Increase()
    {
        int random1 = rand() % 3;
        if (random1 == 0) {
            cout << "Your dragon layed in a curled postion for a couple of minutes breathing steadily and regenerating eneergy.";
            health = health + 5;
        }
        if (random1 == 1) {
            cout << "Your dragon decided to go for a swim in a nearby river. You expect to be drenched no matter what you'll do next. ";
            health = health + 10;
        }
        if (random1 == 2) {
            cout << "Your dragon took a short nap while you were nearby gathering resources and spending your time on your own. They feel refreshed.";
            health = health + 15;
        }
        if (random1 == 3) {
            cout << "Your dragon went to sleep for a few solid hours. While they were breathing steadily steam poured from their nostrills forming wisps of their dreams for you to watch and adore.";
            health = health + 20;
        }
        return random1;
    }
    void Decrease(int rando)
    {

        cout << " Unfortunately during your hunting, your dragon fought with its prey, gaining some scratches and bruises";
        if (rando == 0) {
            health = health - 5;
        }
        if (rando == 1) {
            health = health - 10;
        }
        if (rando == 2) {
            health = health - 15;
        }
        if (rando == 3) {
            health = health - 20;
        }
    }
    int Get_Health()
    {
        return health;
    }
    int Set_Health(int Set)
    {
        health = Set;
        return health;
    }
};
class Love{
    int LoveAndFun = 50;

public:
    int Increase()
    {
        cout << "You decide to play with your dragon! They are looking thrilled to start a new game! They want to play ";
        int random1 = rand() % 3;

        if (random1 == 0) {
            cout << "chess. They are not smart but enjoy knocking pieces of the board c;";
            LoveAndFun = LoveAndFun + 5;
        }
        if (random1 == 1) {
            cout << "hide and seek. When you are hiding it is mostly your breath which gives you away. When you are seeking it is mostly your dragon's wiggling tail which lets you win c:";
            LoveAndFun = LoveAndFun + 10;
        }
        if (random1 == 2) {
            cout << "tag. The remarkable prowess of your dragon in flying and acrobatics makes you the tagged one most of the time c:<";
            LoveAndFun = LoveAndFun + 15;
        }
        if (random1 == 3) {
            cout << "catch. Oh! It is their favourite! They often want you to throw a really high stick or ball so they can use their wings and have fun in the air doing loops and tricks :D";
            LoveAndFun = LoveAndFun + 20;
        }
        return random1;
    }
    void Decrease(int ran)
    {
        cout << "After its moment of respite your dragon is getting a bit bored and wants your attention. You are literally their soulmate afterall.";
        if (ran == 0) {
            LoveAndFun = LoveAndFun - 5;
        }
        if (ran == 1) {
            LoveAndFun = LoveAndFun - 10;
        }
        if (ran == 2) {
            LoveAndFun = LoveAndFun - 15;
        }
        if (ran== 3) {
            LoveAndFun = LoveAndFun - 20;
        }
    }
    int Get_Love()
    {
        return LoveAndFun;
    }
    int Set_Love(int Set)
    {
        LoveAndFun = Set;
        return LoveAndFun;
    }
};
class TheHunt
{
    int choice;
    int i = 0;

    int stealth = (rand() % 3) + 1;
public:
    void Hunt()
    {
        cout << "You went with your dragon to find some food for them. Your dragon is quick and fierce but your human senses are sharper then those of any drake. Lead your dragon to its prey by giving him directions 1. Left 2. Right 3. Forward 4. Backwards." << endl;
        while (i < stealth)
        {
            int SoundOfPrey = rand() % 3;
            if (SoundOfPrey == 0)
            {
                cout << endl << "You hear a faint shuffle of plants to your right." << endl;
                cin >> choice;
                if (choice == 2)
                {
                    cout << "You feel your prey drawing closer";
                    i++;
                }
                else {
                    cout << "You start to wander, you have a suspicion that the tracks lead you in a circle";
                }

            }
            if (SoundOfPrey == 1)
            {
                cout << endl << "You swear you heard a faint chirping from the left. The tail of your companion wiggles with excitment." << endl;
                cin >> choice;
                if (choice == 1)
                {
                    cout << "You feel your prey drawing closer";
                    i++;
                }
                else {
                    cout << "The chirping continues but suddenly it changes direction. It does it several times and you start to get a headache";
                }
            }
            if (SoundOfPrey == 2)
            {
                cout << endl << "From behind you, a squeak, then a sound of running feet. You direct your dragon to the... ";
                cin >> choice;
                if (choice == 4)
                {
                    cout << "You feel your prey drawing closer";
                    i++;
                }
                else {
                    cout << "You could have sworn you chose a right direction... but it seems the reality is different";
                }
            }
            if (SoundOfPrey == 3)
            {
                cout << endl << "Straight ahead, a smell. Your dragon starts sinffing and points its head. You hold him wondering where to lead him...";
                cin >> choice;
                if (choice == 4)
                {
                    cout << "You feel your prey drawing closer";
                    i++;
                }
                else {
                    cout << "Maybe it was your dragons feverish zeal but something led you to choose a wrong direction oh well...";
                }
            }
        }
        i = 0;
    }
};
class Sustanance
{
    string name;
    Sustanance* next;
public:
    Sustanance(string& Food)
    {
        name = Food;
        next = NULL;
    }
    string Get_Name()
    {
        return name;
    }
    friend class Listtt;
};
class Listtt
{
    Sustanance* pog;
    int size;

public:
    Listtt()
    {
        pog = NULL;
        size = 0;
    }
    ~Listtt()
    {

    }
    void add(Sustanance& piece)
    {
        Sustanance* memory = pog;
        pog = &piece;
        piece.next = memory;
        size++;
    }
    void Fill()
    {

        ifstream file("List.txt");
        while (!file.eof())
        {
            Sustanance* P;
            string type;
            getline(file, type);
            stringstream ss(type);
            ss >> type;
            P = new Sustanance(type);
            this->add(*P);
        }

    }
    string Random()
    {
        int r = rand()%size ;
        Sustanance* Random = pog;
        while (r > 0)
        {
            Random = Random->next;
            --r;
        }
        return Random->name;
    }
    void write()
    {
        cout << pog->name;
    }
    friend class Hunger;
    friend void fill(Listtt& con);
};
class Hunger {
    int hunger = 50;
public:
    int Increase(string pogchamp)
    {
        int random1 = rand() % 3;
        cout << endl << "Your dragon managed to catch a ";
        if (random1 == 0) {
            cout << "Tiny ";
            hunger = hunger + 5;
        }
        if (random1 == 1) {
            cout << "Small ";
            hunger = hunger + 10;
        }
        if (random1 == 2) {
            cout << "Big ";
            hunger = hunger + 15;
        }
        if (random1 == 3) {
            cout << "Huge ";
            hunger = hunger + 20;
        }
        cout << pogchamp;
        return random1;
    }
    void Decrease(int rand)
    {
        cout << endl << "All this playing made your dragon feel a bit peckish.";
        if (rand == 0) {
            hunger = hunger - 5;
        }
        if (rand == 1) {
            hunger = hunger - 10;
        }
        if (rand == 2) {
            hunger = hunger - 15;
        }
        if (rand == 3) {
            hunger = hunger - 20;
        }
    }
    int Get_Hunger()
    {
        return hunger;
    }
    int Set_Hunger(int Set)
    {
        hunger = Set;
        return hunger;
    }
};
class Return : public GameMode
{


public:
    void  Save(Creation Dramke, Hunger Humger, Love Lomve, Health Healmth)
    {
        ofstream file("Drake.txt");
        if (file)
        {
            file << Dramke.Get_name() << endl << Dramke.Get_Species() << endl << Dramke.Get_Elements() << endl << Humger.Get_Hunger() << endl << Lomve.Get_Love() << endl << Healmth.Get_Health();
            file.close();
        }
    }
    void Load(Hunger &Hungy, Health &Healthy, Love &Lovey)
    {
        string save;
        int cont;
        ifstream file("Drake.txt");
        if (file)
        {
            getline(file, save);
            stringstream ss(save);
            ss >> name;
            cout << name;
            getline(file, save);
            ss.str("");
            ss.clear();
            ss << save;
            ss >> type;
            cout << type;
            getline(file, save);
            ss.str("");
            ss.clear();
            ss << save;
            ss >> element;
            cout << element;
            getline(file, save);
            ss.str("");
            ss.clear();
            ss << save;
            ss >> cont;
            Hungy.Set_Hunger(cont);
            getline(file, save);
            ss.str("");
            ss.clear();
            ss << save;
            ss >> cont;
            Lovey.Set_Love(cont);
            getline(file, save);
            ss.str("");
            ss.clear();
            ss << save;
            ss >> cont;
            Healthy.Set_Health(cont);
        }
    }
    string Get_Element()
    {
        return element;
    }
    string Get_type()
    {
        return type;
    }
};
int main()
{
    srand(time(NULL));
    int a = 1;
    int z;
    int c;
    Return Saving;
    Hunger Stat1;
    Health Stat2;
    Love Stat3;
    Creation choice;
    cout << "Would you like to start a new game? If so then press 1. If you were already chosen by a dragon and wish not to abandon it, press 2.";
    cin >> c;
    if (c == 1) 
    {
        choice.Species();
        choice.Elements();
        choice.Beginning();
        
        cout << "*You've returned with " << choice.Get_name() << " to a cave you prepared for them. The dragon requires nutrition to live but also fun and love to develop well." << endl;
    }
    if (c == 2)
    {
        cout << "You return back to your drake, hoping to meet them in good health and even better spirits.";
        Saving.Load(Stat1, Stat2, Stat3);
        choice.Set_Element();
        choice.Set_Species();
    }
    Listtt Kappa;
    Kappa.Fill();
    cout << "In the cave you can choose wheter to go hunting (1), play with your dragon (2) or let them rest (3). You can also check on your dragon (4) and see their statistics." << endl << "If any statistic falls below 0 your dragon will perish, so take good care of them and good luck." << endl;
    cout << "If you want to leave your dragon for a while press (5) [Exit]" << endl;
    while (a == 1)
    {
        cout << endl << "*What shall I choose...*" << endl;
        cin >> z;
        if (z == 4)
        {
            cout << "Hunger = " << Stat1.Get_Hunger() << "  Health = " << Stat2.Get_Health() << "  Love and Fun = " << Stat3.Get_Love();
        }
        if (z == 1)
        {
            TheHunt Test;
            Test.Hunt();
            Stat2.Decrease(Stat1.Increase(Kappa.Random()));
            if (Stat2.Get_Health() <= 0)
            {
                cout << "Unfortunetly due to heavy wounds and exhaustion that your dragon sustained, they were taken away from you and someone else took care of them. Ending 2";
                a = 0;
            }
            else
            cout << ". You return with them to your cave, tired but happy seing your friend nourished.";
        }
        if (z == 2)
        {
            
            if (Stat1.Get_Hunger() <= 0)
            {
                cout << "Unfortunetly due to severe malnourishment, your dragon chose you as its next meal and went of to find itself a new home and possibly new hunting grounds. Ending 1";
                a = 0;
            }
            else
            Stat1.Decrease(Stat3.Increase());
        }
        if (z == 3)
        {
            
            if (Stat3.Get_Love() <= 0)
            {
                cout << "Unfortunetly due to your negligence and lack of attention you gave to your drake it chose to abandon you and return to the great temple of its origin. Ending 3";
                a = 0;
            }
            else
            Stat3.Decrease(Stat2.Increase());
        }
        if (z == 5)
        {
             Saving.Save(choice, Stat1, Stat3, Stat2);
             a = 0;
        }
    }
}