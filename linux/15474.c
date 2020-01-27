cocci_test_suite() {
	struct s3fwrn5_i2c_phy *cocci_id/* drivers/nfc/s3fwrn5/i2c.c 78 */;
	enum s3fwrn5_mode cocci_id/* drivers/nfc/s3fwrn5/i2c.c 76 */;
	void *cocci_id/* drivers/nfc/s3fwrn5/i2c.c 76 */;
	void cocci_id/* drivers/nfc/s3fwrn5/i2c.c 48 */;
	bool cocci_id/* drivers/nfc/s3fwrn5/i2c.c 38 */;
	struct i2c_driver cocci_id/* drivers/nfc/s3fwrn5/i2c.c 280 */;
	const struct of_device_id cocci_id/* drivers/nfc/s3fwrn5/i2c.c 274 */[];
	const struct i2c_device_id cocci_id/* drivers/nfc/s3fwrn5/i2c.c 268 */[];
	struct s3fwrn5_i2c_phy {
		struct i2c_client *i2c_dev;
		struct nci_dev *ndev;
		unsigned int gpio_en;
		unsigned int gpio_fw_wake;
		struct mutex mutex;
		enum s3fwrn5_mode mode;
		unsigned int irq_skip:1;
	} cocci_id/* drivers/nfc/s3fwrn5/i2c.c 25 */;
	const struct i2c_device_id *cocci_id/* drivers/nfc/s3fwrn5/i2c.c 215 */;
	struct device_node *cocci_id/* drivers/nfc/s3fwrn5/i2c.c 198 */;
	struct i2c_client *cocci_id/* drivers/nfc/s3fwrn5/i2c.c 195 */;
	irqreturn_t cocci_id/* drivers/nfc/s3fwrn5/i2c.c 164 */;
	int cocci_id/* drivers/nfc/s3fwrn5/i2c.c 164 */;
	struct s3fwrn5_fw_header *cocci_id/* drivers/nfc/s3fwrn5/i2c.c 143 */;
	struct nci_ctrl_hdr *cocci_id/* drivers/nfc/s3fwrn5/i2c.c 142 */;
	char cocci_id/* drivers/nfc/s3fwrn5/i2c.c 129 */[4];
	size_t cocci_id/* drivers/nfc/s3fwrn5/i2c.c 127 */;
	struct sk_buff *cocci_id/* drivers/nfc/s3fwrn5/i2c.c 126 */;
	const struct s3fwrn5_phy_ops cocci_id/* drivers/nfc/s3fwrn5/i2c.c 117 */;
}
