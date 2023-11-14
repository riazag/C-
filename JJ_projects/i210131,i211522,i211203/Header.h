#pragma once
#include <iostream>

#define SAFE 'C'
#define OBSTACLE '#'
#define JEWEL 'J'
#define POTION 'P'
#define WEAPON 'W'
#define DEATH_POINT '%'
#define DRAGON '&'
#define GOBLIN '$'
#define WEREWOLF '@'
#define CRYSTAL '*'

using namespace std;
class Node {
public:
    int id;
    int reward_score;
    int count;
    Node* left;
    Node* right;
    int height;
    char type;
    Node(int reward_score) 
    {
        static int generated_id = 100;
        id = generated_id++;
        this->reward_score = reward_score;
        count = 1;
        left = NULL;
        right = NULL;
        height = 1;
        this->type = type;
    }
};

int getHeight(Node* node) {
    if (node == NULL)
        return 0;
    return node->height;
}

int getBalanceFactor(Node* node) {
    if (node == NULL)
        return 0;
    return getHeight(node->left) - getHeight(node->right);
}

Node* rightRotate(Node* y) {
    Node* x = y->left;
    Node* T2 = x->right;

    x->right = y;
    y->left = T2;

    y->height = std::max(getHeight(y->left), getHeight(y->right)) + 1;
    x->height = std::max(getHeight(x->left), getHeight(x->right)) + 1;

    return x;
}

Node* leftRotate(Node* x) {
    Node* y = x->right;
    Node* T2 = y->left;

    y->left = x;
    x->right = T2;

    x->height = std::max(getHeight(x->left), getHeight(x->right)) + 1;
    y->height = std::max(getHeight(y->left), getHeight(y->right)) + 1;

    return y;
}

Node* insertNode(Node* node, int reward_score) {
    if (node == NULL)
        return new Node(reward_score);

    if (reward_score < node->reward_score)
        node->left = insertNode(node->left, reward_score);
    else if (reward_score > node->reward_score)
        node->right = insertNode(node->right, reward_score);
    else {
        node->count++;
        return node;
    }

    node->height = max(getHeight(node->left), getHeight(node->right)) + 1;

    int balanceFactor = getBalanceFactor(node);

    if (balanceFactor > 1 && reward_score < node->left->reward_score)
        return rightRotate(node);

    if (balanceFactor < -1 && reward_score > node->right->reward_score)
        return leftRotate(node);

    if (balanceFactor > 1 && reward_score > node->left->reward_score) {
        node->left = leftRotate(node->left);
        return rightRotate(node);
    }

    if (balanceFactor < -1 && reward_score < node->right->reward_score) {
        node->right = rightRotate(node->right);
        return leftRotate(node);
    }

    return node;
}

Node* minValueNode(Node* node) {
    Node* current = node;
    while (current->left != NULL)
        current = current->left;
    return current;
}



Node* balance(Node* node) {
    if (node == NULL) {
        return node;
    }

    node->height = max(getHeight(node->left), getHeight(node->right)) + 1;

    int balanceFactor = getBalanceFactor(node);

    if (balanceFactor > 1) {
        if (getBalanceFactor(node->left) < 0) {
            node->left = leftRotate(node->left);
        }
        return rightRotate(node);
    }

    if (balanceFactor < -1) {
        if (getBalanceFactor(node->right) > 0) {
            node->right = rightRotate(node->right);
        }
        return leftRotate(node);
    }

    return node;
}

Node* deleteNode(Node* root, int reward_score, char type) {
    if (root == NULL)
        return root;

    if (reward_score < root->reward_score)
        root->left = deleteNode(root->left, reward_score, type);
    else if (reward_score > root->reward_score)
        root->right = deleteNode(root->right, reward_score, type);
    else {
        if (root->count > 1) {
            root->count--;
            return root;
        }
        if ((root->left == NULL) || (root->right == NULL)) {
            Node* temp = root->left ? root->left : root->right;

            if (temp == NULL) {
                temp = root;
                root = NULL;
            }
            else {
                *root = *temp;
            }

            free(temp);
        }
        else {
            Node* temp = minValueNode(root->right);
            root->reward_score = temp->reward_score;
            root->count = temp->count;
            temp->count = 1;
            root->right = deleteNode(root->right, temp->reward_score, temp->type);
        }
    }

    if (root == NULL)
        return root;

    root = balance(root);

    // Handle enemy nodes
    if (type == WEREWOLF && root->type == WEAPON) {
        root = deleteNode(root, root->reward_score, root->type);
    }
    else if (type == GOBLIN && root->type == POTION) {
        root = deleteNode(root, root->reward_score, root->type);
    }
    else if (type == DRAGON && root->type == JEWEL) {
        root = deleteNode(root, root->reward_score, root->type);
    }

    return root;
}

void printTree(Node* node) {
    if (node == nullptr)
        return;
    printTree(node->left);
    cout << "ID: " << node->id << endl;
    printTree(node->right);
}



const int MAX = 20;
void primMST(int graph[MAX][MAX], int V, int playerlocation, int target) {
    int parent[MAX];
    int key[MAX];
    bool mstSet[MAX];

    for (int i = 0; i < V; i++) {
        key[i] = INT_MAX;
        mstSet[i] = false;
    }

    key[0] = 0;
    parent[0] = -1;

    for (int count = 0; count < V - 1; count++) {
        int u;
        int min_key = INT_MAX;

        for (int v = 0; v < V; v++) {
            if (mstSet[v] == false && key[v] < min_key) {
                u = v;
                min_key = key[v];
            }
        }

        mstSet[u] = true;

        for (int v = 0; v < V; v++) {
            if (graph[u][v] && mstSet[v] == false && graph[u][v] < key[v]) {
                parent[v] = u;
                key[v] = graph[u][v];
            }
        }
    }

    cout << "Minimum Spanning Tree:" << endl;
    for (int i = 1; i < V; i++) {
        cout << parent[i] << " - " << i << " \t" << graph[i][parent[i]] << endl;
    }
}





void FloydAlgorithm(int adjMatrix[20 * 20][20 * 20], int n, int playerLocation, int target) {
    const int MAX = 20;

    int dist[MAX][MAX];
    int i, j, k;

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            dist[i][j] = adjMatrix[i][j];
        }
    }

    for (k = 0; k < n; k++) {
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                if (dist[i][k] != INT_MAX && dist[k][j] != INT_MAX && dist[i][k] + dist[k][j] < dist[i][j]) {
                    dist[i][j] = dist[i][k] + dist[k][j];
                }
            }
        }
    }

    cout << "Shortest path from player's location " << playerLocation << " to target " << target << " is: " << dist[playerLocation][target] << endl;
    cout << "Path: ";
    int cur = playerLocation;
    cout << "(" << cur << ")";
    while (cur != target) {
        for (int k = 0; k < n; k++) {
            if (dist[cur][target] == dist[k][target] + adjMatrix[cur][k]) {
                cur = k;
                cout << "->(" << cur << ")";
                break;
            }
        }
    }
    cout << endl;
}


void FloyedAlgorithm(int adjMatrix[20 * 20][20 * 20], int n) {
    const int MAX = 20;

    int dist[MAX][MAX];
    int i, j, k;

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            dist[i][j] = adjMatrix[i][j];
        }
    }

    for (k = 0; k < n; k++) {
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {


                if (dist[i][k] != INT_MAX && dist[k][j] != INT_MAX && dist[i][k] + dist[k][j] < dist[i][j]) {
                    dist[i][j] = dist[i][k] + dist[k][j];
                }
            }
        }
    }

    cout << "Shortest path between default location and crystal is: " << dist[0][MAX - 1] << endl;
    cout << "Path: ";
    int cur = 0;
    cout << "(" << cur << ",0)";
    while (cur != MAX - 1) {
        for (int k = 0; k < MAX; k++) {
            if (dist[cur][MAX - 1] == dist[k][MAX - 1] + adjMatrix[cur][k]) {
                cur = k;
                cout << "->(" << cur << "," << MAX - 1 << ")";
                break;
            }
        }
    }
    cout << endl;

}
