#include<bits/stdc++.h>
using namespace std;

class Spell
{
    private:
        string scrollName;
    public:
        Spell() : scrollName("") {}
        Spell(string name): scrollName(name){}
        virtual ~Spell(){}
        string revealScrollName()
        {
            return scrollName;
        }
};

class Fireball: public Spell
{
    private:
        int power;
    public:
        Fireball(int power):power(power){}
        void revealFirepower()
        {
            cout << "Fireball: " << power << endl;
        }
};

class Frostbite: public Spell
{
    private: int power;
    public:
        Frostbite(int power): power(power) {}
        void revealFrostpower()
        {
            cout << "Frostbite: " << power << endl;
        }
};

class Thunderstorm: public Spell
{
    private: int power;
    public:
        Thunderstorm(int power): power(power) {}
        void revealThunderpower()
        {
            cout << "Thunderstorm: " << power << endl;
        }
};

class Waterbolt : public Spell
{
    private : int power;
    public:
        Waterbolt(int power):power(power) {} 
        void revealWaterpower()
        {
            cout << "Waterbolt: " << power << endl;
        }
};

class SpellJournal
{
    public:
        static string journal;
        static string read()
        {
            return journal;
        }
};
string SpellJournal::journal = "";

void counterspell(Spell* spell)
{
 // edit here
    if(Fireball *fb = dynamic_cast<Fireball*>(spell))
    {
        fb->revealFirepower();
    }
    else if(Frostbite *fz = dynamic_cast<Frostbite*>(spell))
    {
        fz->revealFrostpower();
    }
    else if(Waterbolt *wb = dynamic_cast<Waterbolt*>(spell))
    {
        wb->revealWaterpower();
    }
    else if(Thunderstorm *ts = dynamic_cast<Thunderstorm*>(spell))
    {
        ts->revealThunderpower();
    }

    string a = spell->revealScrollName();
    string b = SpellJournal::read();
    int m=a.size();
    int n=b.size();
    vector<vector<int>> s(m+1, vector<int>(n+1,0));
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            s[i+1][j+1] = max(s[i][j]+(a[i]==b[j]), max(s[i+1][j],s[i][j+1]));
        }
    }
    cout << s[m][n] << endl;
}

class Wizard
{
    public:
        Spell *cast()
        {
            Spell* spell;
            string s;
            cin >> s;
            int power;
            cin >> power;
            if(s == "fire")
            {
                spell = new Fireball(power);
            }
            else if(s == "frost")
            {
                spell = new Frostbite(power);
            }
            else if(s == "water")
            {
                spell = new Waterbolt(power);
            }
            else if(s == "thunder")
            {
                spell = new Thunderstorm(power);
            }
            else
            {
                spell = new Spell(s);
                cin >> SpellJournal::journal;
            }
            return spell;
        }
};
int main()
{
    int T;
    cin >> T;
    Wizard Arawn;
    while(T--)
    {
        Spell * spell = Arawn.cast();
        counterspell(spell);
    }
    return 0;
}