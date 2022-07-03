class Love {
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
        if (ran == 3) {
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