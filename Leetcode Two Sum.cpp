#include <iostream>
#include <vector>
using namespace std;
int main() {
	vector<int>ivec;
	int temp;
	int target; cin >> target;
	while (cin >> temp) {
		ivec.push_back(temp);
	}
	
	unsigned i = 0;
	unsigned j = 0;
	for (; i < ivec.size()-1; ++i) {
		j = i + 1;
		for (; j < ivec.size(); ++j) {
			if (ivec[i] + ivec[j] == target) {
				break;
			}
		}
		if (ivec[i] + ivec[j] == target) {
			break;
		}
	}
	cout << i << " " << j;
}