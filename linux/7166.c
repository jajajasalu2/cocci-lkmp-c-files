cocci_test_suite() {
	struct gntalloc_file_private_data {
		struct list_head list;
		uint64_t index;
	} cocci_id/* drivers/xen/gntalloc.c 99 */;
	struct gntalloc_gref {
		struct list_head next_gref;
		struct list_head next_file;
		struct page *page;
		uint64_t file_index;
		unsigned int users;
		grant_ref_t gref_id;
		struct notify_info notify;
	} cocci_id/* drivers/xen/gntalloc.c 89 */;
	struct notify_info {
		uint16_t pgoff:12;
		uint16_t flags:2;
		int event;
	} cocci_id/* drivers/xen/gntalloc.c 82 */;
	void __exit cocci_id/* drivers/xen/gntalloc.c 601 */;
	int __init cocci_id/* drivers/xen/gntalloc.c 582 */;
	struct miscdevice cocci_id/* drivers/xen/gntalloc.c 576 */;
	const struct file_operations cocci_id/* drivers/xen/gntalloc.c 563 */;
	struct gntalloc_vma_private_data *cocci_id/* drivers/xen/gntalloc.c 508 */;
	struct vm_area_struct *cocci_id/* drivers/xen/gntalloc.c 505 */;
	const struct vm_operations_struct cocci_id/* drivers/xen/gntalloc.c 500 */;
	void __user *cocci_id/* drivers/xen/gntalloc.c 447 */;
	unsigned long cocci_id/* drivers/xen/gntalloc.c 441 */;
	struct file *cocci_id/* drivers/xen/gntalloc.c 440 */;
	unsigned int cocci_id/* drivers/xen/gntalloc.c 440 */;
	long cocci_id/* drivers/xen/gntalloc.c 440 */;
	struct ioctl_gntalloc_unmap_notify cocci_id/* drivers/xen/gntalloc.c 388 */;
	struct gntalloc_gref cocci_id/* drivers/xen/gntalloc.c 369 */;
	struct ioctl_gntalloc_dealloc_gref cocci_id/* drivers/xen/gntalloc.c 350 */;
	struct ioctl_gntalloc_alloc_gref cocci_id/* drivers/xen/gntalloc.c 287 */;
	struct ioctl_gntalloc_alloc_gref __user *cocci_id/* drivers/xen/gntalloc.c 284 */;
	struct inode *cocci_id/* drivers/xen/gntalloc.c 242 */;
	uint64_t cocci_id/* drivers/xen/gntalloc.c 219 */;
	uint32_t cocci_id/* drivers/xen/gntalloc.c 219 */;
	uint8_t *cocci_id/* drivers/xen/gntalloc.c 187 */;
	struct gntalloc_gref *cocci_id/* drivers/xen/gntalloc.c 184 */;
	void cocci_id/* drivers/xen/gntalloc.c 184 */;
	uint32_t *cocci_id/* drivers/xen/gntalloc.c 122 */;
	struct gntalloc_file_private_data *cocci_id/* drivers/xen/gntalloc.c 122 */;
	struct ioctl_gntalloc_alloc_gref *cocci_id/* drivers/xen/gntalloc.c 121 */;
	int cocci_id/* drivers/xen/gntalloc.c 121 */;
	void cocci_id/* drivers/xen/gntalloc.c 110 */(struct gntalloc_gref *gref);
	struct gntalloc_vma_private_data {
		struct gntalloc_gref *gref;
		int users;
		int count;
	} cocci_id/* drivers/xen/gntalloc.c 104 */;
}
