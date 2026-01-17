/*  
    Victor Li 
    1/15/2026 Classwork
*/

#include <iostream> 
#include <string> 

using namespace std;

int main()
{
    
// This code demonstrates floating point division
    cout << 13 / 5 << endl;
    cout << 91 / 7 << endl;
    cout << 13 / 5.0 << endl;
    cout << 91.0 / 7 << endl;
    
// This code outputs the Sun's distance and mass
    float distance;
    double mass;
    
    distance = 1.45979E11;
    mass = 1.989E30;
    
    cout << "The Sun is " << distance << " meters away. \n";
    cout << "The Sun's mass is " << mass << " kilograms. \n\n";
    
// This code uses the sizeof() function
    double amount;
    cout << sizeof(double) << endl;
    cout << sizeof(amount) << endl;
    
// This code demonstrates boolean values
    bool value = true;
    
    cout << value << endl;
    value = false;
    cout << value << endl;
    
// This code demonstrates floating point variables
    int rate = 2;
    float hours = 5.25;
//int pay;
    float pay;
    pay = rate * hours;
    cout << "Your pay is " << pay << endl;
    
// This code asks the user their name and says hello back
    string userName; 
    
    cout << "\n What is your name?" << endl;
    cin >> userName;
    cout << "Hello, " << userName << endl;
    
    return 0;
}
