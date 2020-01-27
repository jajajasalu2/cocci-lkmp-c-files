cocci_test_suite() {
	struct device *cocci_id/* drivers/power/supply/88pm860x_battery.c 994 */;
	struct pm860x_battery_info {
		struct pm860x_chip *chip;
		struct i2c_client *i2c;
		struct device *dev;
		struct power_supply *battery;
		struct mutex lock;
		int status;
		int irq_cc;
		int irq_batt;
		int max_capacity;
		int resistor;
		int last_capacity;
		int start_soc;
		unsigned present:1;
		unsigned temp_type:1;
	} cocci_id/* drivers/power/supply/88pm860x_battery.c 93 */;
	struct pm860x_power_pdata *cocci_id/* drivers/power/supply/88pm860x_battery.c 914 */;
	struct pm860x_chip *cocci_id/* drivers/power/supply/88pm860x_battery.c 912 */;
	struct platform_device *cocci_id/* drivers/power/supply/88pm860x_battery.c 910 */;
	const struct power_supply_desc cocci_id/* drivers/power/supply/88pm860x_battery.c 900 */;
	enum power_supply_property cocci_id/* drivers/power/supply/88pm860x_battery.c 890 */[];
	const union power_supply_propval *cocci_id/* drivers/power/supply/88pm860x_battery.c 871 */;
	union power_supply_propval *cocci_id/* drivers/power/supply/88pm860x_battery.c 805 */;
	enum power_supply_property cocci_id/* drivers/power/supply/88pm860x_battery.c 804 */;
	struct power_supply *cocci_id/* drivers/power/supply/88pm860x_battery.c 803 */;
	void cocci_id/* drivers/power/supply/88pm860x_battery.c 796 */;
	struct pm860x_battery_info *cocci_id/* drivers/power/supply/88pm860x_battery.c 710 */;
	int *cocci_id/* drivers/power/supply/88pm860x_battery.c 710 */;
	int cocci_id/* drivers/power/supply/88pm860x_battery.c 710 */;
	irqreturn_t cocci_id/* drivers/power/supply/88pm860x_battery.c 410 */;
	void *cocci_id/* drivers/power/supply/88pm860x_battery.c 410 */;
	unsigned int cocci_id/* drivers/power/supply/88pm860x_battery.c 266 */;
	struct ccnt *cocci_id/* drivers/power/supply/88pm860x_battery.c 264 */;
	short cocci_id/* drivers/power/supply/88pm860x_battery.c 216 */;
	unsigned char cocci_id/* drivers/power/supply/88pm860x_battery.c 173 */[5];
	unsigned char cocci_id/* drivers/power/supply/88pm860x_battery.c 157 */[2];
	struct ccnt cocci_id/* drivers/power/supply/88pm860x_battery.c 148 */;
	int cocci_id/* drivers/power/supply/88pm860x_battery.c 125 */[][2];
	struct ccnt {
		unsigned long long int pos;
		unsigned long long int neg;
		unsigned int spos;
		unsigned int sneg;
		int total_chg;
		int total_dischg;
	} cocci_id/* drivers/power/supply/88pm860x_battery.c 111 */;
	struct platform_driver cocci_id/* drivers/power/supply/88pm860x_battery.c 1008 */;
}