#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    char inp;
    Node *curr;

    Node(char inp)
    {
        this->inp = inp;
        curr = NULL;
    }
};

bool isThere(Node * front,char ch)
{
    while(front!=NULL)
    {
        if(front->inp==ch)
        {
            return true;
        }

        front = front->curr;
    }

    return false;
}
pair<Node*,Node*> removeNode(Node * front,Node * back,char ch)
{
    Node * temp = front;
    Node * prev = NULL;

    while(temp->inp!=ch)
    {
        prev = temp;
        temp = temp->curr;
    }

    if(prev==NULL)
    {
        front = front->curr;
        if(front==NULL)
        {
            back = NULL;
        }
    }
    else
    {
        prev->curr = temp->curr;
        if(back==temp)
        {
            back = prev;
        }
        delete temp;
    }

    return make_pair(front,back);
}

Node * lookMiddle(Node * front)
{
    Node * fast = front;
    Node * slow = front;

    while(fast->curr!=NULL && fast->curr->curr!=NULL)
    {
        fast = fast->curr->curr;
        slow = slow->curr;
    }

    return slow;
}

pair<Node*,Node*> insertMiddle(Node * front,Node * back,Node * node)
{
    if(front==NULL && back==NULL)
    {
        front = node;
        back = node;
        return make_pair(front,back);
    }

    int len = 0;

    Node * temp = front;

    while(temp!=NULL)
    {
        len++;
        temp = temp->curr;
    }

    if(len%2==0)
    {
        Node * mid = lookMiddle(front);
        node->curr = mid->curr;
        mid->curr = node;
    }
    else
    {

        Node * mid = lookMiddle(front);

        if(front->curr==NULL)
        {
            if(mid->inp<node->inp)
            {
                mid->curr = node;
                back = node;
            }
            else
            {
                node->curr = mid;
                front = node;
                back = mid;
            }
        }
        else{

        
        if(mid->inp<node->inp)
        {
            node->curr = mid->curr;
            mid->curr = node;
        
        }  
        else
        {
            Node * prev = front;
            while(prev->curr!=mid)
            {
                prev = prev->curr;
            }

            prev->curr = node;
            node->curr = mid;

        } 

    }

    }

    return make_pair(front,back);

}

void solve(string s)
{
    Node *front = NULL;
    Node *back = NULL;
    int n = 0;

    while (n != s.size())
    {
        Node *newNode = new Node(s[n]);
        
        if(front==NULL && back==NULL)
        {
            front = newNode;
            back = newNode;
        }
            else
            {
               if(!isThere(front,s[n]))
               {
                 back->curr = newNode;
                 back = back->curr;
                }
        else
        {
            pair<Node*,Node*> prev;
            prev = removeNode(front,back,s[n]);
            front = prev.first;
            back = prev.second;

            prev = insertMiddle(front,back,newNode);
            front = prev.first;
            back = prev.second;
       }

    }

    n++;

    }

    Node * minChar = front;
    Node * temp = front->curr;

    while(temp!=NULL)
    {
        if(minChar->inp>temp->inp)
        {
            minChar = temp;
        }

        temp = temp->curr;
    }

    Node * maxChar = front;
    temp = front->curr;

    while(temp!=NULL)
    {
        if(maxChar->inp<temp->inp)
        {
            maxChar = temp;
        }

        temp = temp->curr;
    }

    Node * prev = minChar->curr;

    minChar->curr = maxChar;

    unordered_map<Node*,bool> map;


    while(front!=NULL)
    {
        if(map.find(front)!=map.end())
        {
            break;
        }
        else
        {
            cout << front->inp << " ";
            map[front] = true;
            front = front->curr;
        }
    }

    cout << endl;

   while(prev!=NULL && prev!=maxChar)
   {
        cout << prev->inp << " ";
        prev = prev->curr;
   }

}


int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("output.txt", "w", stdout);

    freopen("Error.txt","w",stderr);

freopen("input.txt", "r", stdin);

    #endif  

   string s;
   cin >> s;

   solve(s);

}