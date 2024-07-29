#include <iostream>
#include <vector>
#include <string>

using namespace std;
string getDay(int dayNum){
    string dayName = "";
    switch(dayNum){
        case 1:
            dayName = "Monday";
            break;
        case 2:
            dayName = "Tuesday";
            break;
        case 3:
            dayName = "Wednesday";
            break;
        case 4:
            dayName = "Thursday";
            break;
        case 5:
            dayName = "Friday";
            break;
        case 6:
            dayName = "Saturday";
            break;
        case 7:
            dayName = "Sunday";
            break;
        default:
            dayName = "Invalid";   
    }
    return dayName;
}
int main(){
    //vector
    vector <string> foods = {"apples", "bananas", "cherries"};
    //foods.push_back("dolma");
    //foods.pop_back();
    cout << foods[3] << endl;
    //pointer
    int gpa = 5;
    int *pgpa = &gpa;
    cout << pgpa << endl;
    cout << *pgpa << endl;

    //input
    int age;
    cout << "enter your age" << endl;
    cin >> age;

    cout << "You are " << age << " years old" << endl;
    

    //array
    int luckyNums[] = {4,8,16,32,64};
    cout << luckyNums[1] << endl;

    //2d array
    int numberGrid[3][2] = {
        {1,2},
        {3,4},
        {5,6}
    };
    cout << numberGrid[0][1] << endl;


    //if statement
    bool male = true;
    bool tall = false;

    if(male && tall){
        cout << "You are a tall male" << endl;
    }
    else { 
        cout << "you arent a tall male" << endl;
    }

    cout << getDay(5);

}

