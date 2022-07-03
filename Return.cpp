class Return : public GameMode
{


public:
    void  Save(Creation Dramke, Hunger Humger, Love Lomve, Health Healmth)
    {
        ofstream file("Drake.txt");
        if (file)
        {
            file << Dramke.Get_name() << endl << Dramke.Get_Species() << endl << Dramke.Get_Elements() << endl << Humger.Get_Hunger() << endl << Lomve.Get_Love() << endl << Healmth.Get_Health();
            file.close();
        }
    }
    void Load(Hunger& Hungy, Health& Healthy, Love& Lovey)
    {
        string save;
        int cont;
        ifstream file("Drake.txt");
        if (file)
        {
            getline(file, save);
            stringstream ss(save);
            ss >> name;
            cout << name;
            getline(file, save);
            ss.str("");
            ss.clear();
            ss << save;
            ss >> type;
            cout << type;
            getline(file, save);
            ss.str("");
            ss.clear();
            ss << save;
            ss >> element;
            cout << element;
            getline(file, save);
            ss.str("");
            ss.clear();
            ss << save;
            ss >> cont;
            Hungy.Set_Hunger(cont);
            getline(file, save);
            ss.str("");
            ss.clear();
            ss << save;
            ss >> cont;
            Lovey.Set_Love(cont);
            getline(file, save);
            ss.str("");
            ss.clear();
            ss << save;
            ss >> cont;
            Healthy.Set_Health(cont);
        }
    }
    string Get_Element()
    {
        return element;
    }
    string Get_type()
    {
        return type;
    }
};