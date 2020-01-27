cocci_test_suite() {
	struct bcr_volatile {
#ifdef CONFIG_CPU_BIG_ENDIAN
		unsigned int start:4,limit:4,pad:22,order:1,disable:1;
#else
		unsigned int disable:1,order:1,pad:22,limit:4,start:4;
#endif
	} cocci_id/* arch/arc/mm/cache.c 96 */;
	struct bcr_clust_cfg {
#ifdef CONFIG_CPU_BIG_ENDIAN
		unsigned int pad:7,c:1,num_entries:8,num_cores:8,ver:8;
#else
		unsigned int ver:8,num_cores:8,num_entries:8,c:1,pad:7;
#endif
	} cocci_id/* arch/arc/mm/cache.c 88 */;
	struct address_space *cocci_id/* arch/arc/mm/cache.c 839 */;
	struct bcr_slc_cfg {
#ifdef CONFIG_CPU_BIG_ENDIAN
		unsigned int pad:24,way:2,lsz:2,sz:4;
#else
		unsigned int sz:4,lsz:2,way:2,pad:24;
#endif
	} cocci_id/* arch/arc/mm/cache.c 80 */;
	struct bcr_generic cocci_id/* arch/arc/mm/cache.c 78 */;
	const unsigned long cocci_id/* arch/arc/mm/cache.c 741 */;
	struct ic_inv_args cocci_id/* arch/arc/mm/cache.c 648 */;
	struct ic_inv_args *cocci_id/* arch/arc/mm/cache.c 640 */;
	void *cocci_id/* arch/arc/mm/cache.c 638 */;
	struct ic_inv_args {
		phys_addr_t paddr,vaddr;
		int sz;
	} cocci_id/* arch/arc/mm/cache.c 633 */;
	unsigned int cocci_id/* arch/arc/mm/cache.c 525 */;
	const unsigned int cocci_id/* arch/arc/mm/cache.c 524 */;
	const int cocci_id/* arch/arc/mm/cache.c 521 */;
	void cocci_id/* arch/arc/mm/cache.c 521 */;
	char *cocci_id/* arch/arc/mm/cache.c 38 */;
	void (*cocci_id/* arch/arc/mm/cache.c 35 */)(phys_addr_t start,
						     unsigned long sz);
	u64 cocci_id/* arch/arc/mm/cache.c 337 */;
	void (*cocci_id/* arch/arc/mm/cache.c 31 */)(phys_addr_t paddr,
						     unsigned long vaddr,
						     unsigned long sz,
						     const int op,
						     const int full_page);
	int cocci_id/* arch/arc/mm/cache.c 254 */;
	phys_addr_t cocci_id/* arch/arc/mm/cache.c 250 */;
	unsigned long cocci_id/* arch/arc/mm/cache.c 250 */;
	struct bcr_cache {
#ifdef CONFIG_CPU_BIG_ENDIAN
		unsigned int pad:12,line_len:4,sz:4,config:4,ver:8;
#else
		unsigned int ver:8,config:4,sz:4,line_len:4,pad:12;
#endif
	} cocci_id/* arch/arc/mm/cache.c 146 */;
	char cocci_id/* arch/arc/mm/cache.c 1303 */[256];
	unsigned int __maybe_unused cocci_id/* arch/arc/mm/cache.c 1302 */;
	void __ref cocci_id/* arch/arc/mm/cache.c 1300 */;
	struct cpuinfo_arc_cache *cocci_id/* arch/arc/mm/cache.c 1221 */;
	void __init cocci_id/* arch/arc/mm/cache.c 1216 */;
	uint32_t cocci_id/* arch/arc/mm/cache.c 1132 */;
	struct page *cocci_id/* arch/arc/mm/cache.c 1121 */;
	struct vm_area_struct *cocci_id/* arch/arc/mm/cache.c 1072 */;
	struct mm_struct *cocci_id/* arch/arc/mm/cache.c 1035 */;
}
