#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<vector<int>> fourSum(vector<int>& num, int target) {
    
    vector<vector<int> > res;

    if (num.empty())
        return res;

    std::sort(num.begin(),num.end());

    for (int i = 0; i < num.size(); i++) {
    
        int target_3 = target - num[i];
    
        for (int j = i + 1; j < num.size(); j++) {
        
            int target_2 = target_3 - num[j];
        
            int front = j + 1;
            int back = num.size() - 1;
        
            while(front < back) {
            
                int two_sum = num[front] + num[back];
            
                if (two_sum < target_2) front++;
            
                else if (two_sum > target_2) back--;
            
                else {
                
                    vector<int> quadruplet(4, 0);
                    quadruplet[0] = num[i];
                    quadruplet[1] = num[j];
                    quadruplet[2] = num[front];
                    quadruplet[3] = num[back];
                    res.push_back(quadruplet);
                
                    while (front < back && num[front] == quadruplet[2]) ++front;
                
                    while (front < back && num[back] == quadruplet[3]) --back;
            
                }
            }
            
            while(j + 1 < num.size() && num[j + 1] == num[j]) ++j;
        }
    
        while (i + 1 < num.size() && num[i + 1] == num[i]) ++i;
    
    }

    return res;
}



int main()
{
    vector<int> num={1, 0, -1, 0, -2, 2};
    vector<vector<int>> res = fourSum(num,0);
    cout<<res.size()<<endl;
    return 0;
}







