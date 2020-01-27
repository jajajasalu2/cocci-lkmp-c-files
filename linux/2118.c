cocci_test_suite() {
	const struct reg_off_mask_default *cocci_id/* drivers/power/supply/qcom_smbb.c 987 */;
	enum smbb_attr{ATTR_BAT_ISAFE, ATTR_BAT_IMAX, ATTR_USBIN_IMAX, ATTR_DCIN_IMAX, ATTR_BAT_VSAFE, ATTR_BAT_VMAX, ATTR_BAT_VMIN, ATTR_CHG_VDET, ATTR_VIN_MIN, _ATTR_CNT,} cocci_id/* drivers/power/supply/qcom_smbb.c 93 */;
	struct regulator_config cocci_id/* drivers/power/supply/qcom_smbb.c 837 */;
	struct power_supply_config cocci_id/* drivers/power/supply/qcom_smbb.c 833 */;
	struct platform_device *cocci_id/* drivers/power/supply/qcom_smbb.c 831 */;
	const struct regulator_ops cocci_id/* drivers/power/supply/qcom_smbb.c 825 */;
	struct regulator_dev *cocci_id/* drivers/power/supply/qcom_smbb.c 800 */;
	const struct power_supply_desc cocci_id/* drivers/power/supply/qcom_smbb.c 758 */;
	char *cocci_id/* drivers/power/supply/qcom_smbb.c 756 */[];
	const struct reg_off_mask_default {
		unsigned int offset;
		unsigned int mask;
		unsigned int value;
		unsigned int rev_mask;
	} cocci_id/* drivers/power/supply/qcom_smbb.c 711 */[];
	enum power_supply_property cocci_id/* drivers/power/supply/qcom_smbb.c 700 */[];
	const union power_supply_propval *cocci_id/* drivers/power/supply/qcom_smbb.c 662 */;
	unsigned long cocci_id/* drivers/power/supply/qcom_smbb.c 595 */;
	union power_supply_propval *cocci_id/* drivers/power/supply/qcom_smbb.c 592 */;
	enum power_supply_property cocci_id/* drivers/power/supply/qcom_smbb.c 591 */;
	struct power_supply *cocci_id/* drivers/power/supply/qcom_smbb.c 590 */;
	const struct smbb_irq {
		const char *name;
		irqreturn_t (*handler)(int, void *);
	} cocci_id/* drivers/power/supply/qcom_smbb.c 474 */[];
	struct smbb_charger *cocci_id/* drivers/power/supply/qcom_smbb.c 423 */;
	irqreturn_t cocci_id/* drivers/power/supply/qcom_smbb.c 421 */;
	void *cocci_id/* drivers/power/supply/qcom_smbb.c 421 */;
	bool cocci_id/* drivers/power/supply/qcom_smbb.c 355 */;
	void cocci_id/* drivers/power/supply/qcom_smbb.c 353 */;
	const struct smbb_charger_attr *cocci_id/* drivers/power/supply/qcom_smbb.c 338 */;
	enum smbb_attr cocci_id/* drivers/power/supply/qcom_smbb.c 336 */;
	const struct smbb_charger_attr {
		const char *name;
		unsigned int reg;
		unsigned int safe_reg;
		unsigned int max;
		unsigned int min;
		unsigned int fail_ok;
		int (*hw_fn)(unsigned int);
	} cocci_id/* drivers/power/supply/qcom_smbb.c 178 */[];
	int (*cocci_id/* drivers/power/supply/qcom_smbb.c 167 */)(unsigned int);
	unsigned int cocci_id/* drivers/power/supply/qcom_smbb.c 162 */;
	int cocci_id/* drivers/power/supply/qcom_smbb.c 162 */;
	const unsigned int cocci_id/* drivers/power/supply/qcom_smbb.c 128 */[];
	struct smbb_charger {
		unsigned int revision;
		unsigned int addr;
		struct device *dev;
		struct extcon_dev *edev;
		bool dc_disabled;
		bool jeita_ext_temp;
		unsigned long status;
		struct mutex statlock;
		unsigned int attr[_ATTR_CNT];
		struct power_supply *usb_psy;
		struct power_supply *dc_psy;
		struct power_supply *bat_psy;
		struct regmap *regmap;
		struct regulator_desc otg_rdesc;
		struct regulator_dev *otg_reg;
	} cocci_id/* drivers/power/supply/qcom_smbb.c 106 */;
	struct platform_driver cocci_id/* drivers/power/supply/qcom_smbb.c 1023 */;
	const struct of_device_id cocci_id/* drivers/power/supply/qcom_smbb.c 1017 */[];
}
