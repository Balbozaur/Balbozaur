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