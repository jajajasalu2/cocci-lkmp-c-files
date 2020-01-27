cocci_test_suite() {
	void __exit cocci_id/* drivers/virt/fsl_hypervisor.c 918 */;
	const uint32_t *cocci_id/* drivers/virt/fsl_hypervisor.c 842 */;
	struct device_node *cocci_id/* drivers/virt/fsl_hypervisor.c 820 */;
	int __init cocci_id/* drivers/virt/fsl_hypervisor.c 818 */;
	u32 cocci_id/* drivers/virt/fsl_hypervisor.c 79 */;
	struct fsl_hv_ioctl_status cocci_id/* drivers/virt/fsl_hypervisor.c 78 */;
	struct notifier_block *cocci_id/* drivers/virt/fsl_hypervisor.c 768 */;
	struct fsl_hv_ioctl_status __user *cocci_id/* drivers/virt/fsl_hypervisor.c 76 */;
	struct miscdevice cocci_id/* drivers/virt/fsl_hypervisor.c 712 */;
	const struct file_operations cocci_id/* drivers/virt/fsl_hypervisor.c 702 */;
	unsigned long cocci_id/* drivers/virt/fsl_hypervisor.c 689 */;
	struct doorbell_queue *cocci_id/* drivers/virt/fsl_hypervisor.c 688 */;
	struct inode *cocci_id/* drivers/virt/fsl_hypervisor.c 686 */;
	struct file *cocci_id/* drivers/virt/fsl_hypervisor.c 686 */;
	int cocci_id/* drivers/virt/fsl_hypervisor.c 686 */;
	struct doorbell_queue cocci_id/* drivers/virt/fsl_hypervisor.c 665 */;
	uint32_t __user *cocci_id/* drivers/virt/fsl_hypervisor.c 598 */;
	loff_t *cocci_id/* drivers/virt/fsl_hypervisor.c 595 */;
	char __user *cocci_id/* drivers/virt/fsl_hypervisor.c 594 */;
	ssize_t cocci_id/* drivers/virt/fsl_hypervisor.c 594 */;
	size_t cocci_id/* drivers/virt/fsl_hypervisor.c 594 */;
	__poll_t cocci_id/* drivers/virt/fsl_hypervisor.c 571 */;
	struct poll_table_struct *cocci_id/* drivers/virt/fsl_hypervisor.c 571 */;
	struct fsl_hv_ioctl_restart cocci_id/* drivers/virt/fsl_hypervisor.c 57 */;
	struct doorbell_isr *cocci_id/* drivers/virt/fsl_hypervisor.c 554 */;
	struct fsl_hv_ioctl_restart __user *cocci_id/* drivers/virt/fsl_hypervisor.c 55 */;
	uintptr_t cocci_id/* drivers/virt/fsl_hypervisor.c 523 */;
	irqreturn_t cocci_id/* drivers/virt/fsl_hypervisor.c 521 */;
	void *cocci_id/* drivers/virt/fsl_hypervisor.c 521 */;
	uint32_t cocci_id/* drivers/virt/fsl_hypervisor.c 490 */;
	void cocci_id/* drivers/virt/fsl_hypervisor.c 490 */;
	struct doorbell_isr {
		struct list_head list;
		unsigned int irq;
		uint32_t doorbell;
		uint32_t partition;
	} cocci_id/* drivers/virt/fsl_hypervisor.c 480 */;
	struct doorbell_queue {
		struct list_head list;
		spinlock_t lock;
		wait_queue_head_t wait;
		unsigned int head;
		unsigned int tail;
		uint32_t q[QSIZE];
	} cocci_id/* drivers/virt/fsl_hypervisor.c 467 */;
	struct list_head cocci_id/* drivers/virt/fsl_hypervisor.c 455 */;
	void __user *cocci_id/* drivers/virt/fsl_hypervisor.c 416 */;
	unsigned int cocci_id/* drivers/virt/fsl_hypervisor.c 413 */;
	long cocci_id/* drivers/virt/fsl_hypervisor.c 413 */;
	char *cocci_id/* drivers/virt/fsl_hypervisor.c 337 */;
	struct fsl_hv_ioctl_prop cocci_id/* drivers/virt/fsl_hypervisor.c 334 */;
	struct fsl_hv_ioctl_prop __user *cocci_id/* drivers/virt/fsl_hypervisor.c 332 */;
	struct fsl_hv_ioctl_doorbell cocci_id/* drivers/virt/fsl_hypervisor.c 318 */;
	struct fsl_hv_ioctl_doorbell __user *cocci_id/* drivers/virt/fsl_hypervisor.c 316 */;
	struct fh_sg_list cocci_id/* drivers/virt/fsl_hypervisor.c 239 */;
	struct page *cocci_id/* drivers/virt/fsl_hypervisor.c 229 */;
	phys_addr_t cocci_id/* drivers/virt/fsl_hypervisor.c 161 */;
	struct fh_sg_list *cocci_id/* drivers/virt/fsl_hypervisor.c 153 */;
	struct page **cocci_id/* drivers/virt/fsl_hypervisor.c 151 */;
	struct fsl_hv_ioctl_memcpy cocci_id/* drivers/virt/fsl_hypervisor.c 149 */;
	struct fsl_hv_ioctl_memcpy __user *cocci_id/* drivers/virt/fsl_hypervisor.c 147 */;
	struct fsl_hv_ioctl_stop cocci_id/* drivers/virt/fsl_hypervisor.c 124 */;
	struct fsl_hv_ioctl_stop __user *cocci_id/* drivers/virt/fsl_hypervisor.c 122 */;
	struct fsl_hv_ioctl_start cocci_id/* drivers/virt/fsl_hypervisor.c 102 */;
	struct fsl_hv_ioctl_start __user *cocci_id/* drivers/virt/fsl_hypervisor.c 100 */;
}