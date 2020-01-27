cocci_test_suite() {
	unsigned int *cocci_id/* drivers/gpu/vga/vgaarb.c 987 */;
	struct vga_arb_private {
		struct list_head list;
		struct pci_dev *target;
		struct vga_arb_user_card cards[MAX_USER_CARDS];
		spinlock_t lock;
	} cocci_id/* drivers/gpu/vga/vgaarb.c 971 */;
	struct vga_arb_user_card {
		struct pci_dev *pdev;
		unsigned int mem_cnt;
		unsigned int io_cnt;
	} cocci_id/* drivers/gpu/vga/vgaarb.c 965 */;
	unsigned int (*cocci_id/* drivers/gpu/vga/vgaarb.c 882 */)(void *cookie,
								   bool decode);
	void (*cocci_id/* drivers/gpu/vga/vgaarb.c 881 */)(void *cookie,
							   bool state);
	const char *cocci_id/* drivers/gpu/vga/vgaarb.c 87 */;
	unsigned long cocci_id/* drivers/gpu/vga/vgaarb.c 819 */;
	bool cocci_id/* drivers/gpu/vga/vgaarb.c 816 */;
	struct pci_dev *cocci_id/* drivers/gpu/vga/vgaarb.c 814 */;
	struct pci_bus *cocci_id/* drivers/gpu/vga/vgaarb.c 658 */;
	struct vga_device {
		struct list_head list;
		struct pci_dev *pdev;
		unsigned int decodes;
		unsigned int owns;
		unsigned int locks;
		unsigned int io_lock_cnt;
		unsigned int mem_lock_cnt;
		unsigned int io_norm_cnt;
		unsigned int mem_norm_cnt;
		bool bridge_has_one_vga;
		void *cookie;
		void (*irq_set_state)(void *cookie, bool enable);
		unsigned int (*set_vga_decode)(void *cookie, bool decode);
	} cocci_id/* drivers/gpu/vga/vgaarb.c 63 */;
	void cocci_id/* drivers/gpu/vga/vgaarb.c 58 */(void);
	wait_queue_entry_t cocci_id/* drivers/gpu/vga/vgaarb.c 469 */;
	struct device *cocci_id/* drivers/gpu/vga/vgaarb.c 393 */;
	struct vga_device *cocci_id/* drivers/gpu/vga/vgaarb.c 391 */;
	unsigned int cocci_id/* drivers/gpu/vga/vgaarb.c 391 */;
	void cocci_id/* drivers/gpu/vga/vgaarb.c 391 */;
	u32 cocci_id/* drivers/gpu/vga/vgaarb.c 248 */;
	int __init cocci_id/* drivers/gpu/vga/vgaarb.c 1534 */;
	struct vga_device cocci_id/* drivers/gpu/vga/vgaarb.c 1525 */;
	u16 cocci_id/* drivers/gpu/vga/vgaarb.c 1511 */;
	resource_size_t cocci_id/* drivers/gpu/vga/vgaarb.c 1463 */;
	u64 cocci_id/* drivers/gpu/vga/vgaarb.c 1460 */;
	void __init cocci_id/* drivers/gpu/vga/vgaarb.c 1454 */;
	struct miscdevice cocci_id/* drivers/gpu/vga/vgaarb.c 1450 */;
	const struct file_operations cocci_id/* drivers/gpu/vga/vgaarb.c 1441 */;
	struct notifier_block cocci_id/* drivers/gpu/vga/vgaarb.c 1437 */;
	void *cocci_id/* drivers/gpu/vga/vgaarb.c 1416 */;
	struct notifier_block *cocci_id/* drivers/gpu/vga/vgaarb.c 1415 */;
	int cocci_id/* drivers/gpu/vga/vgaarb.c 1415 */;
	uint32_t cocci_id/* drivers/gpu/vga/vgaarb.c 1394 */;
	struct vga_arb_user_card *cocci_id/* drivers/gpu/vga/vgaarb.c 1356 */;
	struct vga_arb_private *cocci_id/* drivers/gpu/vga/vgaarb.c 1328 */;
	struct inode *cocci_id/* drivers/gpu/vga/vgaarb.c 1326 */;
	__poll_t cocci_id/* drivers/gpu/vga/vgaarb.c 1318 */;
	poll_table *cocci_id/* drivers/gpu/vga/vgaarb.c 1318 */;
	struct file *cocci_id/* drivers/gpu/vga/vgaarb.c 1318 */;
	void cocci_id/* drivers/gpu/vga/vgaarb.c 127 */(struct pci_dev *pdev);
	char cocci_id/* drivers/gpu/vga/vgaarb.c 1079 */[64];
	const char __user *cocci_id/* drivers/gpu/vga/vgaarb.c 1070 */;
	int *cocci_id/* drivers/gpu/vga/vgaarb.c 102 */;
	char *cocci_id/* drivers/gpu/vga/vgaarb.c 1012 */;
	loff_t *cocci_id/* drivers/gpu/vga/vgaarb.c 1004 */;
	size_t cocci_id/* drivers/gpu/vga/vgaarb.c 1004 */;
	char __user *cocci_id/* drivers/gpu/vga/vgaarb.c 1003 */;
	ssize_t cocci_id/* drivers/gpu/vga/vgaarb.c 1003 */;
}
