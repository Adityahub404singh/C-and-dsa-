#include<iostream>
using namespace std;
// int main() {
//     int n =3;
//     char ch ='A';
//     for(int i=0;i<n;i++){
//         for (int j=0;j<n;j++){
//             cout<<ch;
//             ch++;
//         }
// cout<<endl;
// //     }
// // }
// int main(){
//     int n=5;
//     char ch ='A';
//     for(int i=0; i<n; i++){
//         for( int j=0; j<i+1;j++){ 
//         cout<< ch;
//     ch++;
//     }
//     cout<<endl;
//     }
// }
int main() {
    int n = 5;
    char ch = 'A';
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i + 1; j++) {
            cout << ch;
        }
        ch++; // Increment the letter AFTER the inner loop finishes
        cout 8<< endl;
    }
    
    return 0;
}