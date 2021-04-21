#include <iostream>
#include <string>
#include <vector>
using namespace std;

int lengthOfLongestSubstring(string s) {
	int minLen = 0;
	size_t len = s.length();
	for (int i = 0; i < len; i++)
	{
		size_t subSize = len - i;
		for (int j = 1; j <= subSize; j++)
		{
			auto subStr = s.substr(i,j);
			if (subStr.find(s[i + j ]) != string::npos)
			{
				if((subStr.length() > minLen))
					minLen = subStr.length();
				break;
			}
		}
	}
	return minLen;
}

int main()
{
	//cout << lengthOfLongestSubstring("abcabcbb") << endl;
	//cout << lengthOfLongestSubstring("bbbbb") << endl;
	//cout << lengthOfLongestSubstring("pwwkew") << endl;
	//cout << lengthOfLongestSubstring("") << endl;
	cout << lengthOfLongestSubstring("a") << endl;
	return 0;
}