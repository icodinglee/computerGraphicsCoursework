/* Base graphics library for coursework 
 *
 * Drawing
 */

#ifndef BG_DRAW
#define BG_DRAW

#include "point.h"
#include "point_list.h"

void bg_draw_line_set_pattern(int pattern);
void bg_draw_line(
        struct bg_point * from_p, 
        struct bg_point * to_p);

/* It will draw a additional point at the end of point_list_p, if the pointer
 * last_point_p is not NULL.
 */
void bg_draw_polyline(
        struct bg_point_list * point_list_p,
        struct bg_point * last_point_p);

void bg_draw_curve(
        struct bg_point_list * point_list_p);

void bg_draw_rectangle(
        struct bg_point * LU_p, 
        struct bg_point * RD_p);

void bg_draw_circle(
        struct bg_point * center_p, 
        double radius);

void bg_draw_fill(
        struct bg_point * position_p);

void bg_draw_flush();


#endif  /* BG_DRAW */
