#include <iostream>
using namespace std;
void vol(float l, float y, float c) // Cuboid
{
    float v = l * y * c;
    cout << "\nVolume of Cube: " << v;
}
void vol(float r, float h) // Cylinder
{
    int v;
    v = 3.14 * r * r * h;
    cout << "\n\nVolume of Cylinder: " << v;
}
void vol(float r) // sphere
{
    float v;
    v = (4 / 3) * 3.14 * r * r * r;

    cout << "\nVolume of sphere :" << v;
}
int main()
{
    float l, r, t, x, h, y, c;
    cout << "\nEnter the length , breadth and width of Cube: \n";
    cin >> l >> y >> c;
    cout << "\n\nEnter the radius & height of Cylinder: \n";
    cin >> r >> h;
    cout << "\n\nEnter the radius of sphere: \n";
    cin >> x;
    vol(l, y, c);
    vol(r, h);
    vol(x);
    return 0;
}