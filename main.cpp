#include<iostream>
#include<vector>

using namespace std;

int N,M;
vector<int> vec;
int arr[9];
void func(int cnt, int start) {
	if (cnt == M){
		for (int i=0; i<M; i++){
			cout << arr[i] << " ";
		}
		cout << "\n";
		return;
	}
	for (int i = start; i <= N; i++){
		arr[cnt] = i;
		func(cnt+1, i+1);
	}


}

int main() {
   cin >> N >> M;
   func(0, 1);

   return 0;
}
