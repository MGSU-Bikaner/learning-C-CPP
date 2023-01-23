#include <iostream>
using namespace std;

float convertPaiseToRupees(float p){
        float r;
        r = p/100;
        return r;
}


int main() {
    float p;
    cout<<"Enter paise: ";
    //    taking input
    cin>>p;
//    printing the output
    if(p<1) {
        cout << "Please enter valid paise.";
        return 0;
    }
    cout<<"Rs. "<<convertPaiseToRupees(p);
    return 0;
}

