cocci_test_suite() {
	struct scr24x_dev *cocci_id/* drivers/char/pcmcia/scr24x_cs.c 99 */;
	int cocci_id/* drivers/char/pcmcia/scr24x_cs.c 99 */;
	size_t cocci_id/* drivers/char/pcmcia/scr24x_cs.c 99 */;
	struct inode *cocci_id/* drivers/char/pcmcia/scr24x_cs.c 74 */;
	struct file *cocci_id/* drivers/char/pcmcia/scr24x_cs.c 74 */;
	u_char cocci_id/* drivers/char/pcmcia/scr24x_cs.c 60 */;
	struct scr24x_dev cocci_id/* drivers/char/pcmcia/scr24x_cs.c 52 */;
	struct kref *cocci_id/* drivers/char/pcmcia/scr24x_cs.c 50 */;
	void cocci_id/* drivers/char/pcmcia/scr24x_cs.c 50 */;
	dev_t cocci_id/* drivers/char/pcmcia/scr24x_cs.c 48 */;
	struct class *cocci_id/* drivers/char/pcmcia/scr24x_cs.c 47 */;
	void __exit cocci_id/* drivers/char/pcmcia/scr24x_cs.c 348 */;
	struct scr24x_dev {
		struct device *dev;
		struct cdev c_dev;
		unsigned char buf[CCID_MAX_LEN];
		int devno;
		struct mutex lock;
		struct kref refcnt;
		u8 __iomem *regs;
	} cocci_id/* drivers/char/pcmcia/scr24x_cs.c 34 */;
	int __init cocci_id/* drivers/char/pcmcia/scr24x_cs.c 325 */;
	struct pcmcia_driver cocci_id/* drivers/char/pcmcia/scr24x_cs.c 317 */;
	const struct pcmcia_device_id cocci_id/* drivers/char/pcmcia/scr24x_cs.c 307 */[];
	struct pcmcia_device *cocci_id/* drivers/char/pcmcia/scr24x_cs.c 225 */;
	void *cocci_id/* drivers/char/pcmcia/scr24x_cs.c 225 */;
	const struct file_operations cocci_id/* drivers/char/pcmcia/scr24x_cs.c 216 */;
	const char __user *cocci_id/* drivers/char/pcmcia/scr24x_cs.c 166 */;
	__le32 *cocci_id/* drivers/char/pcmcia/scr24x_cs.c 143 */;
	loff_t *cocci_id/* drivers/char/pcmcia/scr24x_cs.c 118 */;
	char __user *cocci_id/* drivers/char/pcmcia/scr24x_cs.c 117 */;
	ssize_t cocci_id/* drivers/char/pcmcia/scr24x_cs.c 117 */;
}
