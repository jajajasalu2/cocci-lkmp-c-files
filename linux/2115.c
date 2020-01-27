cocci_test_suite() {
	struct cpcap_battery_config {
		int cd_factor;
		struct power_supply_info info;
		struct power_supply_battery_info bat;
	} cocci_id/* drivers/power/supply/cpcap-battery.c 97 */;
	struct platform_driver cocci_id/* drivers/power/supply/cpcap-battery.c 944 */;
	struct cpcap_interrupt_desc {
		const char *name;
		struct list_head node;
		int irq;
		enum cpcap_battery_irq_action action;
	} cocci_id/* drivers/power/supply/cpcap-battery.c 90 */;
	struct power_supply_config cocci_id/* drivers/power/supply/cpcap-battery.c 846 */;
	const struct of_device_id *cocci_id/* drivers/power/supply/cpcap-battery.c 845 */;
	struct power_supply_desc *cocci_id/* drivers/power/supply/cpcap-battery.c 843 */;
	const struct of_device_id cocci_id/* drivers/power/supply/cpcap-battery.c 831 */[];
	enum cpcap_battery_irq_action{CPCAP_BATTERY_IRQ_ACTION_NONE, CPCAP_BATTERY_IRQ_ACTION_CC_CAL_DONE, CPCAP_BATTERY_IRQ_ACTION_BATTERY_LOW, CPCAP_BATTERY_IRQ_ACTION_POWEROFF,} cocci_id/* drivers/power/supply/cpcap-battery.c 83 */;
	const struct cpcap_battery_config cocci_id/* drivers/power/supply/cpcap-battery.c 821 */;
	unsigned long cocci_id/* drivers/power/supply/cpcap-battery.c 761 */;
	struct cpcap_battery_ddata *cocci_id/* drivers/power/supply/cpcap-battery.c 758 */;
	int cocci_id/* drivers/power/supply/cpcap-battery.c 758 */;
	enum{CPCAP_BATTERY_IIO_BATTDET, CPCAP_BATTERY_IIO_VOLTAGE, CPCAP_BATTERY_IIO_CHRG_CURRENT, CPCAP_BATTERY_IIO_BATT_CURRENT, CPCAP_BATTERY_IIO_NR,} cocci_id/* drivers/power/supply/cpcap-battery.c 75 */;
	const char *const cocci_id/* drivers/power/supply/cpcap-battery.c 728 */[CPCAP_BATTERY_IIO_NR];
	const char *const cocci_id/* drivers/power/supply/cpcap-battery.c 700 */[];
	struct platform_device *cocci_id/* drivers/power/supply/cpcap-battery.c 697 */;
	struct cpcap_interrupt_desc *cocci_id/* drivers/power/supply/cpcap-battery.c 660 */;
	const char *cocci_id/* drivers/power/supply/cpcap-battery.c 658 */;
	irqreturn_t cocci_id/* drivers/power/supply/cpcap-battery.c 611 */;
	void *cocci_id/* drivers/power/supply/cpcap-battery.c 611 */;
	const union power_supply_propval *cocci_id/* drivers/power/supply/cpcap-battery.c 579 */;
	union power_supply_propval cocci_id/* drivers/power/supply/cpcap-battery.c 551 */;
	union power_supply_propval *cocci_id/* drivers/power/supply/cpcap-battery.c 435 */;
	enum power_supply_property cocci_id/* drivers/power/supply/cpcap-battery.c 434 */;
	struct power_supply *cocci_id/* drivers/power/supply/cpcap-battery.c 433 */;
	enum power_supply_property cocci_id/* drivers/power/supply/cpcap-battery.c 414 */[];
	ktime_t cocci_id/* drivers/power/supply/cpcap-battery.c 383 */;
	struct cpcap_battery_state_data cocci_id/* drivers/power/supply/cpcap-battery.c 382 */;
	struct cpcap_battery_state_data *cocci_id/* drivers/power/supply/cpcap-battery.c 371 */;
	bool cocci_id/* drivers/power/supply/cpcap-battery.c 369 */;
	s16 cocci_id/* drivers/power/supply/cpcap-battery.c 344 */;
	s32 cocci_id/* drivers/power/supply/cpcap-battery.c 343 */;
	u16 cocci_id/* drivers/power/supply/cpcap-battery.c 293 */[7];
	struct cpcap_coulomb_counter_data *cocci_id/* drivers/power/supply/cpcap-battery.c 291 */;
	s64 cocci_id/* drivers/power/supply/cpcap-battery.c 240 */;
	u32 cocci_id/* drivers/power/supply/cpcap-battery.c 238 */;
	struct iio_channel *cocci_id/* drivers/power/supply/cpcap-battery.c 201 */;
	int *cocci_id/* drivers/power/supply/cpcap-battery.c 164 */;
	enum cpcap_battery_state cocci_id/* drivers/power/supply/cpcap-battery.c 143 */;
	struct cpcap_battery_ddata {
		struct device *dev;
		struct regmap *reg;
		struct list_head irq_list;
		struct iio_channel *channels[CPCAP_BATTERY_IIO_NR];
		struct power_supply *psy;
		struct cpcap_battery_config config;
		struct cpcap_battery_state_data state[CPCAP_BATTERY_STATE_NR];
		u32 cc_lsb;
		atomic_t active;
		int status;
		u16 vendor;
	} cocci_id/* drivers/power/supply/cpcap-battery.c 125 */;
	struct cpcap_battery_state_data {
		int voltage;
		int current_ua;
		int counter_uah;
		int temperature;
		ktime_t time;
		struct cpcap_coulomb_counter_data cc;
	} cocci_id/* drivers/power/supply/cpcap-battery.c 116 */;
	enum cpcap_battery_state{CPCAP_BATTERY_STATE_PREVIOUS, CPCAP_BATTERY_STATE_LATEST, CPCAP_BATTERY_STATE_NR,} cocci_id/* drivers/power/supply/cpcap-battery.c 110 */;
	struct cpcap_coulomb_counter_data {
		s32 sample;
		s32 accumulator;
		s16 offset;
		s16 integrator;
	} cocci_id/* drivers/power/supply/cpcap-battery.c 103 */;
}
