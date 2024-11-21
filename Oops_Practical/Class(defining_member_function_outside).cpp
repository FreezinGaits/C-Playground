#include <iostream>
using namespace std;
class Spellcaster {
public:
    void castSpell();
};
void Spellcaster::castSpell() {
        cout << "Abracadabra!!!" << endl;
    }
int main() {
    Spellcaster wizard;
    wizard.castSpell();

    return 0;
}

