#include <iostream>
using namespace std;

struct WashingMachine {
    char brand[50];
    char color[50];
    int width;
    int length;
    int height;
    int power;
    int spinSpeed;
    int maxTemperature;
};

struct Iron {
    char brand[50];
    char model[50];
    char color[50];
    int minTemperature;
    int maxTemperature;
    bool steamSupply;
    int power;
};

struct Boiler {
    char brand[50];
    char color[50];
    int power;
    int volume;
    int maxTemperature;
};

int main() {
    WashingMachine myWasher = { "Samsung", "White", 60, 45, 85, 2000, 1200, 90 };

    cout << "===== WASHING MACHINE SPECIFICATIONS =====" << endl;
    cout << "Brand: " << myWasher.brand << endl;
    cout << "Color: " << myWasher.color << endl;
    cout << "Dimensions (WxLxH): " << myWasher.width << " x " << myWasher.length << " x " << myWasher.height << " cm" << endl;
    cout << "Power: " << myWasher.power << " W" << endl;
    cout << "Spin speed: " << myWasher.spinSpeed << " rpm" << endl;
    cout << "Max temperature: " << myWasher.maxTemperature << " C\n" << endl;

    Iron myIron = { "Philips", "Azur Series", "Blue", 70, 220, true, 2400 };

    cout << "===== IRON SPECIFICATIONS =====" << endl;
    cout << "Brand: " << myIron.brand << endl;
    cout << "Model: " << myIron.model << endl;
    cout << "Color: " << myIron.color << endl;
    cout << "Temperature range: from " << myIron.minTemperature << " to " << myIron.maxTemperature << " C" << endl;
    cout << "Steam supply: " << (myIron.steamSupply ? "Yes" : "No") << endl;
    cout << "Power: " << myIron.power << " W\n" << endl;

    Boiler myBoiler = { "Atlantic", "Silver", 1500, 80, 75 };

    cout << "===== BOILER SPECIFICATIONS =====" << endl;
    cout << "Brand: " << myBoiler.brand << endl;
    cout << "Color: " << myBoiler.color << endl;
    cout << "Power: " << myBoiler.power << " W" << endl;
    cout << "Volume: " << myBoiler.volume << " L" << endl;
    cout << "Max temperature: " << myBoiler.maxTemperature << " C" << endl;
}