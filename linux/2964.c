cocci_test_suite() {
	struct circ_buf *cocci_id/* drivers/acpi/acpi_dbg.c 91 */;
	void __exit cocci_id/* drivers/acpi/acpi_dbg.c 774 */;
	int __init cocci_id/* drivers/acpi/acpi_dbg.c 748 */;
	const struct acpi_debugger_ops cocci_id/* drivers/acpi/acpi_dbg.c 740 */;
	const struct file_operations cocci_id/* drivers/acpi/acpi_dbg.c 731 */;
	bool cocci_id/* drivers/acpi/acpi_dbg.c 72 */;
	unsigned long cocci_id/* drivers/acpi/acpi_dbg.c 72 */;
	__poll_t cocci_id/* drivers/acpi/acpi_dbg.c 718 */;
	poll_table *cocci_id/* drivers/acpi/acpi_dbg.c 718 */;
	const char __user *cocci_id/* drivers/acpi/acpi_dbg.c 676 */;
	struct dentry *cocci_id/* drivers/acpi/acpi_dbg.c 65 */;
	struct file *cocci_id/* drivers/acpi/acpi_dbg.c 64 */;
	struct acpi_aml_io cocci_id/* drivers/acpi/acpi_dbg.c 62 */;
	loff_t *cocci_id/* drivers/acpi/acpi_dbg.c 607 */;
	size_t cocci_id/* drivers/acpi/acpi_dbg.c 607 */;
	char __user *cocci_id/* drivers/acpi/acpi_dbg.c 606 */;
	ssize_t cocci_id/* drivers/acpi/acpi_dbg.c 606 */;
	acpi_status cocci_id/* drivers/acpi/acpi_dbg.c 472 */;
	struct acpi_aml_io {
		wait_queue_head_t wait;
		unsigned long flags;
		unsigned long users;
		struct mutex lock;
		struct task_struct *thread;
		char out_buf[ACPI_AML_BUF_SIZE]__aligned(ACPI_AML_BUF_ALIGN);
		struct circ_buf out_crc;
		char in_buf[ACPI_AML_BUF_SIZE]__aligned(ACPI_AML_BUF_ALIGN);
		struct circ_buf in_crc;
		acpi_osd_exec_callback function;
		void *context;
		unsigned long usages;
	} cocci_id/* drivers/acpi/acpi_dbg.c 47 */;
	struct inode *cocci_id/* drivers/acpi/acpi_dbg.c 469 */;
	struct task_struct *cocci_id/* drivers/acpi/acpi_dbg.c 427 */;
	acpi_osd_exec_callback cocci_id/* drivers/acpi/acpi_dbg.c 425 */;
	void *cocci_id/* drivers/acpi/acpi_dbg.c 425 */;
	int cocci_id/* drivers/acpi/acpi_dbg.c 425 */;
	char cocci_id/* drivers/acpi/acpi_dbg.c 375 */;
	char *cocci_id/* drivers/acpi/acpi_dbg.c 347 */;
	const char *cocci_id/* drivers/acpi/acpi_dbg.c 257 */;
	void cocci_id/* drivers/acpi/acpi_dbg.c 113 */;
}
