cocci_test_suite() {
	const char __user *cocci_id/* drivers/infiniband/hw/qib/qib_diag.c 833 */;
	u64 cocci_id/* drivers/infiniband/hw/qib/qib_diag.c 780 */;
	struct qib_diag_client *cocci_id/* drivers/infiniband/hw/qib/qib_diag.c 78 */;
	unsigned long cocci_id/* drivers/infiniband/hw/qib/qib_diag.c 779 */;
	loff_t *cocci_id/* drivers/infiniband/hw/qib/qib_diag.c 760 */;
	size_t cocci_id/* drivers/infiniband/hw/qib/qib_diag.c 760 */;
	char __user *cocci_id/* drivers/infiniband/hw/qib/qib_diag.c 759 */;
	ssize_t cocci_id/* drivers/infiniband/hw/qib/qib_diag.c 759 */;
	struct diag_observer_list_elt *cocci_id/* drivers/infiniband/hw/qib/qib_diag.c 743 */;
	u32 cocci_id/* drivers/infiniband/hw/qib/qib_diag.c 741 */;
	const struct diag_observer *cocci_id/* drivers/infiniband/hw/qib/qib_diag.c 740 */;
	struct qib_devdata *cocci_id/* drivers/infiniband/hw/qib/qib_diag.c 740 */;
	struct diag_observer_list_elt {
		struct diag_observer_list_elt *next;
		const struct diag_observer *op;
	} cocci_id/* drivers/infiniband/hw/qib/qib_diag.c 689 */;
	struct qib_diag_client {
		struct qib_diag_client *next;
		struct qib_devdata *dd;
		pid_t pid;
		enum diag_state state;
	} *cocci_id/* drivers/infiniband/hw/qib/qib_diag.c 67 */;
	enum diag_state{UNUSED=0, OPENED, INIT, READY,} cocci_id/* drivers/infiniband/hw/qib/qib_diag.c 64 */;
	struct qib_pportdata *cocci_id/* drivers/infiniband/hw/qib/qib_diag.c 556 */;
	u32 *cocci_id/* drivers/infiniband/hw/qib/qib_diag.c 554 */;
	struct qib_diag_xpkt cocci_id/* drivers/infiniband/hw/qib/qib_diag.c 553 */;
	u32 __iomem *cocci_id/* drivers/infiniband/hw/qib/qib_diag.c 551 */;
	struct inode *cocci_id/* drivers/infiniband/hw/qib/qib_diag.c 508 */;
	struct file *cocci_id/* drivers/infiniband/hw/qib/qib_diag.c 508 */;
	const void __user *cocci_id/* drivers/infiniband/hw/qib/qib_diag.c 475 */;
	const u32 __iomem *cocci_id/* drivers/infiniband/hw/qib/qib_diag.c 431 */;
	void __user *cocci_id/* drivers/infiniband/hw/qib/qib_diag.c 428 */;
	u64 __iomem *cocci_id/* drivers/infiniband/hw/qib/qib_diag.c 386 */;
	const u64 __iomem *cocci_id/* drivers/infiniband/hw/qib/qib_diag.c 342 */;
	void cocci_id/* drivers/infiniband/hw/qib/qib_diag.c 183 */;
	void cocci_id/* drivers/infiniband/hw/qib/qib_diag.c 181 */(struct qib_devdata *dd);
	char cocci_id/* drivers/infiniband/hw/qib/qib_diag.c 162 */[16];
	int cocci_id/* drivers/infiniband/hw/qib/qib_diag.c 160 */;
	struct device *cocci_id/* drivers/infiniband/hw/qib/qib_diag.c 149 */;
	struct cdev *cocci_id/* drivers/infiniband/hw/qib/qib_diag.c 148 */;
	atomic_t cocci_id/* drivers/infiniband/hw/qib/qib_diag.c 147 */;
	const struct file_operations cocci_id/* drivers/infiniband/hw/qib/qib_diag.c 138 */;
	ssize_t cocci_id/* drivers/infiniband/hw/qib/qib_diag.c 135 */(struct file *fp,
								       const char __user *data,
								       size_t count,
								       loff_t *off);
	ssize_t cocci_id/* drivers/infiniband/hw/qib/qib_diag.c 133 */(struct file *fp,
								       char __user *data,
								       size_t count,
								       loff_t *off);
	int cocci_id/* drivers/infiniband/hw/qib/qib_diag.c 131 */(struct inode *in,
								   struct file *fp);
}
