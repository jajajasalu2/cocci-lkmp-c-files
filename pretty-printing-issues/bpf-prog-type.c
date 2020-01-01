/* kernel/bpf/btf.c 3461 */
enum {
#define BPF_PROG_TYPE(_id, _name, prog_ctx_type, kern_ctx_type) \
	__ctx_convert##_id,
#include <linux/bpf_types.h>
#undef BPF_PROG_TYPE
	__ctx_convert_unused, /* to avoid empty enum in extreme .config */
};
