#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int* mas = new int[n];
    for(int i = 0; i < n; i++)
        cin >> mas[i];
    
    //Select sort
    for(int i = 0; i < n - 1; i++) {
        int ind = i;
        for(int j = i + 1; j < n; j++)
            if(mas[ind] > mas[j])
                ind = j;
        
        swap(mas[ind], mas[i]);
    }


    for(int i = 0; i < n - 1; i++) 
        for(int j = i + 1; j < n; j++)
            if(mas[i] > mas[j])
                swap(mas[i], mas[j]);
        
    sort(mas, mas+n);
    
}