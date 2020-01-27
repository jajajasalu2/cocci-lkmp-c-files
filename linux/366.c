cocci_test_suite() {
	struct resolve_vertex *cocci_id/* kernel/bpf/btf.c 996 */;
	const struct btf_verifier_env *cocci_id/* kernel/bpf/btf.c 962 */;
	struct btf cocci_id/* kernel/bpf/btf.c 906 */;
	struct rcu_head *cocci_id/* kernel/bpf/btf.c 904 */;
	unsigned long cocci_id/* kernel/bpf/btf.c 879 */;
	struct btf_type **cocci_id/* kernel/bpf/btf.c 826 */;
	struct btf_type *cocci_id/* kernel/bpf/btf.c 815 */;
	u8 cocci_id/* kernel/bpf/btf.c 679 */;
	struct btf_verifier_env *cocci_id/* kernel/bpf/btf.c 673 */;
	va_list cocci_id/* kernel/bpf/btf.c 652 */;
	void cocci_id/* kernel/bpf/btf.c 649 */;
	u32 cocci_id/* kernel/bpf/btf.c 559 */;
	const struct btf *cocci_id/* kernel/bpf/btf.c 559 */;
	const char *cocci_id/* kernel/bpf/btf.c 559 */;
	bool cocci_id/* kernel/bpf/btf.c 514 */;
	char cocci_id/* kernel/bpf/btf.c 514 */;
	const struct btf_var *cocci_id/* kernel/bpf/btf.c 493 */;
	void __user *cocci_id/* kernel/bpf/btf.c 4223 */;
	struct bpf_btf_info cocci_id/* kernel/bpf/btf.c 4221 */;
	struct bpf_btf_info __user *cocci_id/* kernel/bpf/btf.c 4220 */;
	union bpf_attr __user *cocci_id/* kernel/bpf/btf.c 4218 */;
	const union bpf_attr *cocci_id/* kernel/bpf/btf.c 4217 */;
	struct fd cocci_id/* kernel/bpf/btf.c 4197 */;
	struct btf *cocci_id/* kernel/bpf/btf.c 4158 */;
	int cocci_id/* kernel/bpf/btf.c 4158 */;
	const struct file_operations cocci_id/* kernel/bpf/btf.c 4151 */;
	struct inode *cocci_id/* kernel/bpf/btf.c 4145 */;
	struct seq_file *cocci_id/* kernel/bpf/btf.c 4137 */;
	struct file *cocci_id/* kernel/bpf/btf.c 4137 */;
	struct bpf_reg_state *cocci_id/* kernel/bpf/btf.c 4050 */;
	struct bpf_func_state *cocci_id/* kernel/bpf/btf.c 4049 */;
	struct bpf_verifier_state *cocci_id/* kernel/bpf/btf.c 4048 */;
	struct bpf_verifier_env *cocci_id/* kernel/bpf/btf.c 4046 */;
	struct btf_func_model *cocci_id/* kernel/bpf/btf.c 3998 */;
	const struct btf_type **cocci_id/* kernel/bpf/btf.c 3971 */;
	const struct bpf_func_proto *cocci_id/* kernel/bpf/btf.c 3948 */;
	long cocci_id/* kernel/bpf/btf.c 3892 */;
	const struct btf_type *cocci_id/* kernel/bpf/btf.c 3883 */;
	const struct btf_param *cocci_id/* kernel/bpf/btf.c 3882 */;
	char cocci_id/* kernel/bpf/btf.c 3881 */[KSYM_SYMBOL_LEN + 4];
	struct bpf_verifier_log *cocci_id/* kernel/bpf/btf.c 3878 */;
	void *cocci_id/* kernel/bpf/btf.c 3878 */;
	struct bpf_insn_access_aux *cocci_id/* kernel/bpf/btf.c 3634 */;
	enum bpf_access_type cocci_id/* kernel/bpf/btf.c 3632 */;
	struct bpf_prog *cocci_id/* kernel/bpf/btf.c 3623 */;
	const struct bpf_prog *cocci_id/* kernel/bpf/btf.c 3621 */;
	enum bpf_prog_type cocci_id/* kernel/bpf/btf.c 3479 */;
	u8 cocci_id/* kernel/bpf/btf.c 3468 */[];
	enum{

#define

BPF_PROG_TYPE

(

_id

,

_name

,

prog_ctx_type

,

kern_ctx_type

)

__ctx_convert

##

_id

,




#include <linux/bpf_types.h>


#undef

BPF_PROG_TYPE


__ctx_convert_unused,} cocci_id/* kernel/bpf/btf.c 3461 */;
	union {
		struct bpf_ctx_convert {
#define BPF_PROG_TYPE (_id, _name, prog_ctx_type, kern_ctx_type)prog_ctx_type _id##_prog;kern_ctx_type _id##_kern;
#include  <linux/bpf_types.h>
#undef BPF_PROG_TYPE 
		} *__t;
		const struct btf_type *t;
	} cocci_id/* kernel/bpf/btf.c 3450 */;
	char __weak cocci_id/* kernel/bpf/btf.c 3446 */[];
	char __user *cocci_id/* kernel/bpf/btf.c 3362 */;
	struct btf_header cocci_id/* kernel/bpf/btf.c 3302 */;
	struct btf_sec_info cocci_id/* kernel/bpf/btf.c 3255 */;
	struct btf_sec_info *cocci_id/* kernel/bpf/btf.c 3251 */;
	const struct btf_header *cocci_id/* kernel/bpf/btf.c 3243 */;
	struct btf_sec_info cocci_id/* kernel/bpf/btf.c 3241 */[ARRAY_SIZE(btf_sec_info_offset)];
	const struct btf_sec_info *cocci_id/* kernel/bpf/btf.c 3232 */;
	const void *cocci_id/* kernel/bpf/btf.c 3230 */;
	const size_t cocci_id/* kernel/bpf/btf.c 3225 */[];
	int cocci_id/* kernel/bpf/btf.c 308 */(struct btf_verifier_env *env, const struct btf_type *t, u32 type_id);
	struct btf_type cocci_id/* kernel/bpf/btf.c 306 */;
	const struct btf_kind_operations *const cocci_id/* kernel/bpf/btf.c 305 */[NR_BTF_KINDS];
	struct btf_header *cocci_id/* kernel/bpf/btf.c 3044 */;
	const struct btf_kind_operations cocci_id/* kernel/bpf/btf.c 2855 */;
	struct btf_kind_operations {
		s32 (*check_meta)(struct btf_verifier_env *env, const struct btf_type *t, u32 meta_left);
		int (*resolve)(struct btf_verifier_env *env, const struct resolve_vertex *v);
		int (*check_member)(struct btf_verifier_env *env, const struct btf_type *struct_type, const struct btf_member *member, const struct btf_type *member_type);
		int (*check_kflag_member)(struct btf_verifier_env *env, const struct btf_type *struct_type, const struct btf_member *member, const struct btf_type *member_type);
		void (*log_details)(struct btf_verifier_env *env, const struct btf_type *t);
		void (*seq_show)(const struct btf *btf, const struct btf_type *t, u32 type_id, void *data, u8 bits_offsets, struct seq_file *m);
	} cocci_id/* kernel/bpf/btf.c 284 */;
	u64 cocci_id/* kernel/bpf/btf.c 2717 */;
	const struct btf_var_secinfo *cocci_id/* kernel/bpf/btf.c 2716 */;
	const char *const cocci_id/* kernel/bpf/btf.c 265 */[NR_BTF_KINDS];
	struct btf_verifier_env {
		struct btf *btf;
		u8 *visit_states;
		struct resolve_vertex stack[MAX_RESOLVE_DEPTH];
		struct bpf_verifier_log log;
		u32 log_type_id;
		u32 top_stack;
		enum verifier_phase phase;
		enum resolve_mode resolve_mode;
	} cocci_id/* kernel/bpf/btf.c 254 */;
	struct btf_param cocci_id/* kernel/bpf/btf.c 2531 */;
	int *cocci_id/* kernel/bpf/btf.c 2504 */;
	struct btf_sec_info {
		u32 off;
		u32 len;
	} cocci_id/* kernel/bpf/btf.c 249 */;
	const struct btf_enum *cocci_id/* kernel/bpf/btf.c 2434 */;
	enum resolve_mode{RESOLVE_TBD, RESOLVE_PTR, RESOLVE_STRUCT_OR_ARRAY,} cocci_id/* kernel/bpf/btf.c 239 */;
	enum visit_state{NOT_VISITED, VISITED, RESOLVED,} cocci_id/* kernel/bpf/btf.c 233 */;
	struct bpf_spin_lock cocci_id/* kernel/bpf/btf.c 2305 */;
	struct resolve_vertex {
		const struct btf_type *t;
		u32 type_id;
		u16 next_member;
	} cocci_id/* kernel/bpf/btf.c 227 */;
	enum verifier_phase{CHECK_META, CHECK_TYPE,} cocci_id/* kernel/bpf/btf.c 222 */;
	struct btf_kind_operations cocci_id/* kernel/bpf/btf.c 2096 */;
	const struct btf_kind_operations *cocci_id/* kernel/bpf/btf.c 2077 */;
	struct btf {
		void *data;
		struct btf_type **types;
		u32 *resolved_ids;
		u32 *resolved_sizes;
		const char *strings;
		void *nohdr_data;
		struct btf_header hdr;
		u32 nr_types;
		u32 types_size;
		u32 data_size;
		refcount_t refcnt;
		u32 id;
		struct rcu_head rcu;
	} cocci_id/* kernel/bpf/btf.c 206 */;
	const struct resolve_vertex *cocci_id/* kernel/bpf/btf.c 1999 */;
	const struct btf_array *cocci_id/* kernel/bpf/btf.c 1949 */;
	s32 cocci_id/* kernel/bpf/btf.c 1945 */;
	const struct btf_member *cocci_id/* kernel/bpf/btf.c 1918 */;
	void **cocci_id/* kernel/bpf/btf.c 1848 */;
	struct btf_member cocci_id/* kernel/bpf/btf.c 1595 */;
	u8 *cocci_id/* kernel/bpf/btf.c 1547 */;
	s8 *cocci_id/* kernel/bpf/btf.c 1545 */;
	u16 *cocci_id/* kernel/bpf/btf.c 1541 */;
	s16 *cocci_id/* kernel/bpf/btf.c 1539 */;
	u32 *cocci_id/* kernel/bpf/btf.c 1535 */;
	s32 *cocci_id/* kernel/bpf/btf.c 1533 */;
	s64 *cocci_id/* kernel/bpf/btf.c 1527 */;
	u64 cocci_id/* kernel/bpf/btf.c 1468 */[2];
	u16 cocci_id/* kernel/bpf/btf.c 1465 */;
	u64 *cocci_id/* kernel/bpf/btf.c 1409 */;
}
