cocci_test_suite() {
	bool cocci_id/* drivers/staging/fieldbus/anybuss/arcx-anybus.c 77 */;
	unsigned long cocci_id/* drivers/staging/fieldbus/anybuss/arcx-anybus.c 77 */;
	struct controller_priv *cocci_id/* drivers/staging/fieldbus/anybuss/arcx-anybus.c 76 */;
	int cocci_id/* drivers/staging/fieldbus/anybuss/arcx-anybus.c 76 */;
	struct controller_priv {
		struct device *class_dev;
		bool common_reset;
		struct gpio_desc *reset_gpiod;
		void __iomem *cpld_base;
		struct mutex ctrl_lock;
		u8 control_reg;
		char version[3];
		u16 design_no;
	} cocci_id/* drivers/staging/fieldbus/anybuss/arcx-anybus.c 39 */;
	void __exit cocci_id/* drivers/staging/fieldbus/anybuss/arcx-anybus.c 365 */;
	int __init cocci_id/* drivers/staging/fieldbus/anybuss/arcx-anybus.c 351 */;
	struct platform_driver cocci_id/* drivers/staging/fieldbus/anybuss/arcx-anybus.c 342 */;
	const struct of_device_id cocci_id/* drivers/staging/fieldbus/anybuss/arcx-anybus.c 335 */[];
	u8 cocci_id/* drivers/staging/fieldbus/anybuss/arcx-anybus.c 232 */;
	struct anybuss_host *cocci_id/* drivers/staging/fieldbus/anybuss/arcx-anybus.c 231 */;
	struct regulator_config cocci_id/* drivers/staging/fieldbus/anybuss/arcx-anybus.c 228 */;
	struct platform_device *cocci_id/* drivers/staging/fieldbus/anybuss/arcx-anybus.c 224 */;
	struct class *cocci_id/* drivers/staging/fieldbus/anybuss/arcx-anybus.c 221 */;
	const struct regulator_desc cocci_id/* drivers/staging/fieldbus/anybuss/arcx-anybus.c 213 */;
	struct regulator_ops cocci_id/* drivers/staging/fieldbus/anybuss/arcx-anybus.c 209 */;
	struct regulator_dev *cocci_id/* drivers/staging/fieldbus/anybuss/arcx-anybus.c 202 */;
	struct device *cocci_id/* drivers/staging/fieldbus/anybuss/arcx-anybus.c 197 */;
	void cocci_id/* drivers/staging/fieldbus/anybuss/arcx-anybus.c 197 */;
	const struct attribute_group *cocci_id/* drivers/staging/fieldbus/anybuss/arcx-anybus.c 192 */[];
	struct attribute_group cocci_id/* drivers/staging/fieldbus/anybuss/arcx-anybus.c 188 */;
	struct attribute *cocci_id/* drivers/staging/fieldbus/anybuss/arcx-anybus.c 182 */[];
	struct device_attribute *cocci_id/* drivers/staging/fieldbus/anybuss/arcx-anybus.c 174 */;
	char *cocci_id/* drivers/staging/fieldbus/anybuss/arcx-anybus.c 174 */;
	ssize_t cocci_id/* drivers/staging/fieldbus/anybuss/arcx-anybus.c 173 */;
	struct anybuss_ops cocci_id/* drivers/staging/fieldbus/anybuss/arcx-anybus.c 142 */;
	void __iomem *cocci_id/* drivers/staging/fieldbus/anybuss/arcx-anybus.c 130 */;
	struct regmap *cocci_id/* drivers/staging/fieldbus/anybuss/arcx-anybus.c 127 */;
	const struct regmap_config cocci_id/* drivers/staging/fieldbus/anybuss/arcx-anybus.c 114 */;
}
