/*
ve+ num: bit block starts with 0
ve- num: bit block starts with 1

e.g.:
ve- num: -5
step 1. Ignore the ve- sign, represent 5 in normal fashion.
step 2. Convert into binary repr.
        -> [0000 0101]
step 3. take 2's compliment & store i.e. [First take 1's compliment & add 1 in it]
        1st compl -> [1111 1010]
                             +1
        2nd compl -> [1111 1011] Here, 1 at the start of binary repr. tells us that it is ve-.

By Default if given a negative number, compiler treat it as negative i.e. 1 at starting
but
if we use "unsigned" before int then it will be treated as positive.
*/

# include <iostream>
using namespace std;

int main(){
    unsigned int a = -1;
    // this will give 2's compliment as positive instead as a negative number
    cout << "ve- num treated as positive with unsigned(2's compl of -1): " << a << endl;

    int b = -1;
    cout << "ve- num treated as negative: "<< b << endl;
}


