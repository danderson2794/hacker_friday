#include <bits/stdc++.h>

using namespace std;

struct Node {
    int age;
    string name;
    Node* next;
    Node(){age = 0; name = "null"; next = nullptr;}
    Node(int i, string n){age = i; name = n; next = nullptr;}
};

int main()
{
    Node * head;
    head->next = new Node(26, "Damion");
    std::unordered_map<int, string> a;
    std::unordered_map<string, std::unordered_map<int, string> > my_map;

    
    
    return 0;
}