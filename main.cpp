#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int guests;
    int diameter;
    float area;
    float slicesPerPizza;
    double slicesNeeded;
    int pizzaOrder;
    const float Slice = 14.125;
    const int Slice_per_guest = 3;
    const float PI = 3.14159;


    cout << "Please enter the expected number of guests:" << endl;
    cin >> guests;
    slicesNeeded = guests*Slice_per_guest;
    cout << "Please enter the size of the pizzas:" << endl;
    cin >> diameter;

    area = (0.5*diameter)*(0.5*diameter)*PI;
    slicesPerPizza = area/Slice;
    pizzaOrder = ceil(slicesNeeded/slicesPerPizza);

    cout << "You should order " << pizzaOrder << " pizzas.";

    return 0;
}