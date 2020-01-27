cocci_test_suite() {
	unsigned int *cocci_id/* arch/s390/hypfs/hypfs_vm.c 87 */;
	struct diag2fc_parm_list cocci_id/* arch/s390/hypfs/hypfs_vm.c 61 */;
	unsigned long cocci_id/* arch/s390/hypfs/hypfs_vm.c 59 */;
	char *cocci_id/* arch/s390/hypfs/hypfs_vm.c 57 */;
	void *cocci_id/* arch/s390/hypfs/hypfs_vm.c 57 */;
	struct diag2fc_parm_list {
		char userid[NAME_LEN];
		char aci_grp[NAME_LEN];
		__u64 addr;
		__u32 size;
		__u32 fmt;
	} cocci_id/* arch/s390/hypfs/hypfs_vm.c 49 */;
	struct hypfs_dbfs_file cocci_id/* arch/s390/hypfs/hypfs_vm.c 266 */;
	struct dbfs_d2fc_hdr cocci_id/* arch/s390/hypfs/hypfs_vm.c 262 */;
	struct diag2fc_data cocci_id/* arch/s390/hypfs/hypfs_vm.c 256 */;
	unsigned int cocci_id/* arch/s390/hypfs/hypfs_vm.c 250 */;
	struct diag2fc_data {
		__u32 version;
		__u32 flags;
		__u64 used_cpu;
		__u64 el_time;
		__u64 mem_min_kb;
		__u64 mem_max_kb;
		__u64 mem_share_kb;
		__u64 mem_used_kb;
		__u32 pcpus;
		__u32 lcpus;
		__u32 vcpus;
		__u32 ocpus;
		__u32 cpu_max;
		__u32 cpu_shares;
		__u32 cpu_use_samp;
		__u32 cpu_delay_samp;
		__u32 page_wait_samp;
		__u32 idle_samp;
		__u32 other_samp;
		__u32 total_samp;
		char guest_name[NAME_LEN];
	} cocci_id/* arch/s390/hypfs/hypfs_vm.c 25 */;
	struct dbfs_d2fc *cocci_id/* arch/s390/hypfs/hypfs_vm.c 249 */;
	void **cocci_id/* arch/s390/hypfs/hypfs_vm.c 247 */;
	size_t *cocci_id/* arch/s390/hypfs/hypfs_vm.c 247 */;
	int cocci_id/* arch/s390/hypfs/hypfs_vm.c 247 */;
	struct dbfs_d2fc {
		struct dbfs_d2fc_hdr hdr;
		char buf[];
	}__attribute__((packed)) cocci_id/* arch/s390/hypfs/hypfs_vm.c 242 */;
	struct dbfs_d2fc_hdr {
		u64 len;
		u16 version;
		char tod_ext[STORE_CLOCK_EXT_SIZE];
		u64 count;
		char reserved[30];
	}__attribute__((packed)) cocci_id/* arch/s390/hypfs/hypfs_vm.c 234 */;
	char cocci_id/* arch/s390/hypfs/hypfs_vm.c 22 */[];
	struct diag2fc_data *cocci_id/* arch/s390/hypfs/hypfs_vm.c 182 */;
	struct dentry *cocci_id/* arch/s390/hypfs/hypfs_vm.c 179 */;
	char cocci_id/* arch/s390/hypfs/hypfs_vm.c 124 */[NAME_LEN + 1];
	const void *cocci_id/* arch/s390/hypfs/hypfs_vm.c 108 */;
	void cocci_id/* arch/s390/hypfs/hypfs_vm.c 108 */;
}
