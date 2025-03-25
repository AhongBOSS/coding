#include <iostream>
using namespace std;

class Node {
public:
    bool val;
    bool isLeaf;
    Node* topLeft;
    Node* topRight;
    Node* bottomLeft;
    Node* bottomRight;
    
    Node() {
        val = false;
        isLeaf = false;
        topLeft = NULL;
        topRight = NULL;
        bottomLeft = NULL;
        bottomRight = NULL;
    }
    
    Node(bool _val, bool _isLeaf) {
        val = _val;
        isLeaf = _isLeaf;
        topLeft = NULL;
        topRight = NULL;
        bottomLeft = NULL;
        bottomRight = NULL;
    }
    
    Node(bool _val, bool _isLeaf, Node* _topLeft, Node* _topRight, Node* _bottomLeft, Node* _bottomRight) {
        val = _val;
        isLeaf = _isLeaf;
        topLeft = _topLeft;
        topRight = _topRight;
        bottomLeft = _bottomLeft;
        bottomRight = _bottomRight;
    }
};


class Solution 
{
    public:
        Node* construct(vector<vector<int>>& grid) 
        {
            function<Node*(int, int, int, int)> dfs = [&](int a0, int b0, int a1, int b1)
            {
                for (int i = a0; i < a1; i++)
                {
                    for (int j = b0; j < b1; j++)
                    {
                        if(grid[i][j] != grid[a0][b0])
                        {
                            return new Node
                            (
                                true,
                                false,
                                dfs(a0, b0, (a0 + a1) / 2, (b0 + b1) / 2),
                                dfs(a0, (b0 + b1) / 2, (a0 + a1) / 2, b1),
                                dfs((a0 + a1) / 2, b0, a1, (b0 + b1) / 2),
                                dfs((a0 + a1) / 2, (b0 + b1) / 2, a1, b1)
                            );
                        }
                    }
                }
                return new Node(grid[a0][b0],true);
            };
            return dfs(0, 0, grid.size(), grid.size());
        }
    };
    

