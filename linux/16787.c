cocci_test_suite() {
	const struct of_device_id cocci_id/* drivers/input/misc/cpcap-pwrbutton.c 98 */[];
	struct cpcap_power_button *cocci_id/* drivers/input/misc/cpcap-pwrbutton.c 56 */;
	struct platform_device *cocci_id/* drivers/input/misc/cpcap-pwrbutton.c 54 */;
	int cocci_id/* drivers/input/misc/cpcap-pwrbutton.c 54 */;
	irqreturn_t cocci_id/* drivers/input/misc/cpcap-pwrbutton.c 36 */;
	void *cocci_id/* drivers/input/misc/cpcap-pwrbutton.c 36 */;
	struct cpcap_power_button {
		struct regmap *regmap;
		struct input_dev *idev;
		struct device *dev;
	} cocci_id/* drivers/input/misc/cpcap-pwrbutton.c 30 */;
	struct platform_driver cocci_id/* drivers/input/misc/cpcap-pwrbutton.c 105 */;
}
