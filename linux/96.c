cocci_test_suite() {
	const struct file_operations cocci_id/* kernel/power/qos.c 93 */;
	int cocci_id/* kernel/power/qos.c 90 */(struct inode *inode,
						struct file *filp);
	ssize_t cocci_id/* kernel/power/qos.c 88 */(struct file *filp,
						    char __user *buf,
						    size_t count,
						    loff_t *f_pos);
	ssize_t cocci_id/* kernel/power/qos.c 86 */(struct file *filp,
						    const char __user *buf,
						    size_t count,
						    loff_t *f_pos);
	struct notifier_block *cocci_id/* kernel/power/qos.c 844 */;
	enum freq_qos_req_type cocci_id/* kernel/power/qos.c 843 */;
	struct pm_qos_object *cocci_id/* kernel/power/qos.c 81 */[];
	struct pm_qos_object cocci_id/* kernel/power/qos.c 76 */;
	struct freq_qos_request *cocci_id/* kernel/power/qos.c 756 */;
	enum pm_qos_req_action cocci_id/* kernel/power/qos.c 721 */;
	struct pm_qos_constraints cocci_id/* kernel/power/qos.c 68 */;
	struct pm_qos_constraints *cocci_id/* kernel/power/qos.c 662 */;
	struct freq_constraints *cocci_id/* kernel/power/qos.c 660 */;
	struct dentry *cocci_id/* kernel/power/qos.c 634 */;
	int __init cocci_id/* kernel/power/qos.c 630 */;
	const char __user *cocci_id/* kernel/power/qos.c 606 */;
	loff_t *cocci_id/* kernel/power/qos.c 588 */;
	size_t cocci_id/* kernel/power/qos.c 588 */;
	char __user *cocci_id/* kernel/power/qos.c 587 */;
	ssize_t cocci_id/* kernel/power/qos.c 587 */;
	struct pm_qos_object {
		struct pm_qos_constraints *constraints;
		struct miscdevice pm_qos_power_miscdev;
		char *name;
	} cocci_id/* kernel/power/qos.c 57 */;
	long cocci_id/* kernel/power/qos.c 559 */;
	struct inode *cocci_id/* kernel/power/qos.c 557 */;
	struct file *cocci_id/* kernel/power/qos.c 557 */;
	int cocci_id/* kernel/power/qos.c 544 */;
	struct pm_qos_request cocci_id/* kernel/power/qos.c 370 */;
	struct work_struct *cocci_id/* kernel/power/qos.c 367 */;
	s32 cocci_id/* kernel/power/qos.c 351 */;
	struct pm_qos_request *cocci_id/* kernel/power/qos.c 350 */;
	void cocci_id/* kernel/power/qos.c 350 */;
	bool cocci_id/* kernel/power/qos.c 295 */;
	struct pm_qos_flags_request *cocci_id/* kernel/power/qos.c 273 */;
	struct pm_qos_flags *cocci_id/* kernel/power/qos.c 272 */;
	unsigned long cocci_id/* kernel/power/qos.c 146 */;
	char *cocci_id/* kernel/power/qos.c 145 */;
	struct pm_qos_object *cocci_id/* kernel/power/qos.c 142 */;
	struct seq_file *cocci_id/* kernel/power/qos.c 140 */;
	void *cocci_id/* kernel/power/qos.c 140 */;
	struct plist_node *cocci_id/* kernel/power/qos.c 104 */;
}
