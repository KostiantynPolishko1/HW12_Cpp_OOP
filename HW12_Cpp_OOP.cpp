#include <iostream>

using std::cout;
char arrAtomName[][3][20]{ {"H", "Hydrogen"}, {"He", "Helium"}, {"Li", "Lithium"}, {"Be", "Beryllium"},
    {"B", "Boron"}, {"C", "Carbon"}, {"N", "Nitrogen"}, {"O", "Oxygen"}, {"F", "Fluorine"}, {"Ne", "Neon"},
    {"Na", "Sodium"}, {"Mg", "Magnesium"}, {"Al", "Aluminum"}, {"Si", "Silicon"}, {"P", "Phosphorus"},
    {"S", "Sulfur"}, {"Cl", "Chlorine"}, {"Ar", "Argon"} };


int main(void)
{
       
    char str[] = "C2H5OH";
    char* ps = str;

    int size = sizeof(str) / sizeof(str[0]);
    int count(0);
    bool isSymbolRepeat;

    return 0;
}
;