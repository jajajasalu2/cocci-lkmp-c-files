cocci_test_suite() {
	struct carl9170_debugfs_fops cocci_id/* drivers/net/wireless/ath/carl9170/debug.c 79 */;
	u32 cocci_id/* drivers/net/wireless/ath/carl9170/debug.c 725 */;
	const char *const cocci_id/* drivers/net/wireless/ath/carl9170/debug.c 682 */[];
	struct carl9170_debugfs_fops *cocci_id/* drivers/net/wireless/ath/carl9170/debug.c 65 */;
	loff_t *cocci_id/* drivers/net/wireless/ath/carl9170/debug.c 63 */;
	struct file *cocci_id/* drivers/net/wireless/ath/carl9170/debug.c 62 */;
	char __user *cocci_id/* drivers/net/wireless/ath/carl9170/debug.c 62 */;
	const char *cocci_id/* drivers/net/wireless/ath/carl9170/debug.c 616 */;
	ssize_t cocci_id/* drivers/net/wireless/ath/carl9170/debug.c 616 */;
	unsigned int cocci_id/* drivers/net/wireless/ath/carl9170/debug.c 548 */;
	struct carl9170_debugfs_fops {
		unsigned int read_bufsize;
		umode_t attr;
		char *(*read)(struct ar9170 *ar, char *buf, size_t bufsize,
			      ssize_t *len);
		ssize_t (*write)(struct ar9170 *aru, const char *buf,
				 size_t size);
		const struct file_operations fops;
		enum carl9170_device_state req_dev_state;
	} cocci_id/* drivers/net/wireless/ath/carl9170/debug.c 51 */;
	u32 cocci_id/* drivers/net/wireless/ath/carl9170/debug.c 464 */[ARRAY_SIZE(name##_regs)];
	struct ieee80211_vif *cocci_id/* drivers/net/wireless/ath/carl9170/debug.c 450 */;
	struct carl9170_vif_info *cocci_id/* drivers/net/wireless/ath/carl9170/debug.c 439 */;
	char cocci_id/* drivers/net/wireless/ath/carl9170/debug.c 360 */[16];
	struct sk_buff_head *cocci_id/* drivers/net/wireless/ath/carl9170/debug.c 357 */;
	char cocci_id/* drivers/net/wireless/ath/carl9170/debug.c 339 */[32];
	int cocci_id/* drivers/net/wireless/ath/carl9170/debug.c 305 */;
	struct sk_buff *cocci_id/* drivers/net/wireless/ath/carl9170/debug.c 304 */;
	struct carl9170_sta_tid *cocci_id/* drivers/net/wireless/ath/carl9170/debug.c 303 */;
	ssize_t *cocci_id/* drivers/net/wireless/ath/carl9170/debug.c 301 */;
	size_t cocci_id/* drivers/net/wireless/ath/carl9170/debug.c 301 */;
	struct ar9170 *cocci_id/* drivers/net/wireless/ath/carl9170/debug.c 300 */;
	char *cocci_id/* drivers/net/wireless/ath/carl9170/debug.c 300 */;
	struct ieee80211_hdr *cocci_id/* drivers/net/wireless/ath/carl9170/debug.c 290 */;
	struct carl9170_tx_info *cocci_id/* drivers/net/wireless/ath/carl9170/debug.c 289 */;
	struct ieee80211_tx_info *cocci_id/* drivers/net/wireless/ath/carl9170/debug.c 288 */;
	struct _carl9170_tx_superframe *cocci_id/* drivers/net/wireless/ath/carl9170/debug.c 287 */;
	void *cocci_id/* drivers/net/wireless/ath/carl9170/debug.c 287 */;
	void cocci_id/* drivers/net/wireless/ath/carl9170/debug.c 283 */;
	const char __user *cocci_id/* drivers/net/wireless/ath/carl9170/debug.c 114 */;
}
