cocci_test_suite() {
	loff_t *cocci_id/* drivers/char/tpm/tpm_vtpm_proxy.c 73 */;
	size_t cocci_id/* drivers/char/tpm/tpm_vtpm_proxy.c 73 */;
	void __exit cocci_id/* drivers/char/tpm/tpm_vtpm_proxy.c 721 */;
	void cocci_id/* drivers/char/tpm/tpm_vtpm_proxy.c 721 */;
	char __user *cocci_id/* drivers/char/tpm/tpm_vtpm_proxy.c 72 */;
	ssize_t cocci_id/* drivers/char/tpm/tpm_vtpm_proxy.c 72 */;
	int cocci_id/* drivers/char/tpm/tpm_vtpm_proxy.c 698 */;
	int __init cocci_id/* drivers/char/tpm/tpm_vtpm_proxy.c 696 */;
	struct miscdevice cocci_id/* drivers/char/tpm/tpm_vtpm_proxy.c 680 */;
	unsigned long cocci_id/* drivers/char/tpm/tpm_vtpm_proxy.c 663 */;
	unsigned int cocci_id/* drivers/char/tpm/tpm_vtpm_proxy.c 662 */;
	long cocci_id/* drivers/char/tpm/tpm_vtpm_proxy.c 662 */;
	struct vtpm_proxy_new_dev cocci_id/* drivers/char/tpm/tpm_vtpm_proxy.c 629 */;
	struct vtpm_proxy_new_dev __user *cocci_id/* drivers/char/tpm/tpm_vtpm_proxy.c 628 */;
	void __user *cocci_id/* drivers/char/tpm/tpm_vtpm_proxy.c 627 */;
	void cocci_id/* drivers/char/tpm/tpm_vtpm_proxy.c 55 */(struct proxy_dev *proxy_dev);
	struct proxy_dev *cocci_id/* drivers/char/tpm/tpm_vtpm_proxy.c 536 */;
	struct vtpm_proxy_new_dev *cocci_id/* drivers/char/tpm/tpm_vtpm_proxy.c 534 */;
	struct file *cocci_id/* drivers/char/tpm/tpm_vtpm_proxy.c 533 */;
	struct workqueue_struct *cocci_id/* drivers/char/tpm/tpm_vtpm_proxy.c 53 */;
	struct tpm_chip *cocci_id/* drivers/char/tpm/tpm_vtpm_proxy.c 490 */;
	struct proxy_dev cocci_id/* drivers/char/tpm/tpm_vtpm_proxy.c 453 */;
	struct work_struct *cocci_id/* drivers/char/tpm/tpm_vtpm_proxy.c 451 */;
	const struct tpm_class_ops cocci_id/* drivers/char/tpm/tpm_vtpm_proxy.c 434 */;
	const struct tpm_header *cocci_id/* drivers/char/tpm/tpm_vtpm_proxy.c 399 */;
	struct tpm_buf cocci_id/* drivers/char/tpm/tpm_vtpm_proxy.c 397 */;
	bool cocci_id/* drivers/char/tpm/tpm_vtpm_proxy.c 381 */;
	u8 cocci_id/* drivers/char/tpm/tpm_vtpm_proxy.c 371 */;
	struct tpm_header cocci_id/* drivers/char/tpm/tpm_vtpm_proxy.c 303 */;
	struct tpm_header *cocci_id/* drivers/char/tpm/tpm_vtpm_proxy.c 301 */;
	u8 *cocci_id/* drivers/char/tpm/tpm_vtpm_proxy.c 299 */;
	struct proxy_dev {
		struct tpm_chip *chip;
		u32 flags;
		wait_queue_head_t wq;
		struct mutex buf_lock;
		long state;
#define STATE_OPENED_FLAG BIT(0)
#define STATE_WAIT_RESPONSE_FLAG BIT(1)
#define STATE_REGISTERED_FLAG BIT(2)
#define STATE_DRIVER_COMMAND BIT(3)
						size_t req_len;
		size_t resp_len;
		u8 buffer[TPM_BUFSIZE];
		struct work_struct work;
	} cocci_id/* drivers/char/tpm/tpm_vtpm_proxy.c 28 */;
	const struct file_operations cocci_id/* drivers/char/tpm/tpm_vtpm_proxy.c 244 */;
	struct inode *cocci_id/* drivers/char/tpm/tpm_vtpm_proxy.c 233 */;
	__poll_t cocci_id/* drivers/char/tpm/tpm_vtpm_proxy.c 171 */;
	poll_table *cocci_id/* drivers/char/tpm/tpm_vtpm_proxy.c 171 */;
	const char __user *cocci_id/* drivers/char/tpm/tpm_vtpm_proxy.c 127 */;
}
