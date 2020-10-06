#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unistd.h>

using namespace std;

int getDigitsSum(int n)
{
    int sum = 0;
    while (n != 0) {
        sum = sum + n % 10;
        n /= 10;
    }
    return sum;
}


int compute_join_point(int s1, int s2)
{
    // Write your code here
    // To debug: cerr << "Debug messages..." << endl;

    while (s1 != s2){
        if (s1 < s2) {
            if (s1 == 0) {
                return -1; 
            }
            s1 += getDigitsSum(s1);
        } else if (s2 < s1) {
            if (s2 == 0) {
                return -2; 
            }
            s2 += getDigitsSum(s2);
        }
    }
    return s1;
}

/* Ignore and do not change the code below */
#pragma region
int main()
{
    int s1;
    cin >> s1; cin.ignore();
    int s2;
    cin >> s2; cin.ignore();
    int std_out_fd = dup(1);
    dup2(2, 1);
    int res = compute_join_point(s1, s2);
    dup2(std_out_fd, 1);
    cout << res << endl;
}
#pragma endregion