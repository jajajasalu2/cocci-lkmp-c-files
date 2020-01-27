cocci_test_suite() {
	pgoff_t cocci_id/* mm/mapping_dirty_helpers.c 94 */;
	pte_t cocci_id/* mm/mapping_dirty_helpers.c 91 */;
	struct clean_walk *cocci_id/* mm/mapping_dirty_helpers.c 90 */;
	struct wp_walk *cocci_id/* mm/mapping_dirty_helpers.c 89 */;
	struct mm_walk *cocci_id/* mm/mapping_dirty_helpers.c 87 */;
	pte_t *cocci_id/* mm/mapping_dirty_helpers.c 86 */;
	unsigned long cocci_id/* mm/mapping_dirty_helpers.c 86 */;
	int cocci_id/* mm/mapping_dirty_helpers.c 86 */;
	struct clean_walk {
		struct wp_walk base;
		pgoff_t bitmap_pgoff;
		unsigned long *bitmap;
		pgoff_t start;
		pgoff_t end;
	} cocci_id/* mm/mapping_dirty_helpers.c 63 */;
	struct clean_walk cocci_id/* mm/mapping_dirty_helpers.c 297 */;
	bool cocci_id/* mm/mapping_dirty_helpers.c 296 */;
	pgoff_t *cocci_id/* mm/mapping_dirty_helpers.c 293 */;
	unsigned long *cocci_id/* mm/mapping_dirty_helpers.c 292 */;
	struct address_space *cocci_id/* mm/mapping_dirty_helpers.c 289 */;
	struct wp_walk cocci_id/* mm/mapping_dirty_helpers.c 243 */;
	const struct mm_walk_ops cocci_id/* mm/mapping_dirty_helpers.c 208 */;
	void cocci_id/* mm/mapping_dirty_helpers.c 175 */;
	struct wp_walk {
		struct mmu_notifier_range range;
		unsigned long tlbflush_start;
		unsigned long tlbflush_end;
		unsigned long total;
	} cocci_id/* mm/mapping_dirty_helpers.c 16 */;
	pud_t cocci_id/* mm/mapping_dirty_helpers.c 132 */;
	pud_t *cocci_id/* mm/mapping_dirty_helpers.c 128 */;
	pmd_t cocci_id/* mm/mapping_dirty_helpers.c 119 */;
	pmd_t *cocci_id/* mm/mapping_dirty_helpers.c 115 */;
}
