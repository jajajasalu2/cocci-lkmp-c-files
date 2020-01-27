cocci_test_suite() {
	struct device_node *cocci_id/* drivers/power/supply/ab8500_btemp.c 999 */;
	struct platform_device *cocci_id/* drivers/power/supply/ab8500_btemp.c 997 */;
	const struct power_supply_desc cocci_id/* drivers/power/supply/ab8500_btemp.c 988 */;
	char *cocci_id/* drivers/power/supply/ab8500_btemp.c 983 */[];
	pm_message_t cocci_id/* drivers/power/supply/ab8500_btemp.c 950 */;
	struct ab8500_btemp_interrupts cocci_id/* drivers/power/supply/ab8500_btemp.c 931 */[];
	struct ab8500_btemp {
		struct device *dev;
		struct list_head node;
		int curr_source;
		int bat_temp;
		int prev_bat_temp;
		struct ab8500 *parent;
		struct iio_channel *btemp_ball;
		struct iio_channel *bat_ctrl;
		struct ab8500_fg *fg;
		struct abx500_bm_data *bm;
		struct power_supply *btemp_psy;
		struct ab8500_btemp_events events;
		struct ab8500_btemp_ranges btemp_ranges;
		struct workqueue_struct *btemp_wq;
		struct delayed_work btemp_periodic_work;
		bool initialized;
	} cocci_id/* drivers/power/supply/ab8500_btemp.c 93 */;
	struct power_supply *cocci_id/* drivers/power/supply/ab8500_btemp.c 922 */;
	enum power_supply_property cocci_id/* drivers/power/supply/ab8500_btemp.c 869 */;
	union power_supply_propval cocci_id/* drivers/power/supply/ab8500_btemp.c 853 */;
	const char **cocci_id/* drivers/power/supply/ab8500_btemp.c 851 */;
	struct device *cocci_id/* drivers/power/supply/ab8500_btemp.c 847 */;
	union power_supply_propval *cocci_id/* drivers/power/supply/ab8500_btemp.c 823 */;
	struct ab8500_btemp_ranges {
		int btemp_high_limit;
		int btemp_med_limit;
		int btemp_low_limit;
	} cocci_id/* drivers/power/supply/ab8500_btemp.c 68 */;
	irqreturn_t cocci_id/* drivers/power/supply/ab8500_btemp.c 624 */;
	void *cocci_id/* drivers/power/supply/ab8500_btemp.c 624 */;
	struct ab8500_btemp_events {
		bool batt_rem;
		bool btemp_high;
		bool btemp_medhigh;
		bool btemp_lowmed;
		bool btemp_low;
		bool ac_conn;
		bool usb_conn;
	} cocci_id/* drivers/power/supply/ab8500_btemp.c 58 */;
	struct work_struct *cocci_id/* drivers/power/supply/ab8500_btemp.c 571 */;
	struct ab8500_btemp_interrupts {
		char *name;
		irqreturn_t (*isr)(int irq, void *data);
	} cocci_id/* drivers/power/supply/ab8500_btemp.c 53 */;
	u8 cocci_id/* drivers/power/supply/ab8500_btemp.c 518 */;
	const struct abx500_res_to_temp *cocci_id/* drivers/power/supply/ab8500_btemp.c 428 */;
	bool cocci_id/* drivers/power/supply/ab8500_btemp.c 204 */;
	struct ab8500_btemp *cocci_id/* drivers/power/supply/ab8500_btemp.c 142 */;
	int cocci_id/* drivers/power/supply/ab8500_btemp.c 142 */;
	struct ab8500_btemp cocci_id/* drivers/power/supply/ab8500_btemp.c 128 */;
	void __exit cocci_id/* drivers/power/supply/ab8500_btemp.c 1162 */;
	void cocci_id/* drivers/power/supply/ab8500_btemp.c 1162 */;
	int __init cocci_id/* drivers/power/supply/ab8500_btemp.c 1157 */;
	struct platform_driver cocci_id/* drivers/power/supply/ab8500_btemp.c 1146 */;
	const struct of_device_id cocci_id/* drivers/power/supply/ab8500_btemp.c 1141 */[];
	enum power_supply_property cocci_id/* drivers/power/supply/ab8500_btemp.c 113 */[];
	struct power_supply_config cocci_id/* drivers/power/supply/ab8500_btemp.c 1001 */;
	struct abx500_bm_data *cocci_id/* drivers/power/supply/ab8500_btemp.c 1000 */;
}
