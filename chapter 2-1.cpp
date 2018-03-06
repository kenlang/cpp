#include <iostream>
using std::cout;
using std::cin;
using std::endl;
int yards(int);
int main(){
    cout << "whats distance in furlongs?\n";
    int furlong;
    cin >> furlong;
    int yard = yards(furlong);
    cout << "ok,that is equal to " << yard << "yards." << endl;



    return 0;

}

int yards(int fu){

return 220*fu;
