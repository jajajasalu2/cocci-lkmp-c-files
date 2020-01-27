cocci_test_suite() {
	const struct file_operations cocci_id/* drivers/net/wireless/realtek/rtw88/debug.c 92 */;
	va_list cocci_id/* drivers/net/wireless/realtek/rtw88/debug.c 869 */;
	struct va_format cocci_id/* drivers/net/wireless/realtek/rtw88/debug.c 866 */;
	const char *cocci_id/* drivers/net/wireless/realtek/rtw88/debug.c 864 */;
	enum rtw_debug_mask cocci_id/* drivers/net/wireless/realtek/rtw88/debug.c 863 */;
	struct rtw_dev *cocci_id/* drivers/net/wireless/realtek/rtw88/debug.c 863 */;
	void cocci_id/* drivers/net/wireless/realtek/rtw88/debug.c 863 */;
	struct dentry *cocci_id/* drivers/net/wireless/realtek/rtw88/debug.c 806 */;
	struct rtw_debugfs_priv cocci_id/* drivers/net/wireless/realtek/rtw88/debug.c 773 */;
	struct inode *cocci_id/* drivers/net/wireless/realtek/rtw88/debug.c 70 */;
	struct file *cocci_id/* drivers/net/wireless/realtek/rtw88/debug.c 70 */;
	struct ewma_snr *cocci_id/* drivers/net/wireless/realtek/rtw88/debug.c 580 */;
	struct ewma_evm *cocci_id/* drivers/net/wireless/realtek/rtw88/debug.c 579 */;
	struct rtw_efuse *cocci_id/* drivers/net/wireless/realtek/rtw88/debug.c 578 */;
	struct rtw_pkt_count *cocci_id/* drivers/net/wireless/realtek/rtw88/debug.c 577 */;
	struct rtw_traffic_stats *cocci_id/* drivers/net/wireless/realtek/rtw88/debug.c 576 */;
	struct rtw_dm_info *cocci_id/* drivers/net/wireless/realtek/rtw88/debug.c 575 */;
	struct rtw_power_params cocci_id/* drivers/net/wireless/realtek/rtw88/debug.c 528 */;
	struct rtw_hal *cocci_id/* drivers/net/wireless/realtek/rtw88/debug.c 526 */;
	loff_t *cocci_id/* drivers/net/wireless/realtek/rtw88/debug.c 48 */;
	size_t cocci_id/* drivers/net/wireless/realtek/rtw88/debug.c 48 */;
	const char __user *cocci_id/* drivers/net/wireless/realtek/rtw88/debug.c 47 */;
	const char *const cocci_id/* drivers/net/wireless/realtek/rtw88/debug.c 466 */[];
	ssize_t cocci_id/* drivers/net/wireless/realtek/rtw88/debug.c 46 */;
	u8 cocci_id/* drivers/net/wireless/realtek/rtw88/debug.c 445 */;
	u32 cocci_id/* drivers/net/wireless/realtek/rtw88/debug.c 424 */;
	struct rtw_debugfs_priv *cocci_id/* drivers/net/wireless/realtek/rtw88/debug.c 422 */;
	struct seq_file *cocci_id/* drivers/net/wireless/realtek/rtw88/debug.c 420 */;
	void *cocci_id/* drivers/net/wireless/realtek/rtw88/debug.c 420 */;
	int cocci_id/* drivers/net/wireless/realtek/rtw88/debug.c 420 */;
	u16 cocci_id/* drivers/net/wireless/realtek/rtw88/debug.c 330 */;
	u32 *cocci_id/* drivers/net/wireless/realtek/rtw88/debug.c 231 */;
	u8 *cocci_id/* drivers/net/wireless/realtek/rtw88/debug.c 223 */;
	char cocci_id/* drivers/net/wireless/realtek/rtw88/debug.c 169 */[32 + 1];
	struct rtw_debugfs_priv {
		struct rtw_dev *rtwdev;
		int (*cb_read)(struct seq_file *m, void *v);
		ssize_t (*cb_write)(struct file *filp,
				    const char __user *buffer, size_t count,
				    loff_t *loff);
		union {
			u32 cb_data;
			u8 *buf;
			struct {
				u32 page_offset;
				u32 page_num;
			} rsvd_page;
			struct {
				u8 rf_path;
				u32 rf_addr;
				u32 rf_mask;
			};
			struct {
				u32 addr;
				u32 len;
			} read_reg;
		};
	} cocci_id/* drivers/net/wireless/realtek/rtw88/debug.c 15 */;
	char cocci_id/* drivers/net/wireless/realtek/rtw88/debug.c 143 */[];
}
