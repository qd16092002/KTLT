#include <bits/stdc++.h>
using namespace std;

void hoanvi(int px, int py)
{
int pz;
pz=px; px=py; py=pz;
} ;

int main() {
char *s;
s="bang cac ban"; 
strcpy(&s[5],&s[9]);
cout<<s;

return 0;
}
