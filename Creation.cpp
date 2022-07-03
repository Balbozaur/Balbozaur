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