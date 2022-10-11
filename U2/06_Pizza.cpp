#include <iostream>
using namespace std;
int main()
{

    int pizza;
    int typo;
    int ingredientes = 0;

    cout << "¿Qué tipo de pizza deseas? \n";
    cout << "Elige 1 o 2 \n";
    cout << "Pizza vegetariana = 1 \n";
    cout << "Pizza normal = 2 \n";
    cin >> typo;

    if (typo == 1)
    {
        cout << "Seleccionaste Pizza Vegetariana \n";
        cout << "Elige un ingrediente \n";
        cout << "Puedes elegir entre pimiento y tofu \n";
        cout << "Elige 1 o 2 \n";
        cout << "Pimiento = 1 \n";
        cout << "Tofu = 2 \n";
        cin >> ingredientes;

        if (ingredientes == 1)
        {
            cout << "Seleccionaste pimiento \n";
            cout << "Tu pizza incluirá tomate, pimiento, y queso de soya \n";
            cout << "\n";
        }
        else if (ingredientes == 2)
        {
            cout << "Seleccionaste tofu \n";
            cout << "Tu pizza incluirá tomate, tofu y queso de soya \n";
            cout << "\n";
        }
    }

    if (typo == 2)
    {
        cout << "Seleccionaste Pizza Normal \n";
        cout << "Elige un ingrediente \n";
        cout << "Puedes elegir entre jamón, salmón y peperoni \n";
        cout << "Elige 1, 2 o 3 \n";
        cout << "Pepperoni = 1 \n";
        cout << "Jamón = 2 \n";
        cout << "Salmón = 4 \n";
        cout << "\n";
        cin >> ingredientes;

        if (ingredientes == 1)
        {
            cout << "Seleccionaste peperoni \n";
            cout << "Tu pizza incluirá peperoni, tomate y queso mozarella \n";
            cout << "\n";
        }
        else if (ingredientes == 2)
        {
            cout << "Seleccionaste jamón \n";
            cout << "Tu pizza incluirá jamón, tomate y queso mozarella \n";
            cout << "\n";
        }
        else if (ingredientes == 3)
        {
            cout << "Seleccionaste salmón \n";
            cout << "Tu pizza incluirá salmón, tomate y queso mozarella \n";
            cout << "\n";
        }
    }

    cout << "Tu pizza estará lista pronto \n";
    cout << "Gracias por visitar Michin Pizzeria";
    cout << "\n";
    cout << "\n";
    cout << "\n";

    return 0;
}