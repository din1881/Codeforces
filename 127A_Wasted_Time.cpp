    #include <stdio.h>
    #include <algorithm>
    #include <iomanip> 
    #include <iostream>
    #include <string>
    #include <map>
    #include <vector>
    #include <set>
    #include <math.h>
    using namespace std;
    int main()
    {
        int n, k;
        cin >> n >> k;
        vector <pair<int, int>> v(n);
        double tot_dis = 0.0;
        int x, y;
        for (int i = 0; i < n; i++)
        {
            cin >> x >> y;
            v[i]=make_pair(x, y);
        }
        //pair<int, int> prev;
        for (int i = 0; i < n - 1; i++)
        {
            double exe = pow((v[i].first - v[i + 1].first),2);
            double why = pow((v[i].second - v[i + 1].second), 2);
            tot_dis += sqrt(exe + why);
        }
        double tot_time = tot_dis / double(50);
        double ans = tot_time * double(k);
        cout << fixed << setprecision(9) << ans;
     
        return 0;
    }
