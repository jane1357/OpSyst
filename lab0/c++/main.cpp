#include <iostream>
#include <math.h>
#include <fstream>
#include <cstdlib>
#include <cstring>
#include <string>
#include <iomanip>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ifstream fin("..\\input.txt");
    int k = 0;
    int x;
    char q[80];
    vector<int> v;
    do
    {
        fin >> x;
        v.push_back(x);
        k++;
        //cout<<"ss"<<v.size()<<endl;
        if(v.size()==1)
            cout<<"Packet is complete\n";
        else
        {
            sort(v.begin(), v.end());
            cout<<"These elements aren`t in vector:\n";
            for(int j=v[0];j<v[v.size()-1];j++)
            {
                if(binary_search(v.begin(),v.end(),j)==false)
                    cout<<j<<" ";
            }
            cout<<endl;
        }

    } while (fin.getline(q, 80));
//    cout<<v[v.size()-1];
//    for (int i=0;i<v.size();i++)
//        cout<<v[i]<<endl;
    fin.close();
    return 0;
}
