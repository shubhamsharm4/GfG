//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    void sort012(vector<int>& arr) {
        int n = arr.size();
        int zeroCnt = 0;
        int oneCnt = 0;
        int twoCnt = 0;
        
        for(int i : arr) {
            if(i == 0) zeroCnt += 1; 
            if(i == 1) oneCnt += 1; 
            if(i == 2) twoCnt += 1;
        }
        
        int i = 0;
        while(i < n && zeroCnt > 0) {
            arr[i] = 0;
            zeroCnt --;
            i ++;
        }
        while(i < n && oneCnt > 0) {
            arr[i] = 1;
            oneCnt --;
            i ++;
        }
        while(i < n && twoCnt > 0) {
            arr[i] = 2;
            twoCnt --;
            i ++;
        }
    }
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        vector<int> a;
        string input;
        int num;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            a.push_back(num);
        }
        Solution ob;
        ob.sort012(a);

        int n = a.size();
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }

        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends