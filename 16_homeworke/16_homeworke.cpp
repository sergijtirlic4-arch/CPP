#include <iostream>
using namespace std;

struct Car {
    char color[30];
    char model[50];
    char number[9];
};

void FillCar(Car& car) {
    cout << "Enter model: ";
    cin.getline(car.model, 50);

    cout << "Enter color: ";
    cin.getline(car.color, 30);

    cout << "Enter number (5-digit or word up to 8 chars): ";
    cin.getline(car.number, 9);
}

void PrintCar(const Car& car) {
    cout << "Model: " << car.model
        << " | Color: " << car.color
        << " | Number: " << car.number << "\n";
}

void PrintAllCars(Car* garage, int size) {
    cout << "\n--- All Cars in Garage ---\n";
    for (int i = 0; i < size; i++) {
        cout << i + 1 << ". ";
        PrintCar(garage[i]);
    }
}

void EditCar(Car* garage, int size) {
    int index;
    cout << "Enter car index to edit (1-" << size << "): ";
    cin >> index;
    cin.ignore();

    if (index < 1 || index > size) {
        cout << "Invalid index!\n";
        return;
    }

    cout << "\nEditing Car #" << index << ":\n";
    FillCar(garage[index - 1]);
    cout << "Car successfully updated!\n";
}

void SearchByNumber(Car* garage, int size) {
    char search_val[9];
    cout << "Enter car number to search: ";
    cin.getline(search_val, 9);

    bool found = false;
    for (int i = 0; i < size; i++) {
        if (strcmp(garage[i].number, search_val) == 0) {
            cout << "Found: ";
            PrintCar(garage[i]);
            found = true;
        }
    }

    if (!found) {
        cout << "Car with number \"" << search_val << "\" not found.\n";
    }
}

int main() {
    const int SIZE = 10;

    Car garage[SIZE] = {
        {"Red", "Ferrari SF-24", "LECLERC"},
        {"Dark Blue", "Red Bull RB20", "MADMAX"},
        {"Papaya", "McLaren MCL38", "NORRIS"},
        {"Silver", "Mercedes W05", "HAMILTON"},
        {"Green", "Aston Martin", "ALONSO"},
        {"Red", "Ferrari F2004", "SCHUMI"},
        {"Red/White", "McLaren MP4/4", "SENNA"},
        {"Blue/Yellow", "Williams FW14B", "MANSELL"},
        {"Black/Gold", "Lotus 72", "FITTIPAL"},
        {"Silver/Red", "McLaren MP4/13", "HAKKINEN"}
    };

    int choice;
    do {
        cout << "\n================= DREAM GARAGE MENU =================";
        cout << "\n1. Show all cars";
        cout << "\n2. Edit car data";
        cout << "\n3. Search car by number";
        cout << "\n0. Exit";
        cout << "\nYour choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
        case 1: PrintAllCars(garage, SIZE); break;
        case 2: EditCar(garage, SIZE); break;
        case 3: SearchByNumber(garage, SIZE); break;
        case 0: cout << "Goodbye!\n"; break;
        default: cout << "Wrong choice. Try again.\n"; break;
        }
    } while (choice != 0);
}
