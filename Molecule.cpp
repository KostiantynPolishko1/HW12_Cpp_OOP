#include "Molecule.h"
//
//#include <iostream>
//
//using std::cout;
//char arrAtomName[][3][20]{ {"H", "Hydrogen"}, {"He", "Helium"}, {"Li", "Lithium"}, {"Be", "Beryllium"},
//    {"B", "Boron"}, {"C", "Carbon"}, {"N", "Nitrogen"}, {"O", "Oxygen"}, {"F", "Fluorine"}, {"Ne", "Neon"},
//    {"Na", "Sodium"}, {"Mg", "Magnesium"}, {"Al", "Aluminum"}, {"Si", "Silicon"}, {"P", "Phosphorus"},
//    {"S", "Sulfur"}, {"Cl", "Chlorine"}, {"Ar", "Argon"} };
//
//int fillAtomNumber(char s) {
//
//    int size = sizeof(arrAtomName) / sizeof(arrAtomName[0]);
//
//    for (int i = 0; i < size; i++)
//    {
//        if (arrAtomName[i][0][1] == '\0')
//            if (s == arrAtomName[i][0][0])
//                return ++i;
//    }
//}
//;
//void fillAtomQuntity(char* arrElement, int** arrAtomNumber, char s, int value) {
//
//    int indElement = 0;
//    for (int i = 0; i < sizeof(arrElement) / sizeof(arrElement[0]); i++)
//    {
//        if (s == arrElement[i]) {
//            indElement = i;
//            break;
//        }
//    }
//
//    arrAtomNumber[indElement][1] += value;
//}
//;
//void fillAtomQuntity(char* arrElement, int** arrAtomNumber, char s) {
//
//    int indElement = 0;
//    for (int i = 0; i < sizeof(arrElement) / sizeof(arrElement[0]); i++)
//    {
//        if (s == arrElement[i]) {
//            indElement = i;
//            break;
//        }
//    }
//
//    arrAtomNumber[indElement][1] += 1;
//}
//;
//int main(void)
//{
//    char str[] = "CO2H2SO4";
//    char* ps = str;
//
//    int size = (sizeof(str) / sizeof(str[0])) - 1;
//    int count(0);
//    bool isSymbolRepeat;
//
//    //function for indentify the quantity of unique chemic elements
//    for (int i = 0; i < size; i++)
//    {
//        if (static_cast<int>(str[i]) >= 65 && static_cast<int>(str[i]) <= 90)
//        {
//            isSymbolRepeat = false;
//
//            for (int j = 0; j < i; j++)
//            {
//                if (str[i] == str[j]) {
//                    isSymbolRepeat = true;
//                    break;
//                }
//            }
//
//            if (!isSymbolRepeat)
//                count++;
//        }
//    }
//
//    //function create memory
//    char* arrElements = new char[count];
//
//    int** arrAtomNumber = new int* [count];
//    for (int i = 0; i < count; i++)
//        arrAtomNumber[i] = new int[2] {0, 0};
//
//    //function for identify atomic number of unique chemic elements
//    int ind = 0;
//    for (int i = 0; i < size; i++)
//    {
//        isSymbolRepeat = false;
//
//        if (static_cast<int>(str[i]) >= 65 && static_cast<int>(str[i]) <= 90)
//        {
//            for (int j = 0; j < i; j++)
//            {
//                if (str[i] == str[j]) {
//                    isSymbolRepeat = true;
//                    break;
//                }
//            }
//
//            if (!isSymbolRepeat) {
//                arrElements[ind] = str[i];
//                arrAtomNumber[ind][0] = fillAtomNumber(str[i]);
//                ind++;
//            }
//        }
//    }
//
//    //function for identify the summary quantity of atoms by each unique chemic elements
//    for (int i = 0; i < size; i++)
//    {
//        if (i == size - 1) {
//            if (!(static_cast<int>(str[i]) >= 48 && static_cast<int>(str[i]) <= 57))
//                fillAtomQuntity(arrElements, arrAtomNumber, str[i]);
//            break;
//        }
//        else if (static_cast<int>(str[i]) >= 48 && static_cast<int>(str[i]) <= 57)
//            continue;
//        else if (static_cast<int>(str[i + 1]) >= 48 && static_cast<int>(str[i + 1]) <= 57)
//        {
//            int value = static_cast<int>(str[i + 1]) % 48;
//            fillAtomQuntity(arrElements, arrAtomNumber, str[i], value);
//        }
//        else if (!(static_cast<int>(str[i + 1]) >= 48 && static_cast<int>(str[i + 1]) <= 57))
//            fillAtomQuntity(arrElements, arrAtomNumber, str[i]);
//    }
//
//    //function show result numberAtom : quantityAtom
//    for (int i = 0; i < count; i++)
//    {
//        cout << arrAtomNumber[i][0] << "\t" << arrAtomNumber[i][1] << "\n";
//    }
//
//    //function clear memory
//    for (int i = 0; i < count; i++) {
//        delete[] arrAtomNumber[i];
//        arrAtomNumber[i] = nullptr;
//    }
//
//    delete[] arrAtomNumber;
//    arrAtomNumber = nullptr;
//
//    delete[] arrElements;
//    arrElements = nullptr;
//
//    ps = nullptr;
//
//    return 0;
//}
//;