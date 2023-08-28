#include <iostream>
#include <iomanip>
#include <chrono>
#include <thread>
using namespace std;

void printWithTyping(const string &text, int delayMillis)
{
    for (char c : text)
    {
        cout << c << flush;
        this_thread::sleep_for(chrono::milliseconds(delayMillis));
    }
    cout << endl;
}

void converting_Money(int From, int To, float amount);

void changingtoInt(string fromcurrency, string tocurrency, float amount)
{
    int FromCurrency, ToCurrency;
    if (fromcurrency == "USD")
    {
        FromCurrency = 1;
    }
    else if (fromcurrency == "INR")
    {
        FromCurrency = 2;
    }
    else if (fromcurrency == "GBP")
    {
        FromCurrency = 3;
    }
    else if (fromcurrency == "EUR")
    {
        FromCurrency = 4;
    }
    else
    {
        cout << "InValid input !" << endl;
    }
    if (tocurrency == "USD")
    {
        ToCurrency = 1;
    }
    else if (tocurrency == "INR")
    {
        ToCurrency = 2;
    }
    else if (tocurrency == "GBP")
    {
        ToCurrency = 3;
    }
    else if (tocurrency == "EUR")
    {
        ToCurrency = 4;
    }
    else
    {
        cout << "Invalid Input !" << endl;
    }
    cout << fixed << setprecision(2);
    converting_Money(FromCurrency, ToCurrency, amount);
}
void converting_Money(int From, int To, float amount)
{
    string resultText = "";
    double convertedAmount;
    switch (From)
    {
    case 1:
        switch (To)
        {
        case 1:
            resultText = to_string(amount) + " USD";
            break;
        case 2:
            convertedAmount = amount * 82.5299;
            resultText = to_string(amount) + " of USD is equals to " + to_string(convertedAmount) + " INR";
            break;
        case 3:
            convertedAmount = amount * 0.7945;
            resultText = to_string(amount) + " of USD is equals to " + to_string(convertedAmount) + " GBP";
            break;
        case 4:
            convertedAmount = amount * 0.92626;
            resultText = to_string(amount) + " of USD is equals to " + to_string(convertedAmount) + " EUR";
        default:
            break;
        }
        break;
    case 2:
        switch (To)
        {
        case 1:
            convertedAmount = amount / 82.5299;
            resultText = to_string(amount) + " of INR is equals to " + to_string(convertedAmount) + " USD";
            break;
        case 2:
            cout << to_string(amount) + " Rupee";
            break;
        case 3:
            convertedAmount = amount / 103.794;
            resultText = to_string(amount) + " of Indian rupee is equals to " + to_string(convertedAmount) + " Pounds";
            break;
        case 4:
            convertedAmount = amount * 0.01122;
            resultText = to_string(amount) + " of INR is equaks to " + to_string(convertedAmount) + " EUR";
        default:
            break;
        }
        break;
    case 3:
        switch (To)
        {
        case 1:
            convertedAmount = amount * 1.25;
            resultText = to_string(amount) + " of Pounds is equals to " + to_string(convertedAmount) + " USD";
            break;
        case 2:
            convertedAmount = amount * 103.9;
            resultText = to_string(amount) + " of pounds is equals to " + to_string(convertedAmount) + " INR";
            break;
        case 3:
            resultText = to_string(amount) + " Pounds";
            break;
        default:
            break;
        }
        break;
    case 4:
        switch (To)
        {
        case 1:
            convertedAmount = amount * 1.07933;
            resultText = to_string(amount) + " of EUR is equals to " + to_string(convertedAmount) + " USD";
            break;
        case 2:
            convertedAmount = amount * 89.0768;
            resultText = to_string(amount) + " of EUR is equals to " + to_string(convertedAmount) + " INR";
            break;
        case 3:
            convertedAmount = amount * 0.85795;
            resultText = to_string(amount) + " of EUR is equals to " + to_string(convertedAmount) + " GBP";
        case 4:
            resultText = to_string(amount) + " of EUR is equals to " + to_string(amount) + " EUR";
        default:
            break;
        }
    default:
        break;
    }
    printWithTyping(resultText, 100);
}

int main()
{
    double amount;
    string fromcurrency, tocurrency;
    string state = "";
    cout << "***************************** Hello User ! *****************************" << endl;
    state = "Welcome to Currency Conversion Bot !";
    printWithTyping(state, 40);
    state = "Availabe currencies : USD , INR , GBP , EUR";
    printWithTyping(state, 40);
    state = "Enter from which currency you want to convert from : ";
    printWithTyping(state, 40);
    cin >> fromcurrency;
    state = "Enter to which currency it should convert to :";
    printWithTyping(state, 40);
    cin >> tocurrency;
    state = "Enter how much money you want to convert from " + fromcurrency + " to " + tocurrency + " : ";
    printWithTyping(state, 40);
    cin >> amount;
    cout << endl;
    changingtoInt(fromcurrency, tocurrency, amount);
    return 0;
}
