#include <iostream>
#include <string>
#include <vector>
using namespace std;

int lengthOfLongestSubstring(string s) {
	int minLen = 0;
	size_t len = s.length();
	for (int i = 0; i < len; i++)
	{
		for (int j = i + 1; j <= len; j++)
		{
			auto subStr = s.substr(i,j - i);
			if (subStr.length() > minLen)
				minLen = subStr.length();
			if (subStr.find(s[j]) != string::npos)
				break;
		}
	}

	return minLen;
}

int main()
{
	cout << lengthOfLongestSubstring("abcabcbb") << endl;
	cout << lengthOfLongestSubstring("bbbbb") << endl;
	cout << lengthOfLongestSubstring("pwwkew") << endl;
	cout << lengthOfLongestSubstring("") << endl;
	cout << lengthOfLongestSubstring("a") << endl;
	cout << lengthOfLongestSubstring("au") << endl;
	return 0;
}