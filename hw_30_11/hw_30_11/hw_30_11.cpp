#include <iostream>
using namespace std;

class Phone {
public:
    string brand;
    string model;
    int storageSizeGB;
    string displayType;
    bool isSmartphone;

    void MakeCall(string phoneNumber)
    {
        cout << "Calling " << phoneNumber << "...\n";
    }

    void SendMessage(string message)
    {
        cout << "Sending message: " << message << "\n";
    }

    void TakePictures()
    {
        cout << "Taking a photo...\n";
    }

    void InstallApp(string appName)
    {
        cout << "Application installation: " << appName << "\n";
    }

    void PlatMusic()
    {
        cout << "Playing music...\n";
    }
};


class Pan {
public:
    string color;
    string brand;
    string tipType;
    bool isClickable;
    string inkType;


    void Write(string text)
    {
        cout << "Writting: " << text << "\n";
    }

    void ChangeColor(string newColor)
    {
        cout << "Changing pen color to: " << newColor << "\n";
    }

    void Click()
    {
        if (isClickable)
        {
            cout << "Clicking the pen...\n";
        }
        else {
            cout << "This pen cannot be clicked\n";
        }
    }

    void TestPen()
    {
        cout << "Testing the pen...\n";
    }

    void RefillInk()
    {
        cout << "Refilling ink...\n";
    }
};


class Laptop {
public:
    string brand;
    string model;
    int ramGB;
    int hardDiskSize;
    float screenSizeInches;


    void PowerOn()
    {
        cout << "Powering on the laptop...\n";
    }

    void PowerOff()
    {
        cout << "Shutting down the laptop...\n";
    }

    void OpenApplication()
    {
        cout << "Opening application: ";
    }

    void PlayGame()
    {
        cout << "Playing game: ";
    }

    void InternetCheck()
    {
        cout << "There's an Internet check...\n";
    }
};


class LEOController {
public:
    string model;
    int batteryLevel;
    unsigned long long colorCount;
    const char* manufacturer;
    int numberOfModes;


    void TurnOn()
    {
        cout << "Turning on the LED controller...\n";
    }

    void TurnOff()
    {
        cout << "Turning off the LED controller...\n";
    }

    void ChangeColor(string color)
    {
        cout << "Changing color to " << color << "\n";
    }

    void switchMode(int mode) {
        cout << "Switching to mode" << mode << "\n";
    }

    void changeBrightness(int level) {
        cout << "Changing brightness to level " << level << "\n";
    }
};


class Mouse {
public:
    string brand;
    string model;
    bool isWireless;
    int batteryLevel;
    int numberOfButtons;


    void ClickLeftButton()
    {
        cout << "Left button clicked!\n";
    }

    void ClickRightButton()
    {
        cout << "Right button clicked!\n";
    }

    void scroll(int distance)
    {
        cout << "Scrolling by " << distance << " units\n";
    }

    void selectButtons(int numberOfButtons)
    {
        int buttons = numberOfButtons;
        cout << "Mouse buttons set to " << numberOfButtons;
    }

    bool isWirelessConnected() const {
        return isWireless;
    }
};

int main()
{
    
}

