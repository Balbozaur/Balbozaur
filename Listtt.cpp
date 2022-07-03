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
            *this + (*P);
        }

    }
    string Random()
    {
        int r = rand() % size;
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
    Listtt operator=(Listtt& x)
    {
        this->pog = x.pog;
        this->size = x.size;
        return *this;
    }
    void operator+(Sustanance& y)
    {
        this->add(y);
    }
    bool operator==(Listtt& z)
    {
        if (this->size == z.size and this->pog == z.pog)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    friend class Hunger;
    friend void fill(Listtt& con);
};