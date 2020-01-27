cocci_test_suite() {
	struct link_free *cocci_id/* mm/zsmalloc.c 991 */;
	unsigned int cocci_id/* mm/zsmalloc.c 940 */;
	enum fullness_group cocci_id/* mm/zsmalloc.c 939 */;
	struct size_class *cocci_id/* mm/zsmalloc.c 935 */;
	unsigned long *cocci_id/* mm/zsmalloc.c 872 */;
	struct page **cocci_id/* mm/zsmalloc.c 846 */;
	struct seq_file *cocci_id/* mm/zsmalloc.c 590 */;
	unsigned long cocci_id/* mm/zsmalloc.c 588 */(struct size_class *class);
	void __init cocci_id/* mm/zsmalloc.c 573 */;
	enum fullness_group *cocci_id/* mm/zsmalloc.c 516 */;
	unsigned int *cocci_id/* mm/zsmalloc.c 515 */;
	struct zpool_driver cocci_id/* mm/zsmalloc.c 445 */;
	u64 cocci_id/* mm/zsmalloc.c 440 */;
	enum zpool_mapmode cocci_id/* mm/zsmalloc.c 416 */;
	struct zpool *cocci_id/* mm/zsmalloc.c 389 */;
	const struct zpool_ops *cocci_id/* mm/zsmalloc.c 388 */;
	struct zspage *cocci_id/* mm/zsmalloc.c 324 */;
	struct zs_pool *cocci_id/* mm/zsmalloc.c 324 */;
	void cocci_id/* mm/zsmalloc.c 313 */(struct zs_pool *pool,
					     struct zspage *zspage);
	void cocci_id/* mm/zsmalloc.c 312 */(struct zs_pool *pool);
	void cocci_id/* mm/zsmalloc.c 308 */(struct zspage *zspage);
	int cocci_id/* mm/zsmalloc.c 306 */(struct zs_pool *pool);
	struct mapping_area {
#ifdef CONFIG_PGTABLE_MAPPING
		struct vm_struct *vm;
#else
		char *vm_buf;
#endif
		char *vm_addr;
		enum zs_mapmode vm_mm;
	} cocci_id/* mm/zsmalloc.c 295 */;
	struct zspage {
		struct {
			unsigned int fullness:FULLNESS_BITS;
			unsigned int class:CLASS_BITS + 1;
			unsigned int isolated:ISOLATED_BITS;
			unsigned int magic:MAGIC_VAL_BITS;
		};
		unsigned int inuse;
		unsigned int freeobj;
		struct page *first_page;
		struct list_head list;
#ifdef CONFIG_COMPACTION
		rwlock_t lock;
#endif
	} cocci_id/* mm/zsmalloc.c 279 */;
	void __exit cocci_id/* mm/zsmalloc.c 2572 */;
	int __init cocci_id/* mm/zsmalloc.c 2545 */;
	struct zs_pool {
		const char *name;
		struct size_class *size_class[ZS_SIZE_CLASSES];
		struct kmem_cache *handle_cachep;
		struct kmem_cache *zspage_cachep;
		atomic_long_t pages_allocated;
		struct zs_pool_stats stats;
		struct shrinker shrinker;
#ifdef CONFIG_ZSMALLOC_STAT
		struct dentry *stat_dentry;
#endif
#ifdef CONFIG_COMPACTION
		struct inode *inode;
		struct work_struct free_work;
		struct wait_queue_head migration_wait;
		atomic_long_t isolated_pages;
		bool destroying;
#endif
	} cocci_id/* mm/zsmalloc.c 252 */;
	struct size_class cocci_id/* mm/zsmalloc.c 2473 */;
	const char *cocci_id/* mm/zsmalloc.c 2396 */;
	struct link_free {
		union {
			unsigned long next;
			unsigned long handle;
		};
	} cocci_id/* mm/zsmalloc.c 238 */;
	struct shrink_control *cocci_id/* mm/zsmalloc.c 2350 */;
	struct shrinker *cocci_id/* mm/zsmalloc.c 2349 */;
	struct zs_pool_stats cocci_id/* mm/zsmalloc.c 2327 */;
	struct zs_pool_stats *cocci_id/* mm/zsmalloc.c 2325 */;
	int cocci_id/* mm/zsmalloc.c 227 */;
	struct zs_compact_control cocci_id/* mm/zsmalloc.c 2262 */;
	struct page *cocci_id/* mm/zsmalloc.c 222 */;
	void cocci_id/* mm/zsmalloc.c 222 */;
	struct zs_pool cocci_id/* mm/zsmalloc.c 2191 */;
	struct work_struct *cocci_id/* mm/zsmalloc.c 2183 */;
	const struct address_space_operations cocci_id/* mm/zsmalloc.c 2126 */;
	struct size_class {
		spinlock_t lock;
		struct list_head fullness_list[NR_ZS_FULLNESS];
		int size;
		int objs_per_zspage;
		int pages_per_zspage;
		unsigned int index;
		struct zs_size_stat stats;
	} cocci_id/* mm/zsmalloc.c 200 */;
	size_t cocci_id/* mm/zsmalloc.c 198 */;
	enum migrate_mode cocci_id/* mm/zsmalloc.c 1972 */;
	const int cocci_id/* mm/zsmalloc.c 197 */;
	struct address_space *cocci_id/* mm/zsmalloc.c 1922 */;
	isolate_mode_t cocci_id/* mm/zsmalloc.c 1915 */;
	struct file_system_type cocci_id/* mm/zsmalloc.c 1809 */;
	struct fs_context *cocci_id/* mm/zsmalloc.c 1804 */;
	struct vfsmount *cocci_id/* mm/zsmalloc.c 180 */;
	struct dentry *cocci_id/* mm/zsmalloc.c 176 */;
	enum fullness_group cocci_id/* mm/zsmalloc.c 1749 */[2];
	struct zs_size_stat {
		unsigned long objs[NR_ZS_STAT_TYPE];
	} cocci_id/* mm/zsmalloc.c 171 */;
	struct zs_compact_control *cocci_id/* mm/zsmalloc.c 1696 */;
	struct zs_compact_control {
		struct page *s_page;
		struct page *d_page;
		int obj_idx;
	} cocci_id/* mm/zsmalloc.c 1684 */;
	int *cocci_id/* mm/zsmalloc.c 1653 */;
	enum zs_stat_type{CLASS_EMPTY, CLASS_ALMOST_EMPTY, CLASS_ALMOST_FULL, CLASS_FULL, OBJ_ALLOCATED, OBJ_USED, NR_ZS_STAT_TYPE,} cocci_id/* mm/zsmalloc.c 161 */;
	enum fullness_group{ZS_EMPTY, ZS_ALMOST_EMPTY, ZS_ALMOST_FULL, ZS_FULL, NR_ZS_FULLNESS,} cocci_id/* mm/zsmalloc.c 153 */;
	enum zs_mapmode cocci_id/* mm/zsmalloc.c 1292 */;
	bool cocci_id/* mm/zsmalloc.c 1255 */;
	char *cocci_id/* mm/zsmalloc.c 1181 */;
	int cocci_id/* mm/zsmalloc.c 1179 */[2];
	unsigned long cocci_id/* mm/zsmalloc.c 1149 */;
	struct page *cocci_id/* mm/zsmalloc.c 1139 */[2];
	void *cocci_id/* mm/zsmalloc.c 1138 */;
	struct mapping_area *cocci_id/* mm/zsmalloc.c 1131 */;
	struct zspage cocci_id/* mm/zsmalloc.c 1074 */;
	struct page *cocci_id/* mm/zsmalloc.c 1068 */[ZS_MAX_PAGES_PER_ZSPAGE];
	gfp_t cocci_id/* mm/zsmalloc.c 1065 */;
	struct page *cocci_id/* mm/zsmalloc.c 1028 */[];
	__typeof__(struct mapping_area) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
}
