cocci_test_suite() {
	__s32 cocci_id/* tools/lib/bpf/btf_dump.c 951 */;
	const struct btf_enum *cocci_id/* tools/lib/bpf/btf_dump.c 932 */;
	const char *cocci_id/* tools/lib/bpf/btf_dump.c 839 */;
	const struct btf_dump *cocci_id/* tools/lib/bpf/btf_dump.c 824 */;
	const struct btf_member *cocci_id/* tools/lib/bpf/btf_dump.c 775 */;
	void *cocci_id/* tools/lib/bpf/btf_dump.c 763 */;
	__u16 cocci_id/* tools/lib/bpf/btf_dump.c 758 */;
	const struct btf_type *cocci_id/* tools/lib/bpf/btf_dump.c 757 */;
	__u32 cocci_id/* tools/lib/bpf/btf_dump.c 755 */;
	const struct btf *cocci_id/* tools/lib/bpf/btf_dump.c 755 */;
	int cocci_id/* tools/lib/bpf/btf_dump.c 755 */;
	const struct btf_param *cocci_id/* tools/lib/bpf/btf_dump.c 740 */;
	struct btf_dump_type_aux_state *cocci_id/* tools/lib/bpf/btf_dump.c 614 */;
	size_t cocci_id/* tools/lib/bpf/btf_dump.c 576 */(struct btf_dump *d,
							  struct hashmap *name_map,
							  const char *orig_name);
	const char *cocci_id/* tools/lib/bpf/btf_dump.c 575 */(struct btf_dump *d,
							       __u32 id);
	void cocci_id/* tools/lib/bpf/btf_dump.c 570 */(struct btf_dump *d,
							struct id_stack *decl_stack,
							const char *fname,
							int lvl);
	void cocci_id/* tools/lib/bpf/btf_dump.c 568 */(struct btf_dump *d,
							__u32 id,
							const char *fname,
							int lvl);
	struct id_stack {
		const __u32 *ids;
		int cnt;
	} cocci_id/* tools/lib/bpf/btf_dump.c 563 */;
	void cocci_id/* tools/lib/bpf/btf_dump.c 553 */(struct btf_dump *d,
							__u32 id,
							const struct btf_type *t,
							int lvl);
	void cocci_id/* tools/lib/bpf/btf_dump.c 551 */(struct btf_dump *d,
							__u32 id,
							const struct btf_type *t);
	struct btf_dump {
		const struct btf *btf;
		const struct btf_ext *btf_ext;
		btf_dump_printf_fn_t printf_fn;
		struct btf_dump_opts opts;
		struct btf_dump_type_aux_state *type_states;
		const char **cached_names;
		__u32 *emit_queue;
		int emit_queue_cap;
		int emit_queue_cnt;
		__u32 *decl_stack;
		int decl_stack_cap;
		int decl_stack_cnt;
		struct hashmap *type_names;
		struct hashmap *ident_names;
	} cocci_id/* tools/lib/bpf/btf_dump.c 55 */;
	struct btf_dump_type_aux_state {
		enum btf_dump_type_order_state order_state:2;
		enum btf_dump_type_emit_state emit_state:2;
		__u8 fwd_emitted:1;
		__u8 name_resolved:1;
		__u8 referenced:1;
	} cocci_id/* tools/lib/bpf/btf_dump.c 42 */;
	enum btf_dump_type_emit_state{NOT_EMITTED, EMITTING, EMITTED,} cocci_id/* tools/lib/bpf/btf_dump.c 35 */;
	size_t cocci_id/* tools/lib/bpf/btf_dump.c 313 */;
	__u32 *cocci_id/* tools/lib/bpf/btf_dump.c 312 */;
	const struct btf_var_secinfo *cocci_id/* tools/lib/bpf/btf_dump.c 298 */;
	enum btf_dump_type_order_state{NOT_ORDERED, ORDERING, ORDERED,} cocci_id/* tools/lib/bpf/btf_dump.c 29 */;
	const size_t cocci_id/* tools/lib/bpf/btf_dump.c 22 */;
	const char cocci_id/* tools/lib/bpf/btf_dump.c 21 */[];
	struct btf_dump *cocci_id/* tools/lib/bpf/btf_dump.c 198 */;
	void cocci_id/* tools/lib/bpf/btf_dump.c 180 */(struct btf_dump *d,
							__u32 id,
							__u32 cont_id);
	int cocci_id/* tools/lib/bpf/btf_dump.c 179 */(struct btf_dump *d,
						       __u32 id,
						       bool through_ptr);
	int cocci_id/* tools/lib/bpf/btf_dump.c 178 */(struct btf_dump *d);
	void cocci_id/* tools/lib/bpf/btf_dump.c 154 */;
	char cocci_id/* tools/lib/bpf/btf_dump.c 1368 */[max_len];
	const char **cocci_id/* tools/lib/bpf/btf_dump.c 1356 */;
	void **cocci_id/* tools/lib/bpf/btf_dump.c 1343 */;
	struct hashmap *cocci_id/* tools/lib/bpf/btf_dump.c 1338 */;
	struct btf_dump cocci_id/* tools/lib/bpf/btf_dump.c 127 */;
	const struct btf_array *cocci_id/* tools/lib/bpf/btf_dump.c 1239 */;
	btf_dump_printf_fn_t cocci_id/* tools/lib/bpf/btf_dump.c 122 */;
	const struct btf_dump_opts *cocci_id/* tools/lib/bpf/btf_dump.c 121 */;
	const struct btf_ext *cocci_id/* tools/lib/bpf/btf_dump.c 120 */;
	bool cocci_id/* tools/lib/bpf/btf_dump.c 1156 */;
	struct id_stack *cocci_id/* tools/lib/bpf/btf_dump.c 1129 */;
	va_list cocci_id/* tools/lib/bpf/btf_dump.c 112 */;
	struct id_stack cocci_id/* tools/lib/bpf/btf_dump.c 1057 */;
	const void *cocci_id/* tools/lib/bpf/btf_dump.c 100 */;
}
