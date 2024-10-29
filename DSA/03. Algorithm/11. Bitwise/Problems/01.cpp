// https://www.geeksforgeeks.org/problems/binary-representation5003/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card

#include<bits/stdc++.h> 
using namespace std; 

class Solution
{
public:
    string getBinaryRep(int N)
    {
        // Write Your Code here
        string res="";
        int cnt=0;
        while(N){
            if(N&1){
                res='1'+res;
            }
            else{
                res='0'+res;
            }
            cnt++;
            N>>=1;
        }
        for(int i=0; i<30-cnt; i++){
            res='0'+res;
        }
        return res;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
       
        Solution ob;
        string ans = ob.getBinaryRep(N);
        cout << ans << endl;
    }
    return 0;
}