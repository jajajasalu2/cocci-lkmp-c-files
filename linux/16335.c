cocci_test_suite() {
	struct image_desc {
		void *kern_buf;
		dma_addr_t pci_buf;
		unsigned long long size_buf;
		struct mutex mutex;
		struct device *device;
		struct vme_resource *resource;
		int mmap_count;
	} cocci_id/* drivers/staging/vme/devices/vme_user.c 91 */;
	void __exit cocci_id/* drivers/staging/vme/devices/vme_user.c 769 */;
	void cocci_id/* drivers/staging/vme/devices/vme_user.c 769 */;
	int __init cocci_id/* drivers/staging/vme/devices/vme_user.c 731 */;
	struct vme_driver cocci_id/* drivers/staging/vme/devices/vme_user.c 724 */;
	char *cocci_id/* drivers/staging/vme/devices/vme_user.c 523 */;
	const struct file_operations cocci_id/* drivers/staging/vme/devices/vme_user.c 492 */;
	struct vme_user_vma_priv *cocci_id/* drivers/staging/vme/devices/vme_user.c 454 */;
	struct vm_area_struct *cocci_id/* drivers/staging/vme/devices/vme_user.c 451 */;
	const struct vm_operations_struct cocci_id/* drivers/staging/vme/devices/vme_user.c 446 */;
	int cocci_id/* drivers/staging/vme/devices/vme_user.c 42 */[VME_USER_BUS_MAX];
	long cocci_id/* drivers/staging/vme/devices/vme_user.c 410 */;
	const char cocci_id/* drivers/staging/vme/devices/vme_user.c 40 */[];
	void __user *cocci_id/* drivers/staging/vme/devices/vme_user.c 300 */;
	dma_addr_t cocci_id/* drivers/staging/vme/devices/vme_user.c 299 */;
	struct vme_irq_id cocci_id/* drivers/staging/vme/devices/vme_user.c 295 */;
	struct vme_slave cocci_id/* drivers/staging/vme/devices/vme_user.c 294 */;
	struct vme_master cocci_id/* drivers/staging/vme/devices/vme_user.c 293 */;
	struct inode *cocci_id/* drivers/staging/vme/devices/vme_user.c 290 */;
	struct file *cocci_id/* drivers/staging/vme/devices/vme_user.c 290 */;
	loff_t cocci_id/* drivers/staging/vme/devices/vme_user.c 261 */;
	unsigned long cocci_id/* drivers/staging/vme/devices/vme_user.c 169 */;
	void *cocci_id/* drivers/staging/vme/devices/vme_user.c 166 */;
	loff_t *cocci_id/* drivers/staging/vme/devices/vme_user.c 164 */;
	size_t cocci_id/* drivers/staging/vme/devices/vme_user.c 164 */;
	const char __user *cocci_id/* drivers/staging/vme/devices/vme_user.c 163 */;
	unsigned int cocci_id/* drivers/staging/vme/devices/vme_user.c 163 */;
	ssize_t cocci_id/* drivers/staging/vme/devices/vme_user.c 163 */;
	char __user *cocci_id/* drivers/staging/vme/devices/vme_user.c 151 */;
	int cocci_id/* drivers/staging/vme/devices/vme_user.c 119 */;
	struct vme_user_vma_priv {
		unsigned int minor;
		refcount_t refcnt;
	} cocci_id/* drivers/staging/vme/devices/vme_user.c 114 */;
	const int cocci_id/* drivers/staging/vme/devices/vme_user.c 107 */[VME_DEVS];
	struct vme_dev *cocci_id/* drivers/staging/vme/devices/vme_user.c 105 */;
	struct class *cocci_id/* drivers/staging/vme/devices/vme_user.c 104 */;
	struct cdev *cocci_id/* drivers/staging/vme/devices/vme_user.c 103 */;
	struct image_desc cocci_id/* drivers/staging/vme/devices/vme_user.c 101 */[VME_DEVS];
}
