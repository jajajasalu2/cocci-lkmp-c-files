cocci_test_suite() {
	const struct reg_field *cocci_id/* drivers/power/supply/bq24257_charger.c 993 */;
	enum bq2425x_chip cocci_id/* drivers/power/supply/bq24257_charger.c 979 */;
	const struct acpi_device_id *cocci_id/* drivers/power/supply/bq24257_charger.c 955 */;
	struct i2c_adapter *cocci_id/* drivers/power/supply/bq24257_charger.c 953 */;
	const struct i2c_device_id *cocci_id/* drivers/power/supply/bq24257_charger.c 951 */;
	struct i2c_client *cocci_id/* drivers/power/supply/bq24257_charger.c 950 */;
	struct power_supply_config cocci_id/* drivers/power/supply/bq24257_charger.c 851 */;
	struct attribute *cocci_id/* drivers/power/supply/bq24257_charger.c 839 */[];
	struct bq24257_device {
		struct i2c_client *client;
		struct device *dev;
		struct power_supply *charger;
		enum bq2425x_chip chip;
		struct regmap *rmap;
		struct regmap_field *rmap_fields[F_MAX_FIELDS];
		struct gpio_desc *pg;
		struct delayed_work iilimit_setup_work;
		struct bq24257_init_data init_data;
		struct bq24257_state state;
		struct mutex lock;
		bool iilimit_autoset_enable;
	} cocci_id/* drivers/power/supply/bq24257_charger.c 82 */;
	long cocci_id/* drivers/power/supply/bq24257_charger.c 813 */;
	size_t cocci_id/* drivers/power/supply/bq24257_charger.c 809 */;
	const char *cocci_id/* drivers/power/supply/bq24257_charger.c 808 */;
	char *cocci_id/* drivers/power/supply/bq24257_charger.c 776 */;
	struct device_attribute *cocci_id/* drivers/power/supply/bq24257_charger.c 775 */;
	ssize_t cocci_id/* drivers/power/supply/bq24257_charger.c 774 */;
	struct bq24257_state {
		u8 status;
		u8 fault;
		bool power_good;
	} cocci_id/* drivers/power/supply/bq24257_charger.c 76 */;
	const struct power_supply_desc cocci_id/* drivers/power/supply/bq24257_charger.c 753 */;
	char *cocci_id/* drivers/power/supply/bq24257_charger.c 749 */[];
	enum power_supply_property cocci_id/* drivers/power/supply/bq24257_charger.c 735 */[];
	const struct {
		int field;
		u32 value;
	} cocci_id/* drivers/power/supply/bq24257_charger.c 682 */[];
	struct bq24257_init_data {
		u8 ichg;
		u8 vbat;
		u8 iterm;
		u8 iilimit;
		u8 vovp;
		u8 vindpm;
	} cocci_id/* drivers/power/supply/bq24257_charger.c 67 */;
	irqreturn_t cocci_id/* drivers/power/supply/bq24257_charger.c 649 */;
	void *cocci_id/* drivers/power/supply/bq24257_charger.c 649 */;
	struct bq24257_state cocci_id/* drivers/power/supply/bq24257_charger.c 603 */;
	void cocci_id/* drivers/power/supply/bq24257_charger.c 599 */;
	struct bq24257_device cocci_id/* drivers/power/supply/bq24257_charger.c 593 */;
	struct work_struct *cocci_id/* drivers/power/supply/bq24257_charger.c 591 */;
	enum bq24257_fields{F_WD_FAULT, F_WD_EN, F_STAT, F_FAULT, F_RESET, F_IILIMIT, F_EN_STAT, F_EN_TERM, F_CE, F_HZ_MODE, F_VBAT, F_USB_DET, F_ICHG, F_ITERM, F_LOOP_STATUS, F_LOW_CHG, F_DPDM_EN, F_CE_STATUS, F_VINDPM, F_X2_TMR_EN, F_TMR, F_SYSOFF, F_TS_EN, F_TS_STAT, F_VOVP, F_CLR_VDP, F_FORCE_BATDET, F_FORCE_PTM, F_MAX_FIELDS,} cocci_id/* drivers/power/supply/bq24257_charger.c 54 */;
	const u8 cocci_id/* drivers/power/supply/bq24257_charger.c 536 */[];
	enum bq24257_safety_timer{SAFETY_TIMER_45, SAFETY_TIMER_360, SAFETY_TIMER_540, SAFETY_TIMER_NONE,} cocci_id/* drivers/power/supply/bq24257_charger.c 523 */;
	enum bq24257_port_type{PORT_TYPE_DCP, PORT_TYPE_CDP, PORT_TYPE_SDP, PORT_TYPE_NON_STANDARD,} cocci_id/* drivers/power/supply/bq24257_charger.c 516 */;
	enum bq24257_vindpm{VINDPM_4200, VINDPM_4280, VINDPM_4360, VINDPM_4440, VINDPM_4520, VINDPM_4600, VINDPM_4680, VINDPM_4760,} cocci_id/* drivers/power/supply/bq24257_charger.c 505 */;
	enum bq24257_vovp{VOVP_6000, VOVP_6500, VOVP_7000, VOVP_8000, VOVP_9000, VOVP_9500, VOVP_10000, VOVP_10500,} cocci_id/* drivers/power/supply/bq24257_charger.c 494 */;
	enum bq24257_in_ilimit{IILIMIT_100, IILIMIT_150, IILIMIT_500, IILIMIT_900, IILIMIT_1500, IILIMIT_2000, IILIMIT_EXT, IILIMIT_NONE,} cocci_id/* drivers/power/supply/bq24257_charger.c 483 */;
	const char *const cocci_id/* drivers/power/supply/bq24257_charger.c 48 */[];
	enum bq24257_loop_status{LOOP_STATUS_NONE, LOOP_STATUS_IN_DPM, LOOP_STATUS_IN_CURRENT_LIMIT, LOOP_STATUS_THERMAL,} cocci_id/* drivers/power/supply/bq24257_charger.c 476 */;
	struct bq24257_state *cocci_id/* drivers/power/supply/bq24257_charger.c 422 */;
	enum bq2425x_chip{BQ24250, BQ24251, BQ24257,} cocci_id/* drivers/power/supply/bq24257_charger.c 42 */;
	const union power_supply_propval *cocci_id/* drivers/power/supply/bq24257_charger.c 398 */;
	enum power_supply_property cocci_id/* drivers/power/supply/bq24257_charger.c 303 */;
	struct power_supply *cocci_id/* drivers/power/supply/bq24257_charger.c 302 */;
	union power_supply_propval *cocci_id/* drivers/power/supply/bq24257_charger.c 262 */;
	enum bq24257_fault{FAULT_NORMAL, FAULT_INPUT_OVP, FAULT_INPUT_UVLO, FAULT_SLEEP, FAULT_BAT_TS, FAULT_BAT_OVP, FAULT_TS, FAULT_TIMER, FAULT_NO_BAT, FAULT_ISET, FAULT_INPUT_LDO_LOW,} cocci_id/* drivers/power/supply/bq24257_charger.c 247 */;
	enum bq24257_status{STATUS_READY, STATUS_CHARGE_IN_PROGRESS, STATUS_CHARGE_DONE, STATUS_FAULT,} cocci_id/* drivers/power/supply/bq24257_charger.c 240 */;
	u32 cocci_id/* drivers/power/supply/bq24257_charger.c 229 */;
	const u32 *cocci_id/* drivers/power/supply/bq24257_charger.c 229 */;
	u8 cocci_id/* drivers/power/supply/bq24257_charger.c 224 */;
	enum bq24257_fields cocci_id/* drivers/power/supply/bq24257_charger.c 211 */;
	struct bq24257_device *cocci_id/* drivers/power/supply/bq24257_charger.c 210 */;
	int cocci_id/* drivers/power/supply/bq24257_charger.c 210 */;
	const u32 cocci_id/* drivers/power/supply/bq24257_charger.c 175 */[];
	const struct reg_field cocci_id/* drivers/power/supply/bq24257_charger.c 126 */[];
	struct i2c_driver cocci_id/* drivers/power/supply/bq24257_charger.c 1163 */;
	const struct regmap_config cocci_id/* drivers/power/supply/bq24257_charger.c 116 */;
	const struct acpi_device_id cocci_id/* drivers/power/supply/bq24257_charger.c 1155 */[];
	const struct of_device_id cocci_id/* drivers/power/supply/bq24257_charger.c 1147 */[];
	const struct i2c_device_id cocci_id/* drivers/power/supply/bq24257_charger.c 1139 */[];
	const struct dev_pm_ops cocci_id/* drivers/power/supply/bq24257_charger.c 1135 */;
	bool cocci_id/* drivers/power/supply/bq24257_charger.c 104 */;
	struct device *cocci_id/* drivers/power/supply/bq24257_charger.c 104 */;
	unsigned int cocci_id/* drivers/power/supply/bq24257_charger.c 104 */;
}