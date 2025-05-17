#include <iostream>
#include <cmath>

using namespace std;
const double PI = 3.14159265359;



void rectangularToCylindrical(double x, double y, double z)
 {
    double r = sqrt(x * x + y * y);
    double theta = atan2(y, x) * 180.0 / PI;
    cout << "Cylindrical: r = " << r << ", theta = " << theta << " degrees, z = " << z << endl;
}

void rectangularToSpherical(double x, double y, double z) {
    double r = sqrt(x * x + y * y + z * z);
    double theta = atan2(y, x) * 180.0 / PI; 
    double phi = acos(z / r) * 180.0 / PI;   
    cout << "Spherical: r = " << r << ", theta = " << theta << " degrees, phi = " << phi << " degrees" << endl;
}
void cylindricalToRectangular(double r, double theta, double z) {
    double x = r * cos(theta * PI / 180.0); 
    double y = r * sin(theta * PI / 180.0); 
    cout << "Rectangular: x = " << x << ", y = " << y << ", z = " << z << endl;
}

void cylindricalToSpherical(double r, double theta, double z) {
    double x = r * cos(theta * PI / 180.0);
    double y = r * sin(theta * PI / 180.0);
    rectangularToSpherical(x, y, z); 

void sphericalToRectangular(double r, double theta, double phi) {
    double x = r * sin(phi * PI / 180.0) * cos(theta * PI / 180.0);
    double y = r * sin(phi * PI / 180.0) * sin(theta * PI / 180.0);
    double z = r * cos(phi * PI / 180.0);
    cout << "Rectangular: x = " << x << ", y = " << y << ", z = " << z << endl;
}

void sphericalToCylindrical(double r, double theta, double phi) {
    double z = r * cos(phi * PI / 180.0);
    double r_cyl = r * sin(phi * PI / 180.0);
    cout << "Cylindrical: r = " << r_cyl << ", theta = " << theta << " degrees, z = " << z << endl;
}
int main()
{
    cout<<"hello welcome to my project "<<endl;
    cout<< "Name:- Arnav Upate" << endl;
      cout<< "sem/year:- 3rd/2nd"<<endl;
      cout<<" proffesor:- prof. M.S.Patil "<<endl;
      cout<< "Topic :- convertion of coordinate system "<< endl;

    cout << "1: Rectangular to Cylindrical\n";
    cout << "2: Rectangular to Spherical\n";
    cout << "3: Cylindrical to Rectangular\n";
    cout << "4: Cylindrical to Spherical\n";
    cout << "5: Spherical to Rectangular\n";
    cout << "6: Spherical to Cylindrical\n";
    cout << "Enter your choice: ";
    int choice,x,y,z,r,theta,phi;
    cin >> choice;
    switch (choice)
    {
        case 1:
            cout << "Enter rectangular coordinates (x, y, z): ";
            cin >> x >> y >> z;
            rectangularToCylindrical(x, y, z);
            break;
        case 2:
            cout << "Enter rectangular coordinates (x, y, z): ";
            cin >> x >> y >> z;
            rectangularToSpherical(x, y, z);
            break;
        case 3:
            cout << "Enter cylindrical coordinates (r, theta in degrees, z): ";
            cin >> r >> theta >> z;
            cylindricalToRectangular(r, theta, z);
            break;
        case 4:
            cout << "Enter cylindrical coordinates (r, theta in degrees, z): ";
            cin >> r >> theta >> z;
            cylindricalToSpherical(r, theta, z);
            break;
        case 5:
            cout << "Enter spherical coordinates (r, theta in degrees, phi in degrees): ";
            cin >> r >> theta >> phi;
            sphericalToRectangular(r, theta, phi);
            break;
        case 6:
            cout << "Enter spherical coordinates (r, theta in degrees, phi in degrees): ";
            cin >> r >> theta >> phi;
            sphericalToCylindrical(r, theta, phi);
            break;
        default:
            cout << "Invalid choice!" << endl;
            break;
    }

    return 0;
}





