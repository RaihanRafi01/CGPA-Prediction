#include <iostream>
using namespace std;
main()
{
    float a, b, c, d, i;
    char ah;
    for (;;)
    {
        cout << " Numerical        Letter Grade       Grade Point" << endl;
        cout << "  90-100                A+	               4.00" << endl;
        cout << "  85-<90	             A	               3.75" << endl;
        cout << "  80-<85	             B+	               3.50" << endl;
        cout << "  75-<80	             B	               3.25" << endl;
        cout << "  70-<75	             C+	               3.00" << endl;
        cout << "  65-<70	             C	               2.75" << endl;
        cout << "  60-<65	             D+	               2.50" << endl;
        cout << "  50-<60	             D	               2.25" << endl;
        cout << "  <50	                 F	               0.00" << endl;
        cout << "Enter your Mid Number : ";
        cin >> i;
        b = i * 40 / 100;
        cout << "After Contributing 40% Your Marks will be : " << b << endl
             << endl;
        cout << "Guess your Final Number : ";
        cin >> c;
        d = c * 60 / 100;
        a = b + d;
        cout << "After Contributing 60% Your Marks will be : " << d << endl
             << endl;
        cout << "Total    : " << a << endl
             << endl;

        if (a >= 90)
        {
            cout << "Your CGPA will be := 4.00" << endl;
            cout << "Your grade will be := A+" << endl;
        }
        else if (a < 90 && a >= 85)
        {
            cout << "Your CGPA will be := 3.75" << endl;
            cout << "Your grade will be := A" << endl;
        }
        else if (a < 85 && a >= 80)
        {
            cout << "Your CGPA will be := 3.50" << endl;
            cout << "Your grade will be := B+" << endl;
        }
        else if (a < 80 && a >= 75)
        {
            cout << "Your CGPA will be := 3.25" << endl;
            cout << "Your grade will be := B" << endl;
        }
        else if (a < 75 && a >= 70)
        {
            cout << "Your CGPA will be := 3.00" << endl;
            cout << "Your grade will be := C+" << endl;
        }
        else if (a < 70 && a >= 65)
        {
            cout << "Your CGPA will be := 2.75" << endl;
            cout << "Your grade will be := C" << endl;
        }
        else if (a < 65 && a >= 60)
        {
            cout << "Your CGPA will be := 2.50" << endl;
            cout << "Your grade will be := D+" << endl;
        }
        else if (a < 60 && a >= 50)
        {
            cout << "Your CGPA will be := 2.25" << endl;
            cout << "Your grade will be := D" << endl;
        }
        else if (a < 50)
        {
            cout << "Your CGPA will be := 0.00" << endl;
            cout << "Your grade will be := F" << endl
                 << endl
                 << "          !!!!!!!!!!      FAIL     !!!!!!!!!!          ";
        }
        cout << "  " << endl;
        cout << "Do you Want to Calculate Again ?" << endl;
        cout << " Say  >>y<< or  >>n<< " << endl;
        cin >> ah;
        if (ah == 'y')
            continue;
        else
            cout << "Thank You" << endl;
        break;
    }
}
