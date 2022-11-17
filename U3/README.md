<center>

# UP210079_CPP
# **JOSÉ ALBERTO FLORES MARTÍNEZ**

</center>

>UNIDAD 3
***  
 1. [Bisección](https://github.com/UP210079/UP210079_CPP/blob/main/U2/01_ABC.cpp)

```
double fnEcuacion1(double x)
{
    return (pow(x, 2) - 8*x + 15);
}
int main()
{
    double x1 = -10;
    double x2 = 4.5;
    double xPromedio;

    double ErrorEstandar = .00001;
    double ErrorRelativo = abs(x2 - x1); 
    int i = 1;
    while (ErrorRelativo > ErrorEstandar)
    {
        xPromedio = (x1 + x2)/2;
        if (fnEcuacion1(x1) * fnEcuacion1(xPromedio) < 0)
        {
            x2 = xPromedio;
        
        } 
        else 
        {
            x1 = xPromedio;
        }
        ErrorRelativo = abs(x2 - x1);
        i = i + 1;
    }
    cout << "i = " << i << "\nraiz = " << xPromedio << endl;
    cout << "...Hecho :)";
    return 0;
    
```
![Biseccion](./img/biseccion.png "Biseccion")

 2. [Grados a Radianes](https://github.com/UP210079/UP210079_CPP/blob/main/U2/02_renta.cpp)

```

int main( )
{
        float grados,rad;
 
        printf("Introduce los grados");
        scanf("%f",&grados);
        rad=grados*2*PI/360;
        printf("%f grados son: %f radianes",grados,rad);
 
    system("pause");
    return 0;
}

```
![Grados a Radianes](./img/gradosradianes.png "Grados a Radianes")

 3. [Año Bisiesto](https://github.com/UP210079/UP210079_CPP/blob/main/U2/03_Tablas.cpp)

```
int main(){
      int a;
      cout<<"Ingresa año"<<endl;
      cin>>a;
     if(a % 4 == 0 && (a % 100 != 0 || a % 400 == 0)){
         cout<<"El año "<<a<<" Si es bisiesto ";
     }else{
         cout<<"El año "<<a<<" No es bisiesto ";
     }
      return 0;
}

```
![Año Bisiesto](./img/añobisiesto.png "Año Bisiesto")

 4. [Coseno](https://github.com/UP210079/UP210079_CPP/blob/main/U2/04_Beneficios.cpp)

```
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


```
![Coseno](./img/coseno.png "Coseno")

 5. [Juegos](https://github.com/UP210079/UP210079_CPP/blob/main/U2/05_Juegos.cpp)
   
```

int main(){
    int edad;
    int precio;
    cout << "Introduce tu edad ";
    cin >> edad;

    if (edad < 4)
        precio = 0;  
    else if (edad >= 4 && edad <= 18)
        precio = 5;
    else if (edad > 18)
        precio = 10;

    cout << "Cantidad a pagar: $" << precio << endl;
    cout << "Bienvenido a Michines Games" << endl;

    return 0;
}

```
![Juegos](./img/Juegos.png "Juegos")

 6. [Pizza](https://github.com/UP210079/UP210079_CPP/blob/main/U2/06_Pizza.cpp)

```

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

```
![Pizza](./img/Pizza.png "Pizza")

 7. [Temperatura](https://github.com/UP210079/UP210079_CPP/blob/main/U2/07_Temperatura.cpp)

```

int main(){
    float temperatura;
    int contador = 1;
    float tempeAcum = 0;
    int temperatura_min = 9999, temperatura_max = -9999;
    do
    {
        cout << "Dame una temperatura" << endl;
        cin >> temperatura;
        tempeAcum +=temperatura;

        contador ++;
        if (temperatura <= temperatura_min)
        {
            temperatura_min=temperatura;
        }
        if (temperatura >= temperatura_max)
        {
            temperatura_max=temperatura;
        }
    } while (contador <=6);
    cout << "La temperatura de hoy es: " << tempeAcum/6 <<endl;
    cout << "La temperatura mínima es: " << temperatura_min<< endl;
    cout << "La temperatura máxima es: " << temperatura_max << endl;
    return 0;
}

```
![Temperatura](./img/Temperatura.png "Temperatura")

 8. [Precios](https://github.com/UP210079/UP210079_CPP/blob/main/U2/08_Precios.cpp)

```

int main (){


    int producto;
    float precio;
    float calculo=0;
    float total=0;
    int vuelta;

    cout << "Bienvenido a Michin Store \n";

    do
    {
        
        cout << "Dame el número de productos \n";
        cin  >> producto;

        if (producto !=0 and producto >0){

            cout << "¿Cuál es el precio de el producto? \n";
            cin >> precio;
            total +=(precio*producto);
        }

    } while (producto != 0);
    cout << "El total de tu compra es de: \n" << total << endl;

    return 0;
}

```
![Precios](./img/Precios.png "Precios")

9. [BinarioADecimal](https://github.com/UP210079/UP210079_CPP/blob/main/U2/09_BinarioADecimal.cpp)

```

int main()
{
    int exp,digito;
    double binario, decimal;

   cout << "Introduce el número: ";
   cin >> binario;
   exp=0;
   decimal=0;
   while(((int)(binario/10))!=0)
   {
           digito = (int)binario % 10;
           decimal = decimal + digito * pow(2.0,exp);
           exp++;
           binario=(int)(binario/10);
   }

   decimal=decimal + binario * pow(2.0,exp);
   cout << endl << "Decimal: " << decimal << endl;
   
    return 0;
}

```
![Binario a Decimal](./img/BInario.png "Binario a decimal")

</center>

![AubreyAngry](./img/aungry.gif "AubreyAngry")

</center>

>>>>>>>                   UP210079