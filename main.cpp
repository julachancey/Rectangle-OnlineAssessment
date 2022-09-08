#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> A;
    A.push_back(1);
    A.push_back(1);
    A.push_back(2);
    A.push_back(2);
    A.push_back(3);
    A.push_back(3);
    A.push_back(4);
    A.push_back(4);
    A.push_back(6);
    A.push_back(6);
    A.push_back(9);
    A.push_back(9);


    sort(A.begin(), A.end());
    vector<int> pairs;

    for (int i=1; i<A.size(); i++){
        cout << A.at(i) << endl;
        if (A.at(i) == A.at(i-1)){
            pairs.push_back(A.at(i));
            cout <<"pair: " <<  A.at(i) << endl;
            A.erase(A.begin()+i-1, A.begin()+i);
        }
    }

    int minDiff = -1;
    for (int i=1; i<pairs.size(); i++){
        int diff = pairs.at(i) - pairs.at(i-1);
        if (diff < minDiff || minDiff == -1){
            minDiff = diff;
        }
    }
    cout << minDiff;
    return minDiff;
}
