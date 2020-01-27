cocci_test_suite() {
	struct remap_data *cocci_id/* drivers/xen/xlate_mmu.c 98 */;
	struct remap_data {
		xen_pfn_t *fgfn;
		int nr_fgfn;
		pgprot_t prot;
		domid_t domid;
		struct vm_area_struct *vma;
		int index;
		struct page **pages;
		struct xen_remap_gfn_info *info;
		int *err_ptr;
		int mapped;
		int h_errs[XEN_PFN_PER_PAGE];
		xen_ulong_t h_idxs[XEN_PFN_PER_PAGE];
		xen_pfn_t h_gpfns[XEN_PFN_PER_PAGE];
		int h_iter;
	} cocci_id/* drivers/xen/xlate_mmu.c 64 */;
	xen_gfn_fn_t cocci_id/* drivers/xen/xlate_mmu.c 49 */;
	struct page **cocci_id/* drivers/xen/xlate_mmu.c 48 */;
	unsigned cocci_id/* drivers/xen/xlate_mmu.c 48 */;
	void (*cocci_id/* drivers/xen/xlate_mmu.c 45 */)(unsigned long gfn,
							 void *data);
	struct remap_pfn cocci_id/* drivers/xen/xlate_mmu.c 288 */;
	struct vm_area_struct *cocci_id/* drivers/xen/xlate_mmu.c 286 */;
	pte_t cocci_id/* drivers/xen/xlate_mmu.c 277 */;
	struct page *cocci_id/* drivers/xen/xlate_mmu.c 276 */;
	struct remap_pfn *cocci_id/* drivers/xen/xlate_mmu.c 275 */;
	pte_t *cocci_id/* drivers/xen/xlate_mmu.c 273 */;
	void *cocci_id/* drivers/xen/xlate_mmu.c 273 */;
	unsigned long cocci_id/* drivers/xen/xlate_mmu.c 273 */;
	int cocci_id/* drivers/xen/xlate_mmu.c 273 */;
	struct remap_pfn {
		struct mm_struct *mm;
		struct page **pages;
		pgprot_t prot;
		unsigned long i;
	} cocci_id/* drivers/xen/xlate_mmu.c 266 */;
	struct map_balloon_pages cocci_id/* drivers/xen/xlate_mmu.c 220 */;
	xen_pfn_t *cocci_id/* drivers/xen/xlate_mmu.c 218 */;
	xen_pfn_t **cocci_id/* drivers/xen/xlate_mmu.c 214 */;
	void **cocci_id/* drivers/xen/xlate_mmu.c 214 */;
	int __init cocci_id/* drivers/xen/xlate_mmu.c 214 */;
	struct map_balloon_pages *cocci_id/* drivers/xen/xlate_mmu.c 199 */;
	void cocci_id/* drivers/xen/xlate_mmu.c 197 */;
	struct map_balloon_pages {
		xen_pfn_t *pfns;
		unsigned int idx;
	} cocci_id/* drivers/xen/xlate_mmu.c 192 */;
	struct xen_remove_from_physmap cocci_id/* drivers/xen/xlate_mmu.c 176 */;
	struct remap_data cocci_id/* drivers/xen/xlate_mmu.c 151 */;
	pgprot_t cocci_id/* drivers/xen/xlate_mmu.c 146 */;
	int *cocci_id/* drivers/xen/xlate_mmu.c 146 */;
	typeof(info->nr_fgfn) cocci_id/* drivers/xen/xlate_mmu.c 109 */;
	struct xen_add_to_physmap_range cocci_id/* drivers/xen/xlate_mmu.c 103 */;
	uint32_t cocci_id/* drivers/xen/xlate_mmu.c 102 */;
}
