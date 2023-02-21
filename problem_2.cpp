//
//  main.cpp
//  problem_2
//
//  Created by Asilbek Alimov on 21/02/23.
//

#include <iostream>
using namespace std;
int main() {
    int a;
    cin>>a;
    if(a>0 && a%2==0){
        cout<<"The number is positive and even"<<endl;
    }else if(a>=0 && a%2 == 1){
        cout<<"Positive and odd"<<endl;
    }else if(a<0 && a%2==0){
        cout<<"Negative and even"<<endl;
    }else{
        cout<<"Negative and odd";
    }
    return 0;
}
