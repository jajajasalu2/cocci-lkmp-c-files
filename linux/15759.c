cocci_test_suite() {
	const struct vsoc_signal_table_layout *cocci_id/* drivers/staging/android/vsoc.c 903 */;
	const struct vsoc_device_region *cocci_id/* drivers/staging/android/vsoc.c 871 */;
	struct vsoc_device_region __force *cocci_id/* drivers/staging/android/vsoc.c 838 */;
	struct vsoc_shm_layout_descriptor __force *cocci_id/* drivers/staging/android/vsoc.c 798 */;
	size_t cocci_id/* drivers/staging/android/vsoc.c 780 */;
	struct vsoc_device {
		void __iomem *regs;
		phys_addr_t shm_phys_start;
		void __iomem *kernel_mapped_shm;
		size_t shm_size;
		struct vsoc_shm_layout_descriptor *layout;
		struct vsoc_device_region *regions;
		struct list_head permissions;
		struct pci_dev *dev;
		struct vsoc_region_data *regions_data;
		struct msix_entry *msix_entries;
		struct mutex mtx;
		int major;
		struct cdev cdev;
		struct class *class;
		bool enabled_device;
		bool requested_regions;
		bool cdev_added;
		bool class_added;
		bool msix_enabled;
	} cocci_id/* drivers/staging/android/vsoc.c 78 */;
	dev_t cocci_id/* drivers/staging/android/vsoc.c 751 */;
	resource_size_t cocci_id/* drivers/staging/android/vsoc.c 750 */;
	const struct pci_device_id *cocci_id/* drivers/staging/android/vsoc.c 746 */;
	struct pci_dev *cocci_id/* drivers/staging/android/vsoc.c 745 */;
	irqreturn_t cocci_id/* drivers/staging/android/vsoc.c 719 */;
	const char __user *cocci_id/* drivers/staging/android/vsoc.c 695 */;
	struct vsoc_region_data {
		char name[VSOC_DEVICE_NAME_SZ + 1];
		wait_queue_head_t interrupt_wait_queue;
		wait_queue_head_t futex_wait_queue;
		atomic_t *incoming_signalled;
		atomic_t *outgoing_signalled;
		bool irq_requested;
		bool device_created;
	} cocci_id/* drivers/staging/android/vsoc.c 65 */;
	loff_t cocci_id/* drivers/staging/android/vsoc.c 645 */;
	const void *cocci_id/* drivers/staging/android/vsoc.c 625 */;
	loff_t *cocci_id/* drivers/staging/android/vsoc.c 622 */;
	char __user *cocci_id/* drivers/staging/android/vsoc.c 621 */;
	struct fd_scoped_permission __user *cocci_id/* drivers/staging/android/vsoc.c 575 */;
	const int cocci_id/* drivers/staging/android/vsoc.c 57 */;
	unsigned long cocci_id/* drivers/staging/android/vsoc.c 529 */;
	unsigned int cocci_id/* drivers/staging/android/vsoc.c 529 */;
	uint64_t cocci_id/* drivers/staging/android/vsoc.c 516 */;
	struct vsoc_region_data *cocci_id/* drivers/staging/android/vsoc.c 511 */;
	u32 cocci_id/* drivers/staging/android/vsoc.c 510 */;
	uint32_t cocci_id/* drivers/staging/android/vsoc.c 507 */;
	struct vsoc_cond_wait cocci_id/* drivers/staging/android/vsoc.c 494 */;
	struct vsoc_cond_wait __user *cocci_id/* drivers/staging/android/vsoc.c 492 */;
	enum{INTR_MASK=0x00, INTR_STATUS=0x04, IV_POSITION=0x08, DOORBELL=0x0c,} cocci_id/* drivers/staging/android/vsoc.c 49 */;
	ktime_t cocci_id/* drivers/staging/android/vsoc.c 408 */;
	struct hrtimer_sleeper cocci_id/* drivers/staging/android/vsoc.c 404 */;
	struct vsoc_cond_wait *cocci_id/* drivers/staging/android/vsoc.c 399 */;
	struct vsoc_device_region __user *cocci_id/* drivers/staging/android/vsoc.c 382 */;
	long cocci_id/* drivers/staging/android/vsoc.c 381 */;
	struct fd_scoped_permission *cocci_id/* drivers/staging/android/vsoc.c 363 */;
	void cocci_id/* drivers/staging/android/vsoc.c 361 */;
	struct vsoc_private_data *cocci_id/* drivers/staging/android/vsoc.c 273 */;
	atomic_t *cocci_id/* drivers/staging/android/vsoc.c 259 */;
	s32 cocci_id/* drivers/staging/android/vsoc.c 258 */;
	struct file *cocci_id/* drivers/staging/android/vsoc.c 257 */;
	struct fd_scoped_permission_arg __user *cocci_id/* drivers/staging/android/vsoc.c 255 */;
	struct fd_scoped_permission_node *cocci_id/* drivers/staging/android/vsoc.c 254 */;
	struct vsoc_device_region *cocci_id/* drivers/staging/android/vsoc.c 253 */;
	int cocci_id/* drivers/staging/android/vsoc.c 252 */;
	struct pci_driver cocci_id/* drivers/staging/android/vsoc.c 245 */;
	int cocci_id/* drivers/staging/android/vsoc.c 242 */(struct pci_dev *pdev,
							     const struct pci_device_id *ent);
	void cocci_id/* drivers/staging/android/vsoc.c 241 */(struct pci_dev *pdev);
	struct pci_device_id cocci_id/* drivers/staging/android/vsoc.c 234 */[];
	const struct file_operations cocci_id/* drivers/staging/android/vsoc.c 222 */;
	phys_addr_t cocci_id/* drivers/staging/android/vsoc.c 196 */;
	__u32 cocci_id/* drivers/staging/android/vsoc.c 196 */;
	void __force *cocci_id/* drivers/staging/android/vsoc.c 192 */;
	void *cocci_id/* drivers/staging/android/vsoc.c 190 */;
	ssize_t cocci_id/* drivers/staging/android/vsoc.c 159 */(struct file *filp,
								 __u32 *perm_off);
	long cocci_id/* drivers/staging/android/vsoc.c 157 */(struct file *,
							      struct vsoc_device_region __user *);
	void cocci_id/* drivers/staging/android/vsoc.c 154 */(struct vsoc_device_region *owner_region_p,
							      struct fd_scoped_permission *perm);
	int cocci_id/* drivers/staging/android/vsoc.c 150 */(struct vsoc_device_region *region_p,
							     struct fd_scoped_permission_node *np,
							     struct fd_scoped_permission_arg __user *arg);
	loff_t cocci_id/* drivers/staging/android/vsoc.c 149 */(struct file *filp,
								loff_t offset,
								int origin);
	ssize_t cocci_id/* drivers/staging/android/vsoc.c 148 */(struct file *,
								 const char __user *,
								 size_t,
								 loff_t *);
	ssize_t cocci_id/* drivers/staging/android/vsoc.c 147 */(struct file *,
								 char __user *,
								 size_t,
								 loff_t *);
	int cocci_id/* drivers/staging/android/vsoc.c 145 */(struct inode *,
							     struct file *);
	int cocci_id/* drivers/staging/android/vsoc.c 144 */(struct file *,
							     struct vm_area_struct *);
	long cocci_id/* drivers/staging/android/vsoc.c 143 */(struct file *,
							      unsigned int,
							      unsigned long);
	struct vsoc_private_data {
		struct fd_scoped_permission_node *fd_scoped_permission_node;
	} cocci_id/* drivers/staging/android/vsoc.c 139 */;
	struct fd_scoped_permission_node {
		struct fd_scoped_permission permission;
		struct list_head list;
	} cocci_id/* drivers/staging/android/vsoc.c 134 */;
	struct vsoc_device cocci_id/* drivers/staging/android/vsoc.c 128 */;
	struct vm_area_struct *cocci_id/* drivers/staging/android/vsoc.c 1119 */;
	__u32 *cocci_id/* drivers/staging/android/vsoc.c 1091 */;
	ssize_t cocci_id/* drivers/staging/android/vsoc.c 1091 */;
	struct vsoc_private_data cocci_id/* drivers/staging/android/vsoc.c 1050 */;
	struct inode *cocci_id/* drivers/staging/android/vsoc.c 1042 */;
	int __init cocci_id/* drivers/staging/android/vsoc.c 1029 */;
	void __exit cocci_id/* drivers/staging/android/vsoc.c 1023 */;
}
