cocci_test_suite() {
	int cocci_id/* arch/sparc/kernel/mdesc.c 98 */(struct mdesc_handle *md,
						       u64 node,
						       union md_node_info *node_info);
	const u64 *cocci_id/* arch/sparc/kernel/mdesc.c 885 */;
	int cocci_id/* arch/sparc/kernel/mdesc.c 883 */;
	u64 cocci_id/* arch/sparc/kernel/mdesc.c 882 */;
	struct mdesc_handle *cocci_id/* arch/sparc/kernel/mdesc.c 882 */;
	void cocci_id/* arch/sparc/kernel/mdesc.c 882 */;
	void (*cocci_id/* arch/sparc/kernel/mdesc.c 862 */)(struct mdesc_handle *,
							    u64, int);
	char *cocci_id/* arch/sparc/kernel/mdesc.c 861 */;
	struct md_node_ops {
		char *name;
		mdesc_node_info_get_f get_info;
		mdesc_node_info_rel_f rel_info;
		mdesc_node_match_f node_match;
	} cocci_id/* arch/sparc/kernel/mdesc.c 85 */;
	bool (*cocci_id/* arch/sparc/kernel/mdesc.c 83 */)(union md_node_info *,
							   union md_node_info *);
	void (*cocci_id/* arch/sparc/kernel/mdesc.c 82 */)(union md_node_info *);
	cpuinfo_sparc *cocci_id/* arch/sparc/kernel/mdesc.c 817 */;
	int (*cocci_id/* arch/sparc/kernel/mdesc.c 80 */)(struct mdesc_handle *,
							  u64,
							  union md_node_info *);
	struct mdesc_elem *cocci_id/* arch/sparc/kernel/mdesc.c 731 */;
	struct mdesc_handle {
		struct list_head list;
		struct mdesc_mem_ops *mops;
		void *self_base;
		refcount_t refcnt;
		unsigned int handle_size;
		struct mdesc_hdr mdesc;
	} cocci_id/* arch/sparc/kernel/mdesc.c 71 */;
	struct mdesc_mem_ops {
		struct mdesc_handle *(*alloc)(unsigned int mdesc_size);
		void (*free)(struct mdesc_handle *handle);
	} cocci_id/* arch/sparc/kernel/mdesc.c 66 */;
	int *cocci_id/* arch/sparc/kernel/mdesc.c 658 */;
	const void *cocci_id/* arch/sparc/kernel/mdesc.c 657 */;
	struct mdesc_hdr *cocci_id/* arch/sparc/kernel/mdesc.c 623 */;
	struct mdesc_elem {
		u8 tag;
#define MD_LIST_END 0x00
#define MD_NODE 0x4e
#define MD_NODE_END 0x45
#define MD_NOOP 0x20
#define MD_PROP_ARC 0x61
#define MD_PROP_VAL 0x76
#define MD_PROP_STR 0x73
#define MD_PROP_DATA 0x64
		u8 name_len;
		u16 resv;
		u32 name_offset;
		union {
			struct {
				u32 data_len;
				u32 data_offset;
			} data;
			u64 val;
		} d;
	} cocci_id/* arch/sparc/kernel/mdesc.c 44 */;
	union md_node_info cocci_id/* arch/sparc/kernel/mdesc.c 429 */;
	mdesc_node_match_f cocci_id/* arch/sparc/kernel/mdesc.c 428 */;
	mdesc_node_info_rel_f cocci_id/* arch/sparc/kernel/mdesc.c 427 */;
	mdesc_node_info_get_f cocci_id/* arch/sparc/kernel/mdesc.c 426 */;
	void (*cocci_id/* arch/sparc/kernel/mdesc.c 423 */)(struct mdesc_handle *, u64, const char *node_name);
	bool cocci_id/* arch/sparc/kernel/mdesc.c 410 */;
	union md_node_info *cocci_id/* arch/sparc/kernel/mdesc.c 410 */;
	struct mdesc_hdr {
		u32 version;
		u32 node_sz;
		u32 name_sz;
		u32 data_sz;
	}__attribute__((aligned(16))) cocci_id/* arch/sparc/kernel/mdesc.c 37 */;
	struct mdesc_notifier_client *cocci_id/* arch/sparc/kernel/mdesc.c 285 */;
	struct mdesc_mem_ops *cocci_id/* arch/sparc/kernel/mdesc.c 237 */;
	unsigned int cocci_id/* arch/sparc/kernel/mdesc.c 236 */;
	struct mdesc_mem_ops cocci_id/* arch/sparc/kernel/mdesc.c 231 */;
	struct mdesc_hdr cocci_id/* arch/sparc/kernel/mdesc.c 208 */;
	struct mdesc_handle cocci_id/* arch/sparc/kernel/mdesc.c 207 */;
	struct mdesc_handle *__init cocci_id/* arch/sparc/kernel/mdesc.c 161 */;
	int __init cocci_id/* arch/sparc/kernel/mdesc.c 1317 */;
	struct miscdevice cocci_id/* arch/sparc/kernel/mdesc.c 1311 */;
	const struct file_operations cocci_id/* arch/sparc/kernel/mdesc.c 1303 */;
	struct inode *cocci_id/* arch/sparc/kernel/mdesc.c 1297 */;
	struct file *cocci_id/* arch/sparc/kernel/mdesc.c 1297 */;
	loff_t cocci_id/* arch/sparc/kernel/mdesc.c 1287 */;
	unsigned char *cocci_id/* arch/sparc/kernel/mdesc.c 1267 */;
	loff_t *cocci_id/* arch/sparc/kernel/mdesc.c 1264 */;
	size_t cocci_id/* arch/sparc/kernel/mdesc.c 1264 */;
	char __user *cocci_id/* arch/sparc/kernel/mdesc.c 1263 */;
	ssize_t cocci_id/* arch/sparc/kernel/mdesc.c 1263 */;
	cpumask_t *cocci_id/* arch/sparc/kernel/mdesc.c 1229 */;
	struct trap_per_cpu *cocci_id/* arch/sparc/kernel/mdesc.c 1183 */;
	void __init cocci_id/* arch/sparc/kernel/mdesc.c 1173 */;
	mdesc_node_match_f *cocci_id/* arch/sparc/kernel/mdesc.c 116 */;
	unsigned long *cocci_id/* arch/sparc/kernel/mdesc.c 1158 */;
	void *__init cocci_id/* arch/sparc/kernel/mdesc.c 1155 */;
	void *cocci_id/* arch/sparc/kernel/mdesc.c 1155 */;
	mdesc_node_info_rel_f *cocci_id/* arch/sparc/kernel/mdesc.c 115 */;
	mdesc_node_info_get_f *cocci_id/* arch/sparc/kernel/mdesc.c 114 */;
	void *(*cocci_id/* arch/sparc/kernel/mdesc.c 1106 */)(struct mdesc_handle *, u64, int, void *);
	unsigned long cocci_id/* arch/sparc/kernel/mdesc.c 1058 */;
	unsigned int *cocci_id/* arch/sparc/kernel/mdesc.c 1057 */;
	struct md_node_ops cocci_id/* arch/sparc/kernel/mdesc.c 105 */[];
	const char *cocci_id/* arch/sparc/kernel/mdesc.c 1031 */;
	bool cocci_id/* arch/sparc/kernel/mdesc.c 101 */(union md_node_info *a_node_info, union md_node_info *b_node_info);
	void cocci_id/* arch/sparc/kernel/mdesc.c 100 */(union md_node_info *node_info);
}
