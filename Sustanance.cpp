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