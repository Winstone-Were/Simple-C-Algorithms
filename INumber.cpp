#include <iostream>

using std::cout;
using std::cin;

int main() {
    bool go_on = true;
    char continue_char;
    float input = 0;
    float inverse = 0;
    while (go_on){
        while(input == 0){ 
            cout<<"Enter Your Number Must not be 0 :: ";
            cin>>input;
        }
        inverse = 1/input;
        cout<<"The Inverse of "<<input<<" is "<<inverse<<"\n";
        cout<<"If you want to continue press c if you want to exit press x ";
        cin>> continue_char;
        if(continue_char == 'c'){
            input = 0;
        }else if(continue_char == 'x'){
            go_on = false;
        }else{
            cout<<"Enter a valid char ! \n";
            return 1;
        }
    }
    return 0;
}