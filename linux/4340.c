cocci_test_suite() {
	u16 cocci_id/* drivers/char/sonypi.c 943 */;
	void __user *cocci_id/* drivers/char/sonypi.c 941 */;
	long cocci_id/* drivers/char/sonypi.c 937 */;
	__poll_t cocci_id/* drivers/char/sonypi.c 929 */;
	poll_table *cocci_id/* drivers/char/sonypi.c 929 */;
	unsigned char cocci_id/* drivers/char/sonypi.c 902 */;
	loff_t *cocci_id/* drivers/char/sonypi.c 899 */;
	size_t cocci_id/* drivers/char/sonypi.c 899 */;
	char __user *cocci_id/* drivers/char/sonypi.c 898 */;
	ssize_t cocci_id/* drivers/char/sonypi.c 898 */;
	struct inode *cocci_id/* drivers/char/sonypi.c 886 */;
	struct file *cocci_id/* drivers/char/sonypi.c 873 */;
	irqreturn_t cocci_id/* drivers/char/sonypi.c 824 */;
	void *cocci_id/* drivers/char/sonypi.c 824 */;
	unsigned long cocci_id/* drivers/char/sonypi.c 77 */;
	unsigned char *cocci_id/* drivers/char/sonypi.c 765 */;
	struct sonypi_keypress cocci_id/* drivers/char/sonypi.c 763 */;
	struct work_struct *cocci_id/* drivers/char/sonypi.c 761 */;
	void cocci_id/* drivers/char/sonypi.c 761 */;
	u32 cocci_id/* drivers/char/sonypi.c 607 */;
	u8 cocci_id/* drivers/char/sonypi.c 541 */;
	u16 *cocci_id/* drivers/char/sonypi.c 541 */;
	u8 *cocci_id/* drivers/char/sonypi.c 526 */;
	int cocci_id/* drivers/char/sonypi.c 507 */;
	unsigned int cocci_id/* drivers/char/sonypi.c 492 */;
	struct sonypi_device {
		struct pci_dev *dev;
		u16 irq;
		u16 bits;
		u16 ioport1;
		u16 ioport2;
		u16 region_size;
		u16 evtype_offset;
		int camera_power;
		int bluetooth_power;
		struct mutex lock;
		struct kfifo fifo;
		spinlock_t fifo_lock;
		wait_queue_head_t fifo_proc_list;
		struct fasync_struct *fifo_async;
		int open_count;
		int model;
		struct input_dev *input_jog_dev;
		struct input_dev *input_key_dev;
		struct work_struct input_work;
		struct kfifo input_fifo;
		spinlock_t input_fifo_lock;
	} cocci_id/* drivers/char/sonypi.c 464 */;
	struct sonypi_keypress {
		struct input_dev *dev;
		int key;
	} cocci_id/* drivers/char/sonypi.c 459 */;
	struct {
		int sonypiev;
		int inputev;
	} cocci_id/* drivers/char/sonypi.c 421 */[];
	struct sonypi_eventtypes {
		int model;
		u8 data;
		unsigned long mask;
		struct sonypi_event *events;
	} cocci_id/* drivers/char/sonypi.c 377 */[];
	struct sonypi_event cocci_id/* drivers/char/sonypi.c 325 */[];
	struct sonypi_event {
		u8 data;
		u8 event;
	} cocci_id/* drivers/char/sonypi.c 236 */;
	struct sonypi_irq_list *cocci_id/* drivers/char/sonypi.c 189 */;
	struct sonypi_irq_list cocci_id/* drivers/char/sonypi.c 173 */[];
	struct sonypi_irq_list {
		u16 irq;
		u16 bits;
	} cocci_id/* drivers/char/sonypi.c 168 */;
	struct sonypi_ioport_list *cocci_id/* drivers/char/sonypi.c 164 */;
	void __exit cocci_id/* drivers/char/sonypi.c 1537 */;
	int __init cocci_id/* drivers/char/sonypi.c 1498 */;
	const struct dmi_system_id cocci_id/* drivers/char/sonypi.c 1480 */[]__initconst;
	struct platform_driver cocci_id/* drivers/char/sonypi.c 1468 */;
	struct sonypi_ioport_list cocci_id/* drivers/char/sonypi.c 146 */[];
	struct device *cocci_id/* drivers/char/sonypi.c 1451 */;
	struct sonypi_ioport_list {
		u16 port1;
		u16 port2;
	} cocci_id/* drivers/char/sonypi.c 141 */;
	struct pci_dev *cocci_id/* drivers/char/sonypi.c 1292 */;
	const struct sonypi_irq_list *cocci_id/* drivers/char/sonypi.c 1291 */;
	const struct sonypi_ioport_list *cocci_id/* drivers/char/sonypi.c 1290 */;
	struct sonypi_device *cocci_id/* drivers/char/sonypi.c 1209 */;
	struct input_dev *cocci_id/* drivers/char/sonypi.c 1150 */;
	struct platform_device *cocci_id/* drivers/char/sonypi.c 1148 */;
	struct acpi_driver cocci_id/* drivers/char/sonypi.c 1137 */;
	const struct acpi_device_id cocci_id/* drivers/char/sonypi.c 1132 */[];
	struct acpi_device *cocci_id/* drivers/char/sonypi.c 1118 */;
	struct miscdevice cocci_id/* drivers/char/sonypi.c 1060 */;
	const struct file_operations cocci_id/* drivers/char/sonypi.c 1049 */;
}
