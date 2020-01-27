cocci_test_suite() {
	const struct anybuss_memcfg cocci_id/* drivers/staging/fieldbus/anybuss/hms-profinet.c 92 */;
	struct profi_priv cocci_id/* drivers/staging/fieldbus/anybuss/hms-profinet.c 77 */;
	bool cocci_id/* drivers/staging/fieldbus/anybuss/hms-profinet.c 75 */;
	struct fieldbus_dev *cocci_id/* drivers/staging/fieldbus/anybuss/hms-profinet.c 75 */;
	struct msg_mac_addr cocci_id/* drivers/staging/fieldbus/anybuss/hms-profinet.c 62 */;
	size_t cocci_id/* drivers/staging/fieldbus/anybuss/hms-profinet.c 59 */;
	char *cocci_id/* drivers/staging/fieldbus/anybuss/hms-profinet.c 58 */;
	const char __user *cocci_id/* drivers/staging/fieldbus/anybuss/hms-profinet.c 50 */;
	loff_t *cocci_id/* drivers/staging/fieldbus/anybuss/hms-profinet.c 42 */;
	char __user *cocci_id/* drivers/staging/fieldbus/anybuss/hms-profinet.c 41 */;
	ssize_t cocci_id/* drivers/staging/fieldbus/anybuss/hms-profinet.c 40 */;
	struct profi_priv {
		struct fieldbus_dev fbdev;
		struct anybuss_client *client;
		struct mutex enable_lock;
		bool power_on;
	} cocci_id/* drivers/staging/fieldbus/anybuss/hms-profinet.c 33 */;
	struct msg_mac_addr {
		u8 addr[6];
	} cocci_id/* drivers/staging/fieldbus/anybuss/hms-profinet.c 29 */;
	void __exit cocci_id/* drivers/staging/fieldbus/anybuss/hms-profinet.c 220 */;
	int __init cocci_id/* drivers/staging/fieldbus/anybuss/hms-profinet.c 214 */;
	struct anybuss_client_driver cocci_id/* drivers/staging/fieldbus/anybuss/hms-profinet.c 204 */;
	struct device *cocci_id/* drivers/staging/fieldbus/anybuss/hms-profinet.c 166 */;
	void cocci_id/* drivers/staging/fieldbus/anybuss/hms-profinet.c 149 */;
	struct anybuss_client *cocci_id/* drivers/staging/fieldbus/anybuss/hms-profinet.c 127 */;
	struct profi_priv *cocci_id/* drivers/staging/fieldbus/anybuss/hms-profinet.c 125 */;
	int cocci_id/* drivers/staging/fieldbus/anybuss/hms-profinet.c 125 */;
}
