#include<iostream>
using namespace std;

 /////------ Question :- Prime or Non-Prime Numbers -------///////


int main(){

    int n = 11;    /// find this numbers 
    bool isPrime = true;

    for(int i =2;i*i<=n;i++){

        if(n%i == 0){   /// Non Prime 
            
            isPrime =  false;
            cout << i << " modulo is "<< isPrime << " \n";
            break;
        }
        cout << i << " modulo is "<< isPrime << " \n";

    }

    if(isPrime == true){
        cout << n << " prime   \n";
    }else{
        cout << n << " Non prime \n";
    }



    // isPrime ==> true ==> Prime 
    // isPrime ==> false ==> nonPrime 

    return 0;
    
    


}


