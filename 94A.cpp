        #include <bits/stdc++.h>
         
        using namespace std;
         
        int main()
        {
            string s, temp, sub, arr[11];
            
            cin>>s;
            for(int i = 0; i < 10; i++)
            {
                cin>>temp;
                arr[i]=temp;
            }
            for(int k = 0; k < 80; k += 10)
            {
                sub = s.substr(k,10);
                for(int j = 0; j < 10; j++)
                {
                    if(sub==arr[j]) cout<<j;
                }
            }
        }
