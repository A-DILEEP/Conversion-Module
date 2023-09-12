#include <iostream>
#include <iomanip>
#include <chrono>
#include <thread>
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
    if (from == "USD" || from == "Celsius")
    {
        From = 1;
    }
    else if (from == "INR" || from == "Fahrenheit")
    {
        From = 2;
    }
    else if (from == "GBP" || from == "Kelvin")
    {
        From = 3;
    }
    else if (from == "EUR" || from == "Rankine")
    {
        From = 4;
    }
    else if (from == "JPY")
    {
        From = 5;
    }
    else
    {
        cout << "InValid input !" << endl;
    }
    if (to == "USD" || to == "Celsius")
    {
        To = 1;
    }
    else if (to == "INR" || to == "Fahrenheit")
    {
        To = 2;
    }
    else if (to == "GBP" || to == "Kelvin")
    {
        To = 3;
    }
    else if (to == "EUR" || to == "Rankine")
    {
        To = 4;
    }
    else if (to == "JPY")
    {
        To = 5;
    }
    else
    {
        cout << "Invalid Input !" << endl;
    }
    if (from == "USD" || from == "INR" || from == "GBP" || from == "EUR")
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
            printWithTyping("You Entered same Temperature values ", 40);
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
            printWithTyping("You Entered same Temperature values ", 40);
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
    case 3:
        switch (ToTemperature)
        {
        case 1:
            Converted_Temperature = value - 273.15;
            cout << value << " of Kelvin is equals to " << setprecision(6) << Converted_Temperature << " of Celsius";
            break;
        case 2:
            Converted_Temperature = value * 9 / 5 - 459.67;
            cout << value << " of Kelvin is equals to " << setprecision(6) << Converted_Temperature << " of Fahrenheit";
            break;
        case 3:
            printWithTyping("You Entered same Temperature values ", 40);
            cout << value << " celsius";
            break;
        case 4:
            Converted_Temperature = value * 9 / 5;
            cout << value << " of Kelvin is equals to " << setprecision(6) << Converted_Temperature << " of Rankine";
        default:
            break;
        }
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
            printWithTyping("You Entered same Temperature values ", 40);
            cout << value << " celsius";
            break;
        default:
            break;
        }
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
            printWithTyping(resultText, 40);
            break;
        case 2:
            convertedAmount = amount * 82.5299;
            cout << setprecision(8) << amount << " of USD is equals to " << setprecision(8) << convertedAmount << " of INR";
            break;
        case 3:
            convertedAmount = amount * 0.7945;
            cout << setprecision(8) << amount << " of USD is equals to " << setprecision(8) << convertedAmount << " of GBP";
            break;
        case 4:
            convertedAmount = amount * 0.92626;
            cout << setprecision(6) << amount << " of USD is equals to " << setprecision(8) << convertedAmount << " of EUR";
            break;
        case 5:
            convertedAmount = amount * 146.34478;
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
            printWithTyping(resultText, 40);
            break;
        case 3:
            convertedAmount = amount / 103.794;
            cout << setprecision(8) << amount << " of INR is equals to " << setprecision(8) << convertedAmount << " of GBP";
            break;
        case 4:
            convertedAmount = amount * 0.01122;
            cout << setprecision(8) << amount << " of INR is equals to " << setprecision(8) << convertedAmount << " of EUR";
            break;
        case 5:
            convertedAmount = amount * 1.7649077;
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
            convertedAmount = amount * 1.25;
            cout << setprecision(8) << amount << " of GBP is equals to " << setprecision(8) << convertedAmount << " of USD";
            break;
        case 2:
            convertedAmount = amount * 103.9;
            cout << setprecision(8) << amount << " of GBP is equals to " << setprecision(8) << convertedAmount << " of INR";
            break;
        case 3:
            resultText = to_string(amount) + " Pounds";
            printWithTyping(resultText, 40);
            break;
        case 4:
            convertedAmount = amount * 1.16;
            cout << setprecision(8) << amount << " of GBP is equals to " << setprecision(8) << convertedAmount << " of EUR";
            break;
        case 5:
            convertedAmount = amount * 183.35126;
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
            convertedAmount = amount * 1.07933;
            cout << setprecision(8) << amount << " of EUR is equals to " << setprecision(8) << convertedAmount << " of USD";
            break;
        case 2:
            convertedAmount = amount * 89.0768;
            cout << setprecision(8) << amount << " of EUR is equals to " << setprecision(8) << convertedAmount << " of INR";
            break;
        case 3:
            convertedAmount = amount * 0.85795;
            cout << setprecision(8) << amount << " of EUR is equals to " << setprecision(8) << convertedAmount << " of GBP";
            break;
        case 4:
            resultText = to_string(amount) + " Pounds";
            printWithTyping(resultText, 40);
            break;
        case 5:
            convertedAmount = amount * 157.01481;
            cout << setprecision(8) << amount << " of EUR is equals to " << setprecision(8) << convertedAmount << " of JPY";
            break;
        default:
            break;
        }
    case 5:
        switch (To)
        {
        case 1:
            convertedAmount = amount * 0.0068299207;
            cout << setprecision(8) << amount << " of JPY is equals to " << convertedAmount << " of USD";
            break;
        case 2:
            convertedAmount = amount * 0.56635558;
            cout << setprecision(8) << amount << " of JPY is equals to " << convertedAmount << " of INR";
            break;
        case 3:
            convertedAmount = amount * 0.0054525644;
            cout << setprecision(8) << amount << " of JPY is equals to " << convertedAmount << " of GBP";
            break;
        case 4:
            convertedAmount = amount * 0.0063666639;
            cout << setprecision(8) << amount << " of JPY is equals to " << convertedAmount << " of EUR";
            break;
        case 5:
            resultText = to_string(amount) + " Pounds";
            printWithTyping(resultText, 40);
            break;
        default:
            break;
        }
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
    printWithTyping(state, 40);
    state = "Availabe currencies : USD , INR , GBP , EUR , JPY ";
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
}
void temperatureconversion()
{
    string statem;
    string from, to;
    float value;
    statem = "Welcome to Temperature Conversion ";
    printWithTyping(statem, 40);
    statem = "Available Temperatures Celsius , Fahrenheit , Kelvin , Rankine ";
    printWithTyping(statem, 40);
    printWithTyping("Enter from which temprature you want to convert From :", 40);
    cin >> from;
    printWithTyping("Enter to which Temperature it should converts to :", 40);
    cin >> to;
    statem = "Enter how much " + from + "Temperature it should converts to " + to;
    printWithTyping(statem, 40);
    cin >> value;
    changingtoInt(from, to, value);
}
int main()
{
    int choice;
    printWithTyping("Hello user welcome to The Information Bot", 40);
    printWithTyping("Available Data :", 40);
    printWithTyping("1: conversion of Currency ", 40);
    printWithTyping("2: Conversion of Temperature", 40);
    printWithTyping("Pick a choice from above :", 40);
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
