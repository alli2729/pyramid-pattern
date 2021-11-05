#include <iostream>
#include <conio.h>
using namespace std;

void IncreasePyramidStar(int rows)
{
    cout << "***** Increasing Star Pattern *****" << endl;
    cout << "Enter the number of rows :" << endl;
    cin >> rows;
    for (int i = 0; i <= rows; ++i)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void DecreasePyramidStar(int rows)
{
    cout << "***** decreasing *****" << endl;
    cout << "Enter the number of rows :" << endl;
    cin >> rows;
    for (int i = rows; i >= 1; --i)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void IncreasePyramidNumber(int rows)
{
    cout << "----- Increasing Number Pattern -----" << endl;
    cout << "Enter the number of rows :" << endl;
    cin >> rows;
    for (int i = 0; i <= rows; ++i)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void DecreasePyramidNumber(int rows)
{
    cout << "***** decreasing *****" << endl;
    cout << "Enter the number of rows :" << endl;
    cin >> rows;
    for (int i = rows; i >= 1; --i)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

int main(int argc, char const *argv[])
{
    int pick, Pick, row;

    system("cls");
    cout << " Welcome \n Please Press Any Key To Countinue" << endl;
    getch();
    system("cls");

    cout << "Please Select the method" << endl;
    cout << " 1 increasing pattern \n 2 deacrising pattern" << endl;
    cin >> pick;
    system("cls");

    switch (pick)
    {
    case 1:
        cout << " 1 Star pattern \n 2 Number pattern" << endl;
        cin >> Pick;
        system("cls");
        switch (Pick)
        {
        case 1:
            IncreasePyramidStar(row);
            break;
        case 2:
            IncreasePyramidNumber(row);
            break;
        default:
            cout << "Wrong Number !" << endl;
            break;
        }
        break;
    case 2:
        cout << " 1 Star pattern \n 2 Number pattern" << endl;
        cin >> Pick;
        system("cls");
        switch (Pick)
        {
        case 1:
            DecreasePyramidStar(row);
            break;
        case 2:
            DecreasePyramidNumber(row);
            break;
        default:
            cout << "Wrong Number !" << endl;
            break;
        }
        break;
    default:
        cout << "Error ! \n Please Run Again";
        break;
    }
    getch();
    return 0;
}
