

#include <iostream>
using namespace std;
int main()
{
    float h, x, b;
    cout << "Enter x: ";
    cin >> x;
    cout << "Enter b: ";
    cin >> b;

        if (x<2)
    {
    h = ((x - 9*b*x) / (x - 2*b*(pow(x,2))));
    //cout << "Result: " << h << endl;
    }
    else
    {
      //  cout << "isn`t!" << endl;
    }

        float z, c, a;
        cout << "Enter a: ";
        cin >> a;
        cout << "Enter c: ";
        cin >> c;
        if (a >= 2)
    {
        z = ((a - 2 * c * a) / (a - 5 * c * (pow(a, 3))));
       // cout << "Result: " << z << endl;
    }
    else
    {
      //  cout << "isn`t!" << endl;
    }

       
        if (x < 2 && a >= 2)
        {
            float y = h / z;
            cout << "Y =: " << y << endl;
            cin >> y;
        }
        else
        {
            cout << "isn`t!" << endl;
        }


        return 0;
}



