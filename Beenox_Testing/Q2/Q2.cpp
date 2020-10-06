#include <cmath>
#include <bits/stdc++.h> 

using namespace std;

class Answer
{
public:

    static int closestToZero(int ints[], int size) {

        int temp;
        
        for(int i=0; i<size; i++) {
            for(int j=i+1; j<size; j++) {
                if(abs(ints[i])>abs(ints[j])) {
                    temp = ints[i];
                    ints[i] = ints[j];
                    ints[j] = temp;
                }
            }
        }
        return ints[0];
	}
};