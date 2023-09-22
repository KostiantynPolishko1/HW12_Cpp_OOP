
#include <iostream>

using std::cout;
char arrAtomName[][3][20]{ {"H", "Hydrogen"}, {"He", "Helium"}, {"Li", "Lithium"}, {"Be", "Beryllium"},
    {"B", "Boron"}, {"C", "Carbon"}, {"N", "Nitrogen"}, {"O", "Oxygen"}, {"F", "Fluorine"}, {"Ne", "Neon"},
    {"Na", "Sodium"}, {"Mg", "Magnesium"}, {"Al", "Aluminum"}, {"Si", "Silicon"}, {"P", "Phosphorus"},
    {"S", "Sulfur"}, {"Cl", "Chlorine"}, {"Ar", "Argon"} };

int AtomNumber(char s) {

    int size = sizeof(arrAtomName) / sizeof(arrAtomName[0]);

    for (int i = 0; i < size; i++)
    {
        if (sizeof(arrAtomName[i][0]) / sizeof(arrAtomName[i][0][0]) != 2)
            if (s == arrAtomName[i][0][0])
                return ++i;
    }
}
;
int main(void)
{
    char str[] = "C2H5OH";
    char* ps = str;

    int size = sizeof(str) / sizeof(str[0]);
    int count(0);
    bool isSymbolRepeat;

    for (int i = 0; i < size; i++)
    {
        if (static_cast<int>(str[i]) > 64 && static_cast<int>(str[i]) < 91)
        {
            isSymbolRepeat = false;

            for (int j = 0; j < i; j++)
            {
                if (str[i] == str[j]) {
                    isSymbolRepeat = true;
                    break;
                }
            }

            if (!isSymbolRepeat)
                count++;
        }
    }

    int** arrAtomNumber = new int* [count];
    for (int i = 0; i < count; i++)
        arrAtomNumber[i] = new int[2];

    int ind = 0;
    for (int i = 0; i < size; i++)
    {
        isSymbolRepeat = false;

        if (static_cast<int>(str[i]) > 64 && static_cast<int>(str[i]) < 91)
        {
            for (int j = 0; j < i; j++)
            {
                if (str[i] == str[j]) {
                    isSymbolRepeat = true;
                    break;
                }
            }

            if (!isSymbolRepeat) {
                arrAtomNumber[ind][0] = AtomNumber(str[i]);
                ind++;
            }
        }
    }

    for (int i = 0; i < count; i++)
        cout << arrAtomNumber[i][0] << "\t";

    for (int i = 0; i < count; i++) {
        delete[] arrAtomNumber[i];
        arrAtomNumber[i] = nullptr;
    }

    delete[] arrAtomNumber;
    arrAtomNumber = nullptr;
    ps = nullptr;

    return 0;
}
;