#include <iostream>
#include <random>
using namespace std;

// int main() {
    // 1. a)
    // int sum = 0;
    // int a = 1;
    // for (; a <= 100; a++)
    //     {
    //     sum = sum + a;
    // }
    // cout << "Sum = " << sum;

    // int sum = 0;
    // int a = 0, n = 0;
    // cout << "Please enter number n: ";
    // cin >> n;
    // for (; a <= n; a++)
    // {
    //     sum = sum + a;
    // }
    // cout << "Sum = " << sum;

    // problem 2:
    // int count = 0, n = 2;
    // for (; count <= 10; n++) {
    //     bool isprime = true;
    //     for (int i = 2; i*i <= n; i++) {
    //         if (n % i == 0) {
    //             isprime = false;
    //         }
    //     }
    //     if (isprime) {
    //         cout << n << " ";
    //         count++;
    //     }
    // }

    // int count = 0, n = 2, m = 2;
    // cout << "The number n: ";
    // cin >> m;
    // for (; count <= m; n++) {
    //     bool isprime = true;
    //     for (int i = 2; i*i <= n; i++) {
    //         if (n % i == 0) {
    //             isprime = false;
    //         }
    //     }
    //     if (isprime) {
    //         cout << n << " ";
    //         count++;
    //     }
    // }

    // int n = 1;
    // cout << "n = ";
    // cin >> n;
    // while (n != 1) {
    //     cout << n<< ' ';
    //     if (n % 2 == 0) {
    //         n = n / 2;
    //     }
    //     else {
    //         n = n * 3 + 1;
    //     }
    // }
    // cout << '1' << endl;

    // problem 4
    // 1234
    // int n = 0, i = 1, count = 0;
    // cout << "Enter a number: ";
    // cin >> n;//1234,123,12,1
    // while (n>0) {
    //    n=n/10;
    //     count++;
    // }
    // cout << count << endl;


    //problem 6
    // int num1 = 0, num2 = 0, i = 2;
    // cout << "Number 1: ";
    // cin >> num1;
    // cout << "Number 2: ";
    // cin >> num2;
    // if (num1 > num2) {i = num2;}
    // else {i = num1;}
    // while (num1%i != 0||num2%i!=0) {
    //     i--;
    // }
    // cout << i << endl;

    //problem 7
    // int sum = 0, n = 0, count = 0;
    // while (sum < 100) {
    //     cout << "Enter a number: ";
    //     cin >> n;
    //     sum += n;
    //     count++;
    // }
    // cout << "Sum exceeded 100. Total sum is " << sum << endl;
    // cout << "The number of inputs: " << count;

    //problem 8
    // problem 8
    // int balance = 500, withdrawal = 0;
    // while (balance > 0){
    //     cout << "Amount to withdraw: ";
    //     cin >> withdrawal;
    //     if (withdrawal <= balance){
    //         balance -= withdrawal;
    //         cout << "Current balance:" << balance << endl;}
    //     else {cout << "There is not enough money to withdraw from the account. Current balance: " << balance << endl;}
    // }

    // problem 9
//     string response;
//     cout << "Response: ";
//     cin >> response;
//     while (response != "Y" && response != "N"){
//         cout << "Invalid." << endl;
//         cout << "Response: ";
//         cin >> response;
//     }
// }

    // problem 10
    // int balance = 500, withdrawal = 0, option = 0;
    // while (true){
    //     cout << "Options:\n1. Withdraw cash\n2.Deposit money\n3. Exit\n";
    //     cin >> option;
    //     if (option == 1){
    //         cout << "Amount to withdraw: ";
    //         cin >> withdrawal;
    //         if (withdrawal <= balance){
    //             balance -= withdrawal;
    //             cout << "Current balance:" << balance << endl;}
    //         else {cout << "There is not enough money to withdraw from the account. Current balance: " << balance << endl;}}
    //     else if (option == 2){
    //         cout << "Amount to deposit: ";
    //         cin >> withdrawal;
    //         balance += withdrawal;
    //         cout << "Current balance:" << balance << endl;}
    //     else {break;}
    // }

    // int a, b, option = 0;
    // while (option != 3){
    //     cout << "Options:\n1. Addition\n2. Subtraction\n3. Exit\n";
    //     cin >> option;
    //     switch (option){
    //         case 1:
    //             cout << "1st number: ";
    //             cin >> a;
    //             cout << "2nd number: ";
    //             cin >> b;
    //             cout << a << " + " << b << " = " << a+b << endl;
    //             break;
    //         case 2:
    //             cout << "1st number: ";
    //             cin >> a;
    //             cout << "2nd number: ";
    //             cin >> b;
    //             cout << a << " - " << b << " = " << a-b << endl;
    //             break;
    //         case 3:
    //             continue;
    //     }
    // }

    // problem 12
    // int pass = 0;
    // cin >> pass;
    // while (pass != 6543){
    //     cout << "Incorrect. Try again.\n";
    //     cin >> pass;
    // }
    // cout << "Access granted." << endl;

    // problem 13
    // random_device rd;
    // mt19937 gen(rd());
    // uniform_int_distribution<> distrib(1, 100);
    // int rnumber = distrib(gen), number = 0;
    // while (number != rnumber){
    //     cout << "Guess: ";
    //     cin >> number;
    //     if (number < rnumber){
    //         cout << "Too low" << endl;}
    //     if (number > rnumber){
    //         cout << "Too high" << endl;}
    // }
    // cout << "Correct.";


//     return 0;
// }

// void welcomeMessage(){
//     cout << "Welcome to the C++ programming world!";
// }
//
// int main(){
//     // problem 14
//     welcomeMessage();
// }

// void greetUser(){
//     string name;
//     cout << "Your name?\n";
//     cin >> name;
//     cout << "Hello, " << name << "!";
// }
//
// int main(){
//     // problem 15
//     greetUser();
// }

// void maxNumber(int a, int b){
//     if (a >= b){cout << "Max: " << a;}
//     else{cout << "Max: " << b;}
// }
//
// int main(){
//     // problem 16
//     int a, b = 0;
//     cout << "1st number: ";
//     cin >> a;
//     cout << "2nd number: ";
//     cin >> b;
//     maxNumber(a, b);
// }

// void factorial(int a){
//     int pro = 1;
//     for (int i = 1; i <= a; i++){
//         pro *= i;
//     }
//     cout << "The factorial of " << a << " is " << pro;
// }
// int main(){
//     // problem 17
//     int a = 0;
//     cout << "Number: ";
//     cin >> a;
//     factorial(a);
// }

void rectangle(int width, int height){
    for (int i = 0; i < height; i++){
        for (int j = 0; j < width; j++){
            cout << "* ";
        }
        cout << "\n";
    }
}
int main(){
    // problem 14
    int a, b = 0;
    cout << "Width: ";
    cin >> a;
    cout << "Height: ";
    cin >> b;
    rectangle(a, b);
}