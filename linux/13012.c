cocci_test_suite() {
	unsigned int cocci_id/* drivers/soc/aspeed/aspeed-lpc-snoop.c 84 */;
	loff_t *cocci_id/* drivers/soc/aspeed/aspeed-lpc-snoop.c 81 */;
	size_t cocci_id/* drivers/soc/aspeed/aspeed-lpc-snoop.c 81 */;
	char __user *cocci_id/* drivers/soc/aspeed/aspeed-lpc-snoop.c 80 */;
	ssize_t cocci_id/* drivers/soc/aspeed/aspeed-lpc-snoop.c 80 */;
	struct aspeed_lpc_snoop_channel cocci_id/* drivers/soc/aspeed/aspeed-lpc-snoop.c 76 */;
	struct aspeed_lpc_snoop {
		struct regmap *regmap;
		int irq;
		struct aspeed_lpc_snoop_channel chan[NUM_SNOOP_CHANNELS];
	} cocci_id/* drivers/soc/aspeed/aspeed-lpc-snoop.c 67 */;
	struct aspeed_lpc_snoop_channel {
		struct kfifo fifo;
		wait_queue_head_t wq;
		struct miscdevice miscdev;
	} cocci_id/* drivers/soc/aspeed/aspeed-lpc-snoop.c 61 */;
	struct aspeed_lpc_snoop_model_data {
		unsigned int has_hicrb_ensnp;
	} cocci_id/* drivers/soc/aspeed/aspeed-lpc-snoop.c 54 */;
	struct platform_driver cocci_id/* drivers/soc/aspeed/aspeed-lpc-snoop.c 331 */;
	const struct of_device_id cocci_id/* drivers/soc/aspeed/aspeed-lpc-snoop.c 323 */[];
	const struct aspeed_lpc_snoop_model_data cocci_id/* drivers/soc/aspeed/aspeed-lpc-snoop.c 315 */;
	int cocci_id/* drivers/soc/aspeed/aspeed-lpc-snoop.c 236 */;
	struct aspeed_lpc_snoop *cocci_id/* drivers/soc/aspeed/aspeed-lpc-snoop.c 235 */;
	void cocci_id/* drivers/soc/aspeed/aspeed-lpc-snoop.c 235 */;
	const struct aspeed_lpc_snoop_model_data *cocci_id/* drivers/soc/aspeed/aspeed-lpc-snoop.c 188 */;
	u32 cocci_id/* drivers/soc/aspeed/aspeed-lpc-snoop.c 187 */;
	u16 cocci_id/* drivers/soc/aspeed/aspeed-lpc-snoop.c 184 */;
	struct device *cocci_id/* drivers/soc/aspeed/aspeed-lpc-snoop.c 183 */;
	struct platform_device *cocci_id/* drivers/soc/aspeed/aspeed-lpc-snoop.c 161 */;
	u8 cocci_id/* drivers/soc/aspeed/aspeed-lpc-snoop.c 147 */;
	irqreturn_t cocci_id/* drivers/soc/aspeed/aspeed-lpc-snoop.c 127 */;
	void *cocci_id/* drivers/soc/aspeed/aspeed-lpc-snoop.c 127 */;
	struct aspeed_lpc_snoop_channel *cocci_id/* drivers/soc/aspeed/aspeed-lpc-snoop.c 117 */;
	const struct file_operations cocci_id/* drivers/soc/aspeed/aspeed-lpc-snoop.c 109 */;
	struct poll_table_struct *cocci_id/* drivers/soc/aspeed/aspeed-lpc-snoop.c 101 */;
	__poll_t cocci_id/* drivers/soc/aspeed/aspeed-lpc-snoop.c 100 */;
	struct file *cocci_id/* drivers/soc/aspeed/aspeed-lpc-snoop.c 100 */;
}
