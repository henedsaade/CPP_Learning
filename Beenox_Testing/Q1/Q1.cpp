// C++ implementation​​​​​​‌​​​‌‌‌​​‌‌​‌​‌‌‌​​‌‌‌​‌​ below
#include <string>
#include <bits/stdc++.h> 

using namespace std;

class Answer
{
public:
    static bool isTwin(std::string a, std::string b) {

        // Sort both the strings 
        std::sort(a.begin(), a.end());
        std::sort(b.begin(), b.end());
        
        return a == b;
    }
};