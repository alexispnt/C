#include <iostream>
#include <sstream>
#include <limits>
#include <vector>

using std::string; using std::vector;
using std::cout; using std::endl;
using std::cin; using std::numeric_limits;

int main()
{
    int age;

    while (true) {
        cout << "Enter the age of the wine: ";
        if (cin >> age) {
            break;
        } else {
            cout << "Enter a valid integer value!\n";
            cin.clear();
            cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
        }
    }

    return EXIT_SUCCESS;
}