#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> scores;

    for (int i = 0; i < 5; i++){
        int num;
        cout << "Enter score: ";
        cin >> num;
        scores.push_back(num);
    }

    int highest = scores[0];
    int lowest = scores[0];
    int total = 0;

    for (int i = 0; i < scores.size(); i++){
        if (scores[i] > highest){
            highest = scores[i];
        }
        if (scores[i] < lowest){
            lowest = scores[i];
        }
        total += scores[i];
    }

    double average = (double)total / scores.size();

    cout << "Highest: " << highest << endl;
    cout << "Lowest: " << lowest << endl;
    cout << "Average: " << average << endl;
}