cocci_test_suite() {
	struct vma_data {
		refcount_t refcnt;
		spinlock_t lock;
		int count;
		enum mspec_page_type type;
		unsigned long vm_start;
		unsigned long vm_end;
		unsigned long maddr[0];
	} cocci_id/* drivers/char/mspec.c 71 */;
	enum mspec_page_type{MSPEC_CACHED=2, MSPEC_UNCACHED,} cocci_id/* drivers/char/mspec.c 56 */;
	void __exit cocci_id/* drivers/char/mspec.c 287 */;
	int __init cocci_id/* drivers/char/mspec.c 262 */;
	struct miscdevice cocci_id/* drivers/char/mspec.c 239 */;
	const struct file_operations cocci_id/* drivers/char/mspec.c 233 */;
	struct vm_area_struct *cocci_id/* drivers/char/mspec.c 222 */;
	struct file *cocci_id/* drivers/char/mspec.c 222 */;
	int cocci_id/* drivers/char/mspec.c 221 */;
	struct vma_data cocci_id/* drivers/char/mspec.c 198 */;
	long cocci_id/* drivers/char/mspec.c 198 */;
	enum mspec_page_type cocci_id/* drivers/char/mspec.c 183 */;
	const struct vm_operations_struct cocci_id/* drivers/char/mspec.c 168 */;
	volatile unsigned long cocci_id/* drivers/char/mspec.c 145 */;
	pgoff_t cocci_id/* drivers/char/mspec.c 142 */;
	struct vm_fault *cocci_id/* drivers/char/mspec.c 138 */;
	vm_fault_t cocci_id/* drivers/char/mspec.c 137 */;
	char *cocci_id/* drivers/char/mspec.c 125 */;
	unsigned long cocci_id/* drivers/char/mspec.c 108 */;
	struct vma_data *cocci_id/* drivers/char/mspec.c 106 */;
	void cocci_id/* drivers/char/mspec.c 103 */;
}
