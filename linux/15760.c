cocci_test_suite() {
	struct kmem_cache *cocci_id/* drivers/staging/android/ashmem.c 95 */;
	struct ashmem_range cocci_id/* drivers/staging/android/ashmem.c 895 */;
	struct ashmem_area cocci_id/* drivers/staging/android/ashmem.c 887 */;
	int __init cocci_id/* drivers/staging/android/ashmem.c 882 */;
	void cocci_id/* drivers/staging/android/ashmem.c 882 */;
	struct miscdevice cocci_id/* drivers/staging/android/ashmem.c 876 */;
	const struct file_operations cocci_id/* drivers/staging/android/ashmem.c 860 */;
	struct seq_file *cocci_id/* drivers/staging/android/ashmem.c 844 */;
	struct shrink_control cocci_id/* drivers/staging/android/ashmem.c 814 */;
	void __user *cocci_id/* drivers/staging/android/ashmem.c 783 */;
	atomic_t cocci_id/* drivers/staging/android/ashmem.c 78 */;
	struct file *cocci_id/* drivers/staging/android/ashmem.c 776 */;
	unsigned long cocci_id/* drivers/staging/android/ashmem.c 776 */;
	unsigned int cocci_id/* drivers/staging/android/ashmem.c 776 */;
	long cocci_id/* drivers/staging/android/ashmem.c 776 */;
	struct ashmem_pin cocci_id/* drivers/staging/android/ashmem.c 720 */;
	struct ashmem_range *cocci_id/* drivers/staging/android/ashmem.c 702 */;
	struct ashmem_area *cocci_id/* drivers/staging/android/ashmem.c 699 */;
	int cocci_id/* drivers/staging/android/ashmem.c 699 */;
	size_t cocci_id/* drivers/staging/android/ashmem.c 699 */;
	struct ashmem_range {
		struct list_head lru;
		struct list_head unpinned;
		struct ashmem_area *asma;
		size_t pgstart;
		size_t pgend;
		unsigned int purged;
	} cocci_id/* drivers/staging/android/ashmem.c 66 */;
	struct ashmem_range **cocci_id/* drivers/staging/android/ashmem.c 595 */;
	char cocci_id/* drivers/staging/android/ashmem.c 563 */[ASHMEM_NAME_LEN];
	struct shrinker cocci_id/* drivers/staging/android/ashmem.c 489 */;
	struct shrinker *cocci_id/* drivers/staging/android/ashmem.c 479 */;
	struct shrink_control *cocci_id/* drivers/staging/android/ashmem.c 479 */;
	struct ashmem_area {
		char name[ASHMEM_FULL_NAME_LEN];
		struct list_head unpinned_list;
		struct file *file;
		size_t size;
		unsigned long prot_mask;
	} cocci_id/* drivers/staging/android/ashmem.c 46 */;
	typeof(*range) cocci_id/* drivers/staging/android/ashmem.c 450 */;
	char *cocci_id/* drivers/staging/android/ashmem.c 382 */;
	struct vm_area_struct *cocci_id/* drivers/staging/android/ashmem.c 354 */;
	vm_flags_t cocci_id/* drivers/staging/android/ashmem.c 347 */;
	loff_t cocci_id/* drivers/staging/android/ashmem.c 319 */;
	struct kiocb *cocci_id/* drivers/staging/android/ashmem.c 287 */;
	struct iov_iter *cocci_id/* drivers/staging/android/ashmem.c 287 */;
	ssize_t cocci_id/* drivers/staging/android/ashmem.c 287 */;
	struct inode *cocci_id/* drivers/staging/android/ashmem.c 241 */;
	bool cocci_id/* drivers/staging/android/ashmem.c 120 */;
}