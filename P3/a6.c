//
//  a6.c
//  P3
//
//  Created by Björn Klemm on 04.11.18.
//  Copyright © 2018 Björn Klemm. All rights reserved.
//

#include <stdio.h>

#define E 0.0000001

double heron(){
    double x,w,new_w,diff;
    scanf("%lf",&x);
    
    w = (1 + x) / 2;
    
    do {
        new_w = (w + (x/w)) / 2;
        diff = w - new_w;
        w = new_w;
    } while (diff > E);
    
    return w;
}
