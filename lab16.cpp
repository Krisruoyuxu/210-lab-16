#include <iostream>
#include <iomanip>
#include <vector>
#include <array>
using namespace std;

class Color {
    private:
    int red, green, blue;

    public:
    // the default constructor, which is black
    Color() : red(0), green(0), blue(0) {}

    // setters and getters for each color(member variable)
    // red 
    void set_red(int input) { red = input; }
    int get_red() const{ return red; }
    // green
    void set_green(int input) { green = input; }
    int get_green() const{ return green; }
    // blue
    void set_blue(int input) { blue = input; }
    int get_blue() const{ return blue; }
    // mermber method print
    void print() const{
        cout << setw(6) << " red " << " green " << " blue " << right <<endl;
        cout << setw(6) << red;
        cout << setw(6) << green;
        cout << setw(6) << blue;
        cout << endl;
    }

};

int main() {
    // first color Klein Blue
    Color Klein_Blue;
    Klein_Blue.set_red(0);
    Klein_Blue.set_green(47);
    Klein_Blue.set_blue(167);

    Klein_Blue.print();

    // second color Marrs Green
    Color Marrs_Green;
    Marrs_Green.set_red(0);
    Marrs_Green.set_green(140);
    Marrs_Green.set_blue(140);

    Marrs_Green.print();

    // third color Hermès Orange
    Color Hermes_Orange;
    Hermes_Orange.set_red(243);
    Hermes_Orange.set_green(112);
    Hermes_Orange.set_blue(33);

    Hermes_Orange.print();

    return 0;
}