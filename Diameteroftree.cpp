#include <bits/stdc++.h>
#define MOD 1000000007
#define nline "\n"
#define lli long long int
#define ll long long
#define vi vector<int>
#define all(v) (v).begin(), (v).end()
#define vll vector<long long>
#define pb push_back
#define pii pair<int, int>
#define pll pair<long long, long long>
#define si set<int>
#define mp make_pair
#define sll set<long long>
#define vpll vector<pair<ll, ll>>
#define Bl_dem                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;
int dx[]{1, 0, 0, -1};
int dy[]{0, 1, -1, 0};
template <typename T>
T ceil(T x, T n)
{
    T ans = 0;
    ans = x / n;
    if (x % n)
        ans++;
    return ans;
}
template <typename P>
P Lcm(P a, P b)
{
    return (a * b) / gcd(a, b);
}
template <typename G>
void swap(G *a, G *b)
{
    ll temp = a;
    a = b;
    b = a;
}
template <typename T>
T gcd(T a, T b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
// COMBINOTORICS ---------------------------------------------------------------------------------
ll fact(ll n)
{
    if (n <= 1)
        return 1;
    return n * fact(n - 1);
}
ll ncr(ll n, ll r) { return fact(n) / (fact(r) * fact(n - r)); }
ll npr(ll n, ll r) { return fact(n) / fact(n - r); }
/*---------------------------------------------------------------------------------------------
Problem related to maths -----> think gcd
CODE-------------------------------------------------------------------
---------------------------------------------------------------------------------------- */

struct Node
{
    ll data;
    Node *left;
    Node *right;
    Node(ll x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};
Node *root = NULL;
void treeinsert(ll x)
{
    if (root == NULL)
    {
        root = new Node(x);
        return;
    }
    Node *par = NULL;
    Node *curr = root;
    while (curr != NULL)
    {
        par = curr;
        if (curr->data > x)
            curr = curr->left;
        else
            curr = curr->right;
    }
    Node *temp = new Node(x);
    if (temp->data < par->data)
        par->left = temp;
    else
        par->right = temp;
}

void printtree(Node *curr)
{
    if (curr == NULL)
        return;
    printtree(curr->left);
    cout << curr->data << " ";
    printtree(curr->right);
}
int dia = 0;
int diameter(Node *curr)
{
    if (curr == NULL)
        return 0;
    dia = max(1 + diameter(curr->left) + diameter(curr->right), dia);
    return 1 + max(diameter(curr->left), diameter(curr->right));
}
int main()
{
    Bl_dem int k;
    cin >> k;
    while (k--)
    {
        ll x;
        cin >> x;
        treeinsert(x);
    }
    diameter(root);
    cout << dia;

    return 0;
}