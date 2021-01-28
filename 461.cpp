#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Solution {
public:
	void SwitchBinary(int x,vector<int>& vecX)
	{
		//cout<<x<<endl;
		while(0!=x)
		{
			vecX.push_back(x%2);
			//cout<<x%2<<" ";
			x=x/2;
		}
		//cout<<endl;
	}

    int hammingDistance(int x, int y) {
    	int z=0;
    	while(0!=x&&0!=y)
		{
			if(x%2!=y%2)
			{
				count++
			}
			x=x/2;
			y=y/2;
		}
		z=x>y?x:y;
		while(0!=z)
		{
			count+=z%2;
			z=z/2;
		}
		return count;


   //  	vector<int> vecX,vecY;
   //  	vector<int> *pVec=nullptr;
   //  	SwitchBinary(x,vecX);
   //  	SwitchBinary(y,vecY);
   //  	int min_size=vecX.size()<vecY.size()?vecX.size():vecY.size();
   //  	//cout<<"min_size:"<<min_size<<endl;
   //  	int count=0;
   //  	for(int i=0;i<min_size;i++)
   //  	{
			// count+=abs(vecX[i]-vecY[i]);
   //  	}
   //  	if(vecX.size()>min_size)
   //  	{
   //  		pVec=&vecX;
   //  	}
   //  	if(vecY.size()>min_size)
   //  	{
   //  		pVec=&vecY;
   //  	}
   //  	if(nullptr!=pVec)
   //  	{
   //  		for(int i=min_size;i<(*pVec).size();i++)
	  //   	{
	  //   		count+=(*pVec)[i];
	  //   	}
   //  	}
   //  	return count;
    }

    
};

int main()
{
	Solution s1;
	cout<<s1.hammingDistance(1,4)<<endl;
}

//461. 汉明距离
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