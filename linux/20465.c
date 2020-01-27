cocci_test_suite() {
	struct cpuinfo_x86 *cocci_id/* arch/x86/kernel/cpu/cacheinfo.c 941 */;
	unsigned long cocci_id/* arch/x86/kernel/cpu/cacheinfo.c 939 */;
	void cocci_id/* arch/x86/kernel/cpu/cacheinfo.c 934 */;
	struct cacheinfo *cocci_id/* arch/x86/kernel/cpu/cacheinfo.c 881 */;
	struct cpu_cacheinfo *cocci_id/* arch/x86/kernel/cpu/cacheinfo.c 880 */;
	struct _cpuid4_info_regs *cocci_id/* arch/x86/kernel/cpu/cacheinfo.c 878 */;
	unsigned int cocci_id/* arch/x86/kernel/cpu/cacheinfo.c 877 */;
	int cocci_id/* arch/x86/kernel/cpu/cacheinfo.c 877 */;
	unsigned char cocci_id/* arch/x86/kernel/cpu/cacheinfo.c 804 */;
	unsigned char *cocci_id/* arch/x86/kernel/cpu/cacheinfo.c 785 */;
	unsigned int cocci_id/* arch/x86/kernel/cpu/cacheinfo.c 784 */[4];
	u8 cocci_id/* arch/x86/kernel/cpu/cacheinfo.c 649 */;
	union _cpuid4_leaf_ecx cocci_id/* arch/x86/kernel/cpu/cacheinfo.c 597 */;
	union _cpuid4_leaf_ebx cocci_id/* arch/x86/kernel/cpu/cacheinfo.c 596 */;
	union _cpuid4_leaf_eax cocci_id/* arch/x86/kernel/cpu/cacheinfo.c 595 */;
	const struct attribute_group *cocci_id/* arch/x86/kernel/cpu/cacheinfo.c 561 */;
	struct attribute **cocci_id/* arch/x86/kernel/cpu/cacheinfo.c 536 */;
	struct attribute_group cocci_id/* arch/x86/kernel/cpu/cacheinfo.c 529 */;
	struct device *cocci_id/* arch/x86/kernel/cpu/cacheinfo.c 510 */;
	struct attribute *cocci_id/* arch/x86/kernel/cpu/cacheinfo.c 508 */;
	struct kobject *cocci_id/* arch/x86/kernel/cpu/cacheinfo.c 507 */;
	umode_t cocci_id/* arch/x86/kernel/cpu/cacheinfo.c 506 */;
	const char *cocci_id/* arch/x86/kernel/cpu/cacheinfo.c 465 */;
	size_t cocci_id/* arch/x86/kernel/cpu/cacheinfo.c 465 */;
	const struct _cache_table cocci_id/* arch/x86/kernel/cpu/cacheinfo.c 43 */[];
	struct device_attribute *cocci_id/* arch/x86/kernel/cpu/cacheinfo.c 365 */;
	char *cocci_id/* arch/x86/kernel/cpu/cacheinfo.c 349 */;
	ssize_t cocci_id/* arch/x86/kernel/cpu/cacheinfo.c 349 */;
	struct _cache_table {
		unsigned char descriptor;
		char cache_type;
		short size;
	} cocci_id/* arch/x86/kernel/cpu/cacheinfo.c 32 */;
	u32 cocci_id/* arch/x86/kernel/cpu/cacheinfo.c 310 */;
	struct amd_l3_cache *cocci_id/* arch/x86/kernel/cpu/cacheinfo.c 308 */;
	struct amd_northbridge *cocci_id/* arch/x86/kernel/cpu/cacheinfo.c 306 */;
	union l1_cache *cocci_id/* arch/x86/kernel/cpu/cacheinfo.c 239 */;
	union l3_cache cocci_id/* arch/x86/kernel/cpu/cacheinfo.c 238 */;
	union l2_cache cocci_id/* arch/x86/kernel/cpu/cacheinfo.c 237 */;
	union l1_cache cocci_id/* arch/x86/kernel/cpu/cacheinfo.c 236 */;
	unsigned cocci_id/* arch/x86/kernel/cpu/cacheinfo.c 234 */;
	union _cpuid4_leaf_ecx *cocci_id/* arch/x86/kernel/cpu/cacheinfo.c 232 */;
	union _cpuid4_leaf_ebx *cocci_id/* arch/x86/kernel/cpu/cacheinfo.c 231 */;
	union _cpuid4_leaf_eax *cocci_id/* arch/x86/kernel/cpu/cacheinfo.c 230 */;
	const enum cache_type cocci_id/* arch/x86/kernel/cpu/cacheinfo.c 222 */[];
	const unsigned char cocci_id/* arch/x86/kernel/cpu/cacheinfo.c 219 */[];
	const unsigned short cocci_id/* arch/x86/kernel/cpu/cacheinfo.c 205 */[];
	union l3_cache {
		struct {
			unsigned line_size:8;
			unsigned lines_per_tag:4;
			unsigned assoc:4;
			unsigned res:2;
			unsigned size_encoded:14;
		};
		unsigned val;
	} cocci_id/* arch/x86/kernel/cpu/cacheinfo.c 194 */;
	union l2_cache {
		struct {
			unsigned line_size:8;
			unsigned lines_per_tag:4;
			unsigned assoc:4;
			unsigned size_in_kb:16;
		};
		unsigned val;
	} cocci_id/* arch/x86/kernel/cpu/cacheinfo.c 184 */;
	union l1_cache {
		struct {
			unsigned line_size:8;
			unsigned lines_per_tag:8;
			unsigned assoc:8;
			unsigned size_in_kb:8;
		};
		unsigned val;
	} cocci_id/* arch/x86/kernel/cpu/cacheinfo.c 174 */;
	unsigned short cocci_id/* arch/x86/kernel/cpu/cacheinfo.c 166 */;
	struct _cpuid4_info_regs {
		union _cpuid4_leaf_eax eax;
		union _cpuid4_leaf_ebx ebx;
		union _cpuid4_leaf_ecx ecx;
		unsigned int id;
		unsigned long size;
		struct amd_northbridge *nb;
	} cocci_id/* arch/x86/kernel/cpu/cacheinfo.c 157 */;
	union _cpuid4_leaf_ecx {
		struct {
			unsigned int number_of_sets:32;
		} split;
		u32 full;
	} cocci_id/* arch/x86/kernel/cpu/cacheinfo.c 150 */;
	union _cpuid4_leaf_ebx {
		struct {
			unsigned int coherency_line_size:12;
			unsigned int physical_line_partition:10;
			unsigned int ways_of_associativity:10;
		} split;
		u32 full;
	} cocci_id/* arch/x86/kernel/cpu/cacheinfo.c 141 */;
	union _cpuid4_leaf_eax {
		struct {
			enum _cache_type type:5;
			unsigned int level:3;
			unsigned int is_self_initializing:1;
			unsigned int is_fully_associative:1;
			unsigned int reserved:4;
			unsigned int num_threads_sharing:12;
			unsigned int num_cores_on_die:6;
		} split;
		u32 full;
	} cocci_id/* arch/x86/kernel/cpu/cacheinfo.c 128 */;
	enum _cache_type{CTYPE_NULL=0, CTYPE_DATA=1, CTYPE_INST=2, CTYPE_UNIFIED=3,} cocci_id/* arch/x86/kernel/cpu/cacheinfo.c 121 */;
	struct _cpuid4_info_regs cocci_id/* arch/x86/kernel/cpu/cacheinfo.c 1022 */;
}
