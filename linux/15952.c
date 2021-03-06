cocci_test_suite() {
	struct uwb_dev *cocci_id/* drivers/staging/uwb/uwb-debug.c 75 */;
	struct uwb_rsv *cocci_id/* drivers/staging/uwb/uwb-debug.c 74 */;
	struct uwb_mac_addr cocci_id/* drivers/staging/uwb/uwb-debug.c 73 */;
	struct uwb_dbg_cmd_rsv_establish *cocci_id/* drivers/staging/uwb/uwb-debug.c 71 */;
	struct dentry *cocci_id/* drivers/staging/uwb/uwb-debug.c 54 */;
	struct uwb_dbg {
		struct uwb_pal pal;
		bool accept;
		struct list_head rsvs;
		struct dentry *root_d;
		struct dentry *command_f;
		struct dentry *reservations_f;
		struct dentry *accept_f;
		struct dentry *drp_avail_f;
		spinlock_t list_lock;
	} cocci_id/* drivers/staging/uwb/uwb-debug.c 40 */;
	struct uwb_dbg cocci_id/* drivers/staging/uwb/uwb-debug.c 270 */;
	void cocci_id/* drivers/staging/uwb/uwb-debug.c 268 */;
	struct uwb_dbg *cocci_id/* drivers/staging/uwb/uwb-debug.c 254 */;
	struct device *cocci_id/* drivers/staging/uwb/uwb-debug.c 244 */;
	struct uwb_pal *cocci_id/* drivers/staging/uwb/uwb-debug.c 242 */;
	struct seq_file *cocci_id/* drivers/staging/uwb/uwb-debug.c 230 */;
	void *cocci_id/* drivers/staging/uwb/uwb-debug.c 230 */;
	bool cocci_id/* drivers/staging/uwb/uwb-debug.c 204 */;
	char cocci_id/* drivers/staging/uwb/uwb-debug.c 203 */[UWB_ADDR_STRSIZE];
	struct uwb_dev_addr cocci_id/* drivers/staging/uwb/uwb-debug.c 202 */;
	const struct file_operations cocci_id/* drivers/staging/uwb/uwb-debug.c 186 */;
	struct uwb_dbg_cmd cocci_id/* drivers/staging/uwb/uwb-debug.c 151 */;
	loff_t *cocci_id/* drivers/staging/uwb/uwb-debug.c 148 */;
	size_t cocci_id/* drivers/staging/uwb/uwb-debug.c 148 */;
	const char __user *cocci_id/* drivers/staging/uwb/uwb-debug.c 147 */;
	struct file *cocci_id/* drivers/staging/uwb/uwb-debug.c 147 */;
	ssize_t cocci_id/* drivers/staging/uwb/uwb-debug.c 147 */;
	const struct uwb_ie_hdr *cocci_id/* drivers/staging/uwb/uwb-debug.c 138 */;
	struct uwb_rc *cocci_id/* drivers/staging/uwb/uwb-debug.c 135 */;
	struct uwb_dbg_cmd_ie *cocci_id/* drivers/staging/uwb/uwb-debug.c 135 */;
	int cocci_id/* drivers/staging/uwb/uwb-debug.c 135 */;
	struct uwb_dbg_cmd_rsv_terminate *cocci_id/* drivers/staging/uwb/uwb-debug.c 108 */;
}
