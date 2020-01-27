cocci_test_suite() {
	atomic_t cocci_id/* drivers/auxdisplay/charlcd.c 97 */;
	struct notifier_block cocci_id/* drivers/auxdisplay/charlcd.c 838 */;
	void *cocci_id/* drivers/auxdisplay/charlcd.c 817 */;
	struct notifier_block *cocci_id/* drivers/auxdisplay/charlcd.c 816 */;
	unsigned long cocci_id/* drivers/auxdisplay/charlcd.c 816 */;
	struct charlcd_priv *cocci_id/* drivers/auxdisplay/charlcd.c 791 */;
	struct charlcd *cocci_id/* drivers/auxdisplay/charlcd.c 789 */;
	unsigned int cocci_id/* drivers/auxdisplay/charlcd.c 789 */;
	const char *cocci_id/* drivers/auxdisplay/charlcd.c 729 */;
	struct miscdevice cocci_id/* drivers/auxdisplay/charlcd.c 723 */;
	const struct file_operations cocci_id/* drivers/auxdisplay/charlcd.c 716 */;
	struct inode *cocci_id/* drivers/auxdisplay/charlcd.c 686 */;
	struct file *cocci_id/* drivers/auxdisplay/charlcd.c 686 */;
	struct charlcd_priv {
		struct charlcd lcd;
		struct delayed_work bl_work;
		struct mutex bl_tempo_lock;
		bool bl_tempo;
		bool must_clear;
		unsigned long int flags;
		struct {
			unsigned long int x;
			unsigned long int y;
		} addr;
		struct {
			char buf[LCD_ESCAPE_LEN + 1];
			int len;
		} esc_seq;
		unsigned long long drvdata[0];
	} cocci_id/* drivers/auxdisplay/charlcd.c 67 */;
	loff_t *cocci_id/* drivers/auxdisplay/charlcd.c 664 */;
	size_t cocci_id/* drivers/auxdisplay/charlcd.c 664 */;
	const char __user *cocci_id/* drivers/auxdisplay/charlcd.c 663 */;
	ssize_t cocci_id/* drivers/auxdisplay/charlcd.c 663 */;
	unsigned char cocci_id/* drivers/auxdisplay/charlcd.c 468 */[8];
	char *cocci_id/* drivers/auxdisplay/charlcd.c 358 */;
	bool cocci_id/* drivers/auxdisplay/charlcd.c 310 */;
	unsigned long *cocci_id/* drivers/auxdisplay/charlcd.c 310 */;
	u8 cocci_id/* drivers/auxdisplay/charlcd.c 227 */;
	void (*cocci_id/* drivers/auxdisplay/charlcd.c 225 */)(struct charlcd *lcd,
							       int cmd);
	unsigned char cocci_id/* drivers/auxdisplay/charlcd.c 186 */;
	char cocci_id/* drivers/auxdisplay/charlcd.c 180 */;
	struct charlcd_priv cocci_id/* drivers/auxdisplay/charlcd.c 123 */;
	struct delayed_work *cocci_id/* drivers/auxdisplay/charlcd.c 121 */;
	struct work_struct *cocci_id/* drivers/auxdisplay/charlcd.c 119 */;
	int cocci_id/* drivers/auxdisplay/charlcd.c 106 */;
	void cocci_id/* drivers/auxdisplay/charlcd.c 106 */;
}
