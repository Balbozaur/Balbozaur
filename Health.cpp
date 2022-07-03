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