#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // First task
    double speed, distance;
    cout << "Distance in km: ";
    cin >> distance;
    cout << "Speed in m/s: ";
    cin >> speed;

    double distance_in_m = distance * 1000;
    double speed_in_kmh = speed * 3.6;

    double time = distance_in_m / speed;

    int hours = time / 3600;
    int minutes = (time - hours * 3600) / 60;
    int seconds = time - hours * 3600 - minutes * 60;

    cout << "travel time: " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds" << endl;

  
    //Second task
    double a, b;
    cout << "First fractional number: ";
    cin >> a;
    cout << "Second fractional number: ";
    cin >> b;

    int integer_a = round(a);
    int integer_b = round(b);

    double fractional_a = a - integer_a;
    double fractional_b = b - integer_b;

    long int integer_sum =  integer_a + integer_b;
    double fractional_sum = fractional_a + fractional_b;

    cout << "Integer sum: " << integer_sum << endl;
    cout << "Fractional sum: " << fractional_sum << endl;


    //Third task
    double sum;
    cout << "Amount of UAH: ";
    cin >> sum;

    sum = round(sum * 100) / 100;

    long int uah = round(sum);
    long int pennys = round((sum - uah) * 100);

    cout << uah << " Hryviin " << pennys << " Pennys" << endl;


    //Fourth task
    int time_in_seconds;
    cout << "Time in seconds: ";
    cin >> time_in_seconds;

    long int weeks_two = time_in_seconds / 604800;
    time_in_seconds %= 604800;
    long int days_two = time_in_seconds / 86400;
    time_in_seconds %= 86400;
    long int hours_two = time_in_seconds / 3600;
    time_in_seconds %= 3600;
    int minutes_two = time_in_seconds / 60;
    int seconds_two = time_in_seconds % 60;

    cout << weeks_two << " weeks, " << days_two << " days, " << hours_two << " hours, " << minutes_two << " minutes, " << seconds_two << " seconds" << endl;


    //Fifth task
    double distance_two;
    long int time_two;
    cout << "Distance to the Airport in kms: ";
    cin >> distance_two;
    cout << "Enter time you need, to get to the airport in mins: ";
    cin >> time_two;

    double speed_two = distance_two / (time_two / static_cast<double> (60));
    cout << "The speed at which you need to drive: " << speed_two << " km/h " << endl;


    //Sixth task
    long int hours_start, minutes_start, seconds_start;
    long int hours_end, minutes_end, seconds_end;
    double call_duration, call_cost;

    cout << "Enter time, when you started your call: ";
    cin >> hours_start >> minutes_start >> seconds_start;
    cout << "Enter time, when you ended your call: ";
    cin >> hours_end >> minutes_end >> seconds_end;

    call_duration = (hours_end - hours_start) * 3600.0 + (minutes_end - minutes_start) * 60.0 + (seconds_end - seconds_start);
    call_cost = call_duration * 0.15;

    cout << "Call duration: " << call_duration << " seconds" << endl;
    cout << "Call price: " << call_cost << " pennys" << endl;

    //Seventh task
    int work_time = 28800;
    int seconds_three;

    cout << "Enter seconds: ";
    cin >> seconds_three;

    cout << "Time left: " << (work_time - seconds_three) / 3600 << " hours" << endl;


    //Eighth task
    double price, total_price;
    double discount_number;
    short int quantity;

    cout << "One laptop price: ";
    cin >> price;
    cout << "Laptops quantity: ";
    cin >> quantity;
    cout << "discount: ";
    cin >> discount_number;

    total_price = price * quantity;

    double discount_total = total_price * (discount_number / 100);
    total_price -= discount_total;

    cout << "Total price: " << total_price << endl;
    return 0;
}
