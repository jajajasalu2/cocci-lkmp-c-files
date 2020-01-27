cocci_test_suite() {
	u8 cocci_id/* drivers/media/platform/cros-ec-cec/cros-ec-cec.c 93 */;
	struct cros_ec_cec cocci_id/* drivers/media/platform/cros-ec-cec/cros-ec-cec.c 77 */;
	void *cocci_id/* drivers/media/platform/cros-ec-cec/cros-ec-cec.c 72 */;
	unsigned long cocci_id/* drivers/media/platform/cros-ec-cec/cros-ec-cec.c 71 */;
	struct notifier_block *cocci_id/* drivers/media/platform/cros-ec-cec/cros-ec-cec.c 70 */;
	uint32_t cocci_id/* drivers/media/platform/cros-ec-cec/cros-ec-cec.c 57 */;
	void cocci_id/* drivers/media/platform/cros-ec-cec/cros-ec-cec.c 54 */;
	unsigned int cocci_id/* drivers/media/platform/cros-ec-cec/cros-ec-cec.c 46 */;
	uint8_t *cocci_id/* drivers/media/platform/cros-ec-cec/cros-ec-cec.c 45 */;
	struct platform_driver cocci_id/* drivers/media/platform/cros-ec-cec/cros-ec-cec.c 346 */;
	struct cros_ec_cec {
		struct cros_ec_device *cros_ec;
		struct notifier_block notifier;
		struct cec_adapter *adap;
		struct cec_notifier *notify;
		struct cec_msg rx_msg;
	} cocci_id/* drivers/media/platform/cros-ec-cec/cros-ec-cec.c 34 */;
	const char *cocci_id/* drivers/media/platform/cros-ec-cec/cros-ec-cec.c 266 */;
	struct cros_ec_dev *cocci_id/* drivers/media/platform/cros-ec-cec/cros-ec-cec.c 262 */;
	struct platform_device *cocci_id/* drivers/media/platform/cros-ec-cec/cros-ec-cec.c 260 */;
	const struct cec_dmi_match *cocci_id/* drivers/media/platform/cros-ec-cec/cros-ec-cec.c 227 */;
	const char **cocci_id/* drivers/media/platform/cros-ec-cec/cros-ec-cec.c 222 */;
	struct device *cocci_id/* drivers/media/platform/cros-ec-cec/cros-ec-cec.c 221 */;
	const struct cec_dmi_match cocci_id/* drivers/media/platform/cros-ec-cec/cros-ec-cec.c 216 */[];
	struct cec_dmi_match {
		const char *sys_vendor;
		const char *product_name;
		const char *devname;
		const char *conn;
	} cocci_id/* drivers/media/platform/cros-ec-cec/cros-ec-cec.c 209 */;
	const struct cec_adap_ops cocci_id/* drivers/media/platform/cros-ec-cec/cros-ec-cec.c 169 */;
	struct {
		struct cros_ec_command msg;
		struct ec_params_cec_set data;
	}__packed cocci_id/* drivers/media/platform/cros-ec-cec/cros-ec-cec.c 147 */;
	struct cros_ec_device *cocci_id/* drivers/media/platform/cros-ec-cec/cros-ec-cec.c 146 */;
	struct cros_ec_cec *cocci_id/* drivers/media/platform/cros-ec-cec/cros-ec-cec.c 145 */;
	bool cocci_id/* drivers/media/platform/cros-ec-cec/cros-ec-cec.c 143 */;
	struct cec_adapter *cocci_id/* drivers/media/platform/cros-ec-cec/cros-ec-cec.c 143 */;
	int cocci_id/* drivers/media/platform/cros-ec-cec/cros-ec-cec.c 143 */;
	struct {
		struct cros_ec_command msg;
		struct ec_params_cec_write data;
	}__packed cocci_id/* drivers/media/platform/cros-ec-cec/cros-ec-cec.c 123 */;
	u32 cocci_id/* drivers/media/platform/cros-ec-cec/cros-ec-cec.c 119 */;
	struct cec_msg *cocci_id/* drivers/media/platform/cros-ec-cec/cros-ec-cec.c 119 */;
}
