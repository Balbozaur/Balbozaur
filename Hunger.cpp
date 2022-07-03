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