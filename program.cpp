#include <iostream>
using namespace std;

int main() {
    int y, x;
    cout << "Enter the value of y: ";
    cin >> y;

    if (y == 10) {
        x = 0;
    } else {
        x = 1;
    }

    cout << "Value of x: " << x << endl;
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int temperature;
    cout << "Enter the temperature: ";
    cin >> temperature;

    if (temperature >= -50 && temperature <= 150) {
        cout << "The number is valid" << endl;
    }
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    if (num1 > num2) {
        cout << num1 << " is larger and " << num2 << " is smaller." << endl;
    } else if (num2 > num1) {
        cout << num2 << " is larger and " << num1 << " is smaller." << endl;
    } else {
        cout << "Both numbers are equal." << endl;
    }
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    double a = 10.0;
    double b = 10.0;

    a = a + 0.2; // Adding 0.2 to a

    if (a > b) {
        cout << "a (" << a << ") is larger and b (" << b << ") is smaller." << endl;
    } else {
        cout << "b (" << b << ") is larger and a (" << a << ") is smaller." << endl;
    }
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    cout << "Enter numerator (first number): ";
    cin >> num1;
    cout << "Enter denominator (second number): ";
    cin >> num2;

    if (num2 != 0) {
        cout << "Division result: " << (num1 / num2) << endl;
    } else {
        cout << "Division by zero is not possible." << endl;
    }
    return 0;
}

#include <iostream>
#include <string>
using namespace std;

int main() {
    double time1, time2, time3;
    cout << "Enter time (in minutes) for Runner 1, 2, and 3: ";
    cin >> time1 >> time2 >> time3;

    if (time1 < time2 && time1 < time3) {
        cout << "First: Runner 1\n";
        if (time2 < time3) cout << "Second: Runner 2\nThird: Runner 3\n";
        else cout << "Second: Runner 3\nThird: Runner 2\n";
    }
    else if (time2 < time1 && time2 < time3) {
        cout << "First: Runner 2\n";
        if (time1 < time3) cout << "Second: Runner 1\nThird: Runner 3\n";
        else cout << "Second: Runner 3\nThird: Runner 1\n";
    }
    else {
        cout << "First: Runner 3\n";
        if (time1 < time2) cout << "Second: Runner 1\nThird: Runner 2\n";
        else cout << "Second: Runner 2\nThird: Runner 1\n";
    }
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int choice;
    cout << "Geometry Calculator\n";
    cout << "1. Calculate the Area of a Circle\n";
    cout << "2. Calculate the Area of a Rectangle\n";
    cout << "3. Calculate the Area of a Triangle\n";
    cout << "Enter your choice (1-3): ";
    cin >> choice;

    if (choice == 1) {
        double r, area;
        cout << "Enter radius: ";
        cin >> r;
        area = 3.14159 * r * r;
        cout << "Area of Circle: " << area << endl;
    } else if (choice == 2) {
        double length, width, area;
        cout << "Enter length and width: ";
        cin >> length >> width;
        area = length * width;
        cout << "Area of Rectangle: " << area << endl;
    } else if (choice == 3) {
        double base, height, area;
        cout << "Enter base and height: ";
        cin >> base >> height;
        area = base * height * 0.5;
        cout << "Area of Triangle: " << area << endl;
    } else {
        cout << "Invalid Choice!" << endl;
    }
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    char lowercase = 'a';
    char uppercase = 'A';
    
    cout << "ASCII value of 'a' to 'z':\n";
    while(lowercase <= 'z') {
        cout << lowercase << " = " << (int)lowercase << "   ";
        lowercase++;
    }
    
    cout << "\n\nASCII value of 'A' to 'Z':\n";
    while(uppercase <= 'Z') {
        cout << uppercase << " = " << (int)uppercase << "   ";
        uppercase++;
    }
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    double mass, weight;
    cout << "Enter object's mass (in kg): ";
    cin >> mass;

    weight = mass * 9.8;
    cout << "Weight: " << weight << " Newtons" << endl;

    if (weight > 1000) {
        cout << "The object is too heavy." << endl;
    } else if (weight < 10) {
        cout << "The object is too light." << endl;
    }
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    double sales;
    cout << "Enter total sales: ";
    cin >> sales;

    if (sales > 50000) {
        sales = sales + (0.25 * sales) + 250;
    }

    cout << "Final Sales/Total: " << sales << endl;
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    double income;
    int years;
    
    cout << "Enter annual income: $";
    cin >> income;
    cout << "Enter years at current employment: ";
    cin >> years;

    if (income >= 35000.00 && years > 5) {
        cout << "Congratulations! You qualify for the special loan." << endl;
    } else {
        cout << "Sorry, you do not qualify for the loan." << endl;
    }
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int model;
    cout << "Enter TV Model (100, 200, 300): ";
    cin >> model;

    if (model == 300) {
        cout << "Features: Picture-in-a-picture, Stereo sound, and Remote control\n";
    } else if (model == 200) {
        cout << "Features: Stereo sound and Remote control\n";
    } else if (model == 100) {
        cout << "Features: Remote control only\n";
    } else {
        cout << "Unknown Model.\n";
    }
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int month, day, year;
    cout << "Enter Month (numeric): ";
    cin >> month;
    cout << "Enter Day: ";
    cin >> day;
    cout << "Enter 2-digit Year: ";
    cin >> year;

    if ((month * day) == year) {
        cout << "Result: MAGIC.\n";
    } else {
        cout << "Calculation: " << month << " * " << day << " = " << (month * day) 
             << " (" << (month * day) << " is not equal to " << year << ")\n";
        cout << "Result: NOT MAGIC.\n";
    }
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    double sales, commission;
    cout << "Enter sales amount: $";
    cin >> sales;

    if (sales <= 10000) {
        commission = 0.10;
    } else if (sales > 10000 && sales <= 15000) {
        commission = 0.15;
    } else {
        commission = 0.20;
    }

    cout << "Commission Rate assigned: " << (commission * 100) << "%" << endl;
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    double balance, fees = 10.0; // Base $10 fee
    int checks;

    cout << "Enter beginning balance: $";
    cin >> balance;
    cout << "Enter number of checks written: ";
    cin >> checks;

    if (balance < 400) {
        fees += 15.0; // Extra charge
    }

    if (checks < 20) {
        fees += (checks * 0.10);
    } else if (checks >= 20 && checks <= 39) {
        fees += (checks * 0.08);
    } else if (checks >= 40 && checks <= 59) {
        fees += (checks * 0.06);
    } else {
        fees += (checks * 0.04);
    }

    cout << "Total bank service fees for the month: $" << fees << endl;
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int type;
    cout << "Headphone Types:\n1. Noise Canceling\n2. Wireless\n3. Wired Budget\n";
    cout << "Select headphone type (1-3): ";
    cin >> type;

    if (type == 1) {
        cout << "Price: $249.00" << endl;
    } else if (type == 2) {
        cout << "Price: $199.00" << endl;
    } else if (type == 3) {
        cout << "Price: $49.00" << endl;
    } else {
        cout << "Invalid Selection!" << endl;
    }
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int choice, months;
    double total = 0;

    cout << "1. Standard Adult Membership\n";
    cout << "2. Child Membership\n";
    cout << "3. Senior Citizen Membership\n";
    cout << "4. Quit the Program\n";
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    if (choice >= 1 && choice <= 3) {
        cout << "Enter the number of months: ";
        cin >> months;
        
        if (choice == 1) total = months * 40.00;
        else if (choice == 2) total = months * 20.00;
        else if (choice == 3) total = months * 30.00;

        cout << "Total amount to pay: Rs. " << total << endl;
    } else if (choice == 4) {
        cout << "Exiting program..." << endl;
    } else {
        cout << "Invalid choice!" << endl;
    }
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int package;
    double gigabytes, totalBill = 0;

    cout << "Enter the package purchased (1, 2, or 3): ";
    cin >> package;
    cout << "Enter the number of gigabytes used: ";
    cin >> gigabytes;

    if (package == 1) {
        totalBill = 39.99;
        if (gigabytes > 4) {
            totalBill += (gigabytes - 4) * 10;
        }
    } else if (package == 2) {
        totalBill = 55.99; // Text mentions 59.99 in prompt, using 59.99
        totalBill = 59.99; 
        if (gigabytes > 8) {
            totalBill += (gigabytes - 8) * 5;
        }
    } else if (package == 3) {
        totalBill = 69.99;
    } else {
        cout << "Invalid Package!\n";
        return 0;
    }

    cout << "The total amount due is: $" << totalBill << endl;
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    long long seconds;
    cout << "Enter the number of seconds: ";
    cin >> seconds;

    if (seconds >= 86400) {
        double days = (double)seconds / 86400;
        cout << "Days: " << days << endl;
    } else if (seconds >= 3600) {
        double hours = (double)seconds / 3600;
        cout << "Hours: " << hours << endl;
    } else if (seconds >= 60) {
        double minutes = (double)seconds / 60;
        cout << "Minutes: " << minutes << endl;
    } else {
        cout << "Seconds: " << seconds << endl;
    }
    return 0;
}
