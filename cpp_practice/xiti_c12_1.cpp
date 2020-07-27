#include <iostream>
#include <cstring>

using std::cout;
using std::endl;

class Cow {
    char name[20];
    char* hobby;
    double weight;
public:
    Cow();
    Cow(const char* nm, const char* ho, double wt);
    Cow(const Cow& c);
    ~Cow();
    Cow& operator=(const Cow& c);
    void ShowCow() const;
};

Cow::Cow() {
    name[0] = '\0';
    hobby = new char[1];
    hobby[0] = '\0';
    weight = 0;
}

Cow::Cow(const char* nm, const char* ho, double wt) {
    strcpy_s(name, nm);
    
    int len = strlen(ho);
    hobby = new char[len+1];
    strcpy_s(hobby, len+1,ho);
    weight = wt;
}

Cow::Cow(const Cow& c) {
    strcpy_s(name, c.name);

    int len = strlen(c.hobby);
    hobby = new char[len + 1];
    strcpy_s(hobby, len+1,c.hobby);
    weight = c.weight;
}

Cow::~Cow() {
    delete[] hobby;
}

Cow& Cow::operator=(const Cow& c) {
    if (this == &c) return *this;

    strcpy_s(name, c.name);
    
    int len = strlen(c.hobby);
    delete[] hobby;
    hobby = new char[len + 1];
    strcpy_s(hobby, len+1,c.hobby);
    weight = c.weight;
    return *this;
}

void Cow::ShowCow()const {
    cout << "Cow " << name << " hobby is" << hobby << " and it's weight is " << weight << endl;
}


//int main() {
int main56(){

    Cow cow1;
    Cow cow2 = Cow("sucy", "reading", 18.9);

    cow1.ShowCow();
    cow2.ShowCow();

    cow1 = cow2;
    cow1.ShowCow();
    cow2.ShowCow();

    Cow cow3 = cow2;
    cow1.ShowCow();
    cow2.ShowCow();
    cow3.ShowCow();

    return 0;
}