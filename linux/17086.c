cocci_test_suite() {
	const struct ibm_arch_vec cocci_id/* arch/powerpc/kernel/prom_init.c 946 */;
	struct ibm_arch_vec {
		struct {
			u32 mask,val;
		} pvrs[12];
		u8 num_vectors;
		u8 vec1_len;
		struct option_vector1 vec1;
		u8 vec2_len;
		struct option_vector2 vec2;
		u8 vec3_len;
		struct option_vector3 vec3;
		u8 vec4_len;
		struct option_vector4 vec4;
		u8 vec5_len;
		struct option_vector5 vec5;
		u8 vec6_len;
		struct option_vector6 vec6;
	}__packed cocci_id/* arch/powerpc/kernel/prom_init.c 922 */;
	struct option_vector6 {
		u8 reserved;
		u8 secondary_pteg;
		u8 os_name;
	}__packed cocci_id/* arch/powerpc/kernel/prom_init.c 916 */;
	struct option_vector5 {
		u8 byte1;
		u8 byte2;
		u8 byte3;
		u8 cmo;
		u8 associativity;
		u8 bin_opts;
		u8 micro_checkpoint;
		u8 reserved0;
		__be32 max_cpus;
		__be16 papr_level;
		__be16 reserved1;
		u8 platform_facilities;
		u8 reserved2;
		__be16 reserved3;
		u8 subprocessors;
		u8 byte22;
		u8 intarch;
		u8 mmu;
		u8 hash_ext;
		u8 radix_ext;
	}__packed cocci_id/* arch/powerpc/kernel/prom_init.c 893 */;
	struct option_vector4 {
		u8 byte1;
		u8 min_vp_cap;
	}__packed cocci_id/* arch/powerpc/kernel/prom_init.c 888 */;
	struct option_vector3 {
		u8 byte1;
		u8 byte2;
	}__packed cocci_id/* arch/powerpc/kernel/prom_init.c 883 */;
	struct option_vector2 {
		u8 byte1;
		__be16 reserved;
		__be32 real_base;
		__be32 real_size;
		__be32 virt_base;
		__be32 virt_size;
		__be32 load_base;
		__be32 min_rma;
		__be32 min_load;
		u8 min_rma_percent;
		u8 max_pft_size;
	}__packed cocci_id/* arch/powerpc/kernel/prom_init.c 869 */;
	struct option_vector1 {
		u8 byte1;
		u8 arch_versions;
		u8 arch_versions3;
	}__packed cocci_id/* arch/powerpc/kernel/prom_init.c 863 */;
	bool cocci_id/* arch/powerpc/kernel/prom_init.c 814 */;
	const char **cocci_id/* arch/powerpc/kernel/prom_init.c 801 */;
	long cocci_id/* arch/powerpc/kernel/prom_init.c 776 */;
	void __init cocci_id/* arch/powerpc/kernel/prom_init.c 766 */;
	char *cocci_id/* arch/powerpc/kernel/prom_init.c 655 */;
	const char *cocci_id/* arch/powerpc/kernel/prom_init.c 653 */;
	char **cocci_id/* arch/powerpc/kernel/prom_init.c 653 */;
	size_t cocci_id/* arch/powerpc/kernel/prom_init.c 642 */;
	phandle *cocci_id/* arch/powerpc/kernel/prom_init.c 624 */;
	void __init __attribute__((noreturn)) cocci_id/* arch/powerpc/kernel/prom_init.c 608 */;
	unsigned int __init cocci_id/* arch/powerpc/kernel/prom_init.c 574 */;
	long long cocci_id/* arch/powerpc/kernel/prom_init.c 559 */;
	unsigned long long cocci_id/* arch/powerpc/kernel/prom_init.c 527 */;
	char cocci_id/* arch/powerpc/kernel/prom_init.c 467 */[UL_DIGITS + 1];
	char cocci_id/* arch/powerpc/kernel/prom_init.c 450 */[sizeof(val) * 2 + 1];
	prom_arg_t *cocci_id/* arch/powerpc/kernel/prom_init.c 394 */;
	prom_arg_t cocci_id/* arch/powerpc/kernel/prom_init.c 381 */;
	va_list cocci_id/* arch/powerpc/kernel/prom_init.c 373 */;
	struct prom_args cocci_id/* arch/powerpc/kernel/prom_init.c 372 */;
	int __init cocci_id/* arch/powerpc/kernel/prom_init.c 369 */;
	bool *cocci_id/* arch/powerpc/kernel/prom_init.c 327 */;
	unsigned long *cocci_id/* arch/powerpc/kernel/prom_init.c 3201 */;
	unsigned long cocci_id/* arch/powerpc/kernel/prom_init.c 3198 */;
	void cocci_id/* arch/powerpc/kernel/prom_init.c 3198 */;
	__be64 cocci_id/* arch/powerpc/kernel/prom_init.c 3167 */;
	u32 cocci_id/* arch/powerpc/kernel/prom_init.c 3060 */[2];
	size_t __init cocci_id/* arch/powerpc/kernel/prom_init.c 306 */;
	char cocci_id/* arch/powerpc/kernel/prom_init.c 2992 */[64];
	int cocci_id/* arch/powerpc/kernel/prom_init.c 2987 */[3 * 16];
	int cocci_id/* arch/powerpc/kernel/prom_init.c 2986 */[3];
	u32 cocci_id/* arch/powerpc/kernel/prom_init.c 2826 */;
	u32 cocci_id/* arch/powerpc/kernel/prom_init.c 2825 */[6];
	phandle cocci_id/* arch/powerpc/kernel/prom_init.c 2824 */;
	u32 cocci_id/* arch/powerpc/kernel/prom_init.c 2781 */[4];
	const void *cocci_id/* arch/powerpc/kernel/prom_init.c 278 */;
	struct boot_param_header cocci_id/* arch/powerpc/kernel/prom_init.c 2669 */;
	u64 *cocci_id/* arch/powerpc/kernel/prom_init.c 2644 */;
	struct boot_param_header *cocci_id/* arch/powerpc/kernel/prom_init.c 2642 */;
	__be32 *cocci_id/* arch/powerpc/kernel/prom_init.c 2453 */;
	void *cocci_id/* arch/powerpc/kernel/prom_init.c 2452 */;
	char __init *cocci_id/* arch/powerpc/kernel/prom_init.c 244 */;
	void __init *cocci_id/* arch/powerpc/kernel/prom_init.c 2421 */;
	const unsigned char *cocci_id/* arch/powerpc/kernel/prom_init.c 2352 */;
	const unsigned char cocci_id/* arch/powerpc/kernel/prom_init.c 2334 */[]__initconst;
	ihandle cocci_id/* arch/powerpc/kernel/prom_init.c 2331 */;
	char cocci_id/* arch/powerpc/kernel/prom_init.c 2329 */[16];
	unsigned char cocci_id/* arch/powerpc/kernel/prom_init.c 231 */;
	char cocci_id/* arch/powerpc/kernel/prom_init.c 2253 */[256];
	u64 cocci_id/* arch/powerpc/kernel/prom_init.c 1934 */;
	struct platform_support {
		bool hash_mmu;
		bool radix_mmu;
		bool radix_gtse;
		bool xive;
	} cocci_id/* arch/powerpc/kernel/prom_init.c 179 */;
	uint64_t cocci_id/* arch/powerpc/kernel/prom_init.c 1744 */;
	cell_t cocci_id/* arch/powerpc/kernel/prom_init.c 1649 */;
	cell_t *cocci_id/* arch/powerpc/kernel/prom_init.c 1609 */;
	cell_t **cocci_id/* arch/powerpc/kernel/prom_init.c 1548 */;
	int cocci_id/* arch/powerpc/kernel/prom_init.c 1492 */;
	unsigned long __init cocci_id/* arch/powerpc/kernel/prom_init.c 1491 */;
	void cocci_id/* arch/powerpc/kernel/prom_init.c 146 */(unsigned long dest,
							       unsigned long src,
							       unsigned long size,
							       unsigned long offset);
	int (*cocci_id/* arch/powerpc/kernel/prom_init.c 142 */)(struct prom_args *);
	struct prom_args *cocci_id/* arch/powerpc/kernel/prom_init.c 140 */;
	int cocci_id/* arch/powerpc/kernel/prom_init.c 138 */(struct prom_args *args,
							      unsigned long entry);
	void cocci_id/* arch/powerpc/kernel/prom_init.c 133 */(unsigned long r3,
							       unsigned long r4,
							       unsigned long r5,
							       unsigned long r6,
							       unsigned long r7,
							       unsigned long r8,
							       unsigned long r9);
	u8 cocci_id/* arch/powerpc/kernel/prom_init.c 1314 */[8];
	__be32 cocci_id/* arch/powerpc/kernel/prom_init.c 131 */;
	struct platform_support cocci_id/* arch/powerpc/kernel/prom_init.c 1294 */;
	struct mem_map_entry {
		__be64 base;
		__be64 size;
	} cocci_id/* arch/powerpc/kernel/prom_init.c 126 */;
	struct platform_support *cocci_id/* arch/powerpc/kernel/prom_init.c 1214 */;
	u8 cocci_id/* arch/powerpc/kernel/prom_init.c 1213 */;
	unsigned int cocci_id/* arch/powerpc/kernel/prom_init.c 1179 */;
	struct prom_t {
		ihandle root;
		phandle chosen;
		int cpu;
		ihandle stdout;
		ihandle mmumap;
		ihandle memory;
	} cocci_id/* arch/powerpc/kernel/prom_init.c 117 */;
	struct rpadesc cocci_id/* arch/powerpc/kernel/prom_init.c 1159 */;
	struct chrpdesc cocci_id/* arch/powerpc/kernel/prom_init.c 1145 */;
	struct rpanote cocci_id/* arch/powerpc/kernel/prom_init.c 1140 */;
	struct chrpnote cocci_id/* arch/powerpc/kernel/prom_init.c 1136 */;
	Elf32_Phdr cocci_id/* arch/powerpc/kernel/prom_init.c 1129 */;
	struct fake_elf cocci_id/* arch/powerpc/kernel/prom_init.c 1128 */;
	struct prom_args {
		__be32 service;
		__be32 nargs;
		__be32 nret;
		__be32 args[10];
	} cocci_id/* arch/powerpc/kernel/prom_init.c 110 */;
	const struct fake_elf {
		Elf32_Ehdr elfhdr;
		Elf32_Phdr phdr[2];
		struct chrpnote {
			u32 namesz;
			u32 descsz;
			u32 type;
			char name[8];
			struct chrpdesc {
				u32 real_mode;
				u32 real_base;
				u32 real_size;
				u32 virt_base;
				u32 virt_size;
				u32 load_base;
			} chrpdesc;
		} chrpnote;
		struct rpanote {
			u32 namesz;
			u32 descsz;
			u32 type;
			char name[24];
			struct rpadesc {
				u32 lpar_affinity;
				u32 min_rmo_size;
				u32 min_rmo_percent;
				u32 max_pft_size;
				u32 splpar;
				u32 min_load;
				u32 new_mem_def;
				u32 ignore_me;
			} rpadesc;
		} rpanote;
	} cocci_id/* arch/powerpc/kernel/prom_init.c 1088 */;
	struct option_vector6 cocci_id/* arch/powerpc/kernel/prom_init.c 1076 */;
	struct option_vector5 cocci_id/* arch/powerpc/kernel/prom_init.c 1038 */;
	struct option_vector4 cocci_id/* arch/powerpc/kernel/prom_init.c 1031 */;
	struct option_vector3 cocci_id/* arch/powerpc/kernel/prom_init.c 1024 */;
	struct option_vector2 cocci_id/* arch/powerpc/kernel/prom_init.c 1008 */;
	struct option_vector1 cocci_id/* arch/powerpc/kernel/prom_init.c 1000 */;
}
