cocci_test_suite() {
	const unsigned int cocci_id/* drivers/extcon/extcon-intel-cht-wc.c 90 */[];
	enum cht_wc_mux_select{MUX_SEL_PMIC=0, MUX_SEL_SOC,} cocci_id/* drivers/extcon/extcon-intel-cht-wc.c 85 */;
	struct platform_driver cocci_id/* drivers/extcon/extcon-intel-cht-wc.c 446 */;
	const struct platform_device_id cocci_id/* drivers/extcon/extcon-intel-cht-wc.c 440 */[];
	struct intel_soc_pmic *cocci_id/* drivers/extcon/extcon-intel-cht-wc.c 338 */;
	struct platform_device *cocci_id/* drivers/extcon/extcon-intel-cht-wc.c 336 */;
	irqreturn_t cocci_id/* drivers/extcon/extcon-intel-cht-wc.c 293 */;
	void *cocci_id/* drivers/extcon/extcon-intel-cht-wc.c 293 */;
	int cocci_id/* drivers/extcon/extcon-intel-cht-wc.c 225 */;
	unsigned int cocci_id/* drivers/extcon/extcon-intel-cht-wc.c 224 */;
	bool cocci_id/* drivers/extcon/extcon-intel-cht-wc.c 222 */;
	struct cht_wc_extcon_data *cocci_id/* drivers/extcon/extcon-intel-cht-wc.c 221 */;
	void cocci_id/* drivers/extcon/extcon-intel-cht-wc.c 221 */;
	u8 cocci_id/* drivers/extcon/extcon-intel-cht-wc.c 182 */;
	unsigned long cocci_id/* drivers/extcon/extcon-intel-cht-wc.c 130 */;
	struct cht_wc_extcon_data {
		struct device *dev;
		struct regmap *regmap;
		struct extcon_dev *edev;
		unsigned int previous_cable;
		bool usb_host;
	} cocci_id/* drivers/extcon/extcon-intel-cht-wc.c 100 */;
}
