#include <iostream>
#include <iomanip>
#include <chrono>
#include <thread>
#include <map>
#include <string>
#include <stdlib.h>
using namespace std;
void convertingTemperature(int FromTemperature, int ToTemperature, float value);
void printWithTyping(const string &statement, int timedelay)
{
    for (char c : statement)
    {
        cout << c << flush;
        this_thread::sleep_for(chrono::milliseconds(timedelay));
    }
    cout << endl;
}

void converting_Money(int From, int To, float amount);

void changingtoInt(string from, string to, float value)
{
    int From, To;
    if (from == "USD" || from == "usd" || from == "celsius")
    {
        From = 1;
    }
    else if (from == "INR" || from == "inr" || from == "fahrenheit")
    {
        From = 2;
    }
    else if (from == "GBP" || from == "gbp" || from == "kelvin")
    {
        From = 3;
    }
    else if (from == "EUR" || from == "eur" || from == "rankine")
    {
        From = 4;
    }
    else if (from == "JPY" || from == "jpy")
    {
        From = 5;
    }
    else
    {
        cout << "InValid input !" << endl;
        return;
    }

    //---------------------------

    if (to == "USD" || to == "usd" || to == "celsius")
    {
        To = 1;
    }
    else if (to == "INR" || to == "inr" || to == "fahrenheit")
    {
        To = 2;
    }
    else if (to == "GBP" || to == "gbp" || to == "kelvin")
    {
        To = 3;
    }
    else if (to == "EUR" || to == "eur" || to == "rankine")
    {
        To = 4;
    }
    else if (to == "JPY" || to == "jpy")
    {
        To = 5;
    }
    else
    {
        cout << "Invalid Input !" << endl;
        return;
    }

    if (from == "USD" || from == "INR" || from == "GBP" || from == "EUR" || from == "JPY" || from == "usd" || from == "inr" || from == "gbp" || from == "jpy" || from == "eur")
    {
        converting_Money(From, To, value);
    }
    else
    {
        convertingTemperature(From, To, value);
    }
}

void convertingTemperature(int FromTemperature, int ToTemperature, float value)
{
    string statem = "";
    float Converted_Temperature;
    switch (FromTemperature)
    {
    case 1:
        switch (ToTemperature)
        {
        case 1:
            printWithTyping("You Entered same Temperature values ", 20);
            cout << value << " celsius";
            break;
        case 2:
            Converted_Temperature = value * 9 / 5 + 32;
            cout << value << " of Celsius Temperature is equals to " << setprecision(6) << Converted_Temperature << " of Fahrenheit";
            break;
        case 3:
            Converted_Temperature = value + 273.15;
            cout << value << " of Celsius Temperature is equals to " << setprecision(6) << Converted_Temperature << " of Kelvin";
            break;
        case 4:
            Converted_Temperature = (value + 273.15) * 9 / 5;
            cout << value << " of Celsius Temperature is equals to " << setprecision(6) << Converted_Temperature << " of Rankine";
            break;
        default:
            break;
        }
        break;
    case 2:
        switch (ToTemperature)
        {
        case 1:
            Converted_Temperature = (value - 32) * 5 / 9;
            cout << value << " of Fahrenheit is equals to " << setprecision(6) << Converted_Temperature << " of Celsius";
            break;
        case 2:
            printWithTyping("You Entered same Temperature values ", 20);
            cout << value << " celsius";
            break;
        case 3:
            Converted_Temperature = (value + 459.67) * 5 / 9;
            cout << value << " of Fahrenheit is equals to " << setprecision(6) << Converted_Temperature << " of Kelvin";
            break;
        case 4:
            Converted_Temperature = value + 459.67;
            cout << value << " of Fahrenheit is equals to " << setprecision(6) << Converted_Temperature << " of Rankine";
            break;
        default:
            break;
        }
        break;
    case 3:
        switch (ToTemperature)
        {
        case 1:
            Converted_Temperature = value - 273.15;
            cout << value << " of Kelvin is equals to " << setprecision(6) << Converted_Temperature << " of Celsius ";
            break;
        case 2:
            Converted_Temperature = value * 9 / 5 - 459.67;
            cout << value << " of Kelvin is equals to " << setprecision(6) << Converted_Temperature << " of Fahrenheit";
            break;
        case 3:
            printWithTyping("You Entered same Temperature values ", 20);
            cout << value << " celsius";
            break;
        case 4:
            Converted_Temperature = value * 9 / 5;
            cout << value << " of Kelvin is equals to " << setprecision(6) << Converted_Temperature << " of Rankine";
            break;
        default:
            break;
        }
        break;
    case 4:
        switch (ToTemperature)
        {
        case 1:
            Converted_Temperature = value * 5 / 9 - 273.15;
            cout << value << " of Rankine is equals to " << setprecision(6) << Converted_Temperature << " of Celsius";
            break;
        case 2:
            Converted_Temperature = value - 459.67;
            cout << value << " of Rankine is equals to " << setprecision(6) << Converted_Temperature << " of Fahrenheit";
            break;
        case 3:
            Converted_Temperature = value * 5 / 9;
            cout << value << " of Rankine is equals to " << setprecision(6) << Converted_Temperature << " of Kelvin";
            break;
        case 4:
            printWithTyping("You Entered same Temperature values ", 30);
            cout << value << " celsius";
            break;
        default:
            break;
        }
        break;
    default:
        break;
    }
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
            printWithTyping(resultText, 30);
            break;
        case 2:
            convertedAmount = amount * 83.035772;
            cout << setprecision(8) << amount << " of USD is equals to " << setprecision(8) << convertedAmount << " of INR";
            break;
        case 3:
            convertedAmount = amount * 0.81970046;
            cout << setprecision(8) << amount << " of USD is equals to " << setprecision(8) << convertedAmount << " of GBP";
            break;
        case 4:
            convertedAmount = amount * 0.94444742;
            cout << setprecision(6) << amount << " of USD is equals to " << setprecision(8) << convertedAmount << " of EUR";
            break;
        case 5:
            convertedAmount = amount * 149.36972;
            cout << setprecision(6) << amount << " of USD is equals to " << setprecision(8) << convertedAmount << " of JPY";
            break;
        default:
            break;
        }
        break;

    case 2:
        switch (To)
        {
        case 1:
            convertedAmount = amount / 82.5299;
            cout << setprecision(8) << amount << " of INR is equals to " << setprecision(8) << convertedAmount << " of USD";
            break;
        case 2:
            cout << to_string(amount) + " Rupee";
            printWithTyping(resultText, 30);
            break;
        case 3:
            convertedAmount = amount / 101.30142;
            cout << setprecision(8) << amount << " of INR is equals to " << setprecision(8) << convertedAmount << " of GBP";
            break;
        case 4:
            convertedAmount = amount * 0.011373449;
            cout << setprecision(8) << amount << " of INR is equals to " << setprecision(8) << convertedAmount << " of EUR";
            break;
        case 5:
            convertedAmount = amount * 1.7988456;
            cout << setprecision(6) << amount << " of INR is equals to " << setprecision(8) << convertedAmount << " of JPY";
            break;
        default:
            break;
        }
        break;

    case 3:
        switch (To)
        {
        case 1:
            convertedAmount = amount * 1.2199653;
            cout << setprecision(8) << amount << " of GBP is equals to " << setprecision(8) << convertedAmount << " of USD";
            break;
        case 2:
            convertedAmount = amount * 101.30142;
            cout << setprecision(8) << amount << " of GBP is equals to " << setprecision(8) << convertedAmount << " of INR";
            break;
        case 3:
            resultText = to_string(amount) + " Pounds";
            printWithTyping(resultText, 30);
            break;
        case 4:
            convertedAmount = amount * 1.1521466;
            cout << setprecision(8) << amount << " of GBP is equals to " << setprecision(8) << convertedAmount << " of EUR";
            break;
        case 5:
            convertedAmount = amount * 182.22562;
            cout << setprecision(8) << amount << " of GBP is equals to " << setprecision(8) << convertedAmount << " of JPY";
            break;
        default:
            break;
        }
        break;

    case 4:
        switch (To)
        {
        case 1:
            convertedAmount = amount * 1.058863;
            cout << setprecision(8) << amount << " of EUR is equals to " << setprecision(8) << convertedAmount << " of USD";
            break;
        case 2:
            convertedAmount = amount * 87.924074;
            cout << setprecision(8) << amount << " of EUR is equals to " << setprecision(8) << convertedAmount << " of INR";
            break;
        case 3:
            convertedAmount = amount * 0.86794512;
            cout << setprecision(8) << amount << " of EUR is equals to " << setprecision(8) << convertedAmount << " of GBP";
            break;
        case 4:
            resultText = to_string(amount) + " Pounds";
            printWithTyping(resultText, 30);
            break;
        case 5:
            convertedAmount = amount * 158.16184;
            cout << setprecision(8) << amount << " of EUR is equals to " << setprecision(8) << convertedAmount << " of JPY";
            break;
        default:
            break;
        }
        break;
    case 5:
        switch (To)
        {
        case 1:
            convertedAmount = amount * 00.0066947971;
            cout << setprecision(8) << amount << " of JPY is equals to " << convertedAmount << " of USD";
            break;
        case 2:
            convertedAmount = amount * 0.55590765;
            cout << setprecision(8) << amount << " of JPY is equals to " << convertedAmount << " of INR";
            break;
        case 3:
            convertedAmount = amount * 0.0054877283;
            cout << setprecision(8) << amount << " of JPY is equals to " << convertedAmount << " of GBP";
            break;
        case 4:
            convertedAmount = amount * 0.0063228839;
            cout << setprecision(8) << amount << " of JPY is equals to " << convertedAmount << " of EUR";
            break;
        case 5:
            resultText = to_string(amount) + " Pounds";
            printWithTyping(resultText, 30);
            break;
        default:
            break;
        }
        break;
    default:
        break;
    }
}
void moneyconversion()
{
    double amount;
    string fromcurrency, tocurrency;
    string state = "";

    cout << "***************************** Hello User ! *****************************" << endl;
    state = "Welcome to Currency Conversion Bot !";
    printWithTyping(state, 30);
    state = "Availabe currencies : USD , INR , GBP , EUR , JPY ";
    printWithTyping(state, 20);
    state = "Enter from which currency you want to convert from : ";
    printWithTyping(state, 30);
    cin >> fromcurrency;
    state = "Enter to which currency it should convert to :";
    printWithTyping(state, 30);
    cin >> tocurrency;
    state = "Enter how much money you want to convert from " + fromcurrency + " to " + tocurrency + " : ";
    printWithTyping(state, 20);
    cin >> amount;
    cout << endl;
    changingtoInt(fromcurrency, tocurrency, amount);
}
void temperatureconversion()
{
    string statem;
    string from, to;
    float value;

    cout << "***************************** Hello User ! *****************************" << endl;
    statem = "Welcome to Temperature Conversion Bot";
    printWithTyping(statem, 30);
    statem = "Available Temperatures : Celsius , Fahrenheit , Kelvin , Rankine ";
    printWithTyping(statem, 20);
    printWithTyping("Enter from which temprature you want to convert From :", 20);
    cin >> from;
    printWithTyping("Enter to which Temperature it should converts to :", 20);
    cin >> to;
    statem = "Enter how much " + from + " Temperature it should converts to " + to;
    printWithTyping(statem, 30);
    cin >> value;
    changingtoInt(from, to, value);
}
int main()
{
    map<std::string, std::string> credentials;
    credentials["username1"] = "password1";
    credentials["41110073"] = "dileepreddy";
    credentials["username3"] = "password3";

    string username, password;
    printWithTyping("Enter username: ", 40);
    cin >> username;
    if (credentials.find(username) != credentials.end())
    {
        printWithTyping("Enter password: ", 40);
        std::cin >> password;
        if (credentials[username] == password)
        {
            std::cout << "Login successful!" << endl;
            cout << endl;
            int choice;
            printWithTyping("Hello user welcome to The Information Bot", 30);
            printWithTyping("Available Data :", 30);
            printWithTyping("1: conversion of Currency ", 20);
            printWithTyping("2: Conversion of Temperature", 20);
            printWithTyping("Pick a choice from above :", 20);
            cin >> choice;
            system("cls");
            switch (choice)
            {
            case 1:
                moneyconversion();
                break;
            case 2:
                temperatureconversion();
                break;
            default:
                break;
            }
        }
        else
        {
            std::cout << "Login failed. Incorrect password." << std::endl;
        }
    }
    else
    {
        std::cout << "Login failed. Username not found." << std::endl;
    }

    return 0;
}
