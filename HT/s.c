#include <stdio.h>

int main(){

    int n1, n2, n3, n4, x, _2ndx, _3rdx, mn;

    printf("Enter 4 numbers: ");
    scanf("%d%d%d%d", &n1, &n2, &n3, &n4);

    if (n1 > n2 && n1 > n3 && n1 > n4){
        x = n1;
        if (n2 > n3 && n2 > n4){
            _2ndx = n2;
            if (n3 > n4) {
                _3rdx = n3;
                mn = n4;
            }
            else if (n4 > n3){
                _3rdx = n4;
                mn = n3;
            }
        }
        else if (n3 > n2 && n3 > n4){
            _2ndx = n3;
            if (n2 > n4) {
                _3rdx = n2;
                mn = n4;
            }
            else if (n4 > n2){
                _3rdx = n4;
                mn = n2;
            }
        }
        else if (n4 > n3 && n4 > n2){
            _2ndx = n4;
            if (n2 > n3) {
                _3rdx = n2;
                mn = n3;
            }
            else if (n3 > n2){
                _3rdx = n3;
                mn = n2;
            }
        }
    }
    else if(n2 > n1 && n2 > n3 && n2 > n4){
        x = n2;
        if (n1 > n3 && n1 > n4){
            _2ndx = n1;
            if (n3 > n4) {
                _3rdx = n3;
                mn = n4;
            }
            else if (n4 > n3){
                _3rdx = n4;
                mn = n3;
            }
        }
        else if (n3 > n1 && n3 > n4){
            _2ndx = n3;
            if (n1 > n4) {
                _3rdx = n1;
                mn = n4;
            }
            else if (n4 > n1){
                _3rdx = n4;
                mn = n1;
            }
        }
        else if (n4 > n3 && n4 > n1){
            _2ndx = n4;
            if (n1 > n3) {
                _3rdx = n1;
                mn = n3;
            }
            else if (n3 > n1){
                _3rdx = n3;
                mn = n1;
            }
        }
    }
    else if (n3 > n1 && n3 > n2 && n3 > n4){
        x = n3;
        if (n2 > n1 && n2 > n4){
            _2ndx = n2;
            if (n1 > n4) {
                _3rdx = n1;
                mn = n4;
            }
            else if (n4 > n1){
                _3rdx = n4;
                mn = n1;
            }
        }
        else if (n1 > n2 && n1 > n4){
            _2ndx = n1;
            if (n2 > n4) {
                _3rdx = n2;
                mn = n4;
            }
            else if (n4 > n2){
                _3rdx = n4;
                mn = n2;
            }
        }
        else if (n4 > n1 && n4 > n2){
            _2ndx = n4;
            if (n2 > n1) {
                _3rdx = n2;
                mn = n1;
            }
            else if (n1 > n2){
                _3rdx = n1;
                mn = n2;
            }
        }
    }
    else {
        x = n4;
        if (n2 > n3 && n2 > n1){
            _2ndx = n2;
            if (n3 > n1) {
                _3rdx = n3;
                mn = n1;
            }
            else if (n1 > n3){
                _3rdx = n1;
                mn = n3;
            }
        }
        else if (n3 > n2 && n3 > n1){
            _2ndx = n3;
            if (n2 > n1) {
                _3rdx = n2;
                mn = n1;
            }
            else if (n1 > n2){
                _3rdx = n1;
                mn = n2;
            }
        }
        else if (n1 > n3 && n1 > n2){
            _2ndx = n1;
            if (n2 > n3) {
                _3rdx = n2;
                mn = n3;
            }
            else if (n3 > n2){
                _3rdx = n3;
                mn = n2;
            }
        }
    }
    
    printf("%d %d %d %d", x, _2ndx, _3rdx, mn);
    return 0;
}
