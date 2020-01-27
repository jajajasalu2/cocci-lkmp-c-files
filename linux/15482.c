cocci_test_suite() {
	struct sk_buff *cocci_id/* drivers/nfc/st-nci/i2c.c 73 */;
	struct st_nci_i2c_phy *cocci_id/* drivers/nfc/st-nci/i2c.c 62 */;
	void *cocci_id/* drivers/nfc/st-nci/i2c.c 60 */;
	void cocci_id/* drivers/nfc/st-nci/i2c.c 60 */;
	int cocci_id/* drivers/nfc/st-nci/i2c.c 43 */;
	struct st_nci_i2c_phy {
		struct i2c_client *i2c_dev;
		struct llt_ndlc *ndlc;
		bool irq_active;
		struct gpio_desc *gpiod_reset;
		struct st_nci_se_status se_status;
	} cocci_id/* drivers/nfc/st-nci/i2c.c 32 */;
	struct i2c_driver cocci_id/* drivers/nfc/st-nci/i2c.c 292 */;
	const struct of_device_id cocci_id/* drivers/nfc/st-nci/i2c.c 284 */[];
	const struct acpi_device_id cocci_id/* drivers/nfc/st-nci/i2c.c 277 */[];
	const struct i2c_device_id cocci_id/* drivers/nfc/st-nci/i2c.c 271 */[];
	struct st_nci_i2c_phy cocci_id/* drivers/nfc/st-nci/i2c.c 217 */;
	struct device *cocci_id/* drivers/nfc/st-nci/i2c.c 205 */;
	const struct i2c_device_id *cocci_id/* drivers/nfc/st-nci/i2c.c 203 */;
	struct i2c_client *cocci_id/* drivers/nfc/st-nci/i2c.c 202 */;
	const struct acpi_gpio_mapping cocci_id/* drivers/nfc/st-nci/i2c.c 197 */[];
	const struct acpi_gpio_params cocci_id/* drivers/nfc/st-nci/i2c.c 195 */;
	struct nfc_phy_ops cocci_id/* drivers/nfc/st-nci/i2c.c 189 */;
	irqreturn_t cocci_id/* drivers/nfc/st-nci/i2c.c 157 */;
	__be16 *cocci_id/* drivers/nfc/st-nci/i2c.c 123 */;
	u8 cocci_id/* drivers/nfc/st-nci/i2c.c 111 */[ST_NCI_I2C_MAX_SIZE];
	u8 cocci_id/* drivers/nfc/st-nci/i2c.c 110 */;
	struct sk_buff **cocci_id/* drivers/nfc/st-nci/i2c.c 107 */;
}
