#include <iostream>
using namespace std;

int main(){
    int amount, max, index;
    cout << "Amount of numbers: ";
    cin >> amount;
    int *array = new int[amount];
    for (int i = 0; i < amount; i++) cin >> array[i];
    bool right = false;
    bool left = false;
    if (array[amount / 2] > array[0]) left = true;
    if (array[amount / 2] < array[amount - 1]) right = true;
    if (left && right) max = array[amount - 1];
    if (left && !right){
        index = amount / 2;
        while ((array[index] < array[index + 1]) && (index != amount - 1)) index++;
        max = array[index];
    }
    if (right && !left){
        index = amount / 2 - 1;
        while ((array[index] < array[index - 1]) && (index != 0)) index--;
        max = array[index];
    }
    cout << "Result: " << max << endl;
}