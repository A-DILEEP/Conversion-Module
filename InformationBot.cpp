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

void converting_Money(int From, int To, double amount);

void changingtoInt(string fromcurrency, string tocurrency, double amount)
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
    else
    {
        cout << "Invalid Input !" << endl;
    }
    converting_Money(FromCurrency, ToCurrency, amount);
}
void converting_Money(int From, int To, double amount)
{
    string resultText = ""; // This string will hold the final result
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
            convertedAmount = amount * 85;
            resultText = to_string(amount) + " of USD is equals to " + to_string(convertedAmount) + " INR";
            break;
        case 3:
            convertedAmount = amount * 0.7945;
            resultText = to_string(amount) + " of USD is equals to " + to_string(convertedAmount) + " GBP";
            break;
        default:
            break;
        }
        break;
    case 2:
        switch (To)
        {
        case 1:
            convertedAmount = amount / 85;
            resultText = to_string(amount) + " of INR is equals to " + to_string(convertedAmount) + " USD";
            break;
        case 2:
            cout << to_string(amount) + " Rupee";
            break;
        case 3:
            convertedAmount = amount / 103;
            resultText = to_string(amount) + " of Indian rupee is equals to " + to_string(convertedAmount) + " Pounds";
            break;
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
    state = "***************************** Hello User ! *****************************";
    printWithTyping(state, 40);
    state = "Welcome to Currency Conversion Bot !";
    printWithTyping(state, 40);
    state = "Availabe currencies : USD , INR ,GBP";
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
