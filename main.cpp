#include <bits/stdc++.h>
using namespace std;

int main()
{
    double x1, y1, x2, y2;
    cout << "Introduce las coordenadas del primer punto (x1, y1): ";
    cin >> x1 >> y1;
    cout << "Introduce las coordenadas del segundo punto (x2, y2): ";
    cin >> x2 >> y2;
    double distancia=sqrt(pow(x2-x1, 2)+pow(y2-y1, 2));
    cout<<"La distancia entre los puntos es: "<<distancia<<endl;
    return 0;
}