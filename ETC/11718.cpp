#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	char s;
	s = getchar(); // 한글자씩 입력받는다.

	while (s != EOF) {
		putchar(s); //eof가 아니라면 입력받는대로 출력
		s = getchar(); //다시 입력
	}
}