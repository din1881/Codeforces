        #include <stdio.h>
        #include <algorithm>
        #include <iomanip> 
        #include <iostream>
        #include <string>
        #include <map>
        #include <vector>
        #include <set>
        using namespace std;
        int main()
        {
            long long int x, y, m, sum=0, old_sum;
                             
            cin >> x >> y >> m;
            
            if (x + y > m && m < 0) { cout << 0; return 0; }
            if (x >= m || y >= m) { cout << 0; return 0; }
            if (x == m || y == m) { cout << 0; return 0; }
            if ((x <= 0) && (y <= 0)) { cout << -1; return 0; }
            
            long long counter = 0;
            if (x > y) swap(x, y);
            if (x < 0) 
            {
                counter = abs(x) / y; 
                x = x % y; 
            }
                             
            sum = x + y;
            counter++;
            while (sum < m)
            {
                old_sum = sum;
                if (sum > y) swap(sum, y);
                sum += y;
                counter++;
                if (old_sum > sum) { cout << -1; return 0; }
            }
            cout << counter;
            return 0;
        }
