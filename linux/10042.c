cocci_test_suite() {
	struct rt2x00_dev *cocci_id/* drivers/net/wireless/ralink/rt2x00/rt2x00debug.c 708 */;
	struct rt2x00debug_intf cocci_id/* drivers/net/wireless/ralink/rt2x00/rt2x00debug.c 642 */;
	struct dentry *cocci_id/* drivers/net/wireless/ralink/rt2x00/rt2x00debug.c 639 */;
	char *cocci_id/* drivers/net/wireless/ralink/rt2x00/rt2x00debug.c 602 */;
	const struct rt2x00debug *cocci_id/* drivers/net/wireless/ralink/rt2x00/rt2x00debug.c 601 */;
	struct debugfs_blob_wrapper *cocci_id/* drivers/net/wireless/ralink/rt2x00/rt2x00debug.c 599 */;
	struct rt2x00debug_intf *cocci_id/* drivers/net/wireless/ralink/rt2x00/rt2x00debug.c 598 */;
	const char *cocci_id/* drivers/net/wireless/ralink/rt2x00/rt2x00debug.c 597 */;
	void cocci_id/* drivers/net/wireless/ralink/rt2x00/rt2x00debug.c 597 */;
	const char __user *cocci_id/* drivers/net/wireless/ralink/rt2x00/rt2x00debug.c 552 */;
	const struct file_operations cocci_id/* drivers/net/wireless/ralink/rt2x00/rt2x00debug.c 543 */;
	unsigned int cocci_id/* drivers/net/wireless/ralink/rt2x00/rt2x00debug.c 538 */;
	char cocci_id/* drivers/net/wireless/ralink/rt2x00/rt2x00debug.c 532 */[16];
	loff_t *cocci_id/* drivers/net/wireless/ralink/rt2x00/rt2x00debug.c 529 */;
	size_t cocci_id/* drivers/net/wireless/ralink/rt2x00/rt2x00debug.c 528 */;
	char __user *cocci_id/* drivers/net/wireless/ralink/rt2x00/rt2x00debug.c 527 */;
	ssize_t cocci_id/* drivers/net/wireless/ralink/rt2x00/rt2x00debug.c 526 */;
	char cocci_id/* drivers/net/wireless/ralink/rt2x00/rt2x00debug.c 449 */[17];
	__type cocci_id/* drivers/net/wireless/ralink/rt2x00/rt2x00debug.c 420 */;
	const char *const cocci_id/* drivers/net/wireless/ralink/rt2x00/rt2x00debug.c 362 */[];
	struct rt2x00debug_intf {
		struct rt2x00_dev *rt2x00dev;
		const struct rt2x00debug *debug;
		struct dentry *driver_folder;
		unsigned long frame_dump_flags;
#define FRAME_DUMP_FILE_OPEN 1
		struct sk_buff_head frame_dump_skbqueue;
		wait_queue_head_t frame_dump_waitqueue;
		struct rt2x00debug_crypto crypto_stats[CIPHER_MAX];
		struct debugfs_blob_wrapper driver_blob;
		struct debugfs_blob_wrapper chipset_blob;
		unsigned int offset_csr;
		unsigned int offset_eeprom;
		unsigned int offset_bbp;
		unsigned int offset_rf;
		unsigned int offset_rfcsr;
	} cocci_id/* drivers/net/wireless/ralink/rt2x00/rt2x00debug.c 34 */;
	unsigned long cocci_id/* drivers/net/wireless/ralink/rt2x00/rt2x00debug.c 304 */;
	struct data_queue *cocci_id/* drivers/net/wireless/ralink/rt2x00/rt2x00debug.c 303 */;
	poll_table *cocci_id/* drivers/net/wireless/ralink/rt2x00/rt2x00debug.c 276 */;
	__poll_t cocci_id/* drivers/net/wireless/ralink/rt2x00/rt2x00debug.c 275 */;
	struct rt2x00debug_crypto {
		unsigned long success;
		unsigned long icv_error;
		unsigned long mic_error;
		unsigned long key_error;
	} cocci_id/* drivers/net/wireless/ralink/rt2x00/rt2x00debug.c 27 */;
	struct inode *cocci_id/* drivers/net/wireless/ralink/rt2x00/rt2x00debug.c 192 */;
	struct file *cocci_id/* drivers/net/wireless/ralink/rt2x00/rt2x00debug.c 192 */;
	int cocci_id/* drivers/net/wireless/ralink/rt2x00/rt2x00debug.c 192 */;
	u32 cocci_id/* drivers/net/wireless/ralink/rt2x00/rt2x00debug.c 139 */;
	struct timespec64 cocci_id/* drivers/net/wireless/ralink/rt2x00/rt2x00debug.c 138 */;
	struct rt2x00dump_hdr *cocci_id/* drivers/net/wireless/ralink/rt2x00/rt2x00debug.c 137 */;
	struct skb_frame_desc *cocci_id/* drivers/net/wireless/ralink/rt2x00/rt2x00debug.c 135 */;
	struct sk_buff *cocci_id/* drivers/net/wireless/ralink/rt2x00/rt2x00debug.c 134 */;
	enum rt2x00_dump_type cocci_id/* drivers/net/wireless/ralink/rt2x00/rt2x00debug.c 131 */;
	struct queue_entry *cocci_id/* drivers/net/wireless/ralink/rt2x00/rt2x00debug.c 131 */;
	enum rx_crypto cocci_id/* drivers/net/wireless/ralink/rt2x00/rt2x00debug.c 114 */;
	enum cipher cocci_id/* drivers/net/wireless/ralink/rt2x00/rt2x00debug.c 113 */;
	struct rxdone_entry_desc *cocci_id/* drivers/net/wireless/ralink/rt2x00/rt2x00debug.c 110 */;
}
