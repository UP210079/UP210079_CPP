#include <iostream>
#include <cmath>

using std::cout; using std::endl;

const double pi = std::acos(-1);

int main() {

    cout << "cos(pi) = " << std::cos(pi) << '\n'
         << "cos(pi/6) = " << std::cos(pi/6) << '\n'
         << "cos(pi/4) = " << std::cos(pi/4) << '\n'
         << "cos(pi/3) = " << std::cos(pi/3) << '\n'
         << "cos(pi/2) = " << std::cos(pi/2) << '\n'
         << "cos(+0) = " << std::cos(0.0) << '\n'
         << "cos(-0) = " << std::cos(-0.0) << '\n';

    return EXIT_SUCCESS;
}
