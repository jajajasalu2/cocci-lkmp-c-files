cocci_test_suite() {
	unsigned short cocci_id/* drivers/char/pcmcia/cm4040_cs.c 95 */;
	struct pcmcia_device *cocci_id/* drivers/char/pcmcia/cm4040_cs.c 83 */[CM_MAX_DEV];
	struct reader_dev {
		struct pcmcia_device *p_dev;
		wait_queue_head_t devq;
		wait_queue_head_t poll_wait;
		wait_queue_head_t read_wait;
		wait_queue_head_t write_wait;
		unsigned long buffer_status;
		unsigned long timeout;
		unsigned char s_buf[READ_WRITE_BUFFER_SIZE];
		unsigned char r_buf[READ_WRITE_BUFFER_SIZE];
		struct timer_list poll_timer;
	} cocci_id/* drivers/char/pcmcia/cm4040_cs.c 70 */;
	void __exit cocci_id/* drivers/char/pcmcia/cm4040_cs.c 676 */;
	int __init cocci_id/* drivers/char/pcmcia/cm4040_cs.c 650 */;
	struct class *cocci_id/* drivers/char/pcmcia/cm4040_cs.c 65 */;
	struct pcmcia_driver cocci_id/* drivers/char/pcmcia/cm4040_cs.c 642 */;
	const struct pcmcia_device_id cocci_id/* drivers/char/pcmcia/cm4040_cs.c 634 */[];
	const struct file_operations cocci_id/* drivers/char/pcmcia/cm4040_cs.c 624 */;
	void cocci_id/* drivers/char/pcmcia/cm4040_cs.c 62 */(struct pcmcia_device *link);
	struct reader_dev cocci_id/* drivers/char/pcmcia/cm4040_cs.c 571 */;
	void *cocci_id/* drivers/char/pcmcia/cm4040_cs.c 516 */;
	struct pcmcia_device *cocci_id/* drivers/char/pcmcia/cm4040_cs.c 480 */;
	struct reader_dev *cocci_id/* drivers/char/pcmcia/cm4040_cs.c 479 */;
	struct inode *cocci_id/* drivers/char/pcmcia/cm4040_cs.c 477 */;
	struct file *cocci_id/* drivers/char/pcmcia/cm4040_cs.c 477 */;
	int cocci_id/* drivers/char/pcmcia/cm4040_cs.c 477 */;
	__poll_t cocci_id/* drivers/char/pcmcia/cm4040_cs.c 418 */;
	poll_table *cocci_id/* drivers/char/pcmcia/cm4040_cs.c 418 */;
	const char __user *cocci_id/* drivers/char/pcmcia/cm4040_cs.c 317 */;
	__le32 *cocci_id/* drivers/char/pcmcia/cm4040_cs.c 261 */;
	unsigned char cocci_id/* drivers/char/pcmcia/cm4040_cs.c 224 */;
	unsigned long cocci_id/* drivers/char/pcmcia/cm4040_cs.c 221 */;
	loff_t *cocci_id/* drivers/char/pcmcia/cm4040_cs.c 216 */;
	size_t cocci_id/* drivers/char/pcmcia/cm4040_cs.c 216 */;
	char __user *cocci_id/* drivers/char/pcmcia/cm4040_cs.c 215 */;
	ssize_t cocci_id/* drivers/char/pcmcia/cm4040_cs.c 215 */;
	unsigned int cocci_id/* drivers/char/pcmcia/cm4040_cs.c 110 */;
	struct timer_list *cocci_id/* drivers/char/pcmcia/cm4040_cs.c 107 */;
	void cocci_id/* drivers/char/pcmcia/cm4040_cs.c 107 */;
}
