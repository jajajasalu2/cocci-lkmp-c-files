cocci_test_suite() {
	char **cocci_id/* tools/bpf/bpftool/btf.c 946 */;
	const struct cmd cocci_id/* tools/bpf/bpftool/btf.c 938 */[];
	json_writer_t *cocci_id/* tools/bpf/bpftool/btf.c 90 */;
	struct btf_attach_table cocci_id/* tools/bpf/bpftool/btf.c 840 */;
	struct bpf_btf_info cocci_id/* tools/bpf/bpftool/btf.c 820 */;
	__u32 cocci_id/* tools/bpf/bpftool/btf.c 80 */;
	const struct btf *cocci_id/* tools/bpf/bpftool/btf.c 80 */;
	struct bpf_btf_info *cocci_id/* tools/bpf/bpftool/btf.c 786 */;
	struct bpf_map_info cocci_id/* tools/bpf/bpftool/btf.c 738 */;
	struct bpf_prog_info cocci_id/* tools/bpf/bpftool/btf.c 736 */;
	struct btf_attach_table *cocci_id/* tools/bpf/bpftool/btf.c 733 */;
	struct bpf_map_info *cocci_id/* tools/bpf/bpftool/btf.c 704 */;
	struct bpf_prog_info *cocci_id/* tools/bpf/bpftool/btf.c 701 */;
	struct btf_attach_point *cocci_id/* tools/bpf/bpftool/btf.c 640 */;
	const char *const cocci_id/* tools/bpf/bpftool/btf.c 635 */[];
	__u32 *cocci_id/* tools/bpf/bpftool/btf.c 633 */;
	enum bpf_obj_type cocci_id/* tools/bpf/bpftool/btf.c 632 */;
	struct hlist_node *cocci_id/* tools/bpf/bpftool/btf.c 621 */;
	void cocci_id/* tools/bpf/bpftool/btf.c 618 */;
	char *cocci_id/* tools/bpf/bpftool/btf.c 594 */;
	unsigned int cocci_id/* tools/bpf/bpftool/btf.c 593 */;
	char ***cocci_id/* tools/bpf/bpftool/btf.c 591 */;
	int *cocci_id/* tools/bpf/bpftool/btf.c 591 */;
	int cocci_id/* tools/bpf/bpftool/btf.c 591 */;
	__u8 cocci_id/* tools/bpf/bpftool/btf.c 52 */;
	struct btf_attach_point {
		__u32 obj_id;
		__u32 btf_id;
		struct hlist_node hash;
	} cocci_id/* tools/bpf/bpftool/btf.c 46 */;
	bool cocci_id/* tools/bpf/bpftool/btf.c 447 */;
	__u32 cocci_id/* tools/bpf/bpftool/btf.c 445 */[2];
	struct btf_attach_table {
		DECLARE_HASHTABLE(table,16);
	} cocci_id/* tools/bpf/bpftool/btf.c 42 */;
	size_t cocci_id/* tools/bpf/bpftool/btf.c 414 */;
	FILE *cocci_id/* tools/bpf/bpftool/btf.c 399 */;
	__u8 *cocci_id/* tools/bpf/bpftool/btf.c 398 */;
	struct stat cocci_id/* tools/bpf/bpftool/btf.c 397 */;
	const char *cocci_id/* tools/bpf/bpftool/btf.c 394 */;
	struct btf *cocci_id/* tools/bpf/bpftool/btf.c 394 */;
	struct btf_dump *cocci_id/* tools/bpf/bpftool/btf.c 366 */;
	va_list cocci_id/* tools/bpf/bpftool/btf.c 358 */;
	void *cocci_id/* tools/bpf/bpftool/btf.c 357 */;
	void __printf(2,0) cocci_id/* tools/bpf/bpftool/btf.c 357 */;
	const struct btf_type *cocci_id/* tools/bpf/bpftool/btf.c 327 */;
	const struct btf_var_secinfo *cocci_id/* tools/bpf/bpftool/btf.c 284 */;
	const struct btf_var *cocci_id/* tools/bpf/bpftool/btf.c 270 */;
	const struct btf_param *cocci_id/* tools/bpf/bpftool/btf.c 241 */;
	const char *const cocci_id/* tools/bpf/bpftool/btf.c 23 */[NR_BTF_KINDS];
	const struct btf_enum *cocci_id/* tools/bpf/bpftool/btf.c 196 */;
	__u16 cocci_id/* tools/bpf/bpftool/btf.c 151 */;
	const struct btf_member *cocci_id/* tools/bpf/bpftool/btf.c 150 */;
	const struct btf_array *cocci_id/* tools/bpf/bpftool/btf.c 136 */;
	const void *cocci_id/* tools/bpf/bpftool/btf.c 136 */;
}