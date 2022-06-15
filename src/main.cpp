#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	while (true) {
		string s;
		getline(cin, s);

		if ("#" == s) {
			return 0;
		}

		transform(s.begin(), s.end(), s.begin(),
			[](const auto& c) {
				return tolower(c);
			});

		auto ct = int{ 0 };
		for (const auto& c : s) {
			if ('a' == c || 'e' == c || 'i' == c ||
				'o' == c || 'u' == c) {
				++ct;
			}
		}

		cout << ct << '\n';
	}

	return 0;
}