cocci_test_suite() {
	struct goldfish_battery_data *cocci_id/* drivers/power/supply/goldfish_battery.c 66 */;
	union power_supply_propval *cocci_id/* drivers/power/supply/goldfish_battery.c 64 */;
	enum power_supply_property cocci_id/* drivers/power/supply/goldfish_battery.c 63 */;
	struct power_supply *cocci_id/* drivers/power/supply/goldfish_battery.c 62 */;
	int cocci_id/* drivers/power/supply/goldfish_battery.c 62 */;
	enum{BATTERY_INT_STATUS=0x00, BATTERY_INT_ENABLE=0x04, BATTERY_AC_ONLINE=0x08, BATTERY_STATUS=0x0C, BATTERY_HEALTH=0x10, BATTERY_PRESENT=0x14, BATTERY_CAPACITY=0x18, BATTERY_VOLTAGE=0x1C, BATTERY_TEMP=0x20, BATTERY_CHARGE_COUNTER=0x24, BATTERY_VOLTAGE_MAX=0x28, BATTERY_CURRENT_MAX=0x2C, BATTERY_CURRENT_NOW=0x30, BATTERY_CURRENT_AVG=0x34, BATTERY_CHARGE_FULL_UAH=0x38, BATTERY_CYCLE_COUNT=0x40, BATTERY_STATUS_CHANGED=1U << 0, AC_STATUS_CHANGED=1U << 1, BATTERY_INT_MASK=BATTERY_STATUS_CHANGED | AC_STATUS_CHANGED,} cocci_id/* drivers/power/supply/goldfish_battery.c 35 */;
	struct platform_driver cocci_id/* drivers/power/supply/goldfish_battery.c 275 */;
	const struct acpi_device_id cocci_id/* drivers/power/supply/goldfish_battery.c 269 */[];
	const struct of_device_id cocci_id/* drivers/power/supply/goldfish_battery.c 263 */[];
	struct goldfish_battery_data {
		void __iomem *reg_base;
		int irq;
		spinlock_t lock;
		struct power_supply *battery;
		struct power_supply *ac;
	} cocci_id/* drivers/power/supply/goldfish_battery.c 21 */;
	struct power_supply_config cocci_id/* drivers/power/supply/goldfish_battery.c 203 */;
	struct resource *cocci_id/* drivers/power/supply/goldfish_battery.c 201 */;
	struct platform_device *cocci_id/* drivers/power/supply/goldfish_battery.c 198 */;
	const struct power_supply_desc cocci_id/* drivers/power/supply/goldfish_battery.c 190 */;
	uint32_t cocci_id/* drivers/power/supply/goldfish_battery.c 165 */;
	unsigned long cocci_id/* drivers/power/supply/goldfish_battery.c 163 */;
	irqreturn_t cocci_id/* drivers/power/supply/goldfish_battery.c 161 */;
	void *cocci_id/* drivers/power/supply/goldfish_battery.c 161 */;
	enum power_supply_property cocci_id/* drivers/power/supply/goldfish_battery.c 155 */[];
}
