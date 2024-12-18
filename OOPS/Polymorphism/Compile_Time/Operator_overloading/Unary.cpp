#include <iostream>
using namespace std;
class Score
{
    int val;

public:
    Score() : val(0) {}
    void operator++() { val++; }
    int show() { return val; }
};
int main()
{
    Score s1, s2;
    s1.show();
    s2.show();
    ++s1;
    ++s1;
    ++s2;
    cout<<s1.show();
    cout<<endl;
    cout<<s2.show();
    return 0;
}