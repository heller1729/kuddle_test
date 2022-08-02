#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> waitList;
    unordered_map<string, int> fitness_classes;
    unordered_map<string, int> classStatus;
    string uname;
    fitness_classes = {{"Yoga", 60}, {"Gym", 60}, {"Dance", 60}};
    classStatus = {{"Yoga", 0}, {"Gym", 0}, {"Dance", 0}};
    cout << "Enter the name of the user: ";
    cin>>uname;
    cout << "Enter the fitness class you want to attend:\n 1. Yoga\n 2. Gym\n 3. Dance\n";
    int resp;
    cin>>resp;
    string fclass;
    switch(resp)
    {
        case 1:
            fclass = "Yoga";
            break;
        case 2:
            fclass = "Gym";
            break;
        case 3:
            fclass = "Dance";
            break;
    }

    int booker(string fclass)
    {
        if(classStatus[fclass]==0 && fitness_classes[fclass]>60) {
        cout<<"Class limit reached, adding "<<uname<<" to waitlist.";
    }
    return 0;
}