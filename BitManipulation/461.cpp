/*
 * @Author: your name
 * @Date: 2021-01-27 13:41:22
 * @LastEditTime: 2021-01-28 10:38:14
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \LeetCode\461.cpp
 */
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Solution {
public:
    int hammingDistance(int x, int y) {
    	//(1)
    	// int count=0;
    	// while(0!=x||0!=y)
		// {
		// 	if(x%2!=y%2)
		// 	{
		// 		count++;
		// 	}
		// 	x=x/2;
		// 	y=y/2;
		// }
		// return count;
        
        //(2)
        //return bitset<32>(x^y).count();

    	//(3)
        x ^= y, y = 0;
        while (x) ++y, x &= x - 1;
        return y;
    }

    
};

int main()
{
	Solution s1;
	cout<<s1.hammingDistance(1,4)<<endl;
}

//461. 汉明距离1
// 两个整数之间的汉明距离指的是这两个数字对应二进制位不同的位置的数目。
// 给出两个整数 x 和 y，计算它们之间的汉明距离。
// 注意：
// 0 ≤ x, y < 231.
// 示例:
// 输入: x = 1, y = 4
// 输出: 2
// 解释:
// 1   (0 0 0 1)
// 4   (0 1 0 0)
//        ↑   ↑
// 上面的箭头指出了对应二进制位不同的位置。

// 来源：力扣（LeetCode）
// 链接：https://leetcode-cn.com/problems/hamming-distance
// 著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。