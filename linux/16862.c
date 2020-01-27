cocci_test_suite() {
	struct pm8941_pwrkey cocci_id/* drivers/input/misc/pm8941-pwrkey.c 62 */;
	unsigned long cocci_id/* drivers/input/misc/pm8941-pwrkey.c 60 */;
	struct notifier_block *cocci_id/* drivers/input/misc/pm8941-pwrkey.c 59 */;
	struct pm8941_pwrkey {
		struct device *dev;
		int irq;
		u32 baseaddr;
		struct regmap *regmap;
		struct input_dev *input;
		unsigned int revision;
		struct notifier_block reboot_notifier;
		u32 code;
		const struct pm8941_data *data;
	} cocci_id/* drivers/input/misc/pm8941-pwrkey.c 45 */;
	struct pm8941_data {
		unsigned int pull_up_bit;
		unsigned int status_bit;
	} cocci_id/* drivers/input/misc/pm8941-pwrkey.c 40 */;
	struct platform_driver cocci_id/* drivers/input/misc/pm8941-pwrkey.c 314 */;
	const struct of_device_id cocci_id/* drivers/input/misc/pm8941-pwrkey.c 307 */[];
	const struct pm8941_data cocci_id/* drivers/input/misc/pm8941-pwrkey.c 297 */;
	u32 cocci_id/* drivers/input/misc/pm8941-pwrkey.c 164 */;
	struct device *cocci_id/* drivers/input/misc/pm8941-pwrkey.c 163 */;
	bool cocci_id/* drivers/input/misc/pm8941-pwrkey.c 162 */;
	struct platform_device *cocci_id/* drivers/input/misc/pm8941-pwrkey.c 159 */;
	int __maybe_unused cocci_id/* drivers/input/misc/pm8941-pwrkey.c 146 */;
	unsigned int cocci_id/* drivers/input/misc/pm8941-pwrkey.c 121 */;
	struct pm8941_pwrkey *cocci_id/* drivers/input/misc/pm8941-pwrkey.c 120 */;
	irqreturn_t cocci_id/* drivers/input/misc/pm8941-pwrkey.c 118 */;
	void *cocci_id/* drivers/input/misc/pm8941-pwrkey.c 118 */;
	int cocci_id/* drivers/input/misc/pm8941-pwrkey.c 118 */;
}
