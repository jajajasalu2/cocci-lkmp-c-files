cocci_test_suite() {
	struct tty_struct *cocci_id/* drivers/net/caif/caif_serial.c 95 */;
	void cocci_id/* drivers/net/caif/caif_serial.c 85 */(struct tty_struct *tty);
	void cocci_id/* drivers/net/caif/caif_serial.c 84 */(struct net_device *dev);
	struct ser_device {
		struct caif_dev_common common;
		struct list_head node;
		struct net_device *dev;
		struct sk_buff_head head;
		struct tty_struct *tty;
		bool tx_started;
		unsigned long state;
#ifdef CONFIG_DEBUG_FS
		struct dentry *debugfs_tty_dir;
		struct debugfs_blob_wrapper tx_blob;
		struct debugfs_blob_wrapper rx_blob;
		u8 rx_data[128];
		u8 tx_data[128];
		u8 tty_status;
#endif
	} cocci_id/* drivers/net/caif/caif_serial.c 65 */;
	int cocci_id/* drivers/net/caif/caif_serial.c 63 */(struct net_device *dev);
	struct dentry *cocci_id/* drivers/net/caif/caif_serial.c 60 */;
	void __exit cocci_id/* drivers/net/caif/caif_serial.c 451 */;
	void cocci_id/* drivers/net/caif/caif_serial.c 451 */;
	int __init cocci_id/* drivers/net/caif/caif_serial.c 442 */;
	struct net_device *cocci_id/* drivers/net/caif/caif_serial.c 436 */;
	int cocci_id/* drivers/net/caif/caif_serial.c 436 */;
	bool cocci_id/* drivers/net/caif/caif_serial.c 42 */;
	const struct net_device_ops cocci_id/* drivers/net/caif/caif_serial.c 404 */;
	struct tty_ldisc_ops cocci_id/* drivers/net/caif/caif_serial.c 382 */;
	char cocci_id/* drivers/net/caif/caif_serial.c 325 */[64];
	struct list_head cocci_id/* drivers/net/caif/caif_serial.c 301 */;
	struct work_struct *cocci_id/* drivers/net/caif/caif_serial.c 299 */;
	struct ser_device *cocci_id/* drivers/net/caif/caif_serial.c 271 */;
	struct sk_buff *cocci_id/* drivers/net/caif/caif_serial.c 269 */;
	char *cocci_id/* drivers/net/caif/caif_serial.c 163 */;
	const u8 *cocci_id/* drivers/net/caif/caif_serial.c 122 */;
}
