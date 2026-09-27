#include <iostream>
using namespace std;

void hanoi(int n, char a, char b, char c) {
    if (n == 0) return; // base case

    // Move n-1 disks from  source to destination using helper b
    hanoi(n - 1, a,c,b);

    // Move the nth disk from source to destination
    cout << a<< " -> " << c<< endl;

    // Move n-1 disk move b to c using source b helper take a and destination will be a  
    //you know that final hame a se c tak jana hai .

    //S,H,D alawys try to break in two first a-b then b-c using helper 
    hanoi(n - 1, b,a,c);
}

int main() {
    int n = 3;
    hanoi(n, 'A', 'C', 'B'); // A=source, C=destination, B=auxiliary
    return 0;
}
