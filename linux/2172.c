cocci_test_suite() {
	enum power_supply_property cocci_id/* drivers/power/supply/abx500_chargalg.c 965 */;
	bool cocci_id/* drivers/power/supply/abx500_chargalg.c 944 */;
	union power_supply_propval cocci_id/* drivers/power/supply/abx500_chargalg.c 942 */;
	const char **cocci_id/* drivers/power/supply/abx500_chargalg.c 940 */;
	struct device *cocci_id/* drivers/power/supply/abx500_chargalg.c 936 */;
	void *cocci_id/* drivers/power/supply/abx500_chargalg.c 936 */;
	enum abx500_chargalg_states{STATE_HANDHELD_INIT, STATE_HANDHELD, STATE_CHG_NOT_OK_INIT, STATE_CHG_NOT_OK, STATE_HW_TEMP_PROTECT_INIT, STATE_HW_TEMP_PROTECT, STATE_NORMAL_INIT, STATE_NORMAL, STATE_WAIT_FOR_RECHARGE_INIT, STATE_WAIT_FOR_RECHARGE, STATE_MAINTENANCE_A_INIT, STATE_MAINTENANCE_A, STATE_MAINTENANCE_B_INIT, STATE_MAINTENANCE_B, STATE_TEMP_UNDEROVER_INIT, STATE_TEMP_UNDEROVER, STATE_TEMP_LOWHIGH_INIT, STATE_TEMP_LOWHIGH, STATE_SUSPENDED_INIT, STATE_SUSPENDED, STATE_OVV_PROTECT_INIT, STATE_OVV_PROTECT, STATE_SAFETY_TIMER_EXPIRED_INIT, STATE_SAFETY_TIMER_EXPIRED, STATE_BATT_REMOVED_INIT, STATE_BATT_REMOVED, STATE_WD_EXPIRED_INIT, STATE_WD_EXPIRED,} cocci_id/* drivers/power/supply/abx500_chargalg.c 93 */;
	struct abx500_chargalg_battery_data {
		int temp;
		int volt;
		int avg_curr;
		int inst_curr;
		int percent;
	} cocci_id/* drivers/power/supply/abx500_chargalg.c 85 */;
	enum maxim_ret cocci_id/* drivers/power/supply/abx500_chargalg.c 837 */;
	struct abx500_chargalg_current_step_status {
		bool curr_step_change;
		int curr_step;
	} cocci_id/* drivers/power/supply/abx500_chargalg.c 80 */;
	struct abx500_chargalg_suspension_status {
		bool suspended_change;
		bool ac_suspended;
		bool usb_suspended;
	} cocci_id/* drivers/power/supply/abx500_chargalg.c 74 */;
	struct abx500_chargalg_charger_info {
		enum abx500_chargers conn_chg;
		enum abx500_chargers prev_conn_chg;
		enum abx500_chargers online_chg;
		enum abx500_chargers prev_online_chg;
		enum abx500_chargers charger_type;
		bool usb_chg_ok;
		bool ac_chg_ok;
		int usb_volt;
		int usb_curr;
		int ac_volt;
		int ac_curr;
		int usb_vset;
		int usb_iset;
		int ac_vset;
		int ac_iset;
	} cocci_id/* drivers/power/supply/abx500_chargalg.c 56 */;
	struct abx500_chargalg *cocci_id/* drivers/power/supply/abx500_chargalg.c 545 */;
	int cocci_id/* drivers/power/supply/abx500_chargalg.c 545 */;
	enum abx500_chargers{NO_CHG, AC_CHG, USB_CHG,} cocci_id/* drivers/power/supply/abx500_chargalg.c 50 */;
	enum abx500_chargalg_states cocci_id/* drivers/power/supply/abx500_chargalg.c 331 */;
	struct abx500_chargalg cocci_id/* drivers/power/supply/abx500_chargalg.c 312 */;
	struct hrtimer *cocci_id/* drivers/power/supply/abx500_chargalg.c 309 */;
	enum hrtimer_restart cocci_id/* drivers/power/supply/abx500_chargalg.c 308 */;
	struct abx500_chargalg_sysfs_entry {
		struct attribute attr;
		ssize_t (*show)(struct abx500_chargalg *, char *);
		ssize_t (*store)(struct abx500_chargalg *, const char *,
				 size_t);
	} cocci_id/* drivers/power/supply/abx500_chargalg.c 273 */;
	enum power_supply_property cocci_id/* drivers/power/supply/abx500_chargalg.c 268 */[];
	struct abx500_chargalg {
		struct device *dev;
		int charge_status;
		int eoc_cnt;
		bool maintenance_chg;
		int t_hyst_norm;
		int t_hyst_lowhigh;
		enum abx500_chargalg_states charge_state;
		struct abx500_charge_curr_maximization ccm;
		struct abx500_chargalg_charger_info chg_info;
		struct abx500_chargalg_battery_data batt_data;
		struct abx500_chargalg_suspension_status susp_status;
		struct ab8500 *parent;
		struct abx500_chargalg_current_step_status curr_status;
		struct abx500_bm_data *bm;
		struct power_supply *chargalg_psy;
		struct ux500_charger *ac_chg;
		struct ux500_charger *usb_chg;
		struct abx500_chargalg_events events;
		struct workqueue_struct *chargalg_wq;
		struct delayed_work chargalg_periodic_work;
		struct delayed_work chargalg_wd_work;
		struct work_struct chargalg_work;
		struct hrtimer safety_timer;
		struct hrtimer maintenance_timer;
		struct kobject chargalg_kobject;
	} cocci_id/* drivers/power/supply/abx500_chargalg.c 236 */;
	struct platform_driver cocci_id/* drivers/power/supply/abx500_chargalg.c 2088 */;
	const struct of_device_id cocci_id/* drivers/power/supply/abx500_chargalg.c 2083 */[];
	enum maxim_ret{MAXIM_RET_NOACTION, MAXIM_RET_CHANGE, MAXIM_RET_IBAT_TOO_HIGH,} cocci_id/* drivers/power/supply/abx500_chargalg.c 201 */;
	struct power_supply_config cocci_id/* drivers/power/supply/abx500_chargalg.c 1990 */;
	struct abx500_bm_data *cocci_id/* drivers/power/supply/abx500_chargalg.c 1989 */;
	struct device_node *cocci_id/* drivers/power/supply/abx500_chargalg.c 1988 */;
	struct platform_device *cocci_id/* drivers/power/supply/abx500_chargalg.c 1986 */;
	const struct power_supply_desc cocci_id/* drivers/power/supply/abx500_chargalg.c 1977 */;
	char *cocci_id/* drivers/power/supply/abx500_chargalg.c 1973 */[];
	pm_message_t cocci_id/* drivers/power/supply/abx500_chargalg.c 1935 */;
	struct abx500_charge_curr_maximization {
		int original_iset;
		int current_iset;
		int test_delta_i;
		int condition_cnt;
		int max_current;
		int wait_cnt;
		u8 level;
	} cocci_id/* drivers/power/supply/abx500_chargalg.c 191 */;
	struct kobj_type cocci_id/* drivers/power/supply/abx500_chargalg.c 1879 */;
	const struct sysfs_ops cocci_id/* drivers/power/supply/abx500_chargalg.c 1874 */;
	struct attribute *cocci_id/* drivers/power/supply/abx500_chargalg.c 1868 */[];
	struct abx500_chargalg_sysfs_entry *cocci_id/* drivers/power/supply/abx500_chargalg.c 1856 */;
	struct attribute *cocci_id/* drivers/power/supply/abx500_chargalg.c 1854 */;
	struct kobject *cocci_id/* drivers/power/supply/abx500_chargalg.c 1853 */;
	struct abx500_chargalg_sysfs_entry cocci_id/* drivers/power/supply/abx500_chargalg.c 1834 */;
	long int cocci_id/* drivers/power/supply/abx500_chargalg.c 1753 */;
	const char *cocci_id/* drivers/power/supply/abx500_chargalg.c 1751 */;
	size_t cocci_id/* drivers/power/supply/abx500_chargalg.c 1751 */;
	char *cocci_id/* drivers/power/supply/abx500_chargalg.c 1745 */;
	ssize_t cocci_id/* drivers/power/supply/abx500_chargalg.c 1744 */;
	union power_supply_propval *cocci_id/* drivers/power/supply/abx500_chargalg.c 1713 */;
	struct work_struct *cocci_id/* drivers/power/supply/abx500_chargalg.c 1642 */;
	struct abx500_chargalg_events {
		bool batt_unknown;
		bool mainextchnotok;
		bool batt_ovv;
		bool batt_rem;
		bool btemp_underover;
		bool btemp_lowhigh;
		bool main_thermal_prot;
		bool usb_thermal_prot;
		bool main_ovv;
		bool vbus_ovv;
		bool usbchargernotok;
		bool safety_timer_expired;
		bool maintenance_timer_expired;
		bool ac_wd_expired;
		bool usb_wd_expired;
		bool ac_cv_active;
		bool usb_cv_active;
		bool vbus_collapsed;
	} cocci_id/* drivers/power/supply/abx500_chargalg.c 155 */;
	void cocci_id/* drivers/power/supply/abx500_chargalg.c 1287 */;
	struct power_supply *cocci_id/* drivers/power/supply/abx500_chargalg.c 1268 */;
	const char *cocci_id/* drivers/power/supply/abx500_chargalg.c 124 */[];
}
