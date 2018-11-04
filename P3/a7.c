//
//  a7.c
//  P3
//
//  Created by Björn Klemm on 04.11.18.
//  Copyright © 2018 Björn Klemm. All rights reserved.
//

#include <stdio.h>

int *init(){
    int i;
    int v[20];
    for(i=0; i < 20; i++){
        scanf("%d",&v[i]);
    }
    return v;
}

int *sort(int v[],size_t len){
    int i,j,tmp;
    
    for(i=0; i < len; i++){
        for(j=0; j < len; j++){
            if(v[j] < v[i]){
                tmp = v[i];
                v[i] = v[j];
                v[j] = tmp;
            }
        }
    }
    
    return v;
}

void show(int v[],size_t len){
    int i;
    
    for(i=0; i < len; i++){
        printf("%i",v[i]);
    }
}
