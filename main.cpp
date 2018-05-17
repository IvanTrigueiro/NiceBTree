#include <iostream>

using namespace std;

void maxdepth(string& arvore,int& filho,int& maxAlt, int raiz)
{
    if (arvore[raiz] == 'l')
    {
        filho++;
        maxAlt++;
        return ;
    }
    else
    {
        int filho1 =0;
        int alt1 =0;
        maxdepth(arvore,filho1,alt1,raiz+1);
        int filho2 =0;
        int alt2 =0;
        maxdepth(arvore,filho2,alt2,raiz+filho1+1);
        filho += filho1+filho2+1;
        maxAlt += max(alt1,alt2)+1;
    }
}
int main(int argc, const char *argv[])
{
    int t;
    cin >> t;
    string tmp;
    getline(cin, tmp);
    while (t--)
    {
        string arvore;
        getline (cin, arvore);
        int maxAlt=0;
        int filho=0;
        maxdepth(arvore,filho,maxAlt,0);
        cout << maxAlt-1 <<endl;
    }
    return 0;
}
