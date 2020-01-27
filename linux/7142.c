cocci_test_suite() {
	void __exit cocci_id/* drivers/xen/privcmd.c 995 */;
	int __init cocci_id/* drivers/xen/privcmd.c 972 */;
	struct miscdevice cocci_id/* drivers/xen/privcmd.c 966 */;
	const struct file_operations cocci_id/* drivers/xen/privcmd.c 957 */;
	struct page *cocci_id/* drivers/xen/privcmd.c 95 */;
	pte_t *cocci_id/* drivers/xen/privcmd.c 943 */;
	unsigned long cocci_id/* drivers/xen/privcmd.c 943 */;
	struct list_head *cocci_id/* drivers/xen/privcmd.c 93 */;
	void cocci_id/* drivers/xen/privcmd.c 93 */;
	vm_fault_t cocci_id/* drivers/xen/privcmd.c 912 */;
	struct vm_fault *cocci_id/* drivers/xen/privcmd.c 912 */;
	struct inode *cocci_id/* drivers/xen/privcmd.c 871 */;
	void __user *cocci_id/* drivers/xen/privcmd.c 833 */;
	struct file *cocci_id/* drivers/xen/privcmd.c 829 */;
	long cocci_id/* drivers/xen/privcmd.c 829 */;
	struct xen_mem_acquire_resource cocci_id/* drivers/xen/privcmd.c 734 */;
	struct privcmd_mmap_resource cocci_id/* drivers/xen/privcmd.c 732 */;
	struct privcmd_hypercall cocci_id/* drivers/xen/privcmd.c 73 */;
	domid_t cocci_id/* drivers/xen/privcmd.c 713 */;
	int cocci_id/* drivers/xen/privcmd.c 65 */(struct vm_area_struct *vma,
						   unsigned long addr,
						   unsigned long nr_pages);
	struct xen_dm_op_buf *cocci_id/* drivers/xen/privcmd.c 632 */;
	struct privcmd_dm_op_buf *cocci_id/* drivers/xen/privcmd.c 629 */;
	struct privcmd_dm_op cocci_id/* drivers/xen/privcmd.c 628 */;
	struct privcmd_data *cocci_id/* drivers/xen/privcmd.c 627 */;
	struct privcmd_data {
		domid_t domid;
	} cocci_id/* drivers/xen/privcmd.c 61 */;
	struct page *cocci_id/* drivers/xen/privcmd.c 585 */[];
	struct privcmd_dm_op_buf cocci_id/* drivers/xen/privcmd.c 584 */[];
	unsigned int cocci_id/* drivers/xen/privcmd.c 584 */;
	struct privcmd_mmapbatch cocci_id/* drivers/xen/privcmd.c 459 */;
	struct mmap_batch_state cocci_id/* drivers/xen/privcmd.c 455 */;
	struct privcmd_mmapbatch_v2 cocci_id/* drivers/xen/privcmd.c 450 */;
	const struct vm_operations_struct cocci_id/* drivers/xen/privcmd.c 443 */;
	struct page **cocci_id/* drivers/xen/privcmd.c 424 */;
	struct vm_area_struct *cocci_id/* drivers/xen/privcmd.c 421 */;
	int cocci_id/* drivers/xen/privcmd.c 421 */;
	xen_pfn_t cocci_id/* drivers/xen/privcmd.c 376 */;
	int *cocci_id/* drivers/xen/privcmd.c 351 */;
	struct mmap_batch_state *cocci_id/* drivers/xen/privcmd.c 340 */;
	xen_pfn_t *cocci_id/* drivers/xen/privcmd.c 339 */;
	struct mmap_batch_state {
		domid_t domain;
		unsigned long va;
		struct vm_area_struct *vma;
		int index;
		int global_error;
		int version;
		xen_pfn_t __user *user_gfn;
		int __user *user_err;
	} cocci_id/* drivers/xen/privcmd.c 314 */;
	struct page cocci_id/* drivers/xen/privcmd.c 285 */;
	struct privcmd_mmap_entry cocci_id/* drivers/xen/privcmd.c 275 */;
	struct mmap_gfn_state cocci_id/* drivers/xen/privcmd.c 261 */;
	struct mm_struct *cocci_id/* drivers/xen/privcmd.c 257 */;
	struct privcmd_mmap cocci_id/* drivers/xen/privcmd.c 256 */;
	struct mmap_gfn_state *cocci_id/* drivers/xen/privcmd.c 226 */;
	struct privcmd_mmap_entry *cocci_id/* drivers/xen/privcmd.c 225 */;
	struct mmap_gfn_state {
		unsigned long va;
		struct vm_area_struct *vma;
		domid_t domain;
	} cocci_id/* drivers/xen/privcmd.c 217 */;
	int (*cocci_id/* drivers/xen/privcmd.c 192 */)(void *data, int nr,
						       void *state);
	int (*cocci_id/* drivers/xen/privcmd.c 156 */)(void *data,
						       void *state);
	void *cocci_id/* drivers/xen/privcmd.c 114 */;
	const void __user *cocci_id/* drivers/xen/privcmd.c 111 */;
	unsigned cocci_id/* drivers/xen/privcmd.c 110 */;
	size_t cocci_id/* drivers/xen/privcmd.c 110 */;
}
