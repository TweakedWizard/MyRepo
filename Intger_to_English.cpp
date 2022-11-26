#include <string>
#include <iostream>

using namespace std;

string num_to_text[] =
{
    "", "one ", "two ", "three ", "four ", "five ",  
    "six ", "seven ", "eight ", "nine ", "ten ", 
    "eleven ", "twelve ", "thirteen ", "fourteen ", "fifteen ", 
    "sixteen ", "seventeen ", "eighteen ", "nineteen " 
};

string tens_to_text[] =
{
    "", "", "twenty ", "thirty ", "forty ", "fifty ",  
    "sixty ", "seventy ", "eightty ", "ninety "
};

string power_to_text [] =
{
    "", "thousand ", "million ", "billion "
};

string translateHundred (int hundred_part)
{
    if (hundred_part < 20)
    {
        return num_to_text [hundred_part];
    }
    int tens = hundred_part / 10;
    int ones = hundred_part % 10;
    return tens_to_text [tens] + num_to_text [ones];
}

string translateThousand (int thousand_part)
{
    if (thousand_part < 100)
    {
        return translateHundred (thousand_part);
    }
    else
    {
        int hundreds = thousand_part / 100;
        int hundred_part = thousand_part % 100;
        return num_to_text [hundreds] + " hundred " + translateHundred (hundred_part);
    }
}

int main ()
{
    int n;
    cin >> n;
    string number;
    bool is_negative = false;

    if (n < 0)
    {
        is_negative = true;
        n *= -1;
    }

    int part_count = 0;
    while (n > 0)
    {
        if (n % 1000 != 0)
        {
            number = translateThousand (n % 1000) + power_to_text [part_count] + number;
        }
        n /= 1000;
        part_count++;
    }

    if (number == "")
    {
        number = "zero ";
    }

    if (is_negative)
    {
        number = "negative " + number;
    }

    cout << number << endl;
}
