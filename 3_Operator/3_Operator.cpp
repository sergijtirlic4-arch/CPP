#include <iostream>
using namespace std;

int main()
{
    string country;
    cout << "Enter country name: "; cin >> country;
    if (country == "Ukraine") {
        cout << "Kyiw is the capital of Ukraine" << endl;
    }
    else if (country == "(Germany)") {
        cout << "Berlin is the capital of Germany" << endl;
    }
    else if (country == "France") {
        cout << "Paris is the capital of France" << endl;
    }
    else if (country == "Poland") {
        cout << "Warsaw is the capital of Poland" << endl;
    }
    else if (country == "Italy") {
        cout << "Rome is the capital of Italy" << endl;
    }
    else{
        cout << "Unknown country" << endl;
    }



    int countryChoice;
    cout << "Choose a country (1-5):\n1. Ukraine\n2. Germany\n3. France\n4. Poland\n5. Italy\n";
    cout << "Enter number: ";
    cin >> countryChoice;

    switch (countryChoice) {
    case 1:
        cout << "Kyiv" << endl;
        break;
    case 2:
        cout << "Berlin" << endl;
        break;
    case 3:
        cout << "Paris" << endl;
        break;
    case 4:
        cout << "Warsaw" << endl;
        break;
    case 5:
        cout << "Rome" << endl;
        break;
    default:
        cout << "Unknown choice" << endl;
        break;
    }


    int day;
    cout << "Enter day number (1-7): ";
    cin >> day;

    if (day == 6 || day == 7) {
        cout << "It is a weekend" << endl;
    }
    else if (day >= 1 && day <= 5) {
        cout << "It is a weekday" << endl;
    }
    else {
        cout << "Invalid day number" << endl;
    }



    int dayChoice;
    cout << "Enter day number (1-7): ";
    cin >> dayChoice;

    switch (dayChoice) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
        cout << "It is a weekday" << endl;
        break;
    case 6:
    case 7:
        cout << "It is a weekend" << endl;
        break;
    default:
        cout << "Invalid day number" << endl;
        break;
    }

    int direction;
    cout << "Enter current direction (1-North, 2-South, 3-West, 4-East): ";
    cin >> direction;

    cout << "New direction: ";
    if (direction == 1) {
        cout << "South" << endl;
    }
    else if (direction == 2) {
        cout << "North" << endl;
    }
    else if (direction == 3) {
        cout << "East" << endl;
    }
    else if (direction == 4) {
        cout << "West" << endl;
    }
    else {
        cout << "Unknown direction" << endl;
    }

    cout << "New direction: ";
    switch (direction) {
    case 1: cout << "South" << endl; break;
    case 2: cout << "North" << endl; break;
    case 3: cout << "East" << endl; break;
    case 4: cout << "West" << endl; break;
    default: cout << "Unknown direction" << endl; break;
    }


    int animal;
    cout << "Enter animal number (1-Giraffe, 2-Eagle, 3-Lion, 4-Cow, 5-Wolf, 6-Elephant, 7-Shark): ";
    cin >> animal;

    if (animal == 1 || animal == 4 || animal == 6) {
        cout << "Class: Herbivore" << endl;
    }
    else if (animal == 2 || animal == 3 || animal == 5 || animal == 7) {
        cout << "Class: Carnivore" << endl;
    }
    else {
        cout << "Unknown animal number" << endl;
    }

    switch (animal) {
    case 1:
    case 4:
    case 6:
        cout << "Class: Herbivore" << endl;
        break;
    case 2:
    case 3:
    case 5:
    case 7:
        cout << "Class: Carnivore" << endl;
        break;
    default:
        cout << "Unknown animal number" << endl;
        break;
    }

}


