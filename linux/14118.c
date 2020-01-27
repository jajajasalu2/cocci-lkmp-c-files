cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/media/platform/seco-cec/seco-cec.c 789 */;
	const struct acpi_device_id cocci_id/* drivers/media/platform/seco-cec/seco-cec.c 781 */[];
	const char *cocci_id/* drivers/media/platform/seco-cec/seco-cec.c 577 */;
	struct platform_device *cocci_id/* drivers/media/platform/seco-cec/seco-cec.c 572 */;
	struct gpio_desc *cocci_id/* drivers/media/platform/seco-cec/seco-cec.c 551 */;
	struct device *cocci_id/* drivers/media/platform/seco-cec/seco-cec.c 550 */;
	struct secocec_data *cocci_id/* drivers/media/platform/seco-cec/seco-cec.c 548 */;
	int cocci_id/* drivers/media/platform/seco-cec/seco-cec.c 548 */;
	const struct cec_dmi_match *cocci_id/* drivers/media/platform/seco-cec/seco-cec.c 527 */;
	const char **cocci_id/* drivers/media/platform/seco-cec/seco-cec.c 522 */;
	const struct cec_dmi_match cocci_id/* drivers/media/platform/seco-cec/seco-cec.c 516 */[];
	struct cec_dmi_match {
		const char *sys_vendor;
		const char *product_name;
		const char *devname;
		const char *conn;
	} cocci_id/* drivers/media/platform/seco-cec/seco-cec.c 509 */;
	irqreturn_t cocci_id/* drivers/media/platform/seco-cec/seco-cec.c 454 */;
	void cocci_id/* drivers/media/platform/seco-cec/seco-cec.c 444 */;
	unsigned int cocci_id/* drivers/media/platform/seco-cec/seco-cec.c 43 */;
	u16 *cocci_id/* drivers/media/platform/seco-cec/seco-cec.c 41 */;
	short cocci_id/* drivers/media/platform/seco-cec/seco-cec.c 40 */;
	void *cocci_id/* drivers/media/platform/seco-cec/seco-cec.c 347 */;
	const struct cec_adap_ops cocci_id/* drivers/media/platform/seco-cec/seco-cec.c 339 */;
	struct cec_msg cocci_id/* drivers/media/platform/seco-cec/seco-cec.c 258 */;
	struct secocec_data {
		struct device *dev;
		struct platform_device *pdev;
		struct cec_adapter *cec_adap;
		struct cec_notifier *notifier;
		struct rc_dev *ir;
		char ir_input_phys[32];
		int irq;
	} cocci_id/* drivers/media/platform/seco-cec/seco-cec.c 25 */;
	u8 *cocci_id/* drivers/media/platform/seco-cec/seco-cec.c 187 */;
	u32 cocci_id/* drivers/media/platform/seco-cec/seco-cec.c 184 */;
	struct cec_msg *cocci_id/* drivers/media/platform/seco-cec/seco-cec.c 184 */;
	u8 cocci_id/* drivers/media/platform/seco-cec/seco-cec.c 152 */;
	u16 cocci_id/* drivers/media/platform/seco-cec/seco-cec.c 109 */;
	bool cocci_id/* drivers/media/platform/seco-cec/seco-cec.c 105 */;
	struct cec_adapter *cocci_id/* drivers/media/platform/seco-cec/seco-cec.c 105 */;
}
