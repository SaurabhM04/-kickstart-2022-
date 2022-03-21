#include <iostream>
#include <algorithm>
#include <cmath>
#include <climits>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <stack>
#define ll long long int
using namespace std;

int main(){

    int t,n;
    cin>>t;
     n=1;
    while(t--){
    
     string s,p;
	 cin>>s;
	 
	 cin>>p;
	 set<string> t1, t2;
        t1.insert(s);
        t2.insert(p);

        int  flag = 0;
        if (t1.size() != t2.size())
        {
            cout << "case #" << n << ": IMPOSSIBLE" << endl;
            n++;
        }
        else
        {
            map<char, int> s1, s2;
            int i = 0, k = 0;
            while (i < s.length() || k < p.length())
            {
                if (i < s.length())
                {
                    s1[s[i]]++;
                    i++;
                }
                if (k < p.length())
                {
                    s1[p[k]]--;
                    k++;
                }
              
            }
             for (auto x : s1)
                {
                    if (x.second > 0)
                        flag = 1;
                }
              if (flag == 1)
              {
                    cout << "case #" << n << ": IMPOSSIBLE" << endl;
                    n++;
              }
                else
                {
                    cout << "case #" << n << ": "<< p.length() - s.length() << endl;
                    n++;
                }
        }


	
    }
    return 0;
}