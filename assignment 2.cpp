#include <algorithm>
#include<iostream>
#include<string>

using namespace std;


string text;

int reverseString( string text ){

for( int i = text.length() ;i>=0 ;i--){

    cout<<text[i];
}


return 0;
}

int main(){

cout<<"Enter the text :\t";
getline(cin,text);

reverseString(text);





return 0;
}
