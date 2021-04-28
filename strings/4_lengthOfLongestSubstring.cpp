#include <iostream>
#include <string>
#include <vector>
using namespace std;

int lengthOfLongestSubstring(string s) {
	int minSize = 0;

	for (int i = 0; i < s.length(); i++)
	{
		for (int j = i; j <= s.length(); j++)
		{
			auto subStr = s.substr(i, j - i);
			if (j == s.length() || subStr.find(s[j]) != string::npos)
			{
				minSize = subStr.length() > minSize ? subStr.length() : minSize;
				break;
			}
		}
	}

	return minSize;
}

int lengthOfLongestSubstring(string s) {
	int minSize = 0;

	return minSize;
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