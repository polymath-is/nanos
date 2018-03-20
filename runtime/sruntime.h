#include <runtime.h>
#include <x86_64.h>
#include <elf64.h>
#include <closure.h>
#include <closure_templates.h>

typedef closure_type(buffer_handler, void, buffer);
void register_interrupt(int vector, thunk t);
void msi_map_vector(int slot, int vector);
u8 allocate_msi(thunk h);

// metadata stuff
static boolean node_contents(node n, buffer b)
{
}


static node resolve(node n, symbol s)
{
}

static vector node_vector(heap h, node n)
{
    vector r = allocate_vector(h, table_elements(n));
    little_stack_buffer (ind, 30);
    void *x;
    
    for (int i = 0; format_number(ind, i, 10, 1), x = resolve(n, intern(ind)); buffer_clear(ind), i++) 
        vector_push(r, x);
    
    return x;
}

static node resolve_path(node n, vector v)
{
    buffer i;
    vector_foreach(i, v) {
    }
}

void bprintf(buffer b, char *fmt, ...);




