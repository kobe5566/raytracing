#ifndef __RAYTRACING_H
#define __RAYTRACING_H

#include "objects.h"
#include <stdint.h>

void raytracing(uint8_t *pixels, color background_color,
                rectangular_node rectangulars, sphere_node spheres,
                light_node lights, const viewpoint *view,
                int width, int height);

typedef struct arg_pack {

    uint8_t *pixels;
    double *background_color;
    rectangular_node rectangulars;
    sphere_node spheres;
    light_node lights;
    const viewpoint *view;
    double *u;
    double *v;
    double *w;
    int *factor;
    int width;
    int height;

} ARG_PACK;

typedef struct args {

    ARG_PACK *pack;

    int block_start;
    int block_end;

} ARGS;


#endif
