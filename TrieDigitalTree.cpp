#include <bits/stdc++.h>
using namespace std;
const int Asize = 26;
struct digital_tree
{
	struct digital_tree *sides[Asize];
	bool word;
};
struct digital_tree *xnode(void)
{
	struct digital_tree *u = new digital_tree;
    u->word = false;
    for (int p = 0; p < Asize; p++)
		u->sides[p] = NULL;
    return u;
}
void In(struct digital_tree *R, string x)
{
	struct digital_tree *v = R;
    for (int p = 0; p < x.length(); p++)
	{
		int n = x[p] - 'a';
		if (!v->sides[n])
			v->sides[n] = xnode();
			v = v->sides[n];
	}
	v->word = true;
}

bool SearchA(struct digital_tree *R, string x)
{
	struct digital_tree *v = R;
	for (int p = 0; p < x.length(); p++)
	{
		int n = x[p] - 'a';
		if (!v->sides[n])
			return false;
			v = v->sides[n];
	}
	return (v->word);
}
int main()
{
	string y[] = {"hi", "an", "the",
					"age", "many", "bye",
					"good"};
	int z = sizeof(y)/sizeof(y[0]);
	struct digital_tree *R = xnode();
	for (int p = 0; p < z; p++)
	In(R, y[p]);
	SearchA(R, "good")? cout << "found\n" :
						cout << "Not found\n";
    SearchA(R, "bad")? cout << "found\n" :
						cout << "Not found\n";
    SearchA(R, "yes")? cout << "found\n" :
						cout << "Not found\n";
	SearchA(R, "age")? cout << "found\n" :
						cout << "Not found\n";
	SearchA(R, "hi")? cout << "found\n" :
						cout << "Not found\n";												
	
	return 0;
}

