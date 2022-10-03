#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
        string ans = "" ;
        sort(strs.begin(),strs.end()) ;
        string first = strs[0] ;
	/* // THIS LOOP IS OPTIONAL IF YOU WANT TO SEE HOW YOUR                                                                     //   INPUT LIST WILL BECOME AFTER SORTING YOU CAN UNCOMMENT THIS SECTION
        // for(int j = 0 ; j< strs.size();j++)      
        // {
        //    cout<<strs[j]<<" ";
        // }           */
		
        string last = strs[strs.size() - 1] ;
        int i = 0 ;
        while(i<first.size() && i<last.size())
        {
            if(first[i] != last[i])
            {
                       break ;
            }
            else{
                ans = ans + first[i] ;
            }
            i++;
            
        }
        
        return ans ;
        
    }

int main() {
    vector<string> s = {"flow", "flower", "flight"};
    cout << longestCommonPrefix(s) << endl;
    return 0;

}