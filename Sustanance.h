class Sustanance
{
    string name;
    Sustanance* next;
public:
    Sustanance(string& Food);
    string Get_Name();
    friend class Listtt;
};
