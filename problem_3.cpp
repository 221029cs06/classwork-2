//
//  main.cpp
//  problem_3
//
//  Created by Asilbek Alimov on 21/02/23.
//

#include <iostream>
using namespace std;
int main() {
    int a,b,c;
    cin>>a>>b>>c;
    if(a<c && c>b){
        cout<<c<<endl;
    }else if(a<b && b>c){
        cout<<b<<endl;
    }else{
        cout<<c<<endl;
    }
    return 0;
}
