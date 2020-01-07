cocci_test_suite() {struct kernel_param_ops cocci_id/* mm/zswap.c 89 */;
	int cocci_id/* mm/zswap.c 87 */(const char *,
					const struct kernel_param *);
	struct zswap_header *cocci_id/* mm/zswap.c 842 */;
	enum zswap_get_swap_ret{ZSWAP_SWAPCACHE_NEW, ZSWAP_SWAPCACHE_EXIST, ZSWAP_SWAPCACHE_FAIL,} cocci_id/* mm/zswap.c 792 */;
	char **cocci_id/* mm/zswap.c 679 */;
	struct zswap_pool *cocci_id/* mm/zswap.c 669 */;
	int __must_check cocci_id/* mm/zswap.c 617 */;
	char cocci_id/* mm/zswap.c 507 */[38];
	typeof(*pool) cocci_id/* mm/zswap.c 436 */;
	struct crypto_comp *cocci_id/* mm/zswap.c 419 */;
	struct zswap_pool cocci_id/* mm/zswap.c 418 */;
	struct zswap_tree *cocci_id/* mm/zswap.c 345 */;
	struct zswap_entry cocci_id/* mm/zswap.c 296 */;
	struct zswap_entry **cocci_id/* mm/zswap.c 289 */;
	struct zswap_entry *cocci_id/* mm/zswap.c 248 */;
	const struct zpool_ops cocci_id/* mm/zswap.c 207 */;
	void cocci_id/* mm/zswap.c 205 */(struct zswap_pool *pool);
	int cocci_id/* mm/zswap.c 204 */(struct zswap_pool *pool);
	int cocci_id/* mm/zswap.c 203 */(struct zpool *pool,
					 unsigned long handle);
	struct zswap_tree *cocci_id/* mm/zswap.c 177 */[MAX_SWAPFILES];
	struct zswap_tree {
		struct rb_root rbroot;
		spinlock_t lock;
	} cocci_id/* mm/zswap.c 172 */;
	struct zswap_header {
		swp_entry_t swpentry;
	} cocci_id/* mm/zswap.c 163 */;
	struct zswap_entry {
		struct rb_node rbnode;
		pgoff_t offset;
		int refcount;
		unsigned int length;
		struct zswap_pool *pool;
		union {
			unsigned long handle;
			unsigned long value;
		};
	} cocci_id/* mm/zswap.c 151 */;
	struct frontswap_ops cocci_id/* mm/zswap.c 1235 */;
	struct zswap_pool {
		struct zpool *zpool;
		struct crypto_comp *__percpu*tfm;
		struct kref kref;
		struct list_head list;
		struct work_struct work;
		struct hlist_node node;
		char tfm_name[CRYPTO_MAX_ALG_NAME];
	} cocci_id/* mm/zswap.c 121 */;
	struct zswap_header cocci_id/* mm/zswap.c 1160 */;
	struct link_free *cocci_id/* mm/zsmalloc.c 991 */;
	enum fullness_group cocci_id/* mm/zsmalloc.c 939 */;
	struct size_class *cocci_id/* mm/zsmalloc.c 935 */;
	unsigned long cocci_id/* mm/zsmalloc.c 588 */(struct size_class *class);
	enum fullness_group *cocci_id/* mm/zsmalloc.c 516 */;
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
	struct link_free {
		union {
			unsigned long next;
			unsigned long handle;
		};
	} cocci_id/* mm/zsmalloc.c 238 */;
	struct zs_pool_stats cocci_id/* mm/zsmalloc.c 2327 */;
	struct zs_pool_stats *cocci_id/* mm/zsmalloc.c 2325 */;
	struct zs_compact_control cocci_id/* mm/zsmalloc.c 2262 */;
	struct zs_pool cocci_id/* mm/zsmalloc.c 2191 */;
	struct size_class {
		spinlock_t lock;
		struct list_head fullness_list[NR_ZS_FULLNESS];
		int size;
		int objs_per_zspage;
		int pages_per_zspage;
		unsigned int index;
		struct zs_size_stat stats;
	} cocci_id/* mm/zsmalloc.c 200 */;
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
	enum zs_stat_type{CLASS_EMPTY, CLASS_ALMOST_EMPTY, CLASS_ALMOST_FULL, CLASS_FULL, OBJ_ALLOCATED, OBJ_USED, NR_ZS_STAT_TYPE,} cocci_id/* mm/zsmalloc.c 161 */;
	enum fullness_group{ZS_EMPTY, ZS_ALMOST_EMPTY, ZS_ALMOST_FULL, ZS_FULL, NR_ZS_FULLNESS,} cocci_id/* mm/zsmalloc.c 153 */;
	enum zs_mapmode cocci_id/* mm/zsmalloc.c 1292 */;
	int cocci_id/* mm/zsmalloc.c 1179 */[2];
	struct page *cocci_id/* mm/zsmalloc.c 1139 */[2];
	struct mapping_area *cocci_id/* mm/zsmalloc.c 1131 */;
	struct zspage cocci_id/* mm/zsmalloc.c 1074 */;
	struct page *cocci_id/* mm/zsmalloc.c 1068 */[ZS_MAX_PAGES_PER_ZSPAGE];
	struct page *cocci_id/* mm/zsmalloc.c 1028 */[];
	struct zpool {
		struct zpool_driver *driver;
		void *pool;
		const struct zpool_ops *ops;
		bool evictable;
		struct list_head list;
	} cocci_id/* mm/zpool.c 21 */;
	struct zpool_driver *cocci_id/* mm/zpool.c 158 */;
	struct zbud_pool {
		spinlock_t lock;
		struct list_head unbuddied[NCHUNKS];
		struct list_head buddied;
		struct list_head lru;
		u64 pages_nr;
		const struct zbud_ops *ops;
#ifdef CONFIG_ZPOOL
		struct zpool *zpool;
		const struct zpool_ops *zpool_ops;
#endif
	} cocci_id/* mm/zbud.c 94 */;
	struct zbud_header cocci_id/* mm/zbud.c 613 */;
	struct zbud_pool *cocci_id/* mm/zbud.c 354 */;
	struct zbud_pool cocci_id/* mm/zbud.c 311 */;
	const struct zbud_ops *cocci_id/* mm/zbud.c 306 */;
	struct zbud_header *cocci_id/* mm/zbud.c 260 */;
	enum buddy{FIRST, LAST,} cocci_id/* mm/zbud.c 224 */;
	const struct zbud_ops cocci_id/* mm/zbud.c 137 */;
	struct zbud_header {
		struct list_head buddy;
		struct list_head lru;
		unsigned int first_chunks;
		unsigned int last_chunks;
		bool under_reclaim;
	} cocci_id/* mm/zbud.c 115 */;
	const struct z3fold_ops *cocci_id/* mm/z3fold.c 991 */;
	struct z3fold_header cocci_id/* mm/z3fold.c 893 */;
	struct z3fold_buddy_slots {
		unsigned long slot[BUDDY_MASK + 1];
		unsigned long pool;
		rwlock_t lock;
	} cocci_id/* mm/z3fold.c 87 */;
	enum buddy{HEADLESS=0, FIRST, MIDDLE, LAST, BUDDIES_MAX=LAST,} cocci_id/* mm/z3fold.c 79 */;
	struct z3fold_ops {
		int (*evict)(struct z3fold_pool *pool, unsigned long handle);
	} cocci_id/* mm/z3fold.c 75 */;
	unsigned short *cocci_id/* mm/z3fold.c 680 */;
	struct z3fold_pool cocci_id/* mm/z3fold.c 593 */;
	void __attribute__((__unused__)) cocci_id/* mm/z3fold.c 561 */;
	struct z3fold_pool *cocci_id/* mm/z3fold.c 525 */;
	enum buddy cocci_id/* mm/z3fold.c 457 */;
	struct z3fold_buddy_slots *cocci_id/* mm/z3fold.c 456 */;
	struct z3fold_header *cocci_id/* mm/z3fold.c 455 */;
	struct z3fold_header *cocci_id/* mm/z3fold.c 194 */(struct z3fold_pool *,
							    size_t, bool);
	enum z3fold_handle_flags{HANDLES_ORPHANED=0,} cocci_id/* mm/z3fold.c 187 */;
	struct zpool_driver cocci_id/* mm/z3fold.c 1776 */;
	enum zpool_mapmode cocci_id/* mm/z3fold.c 1762 */;
	enum z3fold_page_flags{PAGE_HEADLESS=0, MIDDLE_CHUNK_MAPPED, NEEDS_COMPACTING, PAGE_STALE, PAGE_CLAIMED,} cocci_id/* mm/z3fold.c 176 */;
	struct zpool *cocci_id/* mm/z3fold.c 1714 */;
	const struct zpool_ops *cocci_id/* mm/z3fold.c 1713 */;
	const struct z3fold_ops cocci_id/* mm/z3fold.c 1708 */;
	struct z3fold_pool {
		const char *name;
		spinlock_t lock;
		spinlock_t stale_lock;
		struct list_head *unbuddied;
		struct list_head lru;
		struct list_head stale;
		atomic64_t pages_nr;
		struct kmem_cache *c_handle;
		const struct z3fold_ops *ops;
		struct zpool *zpool;
		const struct zpool_ops *zpool_ops;
		struct workqueue_struct *compact_wq;
		struct workqueue_struct *release_wq;
		struct work_struct work;
		struct inode *inode;
	} cocci_id/* mm/z3fold.c 155 */;
	struct z3fold_header {
		struct list_head buddy;
		spinlock_t page_lock;
		struct kref refcount;
		struct work_struct work;
		struct z3fold_buddy_slots *slots;
		struct z3fold_pool *pool;
		short cpu;
		unsigned short first_chunks;
		unsigned short middle_chunks;
		unsigned short last_chunks;
		unsigned short start_middle;
		unsigned short first_num:2;
		unsigned short mapped_count:2;
		unsigned short foreign_handles:2;
	} cocci_id/* mm/z3fold.c 115 */;
	struct z3fold_buddy_slots cocci_id/* mm/z3fold.c 1000 */;
	struct lock_class_key cocci_id/* mm/workingset.c 571 */;
	struct xa_node cocci_id/* mm/workingset.c 491 */;
	struct xa_node *cocci_id/* mm/workingset.c 491 */;
	struct list_lru cocci_id/* mm/workingset.c 403 */;
	pg_data_t **cocci_id/* mm/workingset.c 196 */;
	u16 cocci_id/* mm/vmstat.c 944 */;
	u16 __percpu *cocci_id/* mm/vmstat.c 943 */;
	int cocci_id/* mm/vmstat.c 856 */[NR_VM_NODE_STAT_ITEMS];
	int cocci_id/* mm/vmstat.c 854 */[NR_VM_NUMA_STAT_ITEMS];
	int cocci_id/* mm/vmstat.c 852 */[NR_VM_ZONE_STAT_ITEMS];
	enum zone_stat_item cocci_id/* mm/vmstat.c 455 */;
	s8 __percpu *cocci_id/* mm/vmstat.c 442 */;
	struct per_cpu_nodestat __percpu *cocci_id/* mm/vmstat.c 441 */;
	struct per_cpu_pageset __percpu *cocci_id/* mm/vmstat.c 425 */;
	int (*cocci_id/* mm/vmstat.c 292 */)(struct zone *);
	struct contig_page_info cocci_id/* mm/vmstat.c 2079 */;
	void cocci_id/* mm/vmstat.c 1879 */(struct work_struct *w);
	atomic_long_t cocci_id/* mm/vmstat.c 165 */[NR_VM_NODE_STAT_ITEMS]__cacheline_aligned_in_smp;
	atomic_long_t cocci_id/* mm/vmstat.c 164 */[NR_VM_NUMA_STAT_ITEMS]__cacheline_aligned_in_smp;
	atomic_long_t cocci_id/* mm/vmstat.c 163 */[NR_VM_ZONE_STAT_ITEMS]__cacheline_aligned_in_smp;
	void (*cocci_id/* mm/vmstat.c 1332 */)(struct seq_file *m,
					       pg_data_t *, struct zone *);
	struct vm_event_state *cocci_id/* mm/vmstat.c 119 */;
	struct contig_page_info *cocci_id/* mm/vmstat.c 1054 */;
	struct contig_page_info {
		unsigned long free_pages;
		unsigned long free_blocks_total;
		unsigned long free_blocks_suitable;
	} cocci_id/* mm/vmstat.c 1006 */;
	enum page_references cocci_id/* mm/vmscan.c 995 */;
	enum page_references{PAGEREF_RECLAIM, PAGEREF_RECLAIM_CLEAN, PAGEREF_KEEP, PAGEREF_ACTIVATE,} cocci_id/* mm/vmscan.c 988 */;
	pageout_t cocci_id/* mm/vmscan.c 791 */;
	enum{PAGE_KEEP, PAGE_ACTIVATE, PAGE_SUCCESS, PAGE_CLEAN,} cocci_id/* mm/vmscan.c 776 */;
	struct shrink_control cocci_id/* mm/vmscan.c 681 */;
	struct scan_control {
		unsigned long nr_to_reclaim;
		nodemask_t *nodemask;
		struct mem_cgroup *target_mem_cgroup;
#define DEACTIVATE_ANON 1
#define DEACTIVATE_FILE 2
		unsigned int may_deactivate:2;
		unsigned int force_deactivate:1;
		unsigned int skipped_deactivate:1;
		unsigned int may_writepage:1;
		unsigned int may_unmap:1;
		unsigned int may_swap:1;
		unsigned int memcg_low_reclaim:1;
		unsigned int memcg_low_skipped:1;
		unsigned int hibernation_mode:1;
		unsigned int compaction_ready:1;
		unsigned int cache_trim_mode:1;
		unsigned int file_is_tiny:1;
		s8 order;
		s8 priority;
		s8 reclaim_idx;
		gfp_t gfp_mask;
		unsigned long nr_scanned;
		unsigned long nr_reclaimed;
		struct {
			unsigned int dirty;
			unsigned int unqueued_dirty;
			unsigned int congested;
			unsigned int writeback;
			unsigned int immediate;
			unsigned int file_taken;
			unsigned int taken;
		} nr;
		struct reclaim_state reclaim_state;
	} cocci_id/* mm/vmscan.c 66 */;
	struct scan_control cocci_id/* mm/vmscan.c 4204 */;
	unsigned long cocci_id/* mm/vmscan.c 3574 */[MAX_NR_ZONES];
	struct scan_control *cocci_id/* mm/vmscan.c 3384 */;
	enum scan_balance cocci_id/* mm/vmscan.c 2254 */;
	u64 cocci_id/* mm/vmscan.c 2250 */[2];
	enum scan_balance{SCAN_EQUAL, SCAN_FRACT, SCAN_ANON, SCAN_FILE,} cocci_id/* mm/vmscan.c 2228 */;
	struct reclaim_state *cocci_id/* mm/vmscan.c 188 */;
	unsigned noinline_for_stack cocci_id/* mm/vmscan.c 1843 */;
	struct reclaim_stat cocci_id/* mm/vmscan.c 1509 */;
	struct reclaim_stat *cocci_id/* mm/vmscan.c 1087 */;
	enum vmpressure_modes{VMPRESSURE_NO_PASSTHROUGH=0, VMPRESSURE_HIERARCHY, VMPRESSURE_LOCAL, VMPRESSURE_NUM_MODES,} cocci_id/* mm/vmpressure.c 93 */;
	enum vmpressure_levels{VMPRESSURE_LOW=0, VMPRESSURE_MEDIUM, VMPRESSURE_CRITICAL, VMPRESSURE_NUM_LEVELS,} cocci_id/* mm/vmpressure.c 86 */;
	struct vmpressure cocci_id/* mm/vmpressure.c 72 */;
	enum vmpressure_modes cocci_id/* mm/vmpressure.c 367 */;
	enum vmpressure_levels cocci_id/* mm/vmpressure.c 280 */;
	struct vmpressure_event *cocci_id/* mm/vmpressure.c 162 */;
	const enum vmpressure_levels cocci_id/* mm/vmpressure.c 159 */;
	struct vmpressure_event {
		struct eventfd_ctx *efd;
		enum vmpressure_levels level;
		enum vmpressure_modes mode;
		struct list_head node;
	} cocci_id/* mm/vmpressure.c 151 */;
	enum fit_type{NOTHING_FIT=0, FL_FIT_TYPE=1, LE_FIT_TYPE=2, RE_FIT_TYPE=3, NE_FIT_TYPE=4,} cocci_id/* mm/vmalloc.c 887 */;
	struct vfree_deferred cocci_id/* mm/vmalloc.c 54 */;
	void cocci_id/* mm/vmalloc.c 50 */(const void *, int);
	struct vfree_deferred {
		struct llist_head list;
		struct work_struct wq;
	} cocci_id/* mm/vmalloc.c 44 */;
	struct vmap_area cocci_id/* mm/vmalloc.c 421 */;
	unsigned long cocci_id/* mm/vmalloc.c 405 */(void);
	struct vmap_area **cocci_id/* mm/vmalloc.c 3294 */;
	const size_t *cocci_id/* mm/vmalloc.c 3289 */;
	pte_t ***cocci_id/* mm/vmalloc.c 3142 */;
	void *cocci_id/* mm/vmalloc.c 2445 */(unsigned long size, unsigned long align, gfp_t gfp_mask, pgprot_t prot, int node, const void *caller);
	struct vfree_deferred *cocci_id/* mm/vmalloc.c 2327 */;
	int (*cocci_id/* mm/vmalloc.c 2219 */)(struct page *page);
	struct vmap_block *cocci_id/* mm/vmalloc.c 1706 */;
	struct vmap_block_queue *cocci_id/* mm/vmalloc.c 1705 */;
	struct vmap_block cocci_id/* mm/vmalloc.c 1493 */;
	struct vmap_block {
		spinlock_t lock;
		struct vmap_area *va;
		unsigned long free,dirty;
		unsigned long dirty_min,dirty_max;
		struct list_head free_list;
		struct rcu_head rcu_head;
		struct list_head purge;
	} cocci_id/* mm/vmalloc.c 1430 */;
	struct vmap_block_queue {
		spinlock_t lock;
		struct list_head free;
	} cocci_id/* mm/vmalloc.c 1425 */;
	struct llist_node *cocci_id/* mm/vmalloc.c 1268 */;
	enum fit_type cocci_id/* mm/vmalloc.c 1031 */;
	struct vmap_area *cocci_id/* mm/vmalloc.c 1030 */;
	struct percpu_counter cocci_id/* mm/util.c 765 */;
	struct rlimit *cocci_id/* mm/util.c 396 */;
	struct task_struct *__maybe_unusedcocci_id/* mm/util.c 308 */;
	ssize_t cocci_id/* mm/userfaultfd.c 397 */(struct mm_struct *dst_mm, struct vm_area_struct *dst_vma, unsigned long dst_start, unsigned long src_start, unsigned long len, bool zeropage);
	void __noreturn cocci_id/* mm/usercopy.c 83 */;
	const void *constcocci_id/* mm/usercopy.c 36 */; // err
	void (*cocci_id/* mm/truncate.c 155 */)(struct page *, unsigned int, unsigned int);
	swp_entry_t cocci_id/* mm/swapfile.c 992 */[];
	struct swap_info_struct *cocci_id/* mm/swapfile.c 92 */[MAX_SWAPFILES];
	struct plist_head *cocci_id/* mm/swapfile.c 89 */;
	void (*cocci_id/* mm/swapfile.c 706 */)(struct block_device *, unsigned long);
	const char cocci_id/* mm/swapfile.c 66 */[];
	struct percpu_cluster *cocci_id/* mm/swapfile.c 579 */;
	sector_t cocci_id/* mm/swapfile.c 51 */(swp_entry_t, struct block_device **);
	void cocci_id/* mm/swapfile.c 50 */(struct swap_info_struct *);
	struct swap_info_struct cocci_id/* mm/swapfile.c 496 */;
	bool cocci_id/* mm/swapfile.c 48 */(struct swap_info_struct *, pgoff_t, unsigned char);
	struct swap_cluster_info *cocci_id/* mm/swapfile.c 459 */;
	struct swap_cluster_list *cocci_id/* mm/swapfile.c 400 */;
	struct plist_head cocci_id/* mm/swapfile.c 3782 */;
	struct percpu_cluster cocci_id/* mm/swapfile.c 3220 */;
	struct request_queue *cocci_id/* mm/swapfile.c 3101 */;
	struct swap_cluster_info cocci_id/* mm/swapfile.c 3008 */;
	union swap_header *cocci_id/* mm/swapfile.c 2939 */;
	struct filename *cocci_id/* mm/swapfile.c 2524 */;
	struct swap_extent cocci_id/* mm/swapfile.c 2328 */;
	struct swap_extent *cocci_id/* mm/swapfile.c 2315 */;
	struct block_device **cocci_id/* mm/swapfile.c 2257 */;
	volatile unsigned char *cocci_id/* mm/swapfile.c 1920 */;
	const swp_entry_t *cocci_id/* mm/swapfile.c 1391 */;
	struct vma_swap_readahead cocci_id/* mm/swap_state.c 732 */;
	struct vma_swap_readahead *cocci_id/* mm/swap_state.c 641 */;
	struct {
		unsigned long add_total;
		unsigned long del_total;
		unsigned long find_success;
		unsigned long find_total;
	} cocci_id/* mm/swap_state.c 64 */;
	struct address_space cocci_id/* mm/swap_state.c 603 */;
	unsigned int cocci_id/* mm/swap_state.c 40 */[MAX_SWAPFILES]__read_mostly;
	struct address_space *cocci_id/* mm/swap_state.c 39 */[MAX_SWAPFILES]__read_mostly;
	void cocci_id/* mm/swap_slots.c 45 */(unsigned int type);
	struct swap_slots_cache *cocci_id/* mm/swap_slots.c 117 */;
	struct swap_cgroup_ctrl {
		struct page **map;
		unsigned long length;
		spinlock_t lock;
	} cocci_id/* mm/swap_cgroup.c 9 */;
	struct swap_cgroup_ctrl **cocci_id/* mm/swap_cgroup.c 77 */;
	struct swap_cgroup_ctrl *cocci_id/* mm/swap_cgroup.c 65 */;
	struct swap_cgroup *cocci_id/* mm/swap_cgroup.c 65 */;
	struct swap_cgroup cocci_id/* mm/swap_cgroup.c 20 */;
	struct swap_cgroup {
		unsigned short id;
	} cocci_id/* mm/swap_cgroup.c 17 */;
	struct swap_cgroup_ctrl cocci_id/* mm/swap_cgroup.c 15 */[MAX_SWAPFILES];
	compound_page_dtor *cocci_id/* mm/swap.c 86 */;
	struct cpumask cocci_id/* mm/swap.c 718 */;
	seqcount_t cocci_id/* mm/swap.c 716 */;
	void (*cocci_id/* mm/swap.c 191 */)(struct page *page, struct lruvec *lruvec, void *arg);
	const struct kvec cocci_id/* mm/swap.c 181 */;
	const struct kvec *cocci_id/* mm/swap.c 151 */;
	struct mem_section cocci_id/* mm/sparse.c 68 */;
	struct mem_section __ref *cocci_id/* mm/sparse.c 64 */;
	void __weak __meminit cocci_id/* mm/sparse.c 521 */;
	struct page __init *cocci_id/* mm/sparse.c 451 */;
	u16 cocci_id/* mm/sparse.c 44 */[NR_MEM_SECTIONS]__cacheline_aligned;
	u8 cocci_id/* mm/sparse.c 42 */[NR_MEM_SECTIONS]__cacheline_aligned;
	struct mem_section_usage *__initcocci_id/* mm/sparse.c 354 */;
	struct mem_section_usage cocci_id/* mm/sparse.c 350 */;
	struct mem_section cocci_id/* mm/sparse.c 30 */[NR_SECTION_ROOTS][SECTIONS_PER_ROOT]
	____cacheline_internodealigned_in_smp; // err
	struct mem_section **cocci_id/* mm/sparse.c 28 */;
	unsigned long __meminit cocci_id/* mm/sparse-vmemmap.c 83 */;
	void *__refcocci_id/* mm/sparse-vmemmap.c 40 */;
	pgd_t *__meminitcocci_id/* mm/sparse-vmemmap.c 204 */; // err
	p4d_t *__meminitcocci_id/* mm/sparse-vmemmap.c 192 */;
	pud_t *__meminitcocci_id/* mm/sparse-vmemmap.c 180 */;
	pmd_t *__meminitcocci_id/* mm/sparse-vmemmap.c 168 */;
	pte_t *__meminitcocci_id/* mm/sparse-vmemmap.c 143 */;
	char cocci_id/* mm/slub.c 698 */[100];
	struct saved_alias cocci_id/* mm/slub.c 5836 */;
	struct saved_alias *cocci_id/* mm/slub.c 5822 */;
	struct saved_alias {
		struct kmem_cache *s;
		const char *name;
		struct saved_alias *next;
	} cocci_id/* mm/slub.c 5816 */;
	struct kset *cocci_id/* mm/slub.c 5650 */;
	const struct kset_uevent_ops cocci_id/* mm/slub.c 5644 */;
	struct kobj_type *cocci_id/* mm/slub.c 5637 */;
	struct kobj_type cocci_id/* mm/slub.c 5630 */;
	const struct sysfs_ops cocci_id/* mm/slub.c 5625 */;
	struct slab_attribute *cocci_id/* mm/slub.c 5584 */;
	struct attribute *cocci_id/* mm/slub.c 5496 */;
	enum stat_item cocci_id/* mm/slub.c 5367 */;
	enum track_item cocci_id/* mm/slub.c 535 */;
	struct track *cocci_id/* mm/slub.c 534 */;
	struct slab_attribute {
		struct attribute attr;
		ssize_t (*show)(struct kmem_cache *s, char *buf);
		ssize_t (*store)(struct kmem_cache *s, const char *x, size_t count);
	} cocci_id/* mm/slub.c 4906 */;
	struct slab_attribute cocci_id/* mm/slub.c 4903 */;
	enum slab_stat_type{SL_ALL, SL_PARTIAL, SL_CPU, SL_OBJECTS, SL_TOTAL,} cocci_id/* mm/slub.c 4753 */;
	struct loc_track cocci_id/* mm/slub.c 4612 */;
	struct location cocci_id/* mm/slub.c 4576 */;
	struct location *cocci_id/* mm/slub.c 4520 */;
	const struct track *cocci_id/* mm/slub.c 4517 */;
	struct loc_track *cocci_id/* mm/slub.c 4516 */;
	struct loc_track {
		unsigned long max;
		unsigned long count;
		struct location *loc;
	} cocci_id/* mm/slub.c 4483 */;
	struct location {
		unsigned long count;
		unsigned long addr;
		long long sum_time;
		long min_time;
		long max_time;
		long min_pid;
		long max_pid;
	DECLARE_BITMAP(cpus,NR_CPUS)
		;
		nodemask_t nodes;
	} cocci_id/* mm/slub.c 4471 */;
	struct list_head cocci_id/* mm/slub.c 3980 */[SHRINK_PROMOTE_MAX];
	struct track cocci_id/* mm/slub.c 3554 */;
	struct kmem_cache_cpu cocci_id/* mm/slub.c 3339 */;
	struct detached_freelist cocci_id/* mm/slub.c 3124 */;
	struct detached_freelist *cocci_id/* mm/slub.c 3048 */;
	struct detached_freelist {
		struct page *page;
		void *tail;
		void *freelist;
		int cnt;
		struct kmem_cache *s;
	} cocci_id/* mm/slub.c 3026 */;
	const struct kmem_cache *cocci_id/* mm/slub.c 269 */;
	struct kmem_cache_cpu *cocci_id/* mm/slub.c 2541 */;
	struct kmem_cache_cpu **cocci_id/* mm/slub.c 2445 */;
	void cocci_id/* mm/slub.c 217 */(struct kmem_cache *s);
	int cocci_id/* mm/slub.c 216 */(struct kmem_cache *, const char *);
	int cocci_id/* mm/slub.c 215 */(struct kmem_cache *);
	enum track_item{TRACK_ALLOC, TRACK_FREE,} cocci_id/* mm/slub.c 212 */;
	enum slab_modes cocci_id/* mm/slub.c 2045 */;
	enum slab_modes{M_NONE, M_PARTIAL, M_FULL, M_FREE,} cocci_id/* mm/slub.c 2042 */;
	struct track {
		unsigned long addr;
#ifdef CONFIG_STACKTRACE
		unsigned long addrs[TRACK_ADDRS_COUNT];
#endif
		int cpu;
		int pid;
		unsigned long when;
	} cocci_id/* mm/slub.c 202 */;
	bool cocci_id/* mm/slub.c 1831 */(struct page *page, gfp_t gfpflags);
	void cocci_id/* mm/slub.c 1830 */(struct kmem_cache *s, struct page *page, int drain);
	struct kmem_cache_order_objects cocci_id/* mm/slub.c 1490 */;
	struct slob_block cocci_id/* mm/slob.c 94 */;
	struct slob_block {
		slobidx_t units;
	} cocci_id/* mm/slob.c 91 */;
	s16 cocci_id/* mm/slob.c 86 */;
	struct slob_rcu *cocci_id/* mm/slob.c 662 */;
	struct slob_rcu cocci_id/* mm/slob.c 586 */;
	slobidx_t cocci_id/* mm/slob.c 146 */;
	slob_t *cocci_id/* mm/slob.c 146 */;
	struct slob_rcu {
		struct rcu_head head;
		int size;
	} cocci_id/* mm/slob.c 133 */;
	slob_t cocci_id/* mm/slob.c 125 */;
	char cocci_id/* mm/slab_common.c 643 */[NAME_MAX + 1];
	bool
usercopy_fallback
 cocci_id/* mm/slab_common.c 37 */; // tick-broadcast-err
	enum slab_state cocci_id/* mm/slab_common.c 31 */;
	struct memcg_cache_array cocci_id/* mm/slab_common.c 194 */;
	struct slabinfo cocci_id/* mm/slab_common.c 1460 */;
	struct rnd_state cocci_id/* mm/slab_common.c 1369 */;
	void cocci_id/* mm/slab_common.c 136 */(struct percpu_ref *percpu_ref);
	struct rnd_state *cocci_id/* mm/slab_common.c 1348 */;
	enum kmalloc_cache_type cocci_id/* mm/slab_common.c 1273 */;
	const struct kmalloc_info_struct cocci_id/* mm/slab_common.c 1176 */[]__initconst;
	u8 cocci_id/* mm/slab_common.c 1100 */[24];
	struct kmem_cache *cocci_id/* mm/slab_common.c 1089 */[NR_KMALLOC_TYPES][KMALLOC_SHIFT_HIGH + 1];
	struct kmem_cache *__initcocci_id/* mm/slab_common.c 1073 */;
	struct kmem_cache_node cocci_id/* mm/slab.c 826 */;
	struct alien_cache cocci_id/* mm/slab.c 636 */;
	struct alien_cache *cocci_id/* mm/slab.c 633 */;
	void *cocci_id/* mm/slab.c 631 */(struct kmem_cache *, gfp_t);
	void *cocci_id/* mm/slab.c 630 */(struct kmem_cache *, gfp_t, int);
	struct alien_cache **cocci_id/* mm/slab.c 596 */;
	struct array_cache cocci_id/* mm/slab.c 535 */;
	char cocci_id/* mm/slab.c 4119 */[MAX_SLABINFO_WRITE + 1];
	struct slabinfo *cocci_id/* mm/slab.c 4037 */;
	struct delayed_work *cocci_id/* mm/slab.c 3985 */;
	struct kmem_cache cocci_id/* mm/slab.c 382 */;
	struct array_cache __percpu *cocci_id/* mm/slab.c 3802 */;
	unsigned long long *cocci_id/* mm/slab.c 332 */;
	struct kmem_cache_node *cocci_id/* mm/slab.c 3175 */;
	struct array_cache *cocci_id/* mm/slab.c 3041 */;
	slab_flags_t __force cocci_id/* mm/slab.c 254 */;
	union freelist_init_state cocci_id/* mm/slab.c 2435 */;
	union freelist_init_state *cocci_id/* mm/slab.c 2390 */;
	union freelist_init_state {
		struct {
			unsigned int pos;
			unsigned int *list;
			unsigned int count;
		};
		struct rnd_state rnd_state;
	} cocci_id/* mm/slab.c 2377 */;
	freelist_idx_t *cocci_id/* mm/slab.c 2323 */;
	void cocci_id/* mm/slab.c 219 */(struct kmem_cache *cachep, struct kmem_cache_node *n, struct page *page, void **list);
	void cocci_id/* mm/slab.c 217 */(struct kmem_cache *cachep, void **list);
	void cocci_id/* mm/slab.c 215 */(struct work_struct *unused);
	int cocci_id/* mm/slab.c 214 */(struct kmem_cache *cachep, gfp_t gfp);
	void cocci_id/* mm/slab.c 213 */(struct kmem_cache *cachep, struct list_head *list);
	void cocci_id/* mm/slab.c 211 */(struct kmem_cache *cachep, void **objpp, int len, int node, struct list_head *list);
	int cocci_id/* mm/slab.c 209 */(struct kmem_cache *cache, struct kmem_cache_node *n, int tofree);
	struct kmem_cache_node __initdata cocci_id/* mm/slab.c 205 */[NUM_INIT_LISTS];
	freelist_idx_t cocci_id/* mm/slab.c 2042 */;
	struct alien_cache {
		spinlock_t lock;
		struct array_cache ac;
	} cocci_id/* mm/slab.c 196 */;
	struct array_cache {
		unsigned int avail;
		unsigned int limit;
		unsigned int batchcount;
		unsigned int touched;
		void *entry[];
	} cocci_id/* mm/slab.c 184 */;
	void (*cocci_id/* mm/slab.c 1791 */)(void *);
	slab_flags_t cocci_id/* mm/slab.c 1791 */;
	char cocci_id/* mm/slab.c 1519 */;
	struct page *__meminitcocci_id/* mm/shuffle.c 61 */;
	const struct kernel_param *cocci_id/* mm/shuffle.c 36 */;
	enum mm_shuffle_ctl cocci_id/* mm/shuffle.c 22 */;
	unsigned long
shuffle_state
 cocci_id/* mm/shuffle.c 13 */; // tick-broadcast-err
	const struct path *cocci_id/* mm/shmem.c 997 */;
	struct kstat *cocci_id/* mm/shmem.c 997 */;
	struct vfsmount *cocci_id/* mm/shmem.c 4092 */;
	const int cocci_id/* mm/shmem.c 3936 */[];
	struct shmem_options cocci_id/* mm/shmem.c 3873 */;
	struct shmem_inode_info cocci_id/* mm/shmem.c 3766 */;
	const struct fs_context_operations cocci_id/* mm/shmem.c 3723 */;
	struct shmem_sb_info cocci_id/* mm/shmem.c 3638 */;
	struct shmem_options *cocci_id/* mm/shmem.c 3632 */;
	struct fs_context *cocci_id/* mm/shmem.c 3630 */;
	struct fs_parse_result cocci_id/* mm/shmem.c 3412 */;
	struct fs_parameter *cocci_id/* mm/shmem.c 3409 */;
	const struct fs_parameter_description cocci_id/* mm/shmem.c 3403 */;
	const struct fs_parameter_enum cocci_id/* mm/shmem.c 3395 */[];
	const struct fs_parameter_spec cocci_id/* mm/shmem.c 3383 */[];
	enum shmem_param{Opt_gid, Opt_huge, Opt_mode, Opt_mpol, Opt_nr_blocks, Opt_nr_inodes, Opt_size, Opt_uid,} cocci_id/* mm/shmem.c 3372 */;
	const struct export_operations cocci_id/* mm/shmem.c 3366 */;
	__u64 cocci_id/* mm/shmem.c 3360 */;
	__u32 *cocci_id/* mm/shmem.c 3336 */;
	struct fid *cocci_id/* mm/shmem.c 3314 */;
	const struct xattr_handler *cocci_id/* mm/shmem.c 3260 */[];
	const struct xattr_handler cocci_id/* mm/shmem.c 3248 */;
	const struct xattr_handler *cocci_id/* mm/shmem.c 3227 */;
	struct simple_xattr *cocci_id/* mm/shmem.c 3200 */;
	const struct xattr *cocci_id/* mm/shmem.c 3195 */;
	struct delayed_call *cocci_id/* mm/shmem.c 3161 */;
	struct kstatfs *cocci_id/* mm/shmem.c 2854 */;
	struct shmem_falloc cocci_id/* mm/shmem.c 2728 */;
	pgoff_t cocci_id/* mm/shmem.c 2644 */[PAGEVEC_SIZE];
	struct file_system_type cocci_id/* mm/shmem.c 254 */;
	const struct inode_operations cocci_id/* mm/shmem.c 251 */;
	const struct super_operations cocci_id/* mm/shmem.c 247 */;
	int cocci_id/* mm/shmem.c 2464 */(struct inode *, const struct xattr *, void *);
	const struct inode *cocci_id/* mm/shmem.c 2238 */;
	struct shmem_falloc *cocci_id/* mm/shmem.c 2018 */;
	enum sgp_type cocci_id/* mm/shmem.c 1996 */;
	vm_fault_t *cocci_id/* mm/shmem.c 1744 */;
	struct shmem_sb_info *cocci_id/* mm/shmem.c 158 */;
	struct shmem_inode_info *cocci_id/* mm/shmem.c 1509 */;
	int cocci_id/* mm/shmem.c 146 */(struct inode *inode, pgoff_t index, struct page **pagep, enum sgp_type sgp, gfp_t gfp, struct vm_area_struct *vma, struct vm_fault *vmf, vm_fault_t *fault_type);
	int cocci_id/* mm/shmem.c 142 */(struct inode *inode, pgoff_t index, struct page **pagep, enum sgp_type sgp, gfp_t gfp, struct vm_area_struct *vma, vm_fault_t *fault_type);
	int cocci_id/* mm/shmem.c 140 */(struct page **pagep, gfp_t gfp, struct shmem_inode_info *info, pgoff_t index);
	bool cocci_id/* mm/shmem.c 139 */(struct page *page, gfp_t gfp);
	struct swap_info_struct *cocci_id/* mm/shmem.c 1119 */[];
	struct shmem_options {
		unsigned long long blocks;
		unsigned long long inodes;
		struct mempolicy *mpol;
		kuid_t uid;
		kgid_t gid;
		umode_t mode;
		int huge;
		int seen;
#define SHMEM_SEEN_BLOCKS 1
#define SHMEM_SEEN_INODES 2
#define SHMEM_SEEN_HUGE 4
	} cocci_id/* mm/shmem.c 111 */;
	struct shmem_falloc {
		wait_queue_head_t *waitq;
		pgoff_t start;
		pgoff_t next;
		pgoff_t nr_falloced;
		pgoff_t nr_unswapped;
	} cocci_id/* mm/shmem.c 103 */;
	struct iattr *cocci_id/* mm/shmem.c 1017 */;
	struct page_referenced_arg cocci_id/* mm/rmap.c 863 */;
	struct page_referenced_arg *cocci_id/* mm/rmap.c 838 */;
	struct page_referenced_arg {
		int mapcount;
		int referenced;
		unsigned long vm_flags;
		struct mem_cgroup *memcg;
	} cocci_id/* mm/rmap.c 765 */;
	struct tlbflush_unmap_batch *cocci_id/* mm/rmap.c 625 */;
	struct anon_vma cocci_id/* mm/rmap.c 454 */;
	atomic_t *cocci_id/* mm/rmap.c 1125 */;
	struct iovec *cocci_id/* mm/process_vm_access.c 321 */;
	struct iovec cocci_id/* mm/process_vm_access.c 319 */[UIO_FASTIOV];
	const struct compat_iovec __user *cocci_id/* mm/process_vm_access.c 313 */;
	compat_pid_t cocci_id/* mm/process_vm_access.c 312 */;
	const struct iovec *cocci_id/* mm/process_vm_access.c 294 */;
	const struct iovec __user *cocci_id/* mm/process_vm_access.c 255 */;
	struct pages *cocci_id/* mm/process_vm_access.c 189 */;
	struct page *cocci_id/* mm/process_vm_access.c 157 */[PVM_MAX_PP_ARRAY_COUNT];
	unsigned long cocci_id/* mm/percpu.c 2946 */[NR_CPUS]__read_mostly;
	struct vm_struct cocci_id/* mm/percpu.c 2832 */;
	pcpu_fc_populate_pte_fn_t cocci_id/* mm/percpu.c 2830 */;
	pcpu_fc_free_fn_t cocci_id/* mm/percpu.c 2702 */;
	pcpu_fc_alloc_fn_t cocci_id/* mm/percpu.c 2701 */;
	struct pcpu_group_info *cocci_id/* mm/percpu.c 2644 */;
	int cocci_id/* mm/percpu.c 2534 */[NR_CPUS]__initdata;
	pcpu_fc_cpu_distance_fn_t cocci_id/* mm/percpu.c 2532 */;
	enum pcpu_fc cocci_id/* mm/percpu.c 2467 */;
	const char *constcocci_id/* mm/percpu.c 2461 */[PCPU_FC_NR]__initconst;
	const struct pcpu_block_md *cocci_id/* mm/percpu.c 235 */;
	const struct pcpu_chunk *cocci_id/* mm/percpu.c 233 */;
	const struct pcpu_group_info *cocci_id/* mm/percpu.c 2194 */;
	struct pcpu_alloc_info *cocci_id/* mm/percpu.c 2123 */;
	struct pcpu_alloc_info *__initcocci_id/* mm/percpu.c 2120 */;
	void cocci_id/* mm/percpu.c 187 */(struct work_struct *work);
	const gfp_t cocci_id/* mm/percpu.c 1835 */;
	void __percpu *cocci_id/* mm/percpu.c 1794 */;
	struct list_head *
pcpu_slot
cocci_id/* mm/percpu.c 162 */; // tick-broadcast-err
	struct pcpu_chunk *
pcpu_reserved_chunk
cocci_id/* mm/percpu.c 157 */; // tick-broadcast-err
	int __init cocci_id/* mm/percpu.c 1532 */(const struct pcpu_alloc_info *ai);
	struct page *cocci_id/* mm/percpu.c 1531 */(void *addr);
	void cocci_id/* mm/percpu.c 1530 */(struct pcpu_chunk *chunk);
	struct pcpu_chunk *cocci_id/* mm/percpu.c 1529 */(gfp_t gfp);
	void cocci_id/* mm/percpu.c 1527 */(struct pcpu_chunk *chunk, int page_start, int page_end);
	int cocci_id/* mm/percpu.c 1525 */(struct pcpu_chunk *chunk, int page_start, int page_end, gfp_t gfp);
	struct pcpu_chunk *
pcpu_first_chunk
cocci_id/* mm/percpu.c 150 */; // tick-broadcast-err
	const size_t *
pcpu_group_sizes
cocci_id/* mm/percpu.c 143 */; // tick-broadcast-err
	const unsigned long *
pcpu_group_offsets
cocci_id/* mm/percpu.c 142 */; // tick-broadcast-err
	int
pcpu_nr_groups
 cocci_id/* mm/percpu.c 141 */; // tick-broadcast-err
	const unsigned long *
pcpu_unit_offsets
cocci_id/* mm/percpu.c 138 */; // tick-broadcast-err
	const int *
pcpu_unit_map
cocci_id/* mm/percpu.c 137 */; // tick-broadcast-err
	void *
pcpu_base_addr
cocci_id/* mm/percpu.c 134 */; // tick-broadcast-err
	struct pcpu_chunk cocci_id/* mm/percpu.c 1330 */;
	unsigned int
pcpu_high_unit_cpu
 cocci_id/* mm/percpu.c 131 */; // tick-broadcast-err
	struct pcpu_chunk *__initcocci_id/* mm/percpu.c 1308 */;
	unsigned int
pcpu_low_unit_cpu
 cocci_id/* mm/percpu.c 130 */; // tick-broadcast-err
	size_t
pcpu_chunk_struct_size
 cocci_id/* mm/percpu.c 127 */; // tick-broadcast-err
	int
pcpu_nr_slots
 cocci_id/* mm/percpu.c 126 */; // tick-broadcast-err
	int
pcpu_atom_size
 cocci_id/* mm/percpu.c 125 */; // tick-broadcast-err
	int
pcpu_nr_units
 cocci_id/* mm/percpu.c 124 */; // tick-broadcast-err
	int
pcpu_unit_size
 cocci_id/* mm/percpu.c 123 */; // tick-broadcast-err
	int
pcpu_unit_pages
 cocci_id/* mm/percpu.c 122 */; // tick-broadcast-err
	void __force *cocci_id/* mm/percpu.c 112 */;
	struct vm_struct **cocci_id/* mm/percpu-vm.c 334 */;
	struct pcpu_block_md *cocci_id/* mm/percpu-stats.c 55 */;
	struct pcpu_alloc_info cocci_id/* mm/percpu-stats.c 23 */;
	struct percpu_stats cocci_id/* mm/percpu-stats.c 22 */;
	long long int cocci_id/* mm/percpu-stats.c 20 */;
	struct pcpu_chunk *cocci_id/* mm/percpu-km.c 47 */;
	const struct pcpu_alloc_info *cocci_id/* mm/percpu-km.c 101 */;
	struct mm_walk cocci_id/* mm/pagewalk.c 430 */;
	const struct mm_walk_ops *cocci_id/* mm/pagewalk.c 257 */;
	struct page_owner cocci_id/* mm/page_owner.c 93 */;
	unsigned long cocci_id/* mm/page_owner.c 58 */[4];
	unsigned long cocci_id/* mm/page_owner.c 261 */[MIGRATE_TYPES];
	struct page_owner *cocci_id/* mm/page_owner.c 227 */;
	struct page_owner {
		unsigned short order;
		short last_migrate_reason;
		gfp_t gfp_mask;
		depot_stack_handle_t handle;
		depot_stack_handle_t free_handle;
	} cocci_id/* mm/page_owner.c 22 */;
	unsigned long cocci_id/* mm/page_owner.c 118 */[PAGE_OWNER_STACK_DEPTH];
	struct memory_isolate_notify cocci_id/* mm/page_isolation.c 22 */;
	struct block_device *cocci_id/* mm/page_io.c 37 */;
	struct gendisk *cocci_id/* mm/page_io.c 357 */;
	blk_qc_t cocci_id/* mm/page_io.c 356 */;
	struct iov_iter cocci_id/* mm/page_io.c 295 */;
	struct bio_vec cocci_id/* mm/page_io.c 290 */;
	struct kiocb cocci_id/* mm/page_io.c 287 */;
	struct bio *cocci_id/* mm/page_io.c 281 */;
	bio_end_io_t cocci_id/* mm/page_io.c 279 */;
	sector_t cocci_id/* mm/page_io.c 156 */;
	sector_t *cocci_id/* mm/page_io.c 149 */;
	struct page_ext_operations cocci_id/* mm/page_idle.c 222 */;
	struct bin_attribute *cocci_id/* mm/page_idle.c 207 */[];
	struct bin_attribute cocci_id/* mm/page_idle.c 203 */;
	const u64 *cocci_id/* mm/page_idle.c 170 */;
	struct bin_attribute *cocci_id/* mm/page_idle.c 122 */;
	const struct rmap_walk_control cocci_id/* mm/page_idle.c 101 */;
	struct page_ext cocci_id/* mm/page_ext.c 70 */;
	struct page_ext_operations *cocci_id/* mm/page_ext.c 61 */[];
	struct page_ext *cocci_id/* mm/page_ext.c 276 */;
	struct page_counter **cocci_id/* mm/page_counter.c 101 */;
	const struct zone *cocci_id/* mm/page_alloc.c 8547 */;
	unsigned long __maybe_unused cocci_id/* mm/page_alloc.c 6827 */;
	struct mminit_pfnnid_cache *cocci_id/* mm/page_alloc.c 6240 */;
	struct per_cpu_pageset cocci_id/* mm/page_alloc.c 6174 */;
	void __meminit __weak cocci_id/* mm/page_alloc.c 6032 */;
	enum memmap_context cocci_id/* mm/page_alloc.c 5882 */;
	void __init cocci_id/* mm/page_alloc.c 5789 */;
	void cocci_id/* mm/page_alloc.c 5742 */(struct per_cpu_pageset *p, unsigned long batch);
	char cocci_id/* mm/page_alloc.c 5497 */[];
	unsigned char cocci_id/* mm/page_alloc.c 5404 */[MAX_ORDER];
	unsigned long cocci_id/* mm/page_alloc.c 5403 */[MAX_ORDER];
	char cocci_id/* mm/page_alloc.c 5228 */[MIGRATE_TYPES + 1];
	const char cocci_id/* mm/page_alloc.c 5216 */[MIGRATE_TYPES];
	struct sysinfo *cocci_id/* mm/page_alloc.c 5146 */;
	unsigned long cocci_id/* mm/page_alloc.c 5105 */[NR_LRU_LISTS];
	void *__meminitcocci_id/* mm/page_alloc.c 5001 */;
	struct page_frag_cache *cocci_id/* mm/page_alloc.c 4849 */;
	struct alloc_context cocci_id/* mm/page_alloc.c 4731 */;
	gfp_t *cocci_id/* mm/page_alloc.c 4676 */;
	bool __meminit cocci_id/* mm/page_alloc.c 404 */;
	enum compact_priority *cocci_id/* mm/page_alloc.c 3944 */;
	bool __meminit cocci_id/* mm/page_alloc.c 390 */;
	enum compact_result *cocci_id/* mm/page_alloc.c 3889 */;
	struct va_format cocci_id/* mm/page_alloc.c 3749 */;
	unsigned long cocci_id/* mm/page_alloc.c 345 */[MAX_NUMNODES]__initdata;
	unsigned long cocci_id/* mm/page_alloc.c 340 */[MAX_NR_ZONES]__initdata;
	struct {
		struct fault_attr attr;
		bool ignore_gfp_highmem;
		bool ignore_gfp_reclaim;
		u32 min_order;
	} cocci_id/* mm/page_alloc.c 3323 */;
	struct per_cpu_pages *cocci_id/* mm/page_alloc.c 3217 */;
	enum numa_stat_item cocci_id/* mm/page_alloc.c 3195 */;
	compound_page_dtor *constcocci_id/* mm/page_alloc.c 305 */[]; // err
	struct pcpu_drain *cocci_id/* mm/page_alloc.c 2951 */;
	struct per_cpu_pageset *cocci_id/* mm/page_alloc.c 2926 */;
	const char *constcocci_id/* mm/page_alloc.c 292 */[MIGRATE_TYPES]; // err
	cpumask_t cocci_id/* mm/page_alloc.c 2899 */;
	struct pcpu_drain cocci_id/* mm/page_alloc.c 2870 */;
	char *constcocci_id/* mm/page_alloc.c 275 */[MAX_NR_ZONES]; // err
	int cocci_id/* mm/page_alloc.c 261 */[MAX_NR_ZONES];
	int cocci_id/* mm/page_alloc.c 2220 */[MIGRATE_TYPES][4];
	bool __ref cocci_id/* mm/page_alloc.c 1926 */;
	bool __init cocci_id/* mm/page_alloc.c 1849 */;
	unsigned long __init cocci_id/* mm/page_alloc.c 1729 */;
	bool __init cocci_id/* mm/page_alloc.c 1623 */;
	struct mminit_pfnnid_cache cocci_id/* mm/page_alloc.c 1460 */;
	nodemask_t cocci_id/* mm/page_alloc.c 117 */[NR_NODE_STATES]__read_mostly;
	volatile unsigned long
latent_entropy
 cocci_id/* mm/page_alloc.c 110 */; // tick-broadcast-err
	struct pcpu_drain {
		struct zone *zone;
		struct work_struct work;
	} cocci_id/* mm/page_alloc.c 102 */;
	s64 cocci_id/* mm/page-writeback.c 819 */;
	struct dirty_throttle_control *cocci_id/* mm/page-writeback.c 764 */;
	struct fprop_local_percpu *cocci_id/* mm/page-writeback.c 578 */;
	struct wb_lock_cookie cocci_id/* mm/page-writeback.c 2623 */;
	int (*cocci_id/* mm/page-writeback.c 2555 */)(struct page *);
	struct writeback_control *cocci_id/* mm/page-writeback.c 2299 */;
	writepage_t cocci_id/* mm/page-writeback.c 2159 */;
	struct timer_list *cocci_id/* mm/page-writeback.c 1997 */;
	struct dirty_throttle_control *constcocci_id/* mm/page-writeback.c 1566 */;
	struct dirty_throttle_control cocci_id/* mm/page-writeback.c 1564 */;
	struct dirty_throttle_control {
#ifdef CONFIG_CGROUP_WRITEBACK
		struct wb_domain *dom;
		struct dirty_throttle_control *gdtc;
#endif
		struct bdi_writeback *wb;
		struct fprop_local_percpu *wb_completions;
		unsigned long avail;
		unsigned long dirty;
		unsigned long thresh;
		unsigned long bg_thresh;
		unsigned long wb_dirty;
		unsigned long wb_thresh;
		unsigned long wb_bg_thresh;
		unsigned long pos_ratio;
	} cocci_id/* mm/page-writeback.c 129 */;
	struct wb_domain cocci_id/* mm/page-writeback.c 126 */;
	struct oom_control *cocci_id/* mm/oom_kill.c 999 */;
	struct signal_struct *cocci_id/* mm/oom_kill.c 783 */;
	enum oom_constraint cocci_id/* mm/oom_kill.c 252 */;
	struct vm_region *cocci_id/* mm/nommu.c 555 */;
	struct vm_region cocci_id/* mm/nommu.c 507 */;
	void __weak cocci_id/* mm/nommu.c 376 */;
	struct vm_userfaultfd_ctx *cocci_id/* mm/mremap.c 321 */;
	pgprot_t *cocci_id/* mm/mprotect.c 322 */;
	struct lruvec cocci_id/* mm/mmzone.c 93 */;
	const struct mmu_interval_notifier_ops *cocci_id/* mm/mmu_notifier.c 853 */;
	struct mmu_notifier_mm *cocci_id/* mm/mmu_notifier.c 852 */;
	struct mmu_interval_notifier *cocci_id/* mm/mmu_notifier.c 851 */;
	struct mmu_notifier cocci_id/* mm/mmu_notifier.c 802 */;
	const struct mmu_notifier_ops *cocci_id/* mm/mmu_notifier.c 676 */;
	struct mmu_notifier_mm cocci_id/* mm/mmu_notifier.c 589 */;
	struct mmu_notifier *cocci_id/* mm/mmu_notifier.c 411 */;
	struct mmu_notifier_mm {
		struct hlist_head list;
		bool has_itree;
		spinlock_t lock;
		unsigned long invalidate_seq;
		unsigned long active_invalidate_ranges;
		struct rb_root_cached itree;
		wait_queue_head_t wq;
		struct hlist_head deferred_list;
	} cocci_id/* mm/mmu_notifier.c 37 */;
	struct mmu_interval_notifier cocci_id/* mm/mmu_notifier.c 125 */;
	struct interval_tree_node *cocci_id/* mm/mmu_notifier.c 119 */;
	const struct mmu_notifier_range *cocci_id/* mm/mmu_notifier.c 1044 */;
	struct mmu_gather_batch *cocci_id/* mm/mmu_gather.c 68 */;
	struct mmu_table_batch *cocci_id/* mm/mmu_gather.c 162 */;
	struct mmu_table_batch **cocci_id/* mm/mmu_gather.c 159 */;
	struct mmu_table_batch cocci_id/* mm/mmu_gather.c 138 */;
	void cocci_id/* mm/mmap.c 76 */(struct mm_struct *mm, struct vm_area_struct *vma, struct vm_area_struct *prev, unsigned long start, unsigned long end);
	struct rb_node ***cocci_id/* mm/mmap.c 536 */;
	const struct vm_special_mapping *cocci_id/* mm/mmap.c 3439 */;
	const struct vm_operations_struct *cocci_id/* mm/mmap.c 3386 */;
	struct vm_special_mapping *cocci_id/* mm/mmap.c 3361 */;
	vm_fault_t cocci_id/* mm/mmap.c 3313 */(struct vm_fault *vmf);
	unsigned long (*cocci_id/* mm/mmap.c 2182 */)(struct file *, unsigned long, unsigned long, unsigned long, unsigned long);
	struct vm_unmapped_area_info cocci_id/* mm/mmap.c 2094 */;
	int cocci_id/* mm/mmap.c 191 */(unsigned long addr, unsigned long request, unsigned long flags, struct list_head *uf);
	struct vm_unmapped_area_info *cocci_id/* mm/mmap.c 1865 */;
	struct mmap_arg_struct cocci_id/* mm/mmap.c 1633 */;
	struct mmap_arg_struct *cocci_id/* mm/mmap.c 1631 */;
	struct mmap_arg_struct {
		unsigned long addr;
		unsigned long len;
		unsigned long prot;
		unsigned long flags;
		unsigned long fd;
		unsigned long offset;
	} cocci_id/* mm/mmap.c 1622 */;
	struct vm_userfaultfd_ctx cocci_id/* mm/mmap.c 1066 */;
	pgprot_t cocci_id/* mm/mmap.c 100 */[16];
	int __meminitdata cocci_id/* mm/mm_init.c 19 */;
	struct notifier_block cocci_id/* mm/mm_init.c 168 */;
	s32 cocci_id/* mm/mm_init.c 146 */;
	struct user_struct *cocci_id/* mm/mlock.c 845 */;
	munlockall cocci_id/* mm/mlock.c 828 */;
	unsigned char *cocci_id/* mm/mincore.c 96 */;
	struct buffer_head *cocci_id/* mm/migrate.c 740 */;
	struct rmap_walk_control cocci_id/* mm/migrate.c 291 */;
	struct migrate_vma *cocci_id/* mm/migrate.c 2329 */;
	const int *cocci_id/* mm/migrate.c 1814 */;
	int cocci_id/* mm/migrate.c 1722 */[DO_PAGES_STAT_CHUNK_NR];
	const void __user *cocci_id/* mm/migrate.c 1721 */[DO_PAGES_STAT_CHUNK_NR];
	const void __user **cocci_id/* mm/migrate.c 1678 */;
	const int __user *cocci_id/* mm/migrate.c 1591 */;
	const void __user *__user*cocci_id/* mm/migrate.c 1590 */;
	free_page_t cocci_id/* mm/migrate.c 1396 */;
	new_page_t cocci_id/* mm/migrate.c 1395 */;
	enum migrate_reason cocci_id/* mm/migrate.c 1168 */;
	u64 cocci_id/* mm/memtest.c 7 */[]__initdata;
	const struct resource *cocci_id/* mm/memremap.c 64 */;
	struct dev_pagemap cocci_id/* mm/memremap.c 147 */;
	mempool_t *cocci_id/* mm/mempool.c 42 */;
	mempool_free_t *cocci_id/* mm/mempool.c 254 */;
	mempool_alloc_t *cocci_id/* mm/mempool.c 253 */;
	struct queue_pages cocci_id/* mm/mempolicy.c 692 */;
	struct queue_pages *cocci_id/* mm/mempolicy.c 561 */;
	struct queue_pages {
		struct list_head *pagelist;
		unsigned long flags;
		nodemask_t *nmask;
		unsigned long start;
		unsigned long end;
		struct vm_area_struct *first;
	} cocci_id/* mm/mempolicy.c 409 */;
	int cocci_id/* mm/mempolicy.c 406 */(struct page *page, struct list_head *pagelist, unsigned long flags);
	const struct mempolicy_operations cocci_id/* mm/mempolicy.c 388 */[MPOL_MAX];
	int __initdata cocci_id/* mm/mempolicy.c 2677 */;
	struct sp_node cocci_id/* mm/mempolicy.c 2669 */;
	struct sp_node *cocci_id/* mm/mempolicy.c 2661 */;
	struct shared_policy *cocci_id/* mm/mempolicy.c 2659 */;
	struct nodemask_scratch *cocci_id/* mm/mempolicy.c 204 */;
	nodemask_t **cocci_id/* mm/mempolicy.c 1958 */;
	struct mempolicy **cocci_id/* mm/mempolicy.c 1958 */;
	int __user *cocci_id/* mm/mempolicy.c 1571 */;
	const struct mempolicy *cocci_id/* mm/mempolicy.c 154 */;
	const struct mempolicy_operations {
		int (*create)(struct mempolicy *pol, const nodemask_t *nodes);
		void (*rebind)(struct mempolicy *pol, const nodemask_t *nodes);
	} cocci_id/* mm/mempolicy.c 149 */[MPOL_MAX];
	pid_t cocci_id/* mm/mempolicy.c 1474 */;
	char __user *cocci_id/* mm/mempolicy.c 1412 */;
	unsigned long __user *cocci_id/* mm/mempolicy.c 1403 */;
	const unsigned long __user *cocci_id/* mm/mempolicy.c 1342 */;
	struct mempolicy cocci_id/* mm/mempolicy.c 128 */[MAX_NUMNODES];
	struct mempolicy cocci_id/* mm/mempolicy.c 122 */;
	const nodemask_t *cocci_id/* mm/mempolicy.c 1074 */;
	struct per_cpu_nodestat *cocci_id/* mm/memory_hotplug.c 913 */;
	struct per_cpu_nodestat cocci_id/* mm/memory_hotplug.c 900 */;
	pg_data_t __ref *cocci_id/* mm/memory_hotplug.c 888 */;
	void __meminit cocci_id/* mm/memory_hotplug.c 683 */;
	online_page_callback_t cocci_id/* mm/memory_hotplug.c 52 */;
	struct mem_section *cocci_id/* mm/memory_hotplug.c 512 */;
	struct vmem_altmap *cocci_id/* mm/memory_hotplug.c 306 */;
	struct mhp_restrictions *cocci_id/* mm/memory_hotplug.c 302 */;
	const u64 cocci_id/* mm/memory_hotplug.c 282 */;
	struct pglist_data cocci_id/* mm/memory_hotplug.c 229 */;
	struct mem_section_usage *cocci_id/* mm/memory_hotplug.c 169 */;
	struct memory_block *cocci_id/* mm/memory_hotplug.c 1652 */;
	struct memory_notify cocci_id/* mm/memory_hotplug.c 1501 */;
	struct resource *cocci_id/* mm/memory_hotplug.c 1107 */;
	struct mhp_restrictions cocci_id/* mm/memory_hotplug.c 1030 */;
	int cocci_id/* mm/memory.c 810 */[NR_MM_COUNTERS];
	spinlock_t cocci_id/* mm/memory.c 4731 */;
	struct copy_subpage_arg cocci_id/* mm/memory.c 4677 */;
	struct copy_subpage_arg *cocci_id/* mm/memory.c 4665 */;
	struct copy_subpage_arg {
		struct page *dst;
		struct page *src;
		struct vm_area_struct *vma;
	} cocci_id/* mm/memory.c 4657 */;
	void (*cocci_id/* mm/memory.c 4558 */)(unsigned long addr, int idx, void *arg);
	resource_size_t *cocci_id/* mm/memory.c 4335 */;
	spinlock_t **cocci_id/* mm/memory.c 4212 */;
	pte_t **cocci_id/* mm/memory.c 4212 */;
	pmd_t **cocci_id/* mm/memory.c 4212 */;
	struct mmu_notifier_range *cocci_id/* mm/memory.c 4211 */;
	const loff_t cocci_id/* mm/memory.c 2806 */;
	struct zap_details cocci_id/* mm/memory.c 2774 */;
	struct zap_details *cocci_id/* mm/memory.c 2735 */;
	pte_fn_t cocci_id/* mm/memory.c 2097 */;
	enum mf_result cocci_id/* mm/memory-failure.c 875 */;
	enum mf_action_page_type cocci_id/* mm/memory-failure.c 874 */;
	dev_t cocci_id/* mm/memory-failure.c 84 */;
	struct page_state {
		unsigned long mask;
		unsigned long res;
		enum mf_action_page_type type;
		int (*action)(struct page *p, unsigned long pfn);
	} cocci_id/* mm/memory-failure.c 821 */[];
	const char *cocci_id/* mm/memory-failure.c 516 */[];
	struct to_kill cocci_id/* mm/memory-failure.c 313 */;
	struct to_kill *cocci_id/* mm/memory-failure.c 311 */;
	short cocci_id/* mm/memory-failure.c 212 */;
	struct to_kill {
		struct list_head nd;
		struct task_struct *tsk;
		unsigned long addr;
		short size_shift;
	} cocci_id/* mm/memory-failure.c 197 */;
	struct memory_failure_cpu *cocci_id/* mm/memory-failure.c 1487 */;
	struct memory_failure_entry cocci_id/* mm/memory-failure.c 1447 */;
	struct memory_failure_cpu {
		DECLARE_KFIFO(fifo,struct memory_failure_entry,MEMORY_FAILURE_FIFO_SIZE);
		spinlock_t lock;
		struct work_struct work;
	} cocci_id/* mm/memory-failure.c 1418 */;
	struct memory_failure_entry {
		unsigned long pfn;
		int flags;
	} cocci_id/* mm/memory-failure.c 1413 */;
	dax_entry_t cocci_id/* mm/memory-failure.c 1152 */;
	struct page_state *cocci_id/* mm/memory-failure.c 1050 */;
	struct xa_state *cocci_id/* mm/memfd.c 31 */;
	enum mem_cgroup_events_target cocci_id/* mm/memcontrol.c 856 */;
	enum node_stat_item cocci_id/* mm/memcontrol.c 758 */;
	struct sock *cocci_id/* mm/memcontrol.c 6714 */;
	struct uncharge_gather cocci_id/* mm/memcontrol.c 6629 */;
	const struct uncharge_gather *cocci_id/* mm/memcontrol.c 6520 */;
	struct uncharge_gather *cocci_id/* mm/memcontrol.c 6515 */;
	struct uncharge_gather {
		struct mem_cgroup *memcg;
		unsigned long pgpgout;
		unsigned long nr_anon;
		unsigned long nr_file;
		unsigned long nr_kmem;
		unsigned long nr_huge;
		unsigned long nr_shmem;
		struct page *dummy_page;
	} cocci_id/* mm/memcontrol.c 6504 */;
	enum mem_cgroup_protection cocci_id/* mm/memcontrol.c 6277 */;
	atomic_long_t *cocci_id/* mm/memcontrol.c 6065 */;
	union mc_target cocci_id/* mm/memcontrol.c 5722 */;
	struct cgroup_taskset *cocci_id/* mm/memcontrol.c 5637 */;
	union mc_target *cocci_id/* mm/memcontrol.c 5432 */;
	enum mc_target_type cocci_id/* mm/memcontrol.c 5431 */;
	struct mem_cgroup_per_node cocci_id/* mm/memcontrol.c 529 */;
	swp_entry_t *cocci_id/* mm/memcontrol.c 5256 */;
	enum mc_target_type{MC_TARGET_NONE=0, MC_TARGET_PAGE, MC_TARGET_SWAP, MC_TARGET_DEVICE,} cocci_id/* mm/memcontrol.c 5184 */;
	union mc_target {
		struct page *page;
		swp_entry_t ent;
	} cocci_id/* mm/memcontrol.c 5179 */;
	struct mem_cgroup_tree_per_node *cocci_id/* mm/memcontrol.c 513 */;
	struct mem_cgroup_event *cocci_id/* mm/memcontrol.c 5071 */;
	struct cgroup_subsys_state *__refcocci_id/* mm/memcontrol.c 4986 */;
	struct memcg_vmstats_percpu cocci_id/* mm/memcontrol.c 4941 */;
	int __maybe_unused cocci_id/* mm/memcontrol.c 4926 */;
	struct lruvec_stat cocci_id/* mm/memcontrol.c 4864 */;
	ino_t cocci_id/* mm/memcontrol.c 472 */;
	struct cftype cocci_id/* mm/memcontrol.c 4649 */[];
	struct mem_cgroup_event cocci_id/* mm/memcontrol.c 4504 */;
	poll_table *cocci_id/* mm/memcontrol.c 4501 */;
	__poll_t cocci_id/* mm/memcontrol.c 4473 */;
	struct memcg_cgwb_frn *cocci_id/* mm/memcontrol.c 4390 */;
	struct wb_domain *cocci_id/* mm/memcontrol.c 4217 */;
	struct mem_cgroup_threshold cocci_id/* mm/memcontrol.c 3989 */;
	struct mem_cgroup_thresholds *cocci_id/* mm/memcontrol.c 3951 */;
	enum res_type cocci_id/* mm/memcontrol.c 3949 */;
	struct eventfd_ctx *cocci_id/* mm/memcontrol.c 3949 */;
	struct mem_cgroup_eventfd_list *cocci_id/* mm/memcontrol.c 3929 */;
	const struct mem_cgroup_threshold *cocci_id/* mm/memcontrol.c 3915 */;
	struct mem_cgroup_threshold_ary *cocci_id/* mm/memcontrol.c 3853 */;
	struct zone_reclaim_stat *cocci_id/* mm/memcontrol.c 3804 */;
	const unsigned int cocci_id/* mm/memcontrol.c 3737 */[];
	const char *constcocci_id/* mm/memcontrol.c 3725 */[]; // err
	struct memcg_shrinker_map *cocci_id/* mm/memcontrol.c 372 */;
	const struct numa_stat *cocci_id/* mm/memcontrol.c 3677 */;
	const struct numa_stat cocci_id/* mm/memcontrol.c 3671 */[];
	struct numa_stat {
		const char *name;
		unsigned int lru_mask;
	} cocci_id/* mm/memcontrol.c 3666 */;
	enum lru_list cocci_id/* mm/memcontrol.c 3638 */;
	unsigned long cocci_id/* mm/memcontrol.c 3339 */[NR_VM_EVENT_ITEMS];
	unsigned long cocci_id/* mm/memcontrol.c 3292 */[MEMCG_NR_STAT];
	enum{RES_USAGE, RES_LIMIT, RES_MAX_USAGE, RES_FAILCNT, RES_SOFT_LIMIT,} cocci_id/* mm/memcontrol.c 3239 */;
	struct memcg_shrinker_map cocci_id/* mm/memcontrol.c 319 */;
	struct memcg_cache_array *cocci_id/* mm/memcontrol.c 2752 */;
	struct memcg_kmem_cache_create_work cocci_id/* mm/memcontrol.c 2693 */;
	struct memcg_kmem_cache_create_work *cocci_id/* mm/memcontrol.c 2692 */;
	struct memcg_kmem_cache_create_work {
		struct mem_cgroup *memcg;
		struct kmem_cache *cachep;
		struct work_struct work;
	} cocci_id/* mm/memcontrol.c 2684 */;
	struct vmpressure *cocci_id/* mm/memcontrol.c 247 */;
	struct mem_cgroup cocci_id/* mm/memcontrol.c 2240 */;
	enum res_type{_MEM, _MEMSWAP, _OOM_TYPE, _KMEM, _TCP,} cocci_id/* mm/memcontrol.c 211 */;
	struct memcg_stock_pcp *cocci_id/* mm/memcontrol.c 2055 */;
	struct memcg_stock_pcp {
		struct mem_cgroup *cached;
		unsigned int nr_pages;
		struct work_struct work;
		unsigned long flags;
#define FLUSHING_CACHED_CHARGE 0
	} cocci_id/* mm/memcontrol.c 2032 */;
	enum charge_type{MEM_CGROUP_CHARGE_TYPE_CACHE=0, MEM_CGROUP_CHARGE_TYPE_ANON, MEM_CGROUP_CHARGE_TYPE_SWAPOUT, MEM_CGROUP_CHARGE_TYPE_DROP, NR_CHARGE_TYPE,} cocci_id/* mm/memcontrol.c 202 */;
	struct oom_wait_info cocci_id/* mm/memcontrol.c 1839 */;
	struct move_charge_struct {
		spinlock_t lock;
		struct mm_struct *mm;
		struct mem_cgroup *from;
		struct mem_cgroup *to;
		unsigned long flags;
		unsigned long precharge;
		unsigned long moved_charge;
		unsigned long moved_swap;
		struct task_struct *moving_task;
		wait_queue_head_t waitq;
	} cocci_id/* mm/memcontrol.c 179 */;
	enum oom_status cocci_id/* mm/memcontrol.c 1761 */;
	enum oom_status{OOM_SUCCESS, OOM_FAILED, OOM_ASYNC, OOM_SKIPPED,} cocci_id/* mm/memcontrol.c 1754 */;
	struct oom_wait_info *cocci_id/* mm/memcontrol.c 1729 */;
	struct oom_wait_info {
		struct mem_cgroup *memcg;
		wait_queue_entry_t wait;
	} cocci_id/* mm/memcontrol.c 1719 */;
	void cocci_id/* mm/memcontrol.c 168 */(struct mem_cgroup *memcg);
	struct lockdep_map cocci_id/* mm/memcontrol.c 1631 */;
	struct mem_cgroup_reclaim_cookie cocci_id/* mm/memcontrol.c 1590 */;
	struct oom_control cocci_id/* mm/memcontrol.c 1560 */;
	struct seq_buf cocci_id/* mm/memcontrol.c 1357 */;
	struct mem_cgroup_event {
		struct mem_cgroup *memcg;
		struct eventfd_ctx *eventfd;
		struct list_head list;
		int (*register_event)(struct mem_cgroup *memcg, struct eventfd_ctx *eventfd, const char *args);
		void (*unregister_event)(struct mem_cgroup *memcg, struct eventfd_ctx *eventfd);
		poll_table pt;
		wait_queue_head_t *wqh;
		wait_queue_entry_t wait;
		struct work_struct remove;
	} cocci_id/* mm/memcontrol.c 130 */;
	struct mem_cgroup_eventfd_list {
		struct list_head list;
		struct eventfd_ctx *eventfd;
	} cocci_id/* mm/memcontrol.c 122 */;
	struct mem_cgroup_tree cocci_id/* mm/memcontrol.c 119 */;
	struct css_task_iter cocci_id/* mm/memcontrol.c 1185 */;
	int (*cocci_id/* mm/memcontrol.c 1177 */)(struct task_struct *, void *);
	struct mem_cgroup_tree {
		struct mem_cgroup_tree_per_node *rb_tree_per_node[MAX_NUMNODES];
	} cocci_id/* mm/memcontrol.c 115 */;
	struct mem_cgroup_per_node *cocci_id/* mm/memcontrol.c 1132 */;
	struct mem_cgroup_reclaim_iter *cocci_id/* mm/memcontrol.c 1131 */;
	struct mem_cgroup_tree_per_node {
		struct rb_root rb_root;
		struct rb_node *rb_rightmost;
		spinlock_t lock;
	} cocci_id/* mm/memcontrol.c 109 */;
	struct mem_cgroup_reclaim_cookie *cocci_id/* mm/memcontrol.c 1006 */;
	struct pglist_data __refdata cocci_id/* mm/memblock.c 95 */;
	int
__init_memblock
 cocci_id/* mm/memblock.c 693 */; // tick-broadcast-err
	struct memblock_region cocci_id/* mm/memblock.c 380 */;
	unsigned long __init cocci_id/* mm/memblock.c 1947 */;
	void
__init_memblock
 cocci_id/* mm/memblock.c 1904 */; // tick-broadcast-err
	enum memblock_flags cocci_id/* mm/memblock.c 188 */;
	phys_addr_t
__init_memblock
 cocci_id/* mm/memblock.c 185 */; // tick-broadcast-err
	bool
__init_memblock
 cocci_id/* mm/memblock.c 1779 */; // tick-broadcast-err
	struct memblock_region *cocci_id/* mm/memblock.c 1669 */;
	phys_addr_t
__init_memblock
 cocci_id/* mm/memblock.c 1666 */; // tick-broadcast-err
	unsigned long
__init_memblock
 cocci_id/* mm/memblock.c 152 */; // tick-broadcast-err
	void *__initcocci_id/* mm/memblock.c 1504 */;
	int
memblock_reserved_in_slab
 cocci_id/* mm/memblock.c 136 */; // tick-broadcast-err
	int
memblock_memory_in_slab
 cocci_id/* mm/memblock.c 135 */; // tick-broadcast-err
	phys_addr_t __init cocci_id/* mm/memblock.c 1340 */;
	int
memblock_can_resize
 cocci_id/* mm/memblock.c 134 */; // tick-broadcast-err
	bool
system_has_some_mirror
 cocci_id/* mm/memblock.c 133 */; // tick-broadcast-err
	int
memblock_debug
 cocci_id/* mm/memblock.c 132 */; // tick-broadcast-err
	void
__init_memblock
 cocci_id/* mm/memblock.c 1266 */; // tick-broadcast-err
	struct memblock_type *cocci_id/* mm/memblock.c 1196 */;
	struct memblock cocci_id/* mm/memblock.c 110 */;
	struct memblock_region cocci_id/* mm/memblock.c 107 */[INIT_PHYSMEM_REGIONS];
	struct memblock_region cocci_id/* mm/memblock.c 105 */[INIT_MEMBLOCK_RESERVED_REGIONS];
	struct memblock_region cocci_id/* mm/memblock.c 104 */[INIT_MEMBLOCK_REGIONS];
	unsigned long long cocci_id/* mm/memblock.c 102 */;
	phys_addr_t *cocci_id/* mm/memblock.c 1014 */;
	struct clean_walk *cocci_id/* mm/mapping_dirty_helpers.c 90 */;
	struct wp_walk *cocci_id/* mm/mapping_dirty_helpers.c 89 */;
	struct clean_walk {
		struct wp_walk base;
		pgoff_t bitmap_pgoff;
		unsigned long *bitmap;
		pgoff_t start;
		pgoff_t end;
	} cocci_id/* mm/mapping_dirty_helpers.c 63 */;
	struct clean_walk cocci_id/* mm/mapping_dirty_helpers.c 297 */;
	struct wp_walk cocci_id/* mm/mapping_dirty_helpers.c 243 */;
	struct wp_walk {
		struct mmu_notifier_range range;
		unsigned long tlbflush_start;
		unsigned long tlbflush_end;
		unsigned long total;
	} cocci_id/* mm/mapping_dirty_helpers.c 16 */;
	struct madvise_walk_private cocci_id/* mm/madvise.c 475 */;
	struct madvise_walk_private {
		struct mmu_gather *tlb;
		bool pageout;
	} cocci_id/* mm/madvise.c 35 */;
	struct madvise_walk_private *cocci_id/* mm/madvise.c 304 */;
	struct blk_plug cocci_id/* mm/madvise.c 1055 */;
	long __weak cocci_id/* mm/maccess.c 83 */(void *dst, const void __user *src, size_t size)
    __attribute__((alias("__probe_user_read"))); // err
	mm_segment_t cocci_id/* mm/maccess.c 63 */;
	long __weak cocci_id/* mm/maccess.c 54 */(void *dst, const void *src, size_t size)
    __attribute__((alias("__probe_kernel_read"))); // err
	const char __user __force *cocci_id/* mm/maccess.c 197 */;
	long __weak cocci_id/* mm/maccess.c 177 */(char *dst, const void *unsafe_addr, long count)
    __attribute__((alias("__strncpy_from_unsafe"))); // err
	long __weak cocci_id/* mm/maccess.c 136 */(void __user *dst, const void *src, size_t size)
    __attribute__((alias("__probe_user_write"))); // err
	long __weak cocci_id/* mm/maccess.c 110 */(void *dst, const void *src, size_t size)
    __attribute__((alias("__probe_kernel_write")));
	struct mem_cgroup **cocci_id/* mm/list_lru.c 72 */;
	struct lock_class_key *cocci_id/* mm/list_lru.c 601 */;
	struct list_lru *cocci_id/* mm/list_lru.c 600 */;
	struct list_lru_memcg cocci_id/* mm/list_lru.c 397 */;
	struct list_lru_one cocci_id/* mm/list_lru.c 349 */;
	struct list_lru_memcg *cocci_id/* mm/list_lru.c 332 */;
	enum lru_status cocci_id/* mm/list_lru.c 222 */;
	struct list_lru_one *cocci_id/* mm/list_lru.c 215 */;
	list_lru_walk_cb cocci_id/* mm/list_lru.c 211 */;
	struct list_lru_node *cocci_id/* mm/list_lru.c 210 */;
	unsigned char cocci_id/* mm/ksm.c 799 */;
	enum get_ksm_page_flags cocci_id/* mm/ksm.c 695 */;
	enum get_ksm_page_flags{GET_KSM_PAGE_NOLOCK, GET_KSM_PAGE_LOCK, GET_KSM_PAGE_TRYLOCK,} cocci_id/* mm/ksm.c 669 */;
	struct rmap_item *cocci_id/* mm/ksm.c 377 */;
	struct __struct cocci_id/* mm/ksm.c 303 */;
	struct stable_node cocci_id/* mm/ksm.c 2768 */;
	struct rmap_walk_control *cocci_id/* mm/ksm.c 2591 */;
	struct ksm_scan cocci_id/* mm/ksm.c 237 */;
	struct rb_root cocci_id/* mm/ksm.c 222 */[1];
	struct rmap_item **cocci_id/* mm/ksm.c 2189 */;
	struct rmap_item {
		struct rmap_item *rmap_list;
		union {
			struct anon_vma *anon_vma;
#ifdef CONFIG_NUMA
			int nid;
#endif
		};
		struct mm_struct *mm;
		unsigned long address;
		unsigned int oldchecksum;
		union {
			struct rb_node node;
			struct {
				struct stable_node *head;
				struct hlist_node hlist;
			};
		};
	} cocci_id/* mm/ksm.c 195 */;
	struct rmap_item cocci_id/* mm/ksm.c 1942 */;
	struct stable_node {
		union {
			struct rb_node node;
			struct {
				struct list_head *head;
				struct {
					struct hlist_node hlist_dup;
					struct list_head list;
				};
			};
		};
		struct hlist_head hlist;
		union {
			unsigned long kpfn;
			unsigned long chain_prune_time;
		};
#define STABLE_NODE_CHAIN -1024
		int rmap_hlist_len;
#ifdef CONFIG_NUMA
		int nid;
#endif
	} cocci_id/* mm/ksm.c 155 */;
	struct rb_root *cocci_id/* mm/ksm.c 1502 */;
	struct stable_node **cocci_id/* mm/ksm.c 1500 */;
	typeof(*stable_node) cocci_id/* mm/ksm.c 1483 */;
	struct ksm_scan {
		struct mm_slot *mm_slot;
		unsigned long address;
		struct rmap_item **rmap_list;
		unsigned long seqnr;
	} cocci_id/* mm/ksm.c 136 */;
	struct stable_node *cocci_id/* mm/ksm.c 1335 */;
	struct mm_slot {
		struct hlist_node link;
		struct list_head mm_list;
		struct rmap_item *rmap_list;
		struct mm_struct *mm;
	} cocci_id/* mm/ksm.c 120 */;
	struct page_vma_mapped_walk cocci_id/* mm/ksm.c 1036 */;
	const void __percpu *cocci_id/* mm/kmemleak.c 906 */;
	struct kmemleak_scan_area *cocci_id/* mm/kmemleak.c 789 */;
	struct kmemleak_object *cocci_id/* mm/kmemleak.c 659 */;
	struct kmemleak_object cocci_id/* mm/kmemleak.c 629 */;
	struct hlist_node *cocci_id/* mm/kmemleak.c 466 */;
	struct rcu_head *cocci_id/* mm/kmemleak.c 464 */;
	typeof(*object) cocci_id/* mm/kmemleak.c 431 */;
	const struct kmemleak_object *cocci_id/* mm/kmemleak.c 312 */;
	signed long cocci_id/* mm/kmemleak.c 221 */;
	struct kmemleak_object cocci_id/* mm/kmemleak.c 189 */[CONFIG_DEBUG_KMEMLEAK_MEM_POOL_SIZE];
	const char __user *cocci_id/* mm/kmemleak.c 1767 */;
	void cocci_id/* mm/kmemleak.c 1749 */(void);
	const struct seq_operations cocci_id/* mm/kmemleak.c 1691 */;
	struct kmemleak_object {
		spinlock_t lock;
		unsigned int flags;
		struct list_head object_list;
		struct list_head gray_list;
		struct rb_node rb_node;
		struct rcu_head rcu;
		atomic_t use_count;
		unsigned long pointer;
		size_t size;
		unsigned long excess_ref;
		int min_count;
		int count;
		u32 checksum;
		struct hlist_head area_list;
		unsigned long trace[MAX_TRACE];
		unsigned int trace_len;
		unsigned long jiffies;
		pid_t pid;
		char comm[TASK_COMM_LEN];
	} cocci_id/* mm/kmemleak.c 137 */;
	struct kmemleak_scan_area {
		struct hlist_node node;
		unsigned long start;
		size_t size;
	} cocci_id/* mm/kmemleak.c 120 */;
	struct test_node *cocci_id/* mm/kmemleak-test.c 88 */;
	void __exit cocci_id/* mm/kmemleak-test.c 86 */;
	struct test_node {
		long header[25];
		struct list_head list;
		long footer[25];
	} cocci_id/* mm/kmemleak-test.c 22 */;
	struct mm_slot {
		struct hlist_node hash;
		struct list_head mm_node;
		struct mm_struct *mm;
		int nr_pte_mapped_thp;
		unsigned long pte_mapped_thp[MAX_PTE_MAPPED_THP];
	} cocci_id/* mm/khugepaged.c 88 */;
	int cocci_id/* mm/khugepaged.c 705 */[MAX_NUMNODES];
	struct mm_slot *cocci_id/* mm/khugepaged.c 433 */;
	struct mm_slot cocci_id/* mm/khugepaged.c 355 */;
	struct attribute_group cocci_id/* mm/khugepaged.c 305 */;
	enum scan_result{SCAN_FAIL, SCAN_SUCCEED, SCAN_PMD_NULL, SCAN_EXCEED_NONE_PTE, SCAN_PTE_NON_PRESENT, SCAN_PAGE_RO, SCAN_LACK_REFERENCED_PAGE, SCAN_PAGE_NULL, SCAN_SCAN_ABORT, SCAN_PAGE_COUNT, SCAN_PAGE_LRU, SCAN_PAGE_LOCK, SCAN_PAGE_ANON, SCAN_PAGE_COMPOUND, SCAN_ANY_PROCESS, SCAN_VMA_NULL, SCAN_VMA_CHECK, SCAN_ADDRESS_RANGE, SCAN_SWAP_CACHE_PAGE, SCAN_DEL_PAGE_LRU, SCAN_ALLOC_HUGE_PAGE_FAIL, SCAN_CGROUP_CHARGE_FAIL, SCAN_EXCEED_SWAP_PTE, SCAN_TRUNCATED, SCAN_PAGE_HAS_PRIVATE,} cocci_id/* mm/khugepaged.c 26 */;
	const unsigned long cocci_id/* mm/khugepaged.c 2103 */;
	struct khugepaged_scan cocci_id/* mm/khugepaged.c 112 */;
	struct khugepaged_scan {
		struct list_head mm_head;
		struct mm_slot *mm_slot;
		unsigned long address;
	} cocci_id/* mm/khugepaged.c 106 */;
	struct kasan_access_info cocci_id/* mm/kasan/report.c 476 */;
	char cocci_id/* mm/kasan/report.c 426 */[SHADOW_BYTES_PER_ROW];
	char cocci_id/* mm/kasan/report.c 425 */[4 + (BITS_PER_LONG / 8) * 2];
	const unsigned long *cocci_id/* mm/kasan/report.c 299 */;
	const void **cocci_id/* mm/kasan/report.c 293 */;
	const char **cocci_id/* mm/kasan/report.c 292 */;
	bool __must_check cocci_id/* mm/kasan/report.c 290 */;
	char cocci_id/* mm/kasan/report.c 251 */[64];
	const size_t cocci_id/* mm/kasan/report.c 218 */;
	struct qlist_head {
		struct qlist_node *head;
		struct qlist_node *tail;
		size_t bytes;
	} cocci_id/* mm/kasan/quarantine.c 42 */;
	struct qlist_head *cocci_id/* mm/kasan/quarantine.c 292 */;
	struct qlist_head cocci_id/* mm/kasan/quarantine.c 291 */;
	struct qlist_node *cocci_id/* mm/kasan/quarantine.c 140 */;
	struct qlist_head cocci_id/* mm/kasan/quarantine.c 102 */[QUARANTINE_BATCHES];
	void __ref cocci_id/* mm/kasan/init.c 96 */;
	pte_t cocci_id/* mm/kasan/init.c 72 */[PTRS_PER_PTE]__page_aligned_bss; // err
	pmd_t cocci_id/* mm/kasan/init.c 61 */[PTRS_PER_PMD]__page_aligned_bss;
	pud_t cocci_id/* mm/kasan/init.c 49 */[PTRS_PER_PUD]__page_aligned_bss;
	p4d_t cocci_id/* mm/kasan/init.c 37 */[MAX_PTRS_PER_P4D]__page_aligned_bss;
	unsigned char cocci_id/* mm/kasan/init.c 34 */[PAGE_SIZE]__page_aligned_bss;
	int __ref cocci_id/* mm/kasan/init.c 230 */;
	struct kasan_access_info *cocci_id/* mm/kasan/generic_report.c 111 */;
	const u8 *cocci_id/* mm/kasan/generic.c 88 */;
	u16 *cocci_id/* mm/kasan/generic.c 79 */;
	void cocci_id/* mm/kasan/generic.c 262 */(unsigned long, size_t);
	struct kasan_global *cocci_id/* mm/kasan/generic.c 217 */;
	const volatile void *cocci_id/* mm/kasan/common.c 93 */;
	struct kasan_track *cocci_id/* mm/kasan/common.c 77 */;
	struct vm_struct *cocci_id/* mm/kasan/common.c 720 */;
	unsigned long cocci_id/* mm/kasan/common.c 69 */[KASAN_STACK_DEPTH];
	struct memory_notify *cocci_id/* mm/kasan/common.c 681 */;
	struct notifier_block *cocci_id/* mm/kasan/common.c 678 */;
	int __meminit cocci_id/* mm/kasan/common.c 678 */;
	depot_stack_handle_t cocci_id/* mm/kasan/common.c 67 */;
	void cocci_id/* mm/kasan/common.c 634 */(unsigned long addr, size_t size, bool is_write, unsigned long ip);
	const struct vm_struct *cocci_id/* mm/kasan/common.c 627 */;
	u8 cocci_id/* mm/kasan/common.c 491 */;
	const void *cocci_id/* mm/kasan/common.c 486 */;
	s8 *cocci_id/* mm/kasan/common.c 461 */;
	s8 cocci_id/* mm/kasan/common.c 442 */;
	void *__must_checkcocci_id/* mm/kasan/common.c 406 */;
	struct kasan_free_meta cocci_id/* mm/kasan/common.c 316 */;
	struct kasan_free_meta *cocci_id/* mm/kasan/common.c 313 */;
	struct kasan_alloc_meta *cocci_id/* mm/kasan/common.c 307 */;
	struct kasan_alloc_meta cocci_id/* mm/kasan/common.c 267 */;
	slab_flags_t *cocci_id/* mm/kasan/common.c 259 */;
	struct rb_root_cached *cocci_id/* mm/interval_tree.c 76 */;
	struct anon_vma_chain *cocci_id/* mm/interval_tree.c 75 */;
	struct vm_area_struct cocci_id/* mm/interval_tree.c 23 */;
	struct mm_struct cocci_id/* mm/init-mm.c 29 */;
	struct cgroup_subsys cocci_id/* mm/hugetlb_cgroup.c 436 */;
	struct hugetlb_cgroup cocci_id/* mm/hugetlb_cgroup.c 39 */;
	struct cftype *cocci_id/* mm/hugetlb_cgroup.c 356 */;
	struct kernfs_open_file *cocci_id/* mm/hugetlb_cgroup.c 319 */;
	enum{RES_USAGE, RES_LIMIT, RES_MAX_USAGE, RES_FAILCNT,} cocci_id/* mm/hugetlb_cgroup.c 257 */;
	struct hugetlb_cgroup {
		struct cgroup_subsys_state css;
		struct page_counter hugepage[HUGE_MAX_HSTATE];
	} cocci_id/* mm/hugetlb_cgroup.c 22 */;
	struct page_counter *cocci_id/* mm/hugetlb_cgroup.c 185 */;
	struct hugetlb_cgroup **cocci_id/* mm/hugetlb_cgroup.c 182 */;
	struct zonelist *cocci_id/* mm/hugetlb.c 851 */;
	int cocci_id/* mm/hugetlb.c 74 */(struct hstate *h, long delta);
	struct mutex *cocci_id/* mm/hugetlb.c 71 */;
	struct resv_map cocci_id/* mm/hugetlb.c 678 */;
	bool __initdata cocci_id/* mm/hugetlb.c 58 */;
	unsigned long __initdata cocci_id/* mm/hugetlb.c 56 */;
	struct hstate *__initdatacocci_id/* mm/hugetlb.c 55 */;
	struct page *__weakcocci_id/* mm/hugetlb.c 4897 */;
	struct hstate cocci_id/* mm/hugetlb.c 45 */[HUGE_MAX_HSTATE];
	const void __user *cocci_id/* mm/hugetlb.c 4114 */;
	unsigned long cocci_id/* mm/hugetlb.c 3928 */[2];
	struct vm_fault cocci_id/* mm/hugetlb.c 3781 */;
	struct mmu_gather cocci_id/* mm/hugetlb.c 3477 */;
	struct file_region cocci_id/* mm/hugetlb.c 332 */;
	struct mutex cocci_id/* mm/hugetlb.c 2813 */;
	struct node_hstate *cocci_id/* mm/hugetlb.c 2716 */;
	struct node_hstate cocci_id/* mm/hugetlb.c 2645 */[MAX_NUMNODES];
	struct node_hstate {
		struct kobject *hugepages_kobj;
		struct kobject *hstate_kobjs[HUGE_MAX_HSTATE];
	} cocci_id/* mm/hugetlb.c 2641 */;
	const struct attribute_group *cocci_id/* mm/hugetlb.c 2599 */;
	struct file_region *cocci_id/* mm/hugetlb.c 256 */;
	nodemask_t cocci_id/* mm/hugetlb.c 2431 */;
	struct file_region {
		struct list_head link;
		long from;
		long to;
	} cocci_id/* mm/hugetlb.c 241 */;
	struct hstate *cocci_id/* mm/hugetlb.c 2394 */(struct kobject *kobj, int *nidp);
	struct kobject *cocci_id/* mm/hugetlb.c 2392 */[HUGE_MAX_HSTATE];
	nodemask_t *cocci_id/* mm/hugetlb.c 2228 */;
	char cocci_id/* mm/hugetlb.c 2153 */[32];
	struct huge_bootmem_page *cocci_id/* mm/hugetlb.c 2053 */;
	int cocci_id/* mm/hugetlb.c 2049 */(struct hstate *h)
	__attribute__((weak,alias("__alloc_bootmem_huge_page")));
	struct hugetlb_cgroup *cocci_id/* mm/hugetlb.c 1955 */;
	struct hugepage_subpool *cocci_id/* mm/hugetlb.c 1949 */;
	struct resv_map *cocci_id/* mm/hugetlb.c 1821 */;
	enum vma_resv_mode cocci_id/* mm/hugetlb.c 1819 */;
	enum vma_resv_mode{VMA_NEEDS_RESV, VMA_COMMIT_RESV, VMA_END_RESV, VMA_ADD_RESV,} cocci_id/* mm/hugetlb.c 1811 */;
	struct list_head cocci_id/* mm/hugetlb.c 1650 */;
	struct mempolicy *cocci_id/* mm/hugetlb.c 1573 */;
	void cocci_id/* mm/hugetlb.c 1035 */(struct page *page, unsigned int order);
	void cocci_id/* mm/hugetlb.c 1034 */(struct hstate *h, struct page *page, int nid);
	pfn_t cocci_id/* mm/huge_memory.c 768 */;
	atomic_t cocci_id/* mm/huge_memory.c 62 */;
	struct shrinker cocci_id/* mm/huge_memory.c 60 */;
	pgtable_t cocci_id/* mm/huge_memory.c 578 */;
	struct kobject **cocci_id/* mm/huge_memory.c 350 */;
	const struct attribute_group cocci_id/* mm/huge_memory.c 346 */;
	struct kobj_attribute cocci_id/* mm/huge_memory.c 328 */;
	struct kobj_attribute *cocci_id/* mm/huge_memory.c 316 */;
	struct kobject *cocci_id/* mm/huge_memory.c 315 */;
	struct page_vma_mapped_walk *cocci_id/* mm/huge_memory.c 3046 */;
	struct deferred_split *cocci_id/* mm/huge_memory.c 2891 */;
	struct pglist_data *cocci_id/* mm/huge_memory.c 2890 */;
	struct shrink_control *cocci_id/* mm/huge_memory.c 2888 */;
	struct shrinker *cocci_id/* mm/huge_memory.c 2887 */;
	enum ttu_flags cocci_id/* mm/huge_memory.c 2411 */;
	struct mmu_notifier_range cocci_id/* mm/huge_memory.c 2302 */;
	enum transparent_hugepage_flag cocci_id/* mm/huge_memory.c 207 */;
	struct mmu_gather *cocci_id/* mm/huge_memory.c 1693 */;
	struct anon_vma *cocci_id/* mm/huge_memory.c 1536 */;
	uint64_t *cocci_id/* mm/hmm.c 71 */;
	enum hmm_pfn_value_e cocci_id/* mm/hmm.c 69 */;
	struct hmm_range *cocci_id/* mm/hmm.c 69 */;
	struct hmm_vma_walk cocci_id/* mm/hmm.c 670 */;
	const struct mm_walk_ops cocci_id/* mm/hmm.c 632 */;
	struct hmm_vma_walk *cocci_id/* mm/hmm.c 40 */;
	struct mm_walk *cocci_id/* mm/hmm.c 36 */;
	struct hmm_vma_walk {
		struct hmm_range *range;
		struct dev_pagemap *pgmap;
		unsigned long last;
		unsigned int flags;
	} cocci_id/* mm/hmm.c 29 */;
	int cocci_id/* mm/hmm.c 251 */(struct mm_walk *walk, unsigned long addr, unsigned long end, uint64_t *pfns, pmd_t pmd);
	const uint64_t *cocci_id/* mm/hmm.c 168 */;
	const struct hmm_vma_walk *cocci_id/* mm/hmm.c 123 */;
	struct page_address_map *cocci_id/* mm/highmem.c 421 */;
	struct page_address_slot *cocci_id/* mm/highmem.c 412 */;
	struct page_address_slot {
		struct list_head lh;
		spinlock_t lock;
	}____cacheline_aligned_in_smp cocci_id/* mm/highmem.c 392 */[1 << PA_HASH_ORDER]; // err
	struct page_address_map cocci_id/* mm/highmem.c 387 */[LAST_PKMAP];
	struct page_address_map {
		struct page *page;
		void *virtual;
		struct list_head list;
	} cocci_id/* mm/highmem.c 381 */;
	int cocci_id/* mm/highmem.c 126 */[LAST_PKMAP];
	atomic_long_t cocci_id/* mm/highmem.c 108 */;
	struct gup_benchmark cocci_id/* mm/gup_benchmark.c 94 */;
	ktime_t cocci_id/* mm/gup_benchmark.c 25 */;
	struct gup_benchmark *cocci_id/* mm/gup_benchmark.c 23 */;
	struct gup_benchmark {
		__u64 get_delta_usec;
		__u64 put_delta_usec;
		__u64 addr;
		__u64 size;
		__u32 nr_pages_per_call;
		__u32 flags;
		__u64 expansion[10];
	} cocci_id/* mm/gup_benchmark.c 12 */;
	const struct file_operations cocci_id/* mm/gup_benchmark.c 119 */;
	struct follow_page_context cocci_id/* mm/gup.c 792 */;
	struct vm_area_struct **cocci_id/* mm/gup.c 788 */;
	vm_flags_t cocci_id/* mm/gup.c 678 */;
	unsigned int *cocci_id/* mm/gup.c 619 */;
	p4d_t *cocci_id/* mm/gup.c 468 */;
	struct follow_page_context *cocci_id/* mm/gup.c 466 */;
	pgd_t *cocci_id/* mm/gup.c 464 */;
	struct follow_page_context {
		struct dev_pagemap *pgmap;
		unsigned int page_mask;
	} cocci_id/* mm/gup.c 27 */;
	p4d_t cocci_id/* mm/gup.c 2265 */;
	pgd_t cocci_id/* mm/gup.c 2149 */;
	hugepd_t cocci_id/* mm/gup.c 2040 */;
	pud_t cocci_id/* mm/gup.c 1949 */;
	pud_t *cocci_id/* mm/gup.c 1949 */;
	pmd_t cocci_id/* mm/gup.c 1932 */;
	pmd_t *cocci_id/* mm/gup.c 1932 */;
	struct dev_pagemap *cocci_id/* mm/gup.c 1910 */;
	pte_t *cocci_id/* mm/gup.c 180 */;
	void __maybe_unused cocci_id/* mm/gup.c 1799 */;
	struct dev_pagemap **cocci_id/* mm/gup.c 175 */;
	pte_t cocci_id/* mm/gup.c 167 */;
	struct hstate *cocci_id/* mm/gup.c 1415 */;
	swp_entry_t cocci_id/* mm/frontswap.c 297 */;
	struct swap_info_struct *cocci_id/* mm/frontswap.c 231 */;
	struct frontswap_ops *cocci_id/* mm/frontswap.c 193 */;
	struct frame_vector cocci_id/* mm/frame_vector.c 206 */;
	struct frame_vector *cocci_id/* mm/frame_vector.c 203 */;
	wait_queue_head_t cocci_id/* mm/filemap.c 998 */[PAGE_WAIT_TABLE_SIZE]__cacheline_aligned; // err
	errseq_t cocci_id/* mm/filemap.c 702 */;
	struct pagevec cocci_id/* mm/filemap.c 508 */;
	struct writeback_control cocci_id/* mm/filemap.c 409 */;
	struct address_space *constcocci_id/* mm/filemap.c 3498 */;
	struct pagevec *cocci_id/* mm/filemap.c 343 */;
	struct kiocb *cocci_id/* mm/filemap.c 3373 */;
	struct iov_iter *cocci_id/* mm/filemap.c 3373 */;
	const struct address_space_operations *cocci_id/* mm/filemap.c 3272 */;
	char cocci_id/* mm/filemap.c 3149 */[128];
	uint64_t cocci_id/* mm/filemap.c 3082 */;
	int (*cocci_id/* mm/filemap.c 2758 */)(void *, struct page *);
	struct vm_area_struct *cocci_id/* mm/filemap.c 2705 */;
	const struct vm_operations_struct cocci_id/* mm/filemap.c 2697 */;
	vm_fault_t cocci_id/* mm/filemap.c 2476 */;
	void (*cocci_id/* mm/filemap.c 244 */)(struct page *);
	struct file_ra_state *cocci_id/* mm/filemap.c 2435 */;
	struct vm_fault *cocci_id/* mm/filemap.c 2431 */;
	struct file **cocci_id/* mm/filemap.c 2344 */;
	xa_mark_t cocci_id/* mm/filemap.c 1914 */;
	pgoff_t *cocci_id/* mm/filemap.c 1726 */;
	struct mm_struct *cocci_id/* mm/filemap.c 1408 */;
	volatile void *cocci_id/* mm/filemap.c 1287 */;
	wait_queue_entry_t *cocci_id/* mm/filemap.c 1261 */;
	struct wait_page_queue cocci_id/* mm/filemap.c 1134 */;
	enum behavior cocci_id/* mm/filemap.c 1132 */;
	enum behavior{EXCLUSIVE, SHARED, DROP,} cocci_id/* mm/filemap.c 1119 */;
	wait_queue_entry_t cocci_id/* mm/filemap.c 1060 */;
	struct wait_page_key cocci_id/* mm/filemap.c 1058 */;
	struct wait_page_queue *cocci_id/* mm/filemap.c 1031 */;
	struct wait_page_key *cocci_id/* mm/filemap.c 1030 */;
	struct wait_page_queue {
		struct page *page;
		int bit_nr;
		wait_queue_entry_t wait;
	} cocci_id/* mm/filemap.c 1022 */;
	struct wait_page_key {
		struct page *page;
		int bit_nr;
		int page_match;
	} cocci_id/* mm/filemap.c 1016 */;
	struct {
		struct fault_attr attr;
		bool ignore_gfp_reclaim;
		bool cache_filter;
	} cocci_id/* mm/failslab.c 7 */;
	umode_t cocci_id/* mm/failslab.c 46 */;
	struct kmem_cache *cocci_id/* mm/failslab.c 17 */;
	pgoff_t cocci_id/* mm/fadvise.c 36 */;
	struct file *cocci_id/* mm/fadvise.c 30 */;
	loff_t cocci_id/* mm/fadvise.c 214 */;
	struct fd cocci_id/* mm/fadvise.c 195 */;
	unsigned long cocci_id/* mm/early_ioremap.c 72 */[FIX_BTMAPS_SLOTS]__initdata;
	void __iomem *cocci_id/* mm/early_ioremap.c 71 */[FIX_BTMAPS_SLOTS]__initdata;
	void __init cocci_id/* mm/early_ioremap.c 65 */;
	void __init __weak cocci_id/* mm/early_ioremap.c 41 */;
	pgprot_t __init __weak cocci_id/* mm/early_ioremap.c 34 */;
	void __init *cocci_id/* mm/early_ioremap.c 223 */;
	void __iomem *cocci_id/* mm/early_ioremap.c 164 */;
	enum fixed_addresses cocci_id/* mm/early_ioremap.c 111 */;
	resource_size_t cocci_id/* mm/early_ioremap.c 106 */;
	pgprot_t cocci_id/* mm/early_ioremap.c 106 */;
	void __init __iomem *cocci_id/* mm/early_ioremap.c 105 */;
	struct dma_page {
		struct list_head page_list;
		void *vaddr;
		dma_addr_t dma;
		unsigned int in_use;
		unsigned int offset;
	} cocci_id/* mm/dmapool.c 53 */;
	struct dma_pool **cocci_id/* mm/dmapool.c 509 */;
	struct dma_pool {
		struct list_head page_list;
		spinlock_t lock;
		size_t size;
		struct device *dev;
		size_t allocation;
		size_t boundary;
		char name[32];
		struct list_head pools;
	} cocci_id/* mm/dmapool.c 42 */;
	dma_addr_t cocci_id/* mm/dmapool.c 410 */;
	u8 *cocci_id/* mm/dmapool.c 354 */;
	int *cocci_id/* mm/dmapool.c 348 */;
	struct dma_page *cocci_id/* mm/dmapool.c 323 */;
	dma_addr_t *cocci_id/* mm/dmapool.c 320 */;
	struct dma_pool *cocci_id/* mm/dmapool.c 319 */;
	struct dma_page cocci_id/* mm/dmapool.c 289 */;
	struct dentry cocci_id/* mm/debug.c 87 */;
	const struct trace_print_flags cocci_id/* mm/debug.c 35 */[];
	const char *cocci_id/* mm/debug.c 20 */[MR_TYPES];
	long long cocci_id/* mm/debug.c 164 */;
	const struct mm_struct *cocci_id/* mm/debug.c 134 */;
	const struct vm_area_struct *cocci_id/* mm/debug.c 118 */;
	struct lruvec *cocci_id/* mm/compaction.c 787 */;
	const unsigned int cocci_id/* mm/compaction.c 581 */;
	bool *cocci_id/* mm/compaction.c 513 */;
	spinlock_t *cocci_id/* mm/compaction.c 482 */;
	enum vm_event_item cocci_id/* mm/compaction.c 29 */;
	const struct cpumask *cocci_id/* mm/compaction.c 2633 */;
	struct task_struct *cocci_id/* mm/compaction.c 2631 */;
	enum zone_type cocci_id/* mm/compaction.c 2504 */;
	struct node *cocci_id/* mm/compaction.c 2484 */;
	loff_t *cocci_id/* mm/compaction.c 2458 */;
	size_t *cocci_id/* mm/compaction.c 2458 */;
	void __user *cocci_id/* mm/compaction.c 2458 */;
	struct ctl_table *cocci_id/* mm/compaction.c 2457 */;
	struct compact_control cocci_id/* mm/compaction.c 2414 */;
	pg_data_t *cocci_id/* mm/compaction.c 2411 */;
	const struct alloc_context *cocci_id/* mm/compaction.c 2340 */;
	struct capture_control cocci_id/* mm/compaction.c 2308 */;
	struct page **cocci_id/* mm/compaction.c 2291 */;
	enum compact_priority cocci_id/* mm/compaction.c 2289 */;
	const bool cocci_id/* mm/compaction.c 2078 */;
	struct capture_control *cocci_id/* mm/compaction.c 2072 */;
	struct zoneref *cocci_id/* mm/compaction.c 2043 */;
	struct alloc_context *cocci_id/* mm/compaction.c 2039 */;
	struct free_area *cocci_id/* mm/compaction.c 1890 */;
	const int cocci_id/* mm/compaction.c 1852 */;
	enum compact_result cocci_id/* mm/compaction.c 1849 */;
	struct compact_control *cocci_id/* mm/compaction.c 1849 */;
	const isolate_mode_t cocci_id/* mm/compaction.c 1747 */;
	isolate_migrate_t cocci_id/* mm/compaction.c 1741 */;
	enum{ISOLATE_ABORT, ISOLATE_NONE, ISOLATE_SUCCESS,} cocci_id/* mm/compaction.c 1583 */;
	unsigned short cocci_id/* mm/compaction.c 1171 */;
	struct cma_mem cocci_id/* mm/cma_debug.c 84 */;
	struct cma_mem *cocci_id/* mm/cma_debug.c 71 */;
	unsigned long *cocci_id/* mm/cma_debug.c 26 */;
	u64 *cocci_id/* mm/cma_debug.c 24 */;
	u32 *cocci_id/* mm/cma_debug.c 184 */;
	u32 cocci_id/* mm/cma_debug.c 183 */;
	struct cma_mem {
		struct hlist_node node;
		struct page *p;
		unsigned long n;
	} cocci_id/* mm/cma_debug.c 18 */;
	char cocci_id/* mm/cma_debug.c 166 */[16];
	unsigned cocci_id/* mm/cma.c 99 */;
	struct cma *cocci_id/* mm/cma.c 96 */;
	const struct cma *cocci_id/* mm/cma.c 58 */;
	int (*cocci_id/* mm/cma.c 535 */)(struct cma *cma, void *data);
	const struct page *cocci_id/* mm/cma.c 512 */;
	struct cma cocci_id/* mm/cma.c 39 */[MAX_CMA_AREAS];
	struct cma **cocci_id/* mm/cma.c 244 */;
	phys_addr_t cocci_id/* mm/cma.c 241 */;
	struct zone *cocci_id/* mm/cma.c 100 */;
	const struct cleancache_ops *cocci_id/* mm/cleancache.c 24 */;
	struct cleancache_filekey cocci_id/* mm/cleancache.c 180 */;
	int (*cocci_id/* mm/cleancache.c 147 */)(struct inode *, __u32 *fh, int *, struct inode *);
	struct cleancache_filekey *cocci_id/* mm/cleancache.c 145 */;
	struct super_block *cocci_id/* mm/cleancache.c 113 */;
	const struct address_space_operations cocci_id/* mm/balloon_compaction.c 253 */;
	enum migrate_mode cocci_id/* mm/balloon_compaction.c 235 */;
	struct address_space *cocci_id/* mm/balloon_compaction.c 233 */;
	isolate_mode_t cocci_id/* mm/balloon_compaction.c 206 */;
	bool cocci_id/* mm/balloon_compaction.c 206 */;
	struct page cocci_id/* mm/balloon_compaction.c 200 */;
	struct balloon_dev_info *cocci_id/* mm/balloon_compaction.c 177 */;
	struct page *cocci_id/* mm/balloon_compaction.c 124 */;
	struct device *cocci_id/* mm/backing-dev.c 979 */;
	va_list cocci_id/* mm/backing-dev.c 969 */;
	struct rb_node **cocci_id/* mm/backing-dev.c 919 */;
	u64 cocci_id/* mm/backing-dev.c 916 */;
	struct rb_node *cocci_id/* mm/backing-dev.c 887 */;
	struct backing_dev_info cocci_id/* mm/backing-dev.c 871 */;
	gfp_t cocci_id/* mm/backing-dev.c 867 */;
	struct backing_dev_info *cocci_id/* mm/backing-dev.c 867 */;
	int cocci_id/* mm/backing-dev.c 867 */;
	int __init cocci_id/* mm/backing-dev.c 794 */;
	struct bdi_writeback_congested cocci_id/* mm/backing-dev.c 779 */;
	struct bdi_writeback_congested *cocci_id/* mm/backing-dev.c 778 */;
	struct bdi_writeback cocci_id/* mm/backing-dev.c 727 */;
	void **cocci_id/* mm/backing-dev.c 714 */;
	struct radix_tree_iter cocci_id/* mm/backing-dev.c 713 */;
	struct inode *cocci_id/* mm/backing-dev.c 56 */;
	struct list_head *cocci_id/* mm/backing-dev.c 532 */;
	struct blkcg *cocci_id/* mm/backing-dev.c 531 */;
	struct mem_cgroup *cocci_id/* mm/backing-dev.c 529 */;
	struct cgroup_subsys_state *cocci_id/* mm/backing-dev.c 527 */;
	unsigned long cocci_id/* mm/backing-dev.c 52 */;
	struct bdi_writeback *cocci_id/* mm/backing-dev.c 51 */;
	struct percpu_ref *cocci_id/* mm/backing-dev.c 502 */;
	struct work_struct *cocci_id/* mm/backing-dev.c 480 */;
	struct seq_file *cocci_id/* mm/backing-dev.c 48 */;
	void *cocci_id/* mm/backing-dev.c 48 */;
	struct dentry *cocci_id/* mm/backing-dev.c 41 */;
	struct workqueue_struct *cocci_id/* mm/backing-dev.c 35 */;
	void cocci_id/* mm/backing-dev.c 341 */(struct bdi_writeback *wb);
	struct rb_root cocci_id/* mm/backing-dev.c 31 */;
	int cocci_id/* mm/backing-dev.c 236 */(struct backing_dev_info *bdi);
	struct class *cocci_id/* mm/backing-dev.c 23 */;
	void cocci_id/* mm/backing-dev.c 223 */;
	struct attribute *cocci_id/* mm/backing-dev.c 214 */[];
	char *cocci_id/* mm/backing-dev.c 205 */;
	unsigned int cocci_id/* mm/backing-dev.c 188 */;
	struct device_attribute *cocci_id/* mm/backing-dev.c 185 */;
	size_t cocci_id/* mm/backing-dev.c 185 */;
	ssize_t cocci_id/* mm/backing-dev.c 184 */;
	const char *cocci_id/* mm/backing-dev.c 109 */;
	long cocci_id/* mm/backing-dev.c 1084 */;
	enum wb_congested_state cocci_id/* mm/backing-dev.c 1054 */;
	wait_queue_head_t *cocci_id/* mm/backing-dev.c 1053 */;
	atomic_t cocci_id/* mm/backing-dev.c 1049 */[2];
	wait_queue_head_t cocci_id/* mm/backing-dev.c 1045 */[2];
	struct kref *cocci_id/* mm/backing-dev.c 1026 */;
	__typeof__(u32) cocci_id/* /usr/local/bin/../lib/coccinelle/standard.h 437 */;
	__typeof__(struct work_struct) cocci_id/* /usr/local/bin/../lib/coccinelle/standard.h 437 */;
	__typeof__(struct vmap_block_queue) cocci_id/* /usr/local/bin/../lib/coccinelle/standard.h 437 */;
	__typeof__(struct vm_event_state) cocci_id/* /usr/local/bin/../lib/coccinelle/standard.h 437 */;
	__typeof__(struct vfree_deferred) cocci_id/* /usr/local/bin/../lib/coccinelle/standard.h 437 */;
	__typeof__(struct swap_slots_cache) cocci_id/* /usr/local/bin/../lib/coccinelle/standard.h 437 */;
	__typeof__(struct qlist_head) cocci_id/* /usr/local/bin/../lib/coccinelle/standard.h 437 */;
	__typeof__(struct per_cpu_pageset) cocci_id/* /usr/local/bin/../lib/coccinelle/standard.h 437 */;
	__typeof__(struct per_cpu_nodestat) cocci_id/* /usr/local/bin/../lib/coccinelle/standard.h 437 */;
	__typeof__(struct pcpu_drain) cocci_id/* /usr/local/bin/../lib/coccinelle/standard.h 437 */;
	__typeof__(struct pagevec) cocci_id/* /usr/local/bin/../lib/coccinelle/standard.h 437 */;
	__typeof__(struct memory_failure_cpu) cocci_id/* /usr/local/bin/../lib/coccinelle/standard.h 437 */;
	__typeof__(struct memcg_stock_pcp) cocci_id/* /usr/local/bin/../lib/coccinelle/standard.h 437 */;
	__typeof__(struct mapping_area) cocci_id/* /usr/local/bin/../lib/coccinelle/standard.h 437 */;
	__typeof__(struct delayed_work) cocci_id/* /usr/local/bin/../lib/coccinelle/standard.h 437 */;
	__typeof__(u8 *) cocci_id/* /usr/local/bin/../lib/coccinelle/standard.h 437 */;
	__typeof__(struct vmap_area *) cocci_id/* /usr/local/bin/../lib/coccinelle/standard.h 437 */;
	__typeof__(void *) cocci_id/* /usr/local/bin/../lib/coccinelle/standard.h 437 */;
	__typeof__(unsigned long) cocci_id/* /usr/local/bin/../lib/coccinelle/standard.h 437 */;
	__typeof__(int) cocci_id/* /usr/local/bin/../lib/coccinelle/standard.h 437 */;
}
