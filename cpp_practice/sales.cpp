#include <iostream>
#include "sales.h"


namespace SALES {
    void calcSales(Sales& s) {
        double max = s.sales[0];
        double min = s.sales[0];
        double sum = 0;
        double average = 0;
        int i;

        for (i = 0; i < 4; i++) {
            if (s.sales[i] < min) {
                min = s.sales[i];
            }
            if (s.sales[i] > max) {
                max = s.sales[i];
            }

            sum += s.sales[i];
        }

        average = sum / 4;

        s.average = average;
        s.max = max;
        s.min = min;
    }


    void setSales(Sales & s, const double ar[], int n) {
        int i;


        for (i = 0; i < 4; i++) {
            if (n > 0) {
                s.sales[i] = ar[i];
                n--;
            }
            else {
                s.sales[i] = 0;
            }
        }

        calcSales(s);
    }

    void setSales(Sales & s) {
        using std::cout;
        using std::cin;

        for (int i = 0; i < 4; i++) {
            cout << "please input QUARTERS " << i + 1  << " sales: ";
            (cin >> s.sales[i]).get();
        }

        calcSales(s);
    }

    void showSales(const Sales & s) {
        using std::cout;
        using std::endl;
        for (int i = 0; i < 4; i++) {
            cout << "QUARTERS " << i+1 << " sales: " << s.sales[i] << endl;
        }

        cout << "average: " << s.average << endl;
        cout << "maximum: " << s.max << endl;
        cout << "minimum: " << s.min << endl;
    }
}
