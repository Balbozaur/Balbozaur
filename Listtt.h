class Listtt
{
    Sustanance* pog;
    int size;

public:
    Listtt();
    ~Listtt();
    void add(Sustanance& piece);
    void Fill();
    string Random();
    void write();
    Listtt operator=(Listtt& x);
    void operator+(Sustanance& y);
    bool operator==(Listtt& z);
    friend class Hunger;
    friend void fill(Listtt& con);
};
