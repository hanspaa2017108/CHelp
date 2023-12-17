// #include<iostream>
// using namespace std;
// void messagePrint(){    
//     cout << "msg 1";  
//     cout << "msg 2";
//      return; // do not write this return here as void is not returning anything
// }
// int main(){
//     messagePrint();
// }

// #include<iostream>
// using namespace std;
// void fake(string name){
//     cout << " these are fake friends.." << name << endl;
// }
//  int main(){
//     fake("kaif");
//     fake("menon");
//     fake("dixit");
//  }

// // add two numbers
// #include<iostream>
// using namespace std;
// int addNum(int Num1, int Num2){
//     cout << "Addition of two numbers is- " << Num1+Num2 << endl;
//     return 0;
// }
// int main(){
//     addNum(5,9);
//     return 0;
// }

// // print sum of three nunbers
// #include<iostream>
// using namespace std;
// void sum(int a, int b, int c){
//     // cout << "bhaya sum is-" << a + b + c << endl;
//     int answer = a+b+c;
//     cout << "bhaya ans is- " << answer << endl;
// }
// int main(){
//     sum(1,2,3);
//     return 0;
// }

// // return sum of three numbers
// #include<iostream>
// using namespace std;
// int sum(int a, int b, int c){
//     int sum_ans = a+b+c;
//     return sum_ans;
// }
// int main(){
//     int get_sum_ans = sum(2,4,6);
//     cout << "bhaya ans is- " << get_sum_ans << endl;
//     return 0;
    
// }

// // print max of three numbers
// #include<iostream>
// using namespace std;
// void maxThree(int num1, int num2, int num3){
//     int Three = max(num1, num2);
//     int ansThree = max(Three, num3);
//     cout << "max of three numbers is- " << ansThree << endl;
// }
// int main(){
//     maxThree(25, 55, 69);
//     return 0;
// }

// // return max of three num
// #include<iostream>
// using namespace std;
// int maxThree(int num1, int num2, int num3){
//     int Three = max(num1, num2);
//     int ansThree = max(Three, num3);
//     cout << "max of three numbers is- " << ansThree << endl;
//     return ansThree;
// }
// int main(){
//     int finalmax = maxThree(25, 55, 69);
//     return 0;
// }

// // counting 1 to N
// #include<iostream>
// using namespace std;
// void printing(int n){
//     for(int i = 1; i<=n; i++){
//         cout << i << endl;
//     }
// }
// int main(){
//     printing(50);
//     return 0;
// }

// // even or edd(bewakoof)
// #include<iostream>
// using namespace std;
// void EvenOdd(int num){
//     if(num % 2 == 0){
//         cout << num << " " << "is Even" << endl;
//     }
//     else{
//         cout << num << " " << "is Odd" << endl;
//     }
// }
// int main(){
//     EvenOdd(45);
//     return 0;
// }

// // even or odd- HW Solution

// #include<iostream>
// using namespace std;

// bool checkEven(int n){
//     if (n % 2 == 0){
//         return true;
//     }
//     else{
//         return false;
//     }
// }

// int main(){
//     int n;
//     cin >> n;
//     bool yesEven = checkEven(n);
//     if(yesEven){
//         cout << n << "is an Even Number" << endl;
//     }
//     else{
//         cout << n << " " << "is an Odd Number" << endl;
//     }
//     return 0;  
// }

// // even-odd using bitwise operators

// #include<iostream>
// using namespace std;

// bool checkEven(int n){
//     if ((n&1) == 0){
//         return true;
//     }
//     else{
//         return false;
//     }
// }

// int main(){
//     int n;
//     cin >> n;
//     bool yesEven = checkEven(n);
//     if(yesEven){
//         cout << n << " " << "is an Even Number" << endl;
//     }
//     else{
//         cout << n << " " << "is an Odd Number" << endl;
//     }
//     return 0;  
// }

// // sum of all no. upto 1 to n
// #include<iostream>
// using namespace std;

// void one2n(int n){
//     int sum  = 0;
//     for(int i = 0; i <=n; i++){
//         sum = sum + i;
//     }
//     cout << sum;
// }

// int main(){
//     one2n(19);
//     return 0;
// }

// // sum of all even upto 1 to n(wrong logic)
// #include<iostream>
// using namespace std;

// void one2n(int n){
//     int sum  = 0;
//     for(int i = 0; i <=n; i++){
//         if(n%2==0){
//             sum = sum + i;
//         }
        
//     }
//     cout << sum;
// }

// int main(){
//     one2n(19);
// }

// //sum of even from 1 to n
// #include<iostream>
// using namespace std;

// void one2n(int n){
//     int sum  = 0;
//     for(int i = 2; i <=n; i = i + 2){
//         sum = sum + i;
//     }
//     cout << sum;
// }

// int main(){
//     one2n(19);
//     return 0;
// }

// // check prime no.
// #include<iostream>
// using namespace std;
// bool CheckPrime(int n){
//     for(int i = 2; i < n; i++){
//         if(n%i == 0){
//             return false;
//         }
//     }
//     return true;
// }
// int main(){
//    bool Prime = CheckPrime(37);
//    if(Prime){
//     cout  << "it is prime..." << endl;
//    }
//    else{
//     cout << "not a prime..." << endl;
//    }
// }

// // mera logic - gadbad prime
// #include<iostream>
// using namespace std;
// void CheckPrime(int n){
//     for(int i = 0; i <=n; i++){
//         if (n%i==0 || n%n-1==0){
//             cout <<"it is prime..." << endl;
//         }
//         else{
//             cout << "it is not prime..." << endl;
//         }
//     }
// }
// int main(){
//     CheckPrime(5);
//     return 0;
// }

// // prime- fromHW
// #include<iostream>
// using namespace std;
// bool isPrime(int n){
//     int i = 2;
// //use sqrt(n) for optimal solution
//     for(int i; i<n;i++){ 
//         if(n%i==0){
//             return false;
//         }
//     }
//      return true;
// }
// int main(){
//     int n;
//     cin >> n;
//     bool isitPrime = isPrime(n);
//     if(isitPrime){
//         cout << "IT IS PRIME\n"; 
//     }
//     else{
//         cout << "IT IS NOT PRIME\n";
//     }
// }

// // Prime 1-N
// #include<iostream>
// using namespace std;
// bool isPrime(int n){
//     int i = 2;
// //use sqrt(n) for optimal solution
//     for(int i; i<n;i++){ 
//         if(n%i==0){
//             return false;
//         }
//     }
//      return true;
// }
// int main(){
//     int n;
//     cin >> n;
//     for(int i = 2; i<=n; i++){
//         bool isitPrime = isPrime(i);
//         if(isitPrime){
//             cout<<i<<endl;
//         }
//     }
   
// }

// // area of circle- my code
// #include<iostream>
// using namespace std;
// void gola(int r){
//     cout << "area of circle is- " << r*3.14*r << endl;
// }
// int main(){
//     gola(4);
//     return 0;   
// }

// // area of circle- HW Code

// #include<iostream>
// using namespace std;
// float circle(float radius){
//     float area = 3.14*radius*radius;
//     return area;
// }

// int main(){
//     int radius;
//     cin >> radius;
//     float area = circle(radius);
//     cout << "area calculated is... " << area << endl;
// }

// //factorial
// #include<iostream>
// using namespace std;
// long long int Factorial(int num){
//     int fact = 1;
//     for(int i = 1; i <= num; i++){
//         fact = fact * i;
//     }
//     return fact;
// }
// int main(){
//     int num;
//     cin >> num;
//     int fact_ans = Factorial(num);
//     cout << "factorial of  "<< num <<" is "<< fact_ans << endl;
// }

// // fah to cel (my sol)
// #include<iostream>
// using namespace std;

// void Fah(int c){
//     int fh;
//     fh = c * 1.80 + 32;
//     cout << "fah result is..." << fh << endl;
// }

// int main(){
//     int c;
//     cin >> c;
//     Fah(c);
//     return 0;
// }

// // hw-7 km to miles, my code

// #include<iostream>
// using namespace std;

// void miles(int k){
//     float mil;
//     mil = k*0.62;
//     cout << "kilo to miles is... " << mil << endl;
// }
// int main(){
//     float k;
//     cin >> k;
//     miles(k);
// }


// // km to miles, sir code
// #include<iostream>
// using namespace std;

// float miles(float k){
//     float mil;
//     mil = k*0.62;
//     cout << "kilo to miles is... " << mil << endl;
//     return mil;
// }
// int main(){
//     float k;
//     cin >> k;
//     miles(k);
// }

// k, fh to Cel LeetCode(HW Solution)

// // numbers to digits
// #include<iostream>
// using namespace std;

// void Reverse(int n){
//     int OnesPlace;
//     while(n){
//         OnesPlace = n%10;
//         cout << "Digit at OnesPlace is..." << OnesPlace << endl;
//         n /= 10;
//     }
// }
// int main(){
//     int n;
//     cin >> n;
//     Reverse(n);
//     return 0;
// }

// // digits to number

// #include<iostream>
// using namespace std;

// int Num2Dig(int numofdigits){
//     int num = 0;
//     for(int i = 0;  i < numofdigits; i++){
//         int digit;
//         cin >> digit;
//         num = num * 10  + digit;
//         cout << "No. created so far... " << num << endl;
//     }
//     return num;

// }
// int main(){
//     int numofdigits;
//     cin >> numofdigits;
//     cout << "Number of digits taken are..." << numofdigits << endl;
//     int num = Num2Dig(numofdigits);
//     cout << "Final Number from digit is..." << num;
//     return 0;
// }

// //FUNC-PRC1

// #include<iostream>
// using namespace std;

// void PrintNames(string Name){
//         for(int i = 0; i < 5; i++){
//             cout << Name << endl;
//         }
//     }
// int main(){
//     PrintNames("Aman");
//     PrintNames("Arjun");
//     PrintNames("Hanji?");
//     return 0;
// }

// //func-prc2

// #include<iostream>
// using namespace std;

// void PrintThis(){
//     cout << "FIRST GOES THIS" << endl;
//     return;
//     cout << "SECOND GOES THIS" << endl;
// }
// int main(){
//     PrintThis();
//     return 0;
// }

// // func- prc3

// #include<iostream>
// using namespace std;

// // function declare
// int MathFunc(int a, int b, int c);

// // function call
// int main(){
//     int final_ans = MathFunc(4,4,4);
//     return final_ans;
// }

// // function define
// int MathFunc(int a, int b, int c){
//     int ans = a*b*c;
//     cout << "the answer is..." << ans << endl;
//     return ans;
// }

// // function prc-4, failed to debug properly between min1 and b, gpt helped

// #include<iostream>
// using namespace std;

// int MinFunc(int a, int b, int c){
//         int Min1 = min(a, b);
//         int Min2 = min(Min1, c);
//         cout << "The Minimun is..." << Min2 << endl;
//         return Min2;
//     }
// int main(){
//     int FinalMin = MinFunc(60, 61, 59);
//     return 0;  
// }

// // return min of three num
// #include<iostream>
// using namespace std;
// int maxThree(int num1, int num2, int num3){
//     int Three = min(num1, num2);
//     int ansThree = min(Three, num3);
//     cout << "max of three numbers is- " << ansThree << endl;
//     return ansThree;
// }
// int main(){
//     int finalmax = maxThree(60, 61, 59);
//     return 0;
// }

// // func prc-5
// #include<iostream>
// using namespace std;

// void SumN(int n){
//     int sum = 0;
//     for(int i = 0; i <= n; i++){
//         sum = sum + i;
//     }
//     cout << sum;
// }
// int main(){
//     SumN(10);
//     return 0;
// }

// // func prc-6
// #include<iostream>
// using namespace std;

// void SumN(int n){
//     int sum = 0;
//     for(int i = 2; i <= n; i = i + 2){
//         sum = sum + i;
//     }
//     cout << "sum of all even numbers are..."<< sum;
// }
// int main(){
//     SumN(10);
//     return 0;
// }

// // func prc-5, bakwas way to  code
// #include<iostream>
// using namespace std;

// void SumN(int n){
//     int sum = 0;
//     for(int i = 0; i <= n; i++){
//         if(i%2 == 0){
//             sum = sum + i;
//         }
//     }
//     cout << sum; 
// }
// int main(){
//     SumN(10);
//     return 0;
// }

// fuc prc-6, even odd but using BIT WISE

 