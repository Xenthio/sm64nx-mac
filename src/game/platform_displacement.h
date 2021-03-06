#ifndef _PLATFORM_DISPLACEMENT_H
#define _PLATFORM_DISPLACEMENT_H

#include "types.h"

extern void update_mario_platform(void);
extern void get_mario_pos(f32*, f32*, f32*);
extern void set_mario_pos(f32, f32, f32);
extern void matrix_offset(u32, struct Object*);
extern void apply_mario_platform_displacement(void);
extern void clear_mario_platform(void);

#endif /* _PLATFORM_DISPLACEMENT_H */
