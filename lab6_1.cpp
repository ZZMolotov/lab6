#include<iostream>
using namespace std;

int main(){
    int n;
    int even = 0;
    int odd = 0;
    while(cout << "Enter an integer: "){
        cin >> n;
        if(n%2 ==0 && n != 0){
            even = even + 1;
        }else if (n%2 ==1){
            odd = odd + 1;
        }else if(n ==0){
            break;
        }
    }
    
    
    cout << "#Even numbers = "<<even<< endl;
    cout << "#Odd numbers = "<<odd<<endl;
    return 0;
}
