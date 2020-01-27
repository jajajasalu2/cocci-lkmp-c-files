cocci_test_suite() {
	struct list_head cocci_id/* drivers/tty/hvc/hvcs.c 895 */;
	struct hvcs_partner_info *cocci_id/* drivers/tty/hvc/hvcs.c 893 */;
	struct vio_driver cocci_id/* drivers/tty/hvc/hvcs.c 860 */;
	const struct vio_device_id *cocci_id/* drivers/tty/hvc/hvcs.c 747 */;
	const struct tty_port_operations cocci_id/* drivers/tty/hvc/hvcs.c 723 */;
	uint32_t cocci_id/* drivers/tty/hvc/hvcs.c 702 */;
	struct hvcs_struct cocci_id/* drivers/tty/hvc/hvcs.c 686 */;
	struct tty_port *cocci_id/* drivers/tty/hvc/hvcs.c 684 */;
	const struct vio_device_id cocci_id/* drivers/tty/hvc/hvcs.c 665 */[];
	char cocci_id/* drivers/tty/hvc/hvcs.c 578 */[HVCS_BUFF_LEN]__ALIGNED__;
	irqreturn_t cocci_id/* drivers/tty/hvc/hvcs.c 530 */;
	void *cocci_id/* drivers/tty/hvc/hvcs.c 530 */;
	struct device_driver *cocci_id/* drivers/tty/hvc/hvcs.c 474 */;
	struct attribute_group cocci_id/* drivers/tty/hvc/hvcs.c 470 */;
	struct attribute *cocci_id/* drivers/tty/hvc/hvcs.c 461 */[];
	struct device_attribute *cocci_id/* drivers/tty/hvc/hvcs.c 377 */;
	struct device *cocci_id/* drivers/tty/hvc/hvcs.c 377 */;
	char *cocci_id/* drivers/tty/hvc/hvcs.c 377 */;
	ssize_t cocci_id/* drivers/tty/hvc/hvcs.c 377 */;
	size_t cocci_id/* drivers/tty/hvc/hvcs.c 367 */;
	const char *cocci_id/* drivers/tty/hvc/hvcs.c 366 */;
	struct vio_dev *cocci_id/* drivers/tty/hvc/hvcs.c 332 */;
	struct hvcs_struct *cocci_id/* drivers/tty/hvc/hvcs.c 332 */;
	int cocci_id/* drivers/tty/hvc/hvcs.c 325 */(void);
	void __exit cocci_id/* drivers/tty/hvc/hvcs.c 324 */(void);
	int __init cocci_id/* drivers/tty/hvc/hvcs.c 323 */(void);
	int cocci_id/* drivers/tty/hvc/hvcs.c 322 */(struct vio_dev *dev);
	int cocci_id/* drivers/tty/hvc/hvcs.c 320 */(struct vio_dev *dev,
						     const struct vio_device_id *id);
	void cocci_id/* drivers/tty/hvc/hvcs.c 318 */(struct tty_struct *tty);
	void cocci_id/* drivers/tty/hvc/hvcs.c 317 */(struct tty_struct *tty,
						      struct file *filp);
	int cocci_id/* drivers/tty/hvc/hvcs.c 316 */(struct tty_struct *tty,
						     struct file *filp);
	int cocci_id/* drivers/tty/hvc/hvcs.c 313 */(struct hvcs_struct *hvcsd,
						     uint32_t unit_address,
						     unsigned int irq,
						     struct vio_dev *dev);
	void cocci_id/* drivers/tty/hvc/hvcs.c 311 */(struct hvcs_struct *hvcsd);
	int cocci_id/* drivers/tty/hvc/hvcs.c 307 */(struct hvcs_struct *hvcsd);
	void cocci_id/* drivers/tty/hvc/hvcs.c 305 */(struct hvcs_partner_info *pi,
						      struct hvcs_struct *hvcsd);
	int cocci_id/* drivers/tty/hvc/hvcs.c 302 */(struct tty_struct *tty);
	int cocci_id/* drivers/tty/hvc/hvcs.c 299 */(struct tty_struct *tty,
						     const unsigned char *buf,
						     int count);
	irqreturn_t cocci_id/* drivers/tty/hvc/hvcs.c 297 */(int irq,
							     void *dev_instance);
	struct hvcs_struct {
		struct tty_port port;
		spinlock_t lock;
		unsigned int index;
		int todo_mask;
		char buffer[HVCS_BUFF_LEN];
		int chars_in_buffer;
		int connected;
		uint32_t p_unit_address;
		uint32_t p_partition_ID;
		char p_location_code[HVCS_CLC_LENGTH + 1];
		struct list_head next;
		struct vio_dev *vdev;
	} cocci_id/* drivers/tty/hvc/hvcs.c 250 */;
	struct task_struct *cocci_id/* drivers/tty/hvc/hvcs.c 238 */;
	int *cocci_id/* drivers/tty/hvc/hvcs.c 220 */;
	const char cocci_id/* drivers/tty/hvc/hvcs.c 198 */[];
	const struct ktermios cocci_id/* drivers/tty/hvc/hvcs.c 179 */;
	void __exit cocci_id/* drivers/tty/hvc/hvcs.c 1569 */;
	int __init cocci_id/* drivers/tty/hvc/hvcs.c 1549 */;
	unsigned long *cocci_id/* drivers/tty/hvc/hvcs.c 1521 */;
	int cocci_id/* drivers/tty/hvc/hvcs.c 1440 */;
	const struct tty_operations cocci_id/* drivers/tty/hvc/hvcs.c 1427 */;
	struct tty_struct *cocci_id/* drivers/tty/hvc/hvcs.c 1420 */;
	const unsigned char *cocci_id/* drivers/tty/hvc/hvcs.c 1306 */;
	void cocci_id/* drivers/tty/hvc/hvcs.c 1238 */;
	unsigned long cocci_id/* drivers/tty/hvc/hvcs.c 1184 */;
	struct file *cocci_id/* drivers/tty/hvc/hvcs.c 1181 */;
	struct tty_driver *cocci_id/* drivers/tty/hvc/hvcs.c 1086 */;
	unsigned int cocci_id/* drivers/tty/hvc/hvcs.c 1024 */;
}
