#include <iostream>
using namespace std;


bool checkifstartswithVowels(string str)
{
    bool result = true;
    if ( str[0] == 'A'|| str[0] == 'E' || str[0] == 'I' || str[0] == 'O'||str[0] == 'U'){
        result = false;
    }
    return result;   
}

void check (string str)
{
    bool result= checkifstartswithVowels (str);
    if  (str.length() <= 2) {
        
       cout << " Its length must be greater then 2 letters"<< endl;
    }
    else if (result == false)
    cout << "It is invalid because the name must be start with consonent" << endl;
    
    else {
       cout << "Valid" << endl;
    }
}
 
int main ()
{
    string str = "Name"; 
    getline (cin,str);
    check (str);
    
    return 0;
}
