#include <iostream>  
using namespace std;

struct fruit
{
    string name;
    int weight;
    string data_to_good;

};


int main() {


    fruit apple;
    apple.name = "Apple";
    apple.weight = 1;
    apple.data_to_good = "5.08.2086";

    fruit potato;
    potato.name = "Potato";
    potato.weight = 2;
    potato.data_to_good = "5.08.2096";

    cout << "Fruit name: " << apple.name << endl;
    cout << "Weight: " << apple.weight << " kg" << endl;
    cout << "Ripeness: " << apple.data_to_good <<"\n\n" << endl;
    
    cout << "Fruit name: " << potato.name << endl;
    cout << "Weight: " << potato.weight << " kg" << endl;
    cout << "Ripeness: " << potato.data_to_good << endl;


    cout << "Fruit name: " << apple << endl;

    return 0; 
}

