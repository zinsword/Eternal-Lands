#ifndef	_ACTOR_INIT_H_
#define	_ACTOR_INIT_H_

#include "platform.h"
#include "load_gl_extensions.h"
#include "actors.h"
#include <SDL.h>

#ifdef __cplusplus
extern "C"
{
#endif

extern Uint32 use_animation_program;

int load_vertex_programs();
void build_buffers(actor_types* a, const Uint32 max_bones_per_mesh);
void build_actor_bounding_box(actor* a);

struct CalModel *model_new(struct CalCoreModel* pCoreModel);
void model_delete(struct CalModel *self);
void model_attach_mesh(actor *act, int mesh_id);
void model_detach_mesh(actor *act, int mesh_id);

void enable_render_actor();
void set_actor_animation_program(Uint32 pass, Uint32 ghost);
void disable_actor_animation_program();
void disable_render_actor();
void cal_render_actor_shader(actor *act);

#ifdef __cplusplus
}
#endif

#endif	//_ACTOR_INIT_H_
