// #include <bits/stdc++.h>
// using namespace std;
// void tablet(int w[], int h[], int p[], int n, int b)
// {
//     int maxi = INT_MIN;
//     for (int i = 0; i < n; ++i)
//     {
//         if (p[i] > b)
//         {
//             w[i] = 0;
//             h[i] = 0;
//         }
//     }
//     vector<int> v;
//     int count = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (w[i] == 0)
//             count++;
//     }
//     if (count == n)
//     {
//         cout << "no tabl et" << endl;
//     }
//     else
//     {

//         for (int i = 0; i < n; ++i)
//         {
//             v.push_back(w[i] * h[i]);
//         }
//     }
//     for (int i = 0; i < v.size(); ++i)
//     {
//         maxi = max(maxi, v[i]);
//     }
//     if(count!=n){
//     cout << maxi << endl;
//     }
// }

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, b;
//         cin >> n >> b;
//         int w[n], h[n], p[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin >> w[i] >> h[i] >> p[i];
//         }
//         // for(int i=0;i<n;++i){
//         //     cout<<"W"<<"->"<<w[i]<<endl;
//         //     cout<<"H"<<"->"<<h[i]<<endl;
//         //     cout<<"P"<<"->"<<p[i]<<endl;
//         // }
//         tablet(w, h, p, n, b);
//     }
// }
