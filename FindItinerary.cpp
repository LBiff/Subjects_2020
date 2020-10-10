//行程排序
// 给定一个机票的字符串二维数组 [from, to]，子数组中的两个成员分别表示飞机出发和降落的机场地点，对该行程进行重新规划排序。所有这些机票都属于一个从JFK（肯尼迪国际机场）出发的先生，所以该行程必须从 JFK 出发。
// 说明:
// 如果存在多种有效的行程，你可以按字符自然排序返回最小的行程组合。例如，行程 ["JFK", "LGA"] 与 ["JFK", "LGB"] 相比就更小，排序更靠前
// 所有的机场都用三个大写字母表示（机场代码）。
// 假定所有机票至少存在一种合理的行程。
#include <vector>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <queue>
using namespace std;
//使用优先队列存储从一个机场出发可以到达的所有机场，再进行DFS找出答案
//得用回溯，因为存在一些路径不能全部达到所有的城市
class Solution
{
public:
    vector<string> findItinerary(vector<vector<string>>& tickets) 
    {

    };

    

};

int main()
{
    vector<vector<string>> vv{{"JFK","KUL"},{"JFK","NRT"},{"NRT","JFK"}};
    Solution s;
    auto ret = s.findItinerary(vv);
    return 0;
}
