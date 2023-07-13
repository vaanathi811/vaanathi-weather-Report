/******************************************************************************

            ********WEATHER REPORT********
            NAME:Vaanathi S
            DEGREE: B.E CST 
            LANGUAGE: C++ 
            PROJECT: Weather Report
            COLLEGE:Vivekanandha College OF Engineering For Women
            
*******************************************************************************/
#include <iostream>

using namespace std;

class WeatherReport
{
public:
    string location;
    string weather;
    string temperature;
    string humidity;
    string wind;
    string thunderstorm;

    void Report()
    {
        cout << "Weather: " << weather << endl;
        cout << "Temperature: " << temperature << endl;
        cout << "Humidity: " << humidity << endl;
        cout << "Wind: " << wind << endl;
        cout << "Thunderstorm: " << thunderstorm << endl;
        cout << endl;
    }
};

int main()
{
    int days = 3;
    WeatherReport reports[days] = {
        { "The weather seems to be cold and cloudy", "30 degree celsius", "18%", "20km/h","Not possible"},
        { "The weather will cause heavy rain tomorrow", "24 degree celsius", "10%", "30km/h","possible"},
        { "The weather was very hot yesterday", "45 degree celsius", "25%", "12km/h","Not possible"}
    };

    int choice;
    string location;
    cout << "¬¬¬¬¬¬WEATHER REPORT¬¬¬¬¬¬¬" << endl;
    cout << "\nLocation: ";
    cin >> location;
    cout << "\n1. Today's Weather" << endl;
    cout << "2. Tomorrow's Weather" << endl;
    cout << "3. Yesterday's Weather" << endl;
    cout << "\nEnter your choice (1-3): "<<endl;;
    cin >> choice;

    switch (choice)
    {
        case 1:
        {
            WeatherReport today = reports[0];
            today.Report();
            break;
        }
        case 2:
        {
            WeatherReport tomorrow = reports[1];
            tomorrow.Report();
            break;
        }
        case 3:
        {
            WeatherReport yesterday = reports[2];
            yesterday.Report();
            break;
        }
        default:
            cout << "Invalid choice!" << endl;
            break;
    }

    return 0;
}
