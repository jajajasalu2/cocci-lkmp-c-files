cocci_test_suite() {
	struct applicom_board {
		unsigned long PhysIO;
		void __iomem *RamIO;
		wait_queue_head_t FlagSleepSend;
		long irq;
		spinlock_t mutex;
	} cocci_id/* drivers/char/applicom.c 88 */[MAX_BOARD];
	char cocci_id/* drivers/char/applicom.c 798 */[(SERIAL_NUMBER - TYPE_CARD) + 1];
	int *cocci_id/* drivers/char/applicom.c 750 */;
	unsigned char *cocci_id/* drivers/char/applicom.c 733 */;
	const struct pci_device_id cocci_id/* drivers/char/applicom.c 72 */[];
	struct st_ram_io cocci_id/* drivers/char/applicom.c 714 */;
	void __user *cocci_id/* drivers/char/applicom.c 709 */;
	struct st_ram_io *cocci_id/* drivers/char/applicom.c 708 */;
	void __iomem *cocci_id/* drivers/char/applicom.c 704 */;
	unsigned char cocci_id/* drivers/char/applicom.c 703 */;
	struct file *cocci_id/* drivers/char/applicom.c 699 */;
	unsigned long cocci_id/* drivers/char/applicom.c 699 */;
	long cocci_id/* drivers/char/applicom.c 699 */;
	char *cocci_id/* drivers/char/applicom.c 66 */[];
	irqreturn_t cocci_id/* drivers/char/applicom.c 623 */;
	void *cocci_id/* drivers/char/applicom.c 623 */;
	int cocci_id/* drivers/char/applicom.c 623 */;
	struct mailbox cocci_id/* drivers/char/applicom.c 550 */;
	loff_t *cocci_id/* drivers/char/applicom.c 539 */;
	char __user *cocci_id/* drivers/char/applicom.c 539 */;
	ssize_t cocci_id/* drivers/char/applicom.c 539 */;
	size_t cocci_id/* drivers/char/applicom.c 539 */;
	struct mailbox *cocci_id/* drivers/char/applicom.c 486 */;
	const char __user *cocci_id/* drivers/char/applicom.c 357 */;
	unsigned long long cocci_id/* drivers/char/applicom.c 212 */;
	struct pci_dev *cocci_id/* drivers/char/applicom.c 191 */;
	int __init cocci_id/* drivers/char/applicom.c 188 */;
	void __exit cocci_id/* drivers/char/applicom.c 170 */;
	void cocci_id/* drivers/char/applicom.c 170 */;
	struct miscdevice cocci_id/* drivers/char/applicom.c 124 */;
	const struct file_operations cocci_id/* drivers/char/applicom.c 116 */;
	irqreturn_t cocci_id/* drivers/char/applicom.c 114 */(int, void *);
	long cocci_id/* drivers/char/applicom.c 113 */(struct file *,
						       unsigned int,
						       unsigned long);
	ssize_t cocci_id/* drivers/char/applicom.c 112 */(struct file *,
							  const char __user *,
							  size_t, loff_t *);
	ssize_t cocci_id/* drivers/char/applicom.c 111 */(struct file *,
							  char __user *,
							  size_t, loff_t *);
	unsigned int cocci_id/* drivers/char/applicom.c 109 */;
	volatile unsigned char cocci_id/* drivers/char/applicom.c 105 */;
}
