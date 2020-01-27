cocci_test_suite() {
	int cocci_id/* drivers/net/wireless/broadcom/b43/debugfs.c 774 */;
	struct b43_txstatus *cocci_id/* drivers/net/wireless/broadcom/b43/debugfs.c 773 */;
	const struct b43_txstatus *cocci_id/* drivers/net/wireless/broadcom/b43/debugfs.c 769 */;
	struct b43_txstatus cocci_id/* drivers/net/wireless/broadcom/b43/debugfs.c 694 */;
	char cocci_id/* drivers/net/wireless/broadcom/b43/debugfs.c 683 */[16];
	struct b43_txstatus_log *cocci_id/* drivers/net/wireless/broadcom/b43/debugfs.c 682 */;
	struct b43_dfsentry *cocci_id/* drivers/net/wireless/broadcom/b43/debugfs.c 657 */;
	struct b43_wldev *cocci_id/* drivers/net/wireless/broadcom/b43/debugfs.c 655 */;
	void cocci_id/* drivers/net/wireless/broadcom/b43/debugfs.c 655 */;
	bool cocci_id/* drivers/net/wireless/broadcom/b43/debugfs.c 632 */;
	enum b43_dyndbg cocci_id/* drivers/net/wireless/broadcom/b43/debugfs.c 632 */;
	const char __user *cocci_id/* drivers/net/wireless/broadcom/b43/debugfs.c 554 */;
	unsigned long cocci_id/* drivers/net/wireless/broadcom/b43/debugfs.c 531 */;
	struct b43_debugfs_fops cocci_id/* drivers/net/wireless/broadcom/b43/debugfs.c 515 */;
	const size_t cocci_id/* drivers/net/wireless/broadcom/b43/debugfs.c 498 */;
	char *cocci_id/* drivers/net/wireless/broadcom/b43/debugfs.c 497 */;
	struct b43_dfs_file *cocci_id/* drivers/net/wireless/broadcom/b43/debugfs.c 495 */;
	struct b43_debugfs_fops *cocci_id/* drivers/net/wireless/broadcom/b43/debugfs.c 494 */;
	loff_t *cocci_id/* drivers/net/wireless/broadcom/b43/debugfs.c 491 */;
	size_t cocci_id/* drivers/net/wireless/broadcom/b43/debugfs.c 491 */;
	struct file *cocci_id/* drivers/net/wireless/broadcom/b43/debugfs.c 490 */;
	char __user *cocci_id/* drivers/net/wireless/broadcom/b43/debugfs.c 490 */;
	ssize_t cocci_id/* drivers/net/wireless/broadcom/b43/debugfs.c 490 */;
	unsigned int cocci_id/* drivers/net/wireless/broadcom/b43/debugfs.c 449 */;
	struct b43_phy *cocci_id/* drivers/net/wireless/broadcom/b43/debugfs.c 433 */;
	struct b43_lo_calib *cocci_id/* drivers/net/wireless/broadcom/b43/debugfs.c 431 */;
	struct b43_txpower_lo_control *cocci_id/* drivers/net/wireless/broadcom/b43/debugfs.c 429 */;
	void *cocci_id/* drivers/net/wireless/broadcom/b43/debugfs.c 42 */;
	const struct b43_debugfs_fops *cocci_id/* drivers/net/wireless/broadcom/b43/debugfs.c 40 */;
	struct b43_debugfs_fops {
		ssize_t (*read)(struct b43_wldev *dev, char *buf,
				size_t bufsize);
		int (*write)(struct b43_wldev *dev, const char *buf,
			     size_t count);
		struct file_operations fops;
		size_t file_struct_offset;
	} cocci_id/* drivers/net/wireless/broadcom/b43/debugfs.c 30 */;
	u32 cocci_id/* drivers/net/wireless/broadcom/b43/debugfs.c 290 */;
	struct dentry *cocci_id/* drivers/net/wireless/broadcom/b43/debugfs.c 28 */;
	const char *cocci_id/* drivers/net/wireless/broadcom/b43/debugfs.c 239 */;
	u16 cocci_id/* drivers/net/wireless/broadcom/b43/debugfs.c 226 */;
}
