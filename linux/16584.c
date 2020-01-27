cocci_test_suite() {
	void cocci_id/* drivers/s390/char/sclp_vt220.c 98 */(struct sclp_register *reg,
							     enum sclp_pm_event sclp_pm_event);
	void cocci_id/* drivers/s390/char/sclp_vt220.c 97 */(struct evbuf_header *evbuf);
	int __initdata cocci_id/* drivers/s390/char/sclp_vt220.c 90 */;
	int __init cocci_id/* drivers/s390/char/sclp_vt220.c 881 */;
	struct console cocci_id/* drivers/s390/char/sclp_vt220.c 872 */;
	struct notifier_block cocci_id/* drivers/s390/char/sclp_vt220.c 861 */;
	struct notifier_block *cocci_id/* drivers/s390/char/sclp_vt220.c 854 */;
	struct console *cocci_id/* drivers/s390/char/sclp_vt220.c 847 */;
	int *cocci_id/* drivers/s390/char/sclp_vt220.c 847 */;
	struct tty_driver *cocci_id/* drivers/s390/char/sclp_vt220.c 846 */;
	const char *cocci_id/* drivers/s390/char/sclp_vt220.c 841 */;
	enum sclp_pm_event cocci_id/* drivers/s390/char/sclp_vt220.c 825 */;
	struct sclp_register *cocci_id/* drivers/s390/char/sclp_vt220.c 824 */;
	struct timer_list cocci_id/* drivers/s390/char/sclp_vt220.c 80 */;
	unsigned long cocci_id/* drivers/s390/char/sclp_vt220.c 784 */;
	const struct tty_operations cocci_id/* drivers/s390/char/sclp_vt220.c 724 */;
	int __init cocci_id/* drivers/s390/char/sclp_vt220.c 688 */;
	void __init cocci_id/* drivers/s390/char/sclp_vt220.c 676 */;
	void cocci_id/* drivers/s390/char/sclp_vt220.c 676 */;
	struct list_head cocci_id/* drivers/s390/char/sclp_vt220.c 67 */;
	struct list_head *cocci_id/* drivers/s390/char/sclp_vt220.c 666 */;
	struct sclp_vt220_request cocci_id/* drivers/s390/char/sclp_vt220.c 646 */;
	spinlock_t cocci_id/* drivers/s390/char/sclp_vt220.c 64 */;
	struct tty_struct *cocci_id/* drivers/s390/char/sclp_vt220.c 634 */;
	struct tty_port cocci_id/* drivers/s390/char/sclp_vt220.c 61 */;
	struct file *cocci_id/* drivers/s390/char/sclp_vt220.c 576 */;
	char *cocci_id/* drivers/s390/char/sclp_vt220.c 534 */;
	struct evbuf_header *cocci_id/* drivers/s390/char/sclp_vt220.c 532 */;
	struct sclp_vt220_sccb {
		struct sccb_header header;
		struct evbuf_header evbuf;
	} cocci_id/* drivers/s390/char/sclp_vt220.c 49 */;
	struct sysrq_work cocci_id/* drivers/s390/char/sclp_vt220.c 484 */;
	struct sclp_vt220_request {
		struct list_head list;
		struct sclp_req sclp_req;
		int retry_count;
	} cocci_id/* drivers/s390/char/sclp_vt220.c 42 */;
	const unsigned char *cocci_id/* drivers/s390/char/sclp_vt220.c 405 */;
	struct timer_list *cocci_id/* drivers/s390/char/sclp_vt220.c 360 */;
	const void *cocci_id/* drivers/s390/char/sclp_vt220.c 349 */;
	unsigned char *cocci_id/* drivers/s390/char/sclp_vt220.c 337 */;
	addr_t cocci_id/* drivers/s390/char/sclp_vt220.c 325 */;
	unsigned char cocci_id/* drivers/s390/char/sclp_vt220.c 315 */;
	struct sclp_vt220_sccb *cocci_id/* drivers/s390/char/sclp_vt220.c 313 */;
	struct evbuf_header cocci_id/* drivers/s390/char/sclp_vt220.c 302 */;
	unsigned int cocci_id/* drivers/s390/char/sclp_vt220.c 297 */;
	struct sclp_vt220_sccb cocci_id/* drivers/s390/char/sclp_vt220.c 235 */;
	void *cocci_id/* drivers/s390/char/sclp_vt220.c 215 */;
	struct sclp_vt220_request *cocci_id/* drivers/s390/char/sclp_vt220.c 210 */;
	int cocci_id/* drivers/s390/char/sclp_vt220.c 209 */;
	struct sccb_header *cocci_id/* drivers/s390/char/sclp_vt220.c 181 */;
	struct sclp_req *cocci_id/* drivers/s390/char/sclp_vt220.c 157 */;
	struct sclp_register cocci_id/* drivers/s390/char/sclp_vt220.c 104 */;
	void cocci_id/* drivers/s390/char/sclp_vt220.c 101 */(void);
	int cocci_id/* drivers/s390/char/sclp_vt220.c 100 */(struct sclp_vt220_request *request);
}
