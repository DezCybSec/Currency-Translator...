#include <iostream>
#include <string>
#include <cmath>

using namespace std;



int main()
{
    double init_curr ;
    double v, t_v, e_r; // v == value == amount to translate ; t_v == translated value ; e_r == exchange rate
    string tc;                                // tc here stands for target currency

    void welcome(); //1. Welcome function
    cout << " MENU : " << endl;
    void cur_ch(); // 2. Function for the choice of the currency ; cur_ch means currency_choice

    cout << " Input the value to translate " << endl;
    cin >> value ;
    cout << " Just input the number (without the   " << " . " << " beside the target currency you want" ;
    cout << " according to the menu below) " << endl;
    cin >> tc;

    return 0;
}
void welcome(){
    cout << "Welcome to the" << " CURRENCY TRANSLATOR" << endl;
    cout << " " ;
    cout << " " ;
    cout << " " ;
    }
void cur_ch(){
    cout << "The initial currency is US Dollars " << " $ " << endl;
    cout << " In which currency you want your amount to been " << "__translate__" << " ? " << endl;
    cout << " 1. Canadian dollars " ;
    cout << " CAD " << endl;
    cout << " 2. Euros ";
    cout << " EUR " << endl;
    cout << " 3. Pound sterling ";
    cout << " GBP "<<  endl;
    cout << " 4. Japanese yen " ;
    cout << " JPY " << endl;
    cout << " 5. Swiss Franc " ;
    cout << " CHF " << endl;
    cout << " 6. Australian dollars " ;
    cout << " AUD " << endl;
}



    switch (tc){
    case '1' :
        cout <<  " Canadian dollars " << endl;
        cout << " " << endl;
        e_r = 1.36 ;
        t_v = v * e_r ;
        cout << " You have : " << t_v << " CAD " << endl;

    case '2' :
        cout << " Euros " << endl;
        cout << " " << endl;

        e_r = 0.93 ;
        t_v = v * e_r ;
        cout << " You have : " << t_v << " EUR" <<endl;

    case '3' :
        cout << " Pound sterling " << endl;
        cout << " " << endl;

        e_r = 0.82 ;
        t_v = v * e_r ;
        cout << " You have : " << t_v << " GBP" << endl;

    case '4' :
        cout << " Japanese yen "



























