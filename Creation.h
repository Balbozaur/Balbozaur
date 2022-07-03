class Creation : public GameMode
{
    vector<string> species;
    vector<string> elements;
    int x;
    int y;
public:
    void Species();
    void Elements();
    void virtual Beginning();
    string Get_Species();
    string Get_Elements();
    void Set_Species();
    void Set_Element();
};
