class Solution {
public:
    bool isValid(string s) {
    	stack<char> stack1;
    	for(int i=0;i<s.size();i++)
    	{
    		switch(s[i])
    		{
    			case '(':
    			case '{':
    			case '[':
    				stack1.push(s[i]);
    				break;
    			case ')':
    			case ']':
    			case '}':
    				if(0==stack1.size())
    				{
    					return false;
    				}
    				if((')'==s[i]&&'('!=stack1.top())||
    				   (']'==s[i]&&'['!=stack1.top())||
    				   ('}'==s[i]&&'{'!=stack1.top()))
    				{
    					return false;
    				}
    				stack1.pop();
    		}
    	}
        if(stack1.size()!=0)
        {
            return false;
        }
    	return true;
    }
};

//别人的
while(s.contains("()")||s.contains("[]")||s.contains("{}")){
    if(s.contains("()")){
        s=s.replace("()","");
    }
    if(s.contains("{}")){
        s=s.replace("{}","");
    }
    if(s.contains("[]")){
        s=s.replace("[]","");
    }
}
return s.length()==0;

/*********
给定一个只包括 '('，')'，'{'，'}'，'['，']' 的字符串 s ，判断字符串是否有效。
有效字符串需满足：
左括号必须用相同类型的右括号闭合。
左括号必须以正确的顺序闭合。
 
示例 1：
输入：s = "()"
输出：true
示例 2：

输入：s = "()[]{}"
输出：true
示例 3：

输入：s = "(]"
输出：false
示例 4：

输入：s = "([)]"
输出：false
示例 5：

输入：s = "{[]}"
输出：true
 

提示：

1 <= s.length <= 104
s 仅由括号 '()[]{}' 组成

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/valid-parentheses
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*********/