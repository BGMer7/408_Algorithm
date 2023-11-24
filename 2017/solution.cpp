//
// Created by Gatsby on 2023/11/24.
//

#include "solution.h"

int main() {
    BTree *a = new BTree();
    BTree *b = new BTree();
    BTree *c = new BTree();
    BTree *d = new BTree();
    BTree *e = new BTree();
    BTree *f = new BTree();
    BTree *g = new BTree();

    a->data = "*";
    b->data = "+";
    c->data = "*";
    d->data = "a";
    e->data = "b";
    f->data = "c";
    g->data = "d";

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;

    solution::print_express(a);
}