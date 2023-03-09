#include<iostream>
#include<cmath>
#define PI 3.14159
#define E 2.718281828459045235
//Reyna Guadalupe Alonso Huerta 2TM25
using namespace std; 
int gradarad(float gra){
	
	float rad=0;
	rad=(gra*PI)/180;
	cout<<rad<<endl;
	return 0;
}
int radagrad(float rad){
	float grad=0;
	grad=(rad*180)/PI;
	cout<<grad;
	return 0;
}
int distp1p2(float x1=0,float y1=0,float z1=0, float x2=0, float y2=0, float z2=0){ float p1p2=sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1))+((z2-z1)*(z2-z1)));
cout<<p1p2;
return 0;
}

int recapol(float x=0, float y=0){
	float r=0;
	 float teta=0;
	r=sqrt((x*x)+(y*y));
	teta=atan(y/x);
	cout<<"("<<r<<","<<teta<<")";
	return 0;
}
int polarec(float r=0, float teta=0){
 	float x=0;
 	float y=0;
 	
 	x=r*cos(teta);
	y=r*sin(teta);
	
	cout<<x<<" "<<y;
	
	return 0;
 }

	//para pasar de coordenadas polares a rectangulares ingresando teta en radianes
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float r, theta, x, y;
    
    cout << "Introduce el valor de r: ";
    cin >> r;
    
    cout << "Introduce el valor de theta en radianes: ";
    cin >> theta;
    
    x = r * cos(theta);
    y = r * sin(theta);
    
    cout << "Las coordenadas rectangulares son: (" << x << ", " << y << ")" << endl;
    
    return 0;
}
//para pasar de coordenadas polares a rectangulares en grados

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float r, theta_degrees, theta_radians, x, y;
    
    cout << "Introduce el valor de r: ";
    cin >> r;
    
    cout << "Introduce el valor de theta en grados: ";
    cin >> theta_degrees;
    
    theta_radians = theta_degrees * M_PI / 180.0;
    
    x = r * cos(theta_radians);
    y = r * sin(theta_radians);
    
    cout << "Las coordenadas rectangulares son: (" << x << ", " << y << ")" << endl;
    
    return 0;
}
//para pasar de coordenadas rectangulares a polares en radianes
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float x, y, r, theta;
    
    cout << "Introduce el valor de x: ";
    cin >> x;
    
    cout << "Introduce el valor de y: ";
    cin >> y;
    
    r = sqrt(x*x + y*y);
    theta = atan2(y, x);
    
    cout << "Las coordenadas polares son: (" << r << ", " << theta << " rad)" << endl;
    
    return 0;
}
//para pasar de coordenadas rectangulares a polares en grados
#include <iostream>
#include <cmath> // Necesitamos esta librería para usar la función atan2()

using namespace std;

int main() {
    double x, y, r, theta;
    
    // Pedimos al usuario que ingrese las coordenadas rectangulares x, y
    cout << "Ingrese la coordenada x: ";
    cin >> x;
    cout << "Ingrese la coordenada y: ";
    cin >> y;
    
    // Calculamos la distancia r usando el teorema de Pitágoras
    r = sqrt(pow(x, 2) + pow(y, 2));
    
    // Calculamos el ángulo theta en radianes usando la función atan2()
    theta = atan2(y, x);
    
    // Convertimos el ángulo theta de radianes a grados
    theta = theta * 180 / M_PI;
    
    // Imprimimos las coordenadas polares r, theta en grados
    cout << "Coordenadas polares en grados: (" << r << ", " << theta << "°)" << endl;
    
    return 0;
}

//para encontrar un punto medio entre dos puntos
#include <iostream>

using namespace std;

int main() {
    double x1, y1, x2, y2, x_medio, y_medio;
    
    // Pedimos al usuario que ingrese las coordenadas de los dos puntos
    cout << "Ingrese la coordenada x del primer punto: ";
    cin >> x1;
    cout << "Ingrese la coordenada y del primer punto: ";
    cin >> y1;
    cout << "Ingrese la coordenada x del segundo punto: ";
    cin >> x2;
    cout << "Ingrese la coordenada y del segundo punto: ";
    cin >> y2;
    
    // Calculamos el punto medio usando las fórmulas correspondientes
    x_medio = (x1 + x2) / 2;
    y_medio = (y1 + y2) / 2;
    
    // Imprimimos las coordenadas del punto medio
    cout << "El punto medio es: (" << x_medio << ", " << y_medio << ")" << endl;
    
    return 0;
}

//para encontrar la pendiente de la recta formada por ambos puntos
#include <iostream>

using namespace std;

int main() {
    double x1, y1, x2, y2, m;
    
    // Pedimos al usuario que ingrese las coordenadas de los dos puntos
    cout << "Ingrese la coordenada x del primer punto: ";
    cin >> x1;
    cout << "Ingrese la coordenada y del primer punto: ";
    cin >> y1;
    cout << "Ingrese la coordenada x del segundo punto: ";
    cin >> x2;
    cout << "Ingrese la coordenada y del segundo punto: ";
    cin >> y2;
    
    // Calculamos la pendiente usando la fórmula correspondiente
    m = (y2 - y1) / (x2 - x1);
    
    // Imprimimos la pendiente de la recta en la pantalla
    cout << "La pendiente de la recta es: " << m << endl;
    
    return 0;
}

//para encontrar la distancia entre dos puntos
#include <iostream>
#include <cmath> // Necesitamos esta librería para usar la función sqrt()

using namespace std;

int main() {
    double x1, y1, x2, y2, distancia;
    
    // Pedimos al usuario que ingrese las coordenadas de los dos puntos
    cout << "Ingrese la coordenada x del primer punto: ";
    cin >> x1;
    cout << "Ingrese la coordenada y del primer punto: ";
    cin >> y1;
    cout << "Ingrese la coordenada x del segundo punto: ";
    cin >> x2;
    cout << "Ingrese la coordenada y del segundo punto: ";
    cin >> y2;
    
    // Calculamos la distancia usando la fórmula correspondiente
    distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    
    // Imprimimos la distancia entre los dos puntos en la pantalla
    cout << "La distancia entre los dos puntos es: " << distancia << endl;
    
    return 0;
}

//para pasar de coordenadas rectangulares a cilindricas en grados

#include <iostream>
#include <cmath> // Necesitamos esta librería para usar la función atan2()

using namespace std;

int main() {
    double x, y, z, r, theta, z_cilindricas;
    const double pi = 3.14159265358979323846; // Definimos la constante pi
    
    // Pedimos al usuario que ingrese las coordenadas rectangulares
    cout << "Ingrese la coordenada x: ";
    cin >> x;
    cout << "Ingrese la coordenada y: ";
    cin >> y;
    cout << "Ingrese la coordenada z: ";
    cin >> z;
    
    // Calculamos las coordenadas cilíndricas r, theta y z
    r = sqrt(pow(x, 2) + pow(y, 2));
    theta = atan2(y, x) * 180.0 / pi;
    z_cilindricas = z;
    
    // Imprimimos las coordenadas cilíndricas en grados en la pantalla
    cout << "Coordenadas cilindricas en grados: (r, theta, z) = (" << r << ", " << theta << "°, " << z_cilindricas << ")" << endl;
    
    return 0;
}
//para pasar de coordenadas cilindricas a rectangulares en grados
#include <iostream>
#include <cmath> // Necesitamos esta librería para usar la función sin() y cos()

using namespace std;

int main() {
    double r, theta, z, x, y;
    const double pi = 3.14159265358979323846; // Definimos la constante pi
    
    // Pedimos al usuario que ingrese las coordenadas cilíndricas en grados
    cout << "Ingrese la coordenada r: ";
    cin >> r;
    cout << "Ingrese la coordenada theta en grados: ";
    cin >> theta;
    cout << "Ingrese la coordenada z: ";
    cin >> z;
    
    // Convertimos el ángulo a radianes
    theta = theta * pi / 180.0;
    
    // Calculamos las coordenadas rectangulares
    x = r * cos(theta);
    y = r * sin(theta);
    
    // Imprimimos las coordenadas rectangulares en la pantalla
    cout << "Coordenadas rectangulares: (x, y, z) = (" << x << ", " << y << ", " << z << ")" << endl;
    
    return 0;
}

//para pasar de coordenadas rectangulares a cilindricas en radianes

#include <iostream>
#include <cmath> // Necesitamos esta librería para usar la función atan2()

using namespace std;

int main() {
    double x, y, z, r, theta, z_cilindricas;
    
    // Pedimos al usuario que ingrese las coordenadas rectangulares
    cout << "Ingrese la coordenada x: ";
    cin >> x;
    cout << "Ingrese la coordenada y: ";
    cin >> y;
    cout << "Ingrese la coordenada z: ";
    cin >> z;
    
    // Calculamos las coordenadas cilíndricas r, theta y z
    r = sqrt(pow(x, 2) + pow(y, 2));
    theta = atan2(y, x);
    z_cilindricas = z;
    
    // Imprimimos las coordenadas cilíndricas en radianes en la pantalla
    cout << "Coordenadas cilindricas en radianes: (r, theta, z) = (" << r << ", " << theta << ", " << z_cilindricas << ")" << endl;
    
    return 0;
}
//para pasar de coordenadas cilindricas a rectangulares en radianes
#include <iostream>
#include <cmath> // Necesitamos esta librería para usar las funciones sin() y cos()

using namespace std;

int main() {
    double r, theta, z, x, y;
    
    // Pedimos al usuario que ingrese las coordenadas cilíndricas en radianes
    cout << "Ingrese la coordenada r: ";
    cin >> r;
    cout << "Ingrese la coordenada theta en radianes: ";
    cin >> theta;
    cout << "Ingrese la coordenada z: ";
    cin >> z;
    
    // Calculamos las coordenadas rectangulares
    x = r * cos(theta);
    y = r * sin(theta);
    
    // Imprimimos las coordenadas rectangulares en la pantalla
    cout << "Coordenadas rectangulares: (x, y, z) = (" << x << ", " << y << ", " << z << ")" << endl;
    
    return 0;
}

//para pasar de coordenadas esfericas a rectangulares en radianes
#include <iostream>
#include <cmath> // Necesitamos esta librería para usar las funciones sin(), cos() y sqrt()

using namespace std;

int main() {
    double rho, theta, phi, x, y, z;
    
    // Pedimos al usuario que ingrese las coordenadas esféricas en radianes
    cout << "Ingrese la coordenada rho: ";
    cin >> rho;
    cout << "Ingrese la coordenada theta en radianes: ";
    cin >> theta;
    cout << "Ingrese la coordenada phi en radianes: ";
    cin >> phi;
    
    // Calculamos las coordenadas rectangulares
    x = rho * sin(phi) * cos(theta);
    y = rho * sin(phi) * sin(theta);
    z = rho * cos(phi);
    
    // Imprimimos las coordenadas rectangulares en la pantalla
    cout << "Coordenadas rectangulares: (x, y, z) = (" << x << ", " << y << ", " << z << ")" << endl;
    
    return 0;
}

//para pasar de coordenadas esfericas a rectangulares en grados

#include <iostream>
#include <cmath> // Necesitamos esta librería para usar las funciones sin(), cos() y sqrt()

using namespace std;

int main() {
    double rho, theta_deg, phi_deg, x, y, z;
    const double PI = 3.14159265358979323846; // Definimos la constante PI
    
    // Pedimos al usuario que ingrese las coordenadas esféricas en grados
    cout << "Ingrese la coordenada rho: ";
    cin >> rho;
    cout << "Ingrese la coordenada theta en grados: ";
    cin >> theta_deg;
    cout << "Ingrese la coordenada phi en grados: ";
    cin >> phi_deg;
    
    // Convertimos los ángulos a radianes
    double theta = theta_deg * PI / 180.0;
    double phi = phi_deg * PI / 180.0;
    
    // Calculamos las coordenadas rectangulares
    x = rho * sin(phi) * cos(theta);
    y = rho * sin(phi) * sin(theta);
    z = rho * cos(phi);
    
    // Imprimimos las coordenadas rectangulares en la pantalla
    cout << "Coordenadas rectangulares: (x, y, z) = (" << x << ", " << y << ", " << z << ")" << endl;
    
    return 0;
}
//para pasar de coordenadas rectangulares a esfericas en grados
#include <iostream>
#include <cmath> // Necesitamos esta librería para usar la función atan2() y la constante PI

using namespace std;

int main() {
    double x, y, z, rho, theta_deg, phi_deg;
    const double PI = 3.14159265358979323846; // Definimos la constante PI
    
    // Pedimos al usuario que ingrese las coordenadas rectangulares en grados
    cout << "Ingrese la coordenada x: ";
    cin >> x;
    cout << "Ingrese la coordenada y: ";
    cin >> y;
    cout << "Ingrese la coordenada z: ";
    cin >> z;
    
    // Calculamos las coordenadas esféricas
    rho = sqrt(x*x + y*y + z*z);
    theta_deg = atan2(y, x) * 180.0 / PI;
    phi_deg = atan2(sqrt(x*x + y*y), z) * 180.0 / PI;
    
    // Imprimimos las coordenadas esféricas en la pantalla
    cout << "Coordenadas esféricas: (rho, theta, phi) = (" << rho << ", " << theta_deg << " grados, " << phi_deg << " grados)" << endl;
    
    return 0;
}

//para pasar de coordenadas esfericas a cilindricas en radianes
#include <iostream>
#include <cmath> // Necesitamos esta librería para usar la constante PI

using namespace std;

int main() {
    double rho, theta, phi, z;
    const double PI = 3.14159265358979323846; // Definimos la constante PI
    
    // Pedimos al usuario que ingrese las coordenadas esféricas en radianes
    cout << "Ingrese la coordenada rho: ";
    cin >> rho;
    cout << "Ingrese la coordenada theta: ";
    cin >> theta;
    cout << "Ingrese la coordenada phi: ";
    cin >> phi;
    
    // Calculamos las coordenadas cilíndricas
    z = rho * cos(phi);
    rho = rho * sin(phi);
    
    // Imprimimos las coordenadas cilíndricas en la pantalla
    cout << "Coordenadas cilindricas: (rho, theta, z) = (" << rho << ", " << theta << " radianes, " << z << ")" << endl;
    
    return 0;
}

//para pasar de coordenadas cilindricas a esfericas en radianes

#include <iostream>
#include <cmath> // Necesitamos esta librería para usar la constante PI

using namespace std;

int main() {
    double rho, theta, z, phi;
    const double PI = 3.14159265358979323846; // Definimos la constante PI
    
    // Pedimos al usuario que ingrese las coordenadas cilíndricas en radianes
    cout << "Ingrese la coordenada rho: ";
    cin >> rho;
    cout << "Ingrese la coordenada theta: ";
    cin >> theta;
    cout << "Ingrese la coordenada z: ";
    cin >> z;
    
    // Calculamos las coordenadas esféricas
    phi = atan2(z, rho);
    rho = sqrt(pow(rho, 2) + pow(z, 2));
    
    // Imprimimos las coordenadas esféricas en la pantalla
    cout << "Coordenadas esfericas: (rho, theta, phi) = (" << rho << ", " << theta << " radianes, " << phi << ")" << endl;
    
    return 0;
}
//para sacar el producto punto entre dos vectores
#include <iostream>
#include <vector> // Necesitamos esta librería para usar vectores
using namespace std;

int main() {
    vector<double> v1(3), v2(3);
    double productoPunto = 0.0;
    
    // Pedimos al usuario que ingrese los elementos de los vectores
    cout << "Ingrese los elementos del primer vector:" << endl;
    for(int i = 0; i < 3; i++) {
        cout << "Elemento " << i+1 << ": ";
        cin >> v1[i];
    }
    cout << "Ingrese los elementos del segundo vector:" << endl;
    for(int i = 0; i < 3; i++) {
        cout << "Elemento " << i+1 << ": ";
        cin >> v2[i];
    }
    
    // Calculamos el producto punto
    for(int i = 0; i < 3; i++) {
        productoPunto += v1[i] * v2[i];
    }
    
    // Imprimimos el producto punto en la pantalla
    cout << "El producto punto entre los dos vectores es: " << productoPunto << endl;
    
    return 0;
}

//para sacar la suma de dos vectores u+v
#include <iostream>
#include <vector> // Necesitamos esta librería para usar vectores
using namespace std;

int main() {
    vector<double> u(3), v(3), suma(3);
    
    // Pedimos al usuario que ingrese los elementos de los vectores
    cout << "Ingrese los elementos del vector u:" << endl;
    for(int i = 0; i < 3; i++) {
        cout << "Elemento " << i+1 << ": ";
        cin >> u[i];
    }
    cout << "Ingrese los elementos del vector v:" << endl;
    for(int i = 0; i < 3; i++) {
        cout << "Elemento " << i+1 << ": ";
        cin >> v[i];
    }
    
    // Calculamos la suma de los vectores
    for(int i = 0; i < 3; i++) {
        suma[i] = u[i] + v[i];
    }
    
    // Imprimimos la suma en la pantalla
    cout << "La suma de los vectores u y v es: (";
    for(int i = 0; i < 3; i++) {
        cout << suma[i];
        if(i != 2) cout << ", ";
    }
    cout << ")" << endl;
    
    return 0;
}
//para sacar la resta de dos vectores u-v

#include <iostream>
#include <vector> // Necesitamos esta librería para usar vectores
using namespace std;

int main() {
    vector<double> u(3), v(3), resta(3);
    
    // Pedimos al usuario que ingrese los elementos de los vectores
    cout << "Ingrese los elementos del vector u:" << endl;
    for(int i = 0; i < 3; i++) {
        cout << "Elemento " << i+1 << ": ";
        cin >> u[i];
    }
    cout << "Ingrese los elementos del vector v:" << endl;
    for(int i = 0; i < 3; i++) {
        cout << "Elemento " << i+1 << ": ";
        cin >> v[i];
    }
    
    // Calculamos la resta de los vectores
    for(int i = 0; i < 3; i++) {
        resta[i] = u[i] - v[i];
    }
    
    // Imprimimos la resta en la pantalla
    cout << "La resta de los vectores u y v es: (";
    for(int i = 0; i < 3; i++) {
        cout << resta[i];
        if(i != 2) cout << ", ";
    }
    cout << ")" << endl;
    
    return 0;
}
//para sacar un vector por escalar k*u
#include <iostream>
#include <vector> // Necesitamos esta librería para usar vectores
using namespace std;

int main() {
    vector<double> u(3), resultado(3);
    double k;
    
    // Pedimos al usuario que ingrese los elementos del vector u y la constante k
    cout << "Ingrese los elementos del vector u:" << endl;
    for(int i = 0; i < 3; i++) {
        cout << "Elemento " << i+1 << ": ";
        cin >> u[i];
    }
    cout << "Ingrese la constante k: ";
    cin >> k;
    
    // Calculamos el producto k*u
    for(int i = 0; i < 3; i++) {
        resultado[i] = k * u[i];
    }
    
    // Imprimimos el resultado en la pantalla
    cout << "El resultado de k*u es: (";
    for(int i = 0; i < 3; i++) {
        cout << resultado[i];
        if(i != 2) cout << ", ";
    }
    cout << ")" << endl;
    
    return 0;
}

//para calcular la longitud de un vector
#include <iostream>
#include <cmath> // Necesitamos esta librería para usar la función sqrt()
#include <vector> // Necesitamos esta librería para usar vectores
using namespace std;

int main() {
    vector<double> v(3);
    double longitud = 0;
    
    // Pedimos al usuario que ingrese los elementos del vector v
    cout << "Ingrese los elementos del vector v:" << endl;
    for(int i = 0; i < 3; i++) {
        cout << "Elemento " << i+1 << ": ";
        cin >> v[i];
    }
    
    // Calculamos la longitud del vector v
    for(int i = 0; i < 3; i++) {
        longitud += v[i] * v[i];
    }
    longitud = sqrt(longitud);
    
    // Imprimimos el resultado en la pantalla
    cout << "La longitud del vector v es: " << longitud << endl;
    
    return 0;
}
//para mostrar el vector dado normalizado
#include <iostream>
#include <cmath> // Necesitamos esta librería para usar la función sqrt()
#include <vector> // Necesitamos esta librería para usar vectores
using namespace std;

int main() {
    vector<double> v(3);
    double longitud = 0;
    
    // Pedimos al usuario que ingrese los elementos del vector v
    cout << "Ingrese los elementos del vector v:" << endl;
    for(int i = 0; i < 3; i++) {
        cout << "Elemento " << i+1 << ": ";
        cin >> v[i];
    }
    
    // Calculamos la longitud del vector v
    for(int i = 0; i < 3; i++) {
        longitud += v[i] * v[i];
    }
    longitud = sqrt(longitud);
    
    // Normalizamos el vector v
    for(int i = 0; i < 3; i++) {
        v[i] = v[i] / longitud;
    }
    
    // Imprimimos el vector normalizado en la pantalla
    cout << "El vector normalizado es: <";
    for(int i = 0; i < 3; i++) {
        cout << v[i];
        if(i < 2) {
            cout << ", ";
        }
    }
    cout << ">" << endl;
    
    return 0;
}
//para sacar el producto cruz entre u y v
#include <iostream>
#include <vector> // Necesitamos esta librería para usar vectores
using namespace std;

int main() {
    vector<double> u(3), v(3), w(3);
    
    // Pedimos al usuario que ingrese los elementos de los vectores u y v
    cout << "Ingrese los elementos del vector u:" << endl;
    for(int i = 0; i < 3; i++) {
        cout << "Elemento " << i+1 << ": ";
        cin >> u[i];
    }
    
    cout << "Ingrese los elementos del vector v:" << endl;
    for(int i = 0; i < 3; i++) {
        cout << "Elemento " << i+1 << ": ";
        cin >> v[i];
    }
    
    // Calculamos el producto cruz entre los vectores u y v
    w[0] = u[1]*v[2] - u[2]*v[1];
    w[1] = u[2]*v[0] - u[0]*v[2];
    w[2] = u[0]*v[1] - u[1]*v[0];
    
    // Imprimimos el resultado en la pantalla
    cout << "El producto cruz entre los vectores u y v es: <";
    for(int i = 0; i < 3; i++) {
        cout << w[i];
        if(i < 2) {
            cout << ", ";
        }
    }
    cout << ">" << endl;
    
    return 0;
}
