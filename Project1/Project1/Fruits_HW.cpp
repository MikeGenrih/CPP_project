#include <iostream>
using namespace std;

struct Fruit {
    string name;
    int weight;
    string date_to_good;
};

int main() {
    // Create Massive with 3 fruits
    Fruit fruits[3];

    // user need enter data for first fruin
    cout << "Enter name of first fruit: ";
    cin >> fruits[0].name;
    cout << "Enter weight for first fruit (in kg): ";
    cin >> fruits[0].weight;
    cout << "Enter data to good for first fruit: ";
    cin >> fruits[0].date_to_good;

        // user need enter data for second fruin
        cout << "Enter name of second fruit: ";
        cin >> fruits[1].name;
        cout << "Enter weight for second fruit: ";
        cin >> fruits[1].weight;
        cout << "Enter data to good for second fruit: ";
        cin >> fruits[1].date_to_good;

            // user need enter data for third fruin
            cout << "Enter name of third  fruit: ";
            cin >> fruits[2].name;
            cout << "Enter weight for third  fruit: ";
            cin >> fruits[2].weight;
            cout << "Enter data to good for third  fruit: ";
            cin >> fruits[2].date_to_good;

    // output data from massive
    cout << "\nInformation about fruits:\n";

        cout << "name first -> " << fruits[0].name
            << "   Weight -> " << fruits[0].weight
            << "kilograms, DATE TO GOOD " << fruits[0].date_to_good << endl;

            cout << "name second -> " << fruits[1].name
                << "   Weight -> " << fruits[1].weight
                << "kilograms, DATE TO GOOD " << fruits[1].date_to_good << endl;

                    cout << "name third -> " << fruits[2].name
                        << "   Weight -> " << fruits[2].weight
                        << "kilograms, DATE TO GOOD " << fruits[2].date_to_good << endl;

    return 0;
}
