#include <iostream>

using std::cout;
using std::string;

void RomanII(string s){
    const char* str = s.c_str();
    int value;
    //loop to Modifiy the value
    int n = s.length();
    for(int i=0; i<n; i++){
        if(str[i]=='I' && (str[i+1]=='X'||str[i+1]=='V')){
            value-=2;
        }else if(str[i]=='X' && (str[i+1]=='L'||str[i+1]=='C')){
            value-=20;
        }else if ((str[i+1] == 'D' || str[i+1] == 'M') && str[i] == 'C') {
            value -= 200;
        }
        switch(str[i]){
            case 'I':
                value +=1;
                break;
            case 'V':
                value +=5;
                break;
            case 'X':
                value +=10;
                break;
            case 'L':
                value +=50;
                break;
            case 'C':
                value +=100;
                break;
            case 'D':
                value += 500;
                break;
            case 'M':
                value += 1000;
                break;
        }
    }
    cout<<value;
}

int main(){
    RomanII("LVIII");
}