cocci_test_suite() {
	const struct acpi_device_id cocci_id/* drivers/power/supply/bq25890_charger.c 999 */[];
	const struct of_device_id cocci_id/* drivers/power/supply/bq25890_charger.c 993 */[];
	const struct i2c_device_id cocci_id/* drivers/power/supply/bq25890_charger.c 987 */[];
	const struct dev_pm_ops cocci_id/* drivers/power/supply/bq25890_charger.c 983 */;
	const struct reg_field *cocci_id/* drivers/power/supply/bq25890_charger.c 850 */;
	struct device *cocci_id/* drivers/power/supply/bq25890_charger.c 824 */;
	struct i2c_adapter *cocci_id/* drivers/power/supply/bq25890_charger.c 823 */;
	const struct i2c_device_id *cocci_id/* drivers/power/supply/bq25890_charger.c 821 */;
	struct i2c_client *cocci_id/* drivers/power/supply/bq25890_charger.c 820 */;
	struct bq25890_device {
		struct i2c_client *client;
		struct device *dev;
		struct power_supply *charger;
		struct usb_phy *usb_phy;
		struct notifier_block usb_nb;
		struct work_struct usb_work;
		unsigned long usb_event;
		struct regmap *rmap;
		struct regmap_field *rmap_fields[F_MAX_FIELDS];
		int chip_id;
		struct bq25890_init_data init_data;
		struct bq25890_state state;
		struct mutex lock;
	} cocci_id/* drivers/power/supply/bq25890_charger.c 81 */;
	struct bq25890_init_data *cocci_id/* drivers/power/supply/bq25890_charger.c 808 */;
	struct {
		char *name;
		bool optional;
		enum bq25890_table_ids tbl_id;
		u8 *conv_data;
	} cocci_id/* drivers/power/supply/bq25890_charger.c 763 */[];
	struct gpio_desc *cocci_id/* drivers/power/supply/bq25890_charger.c 746 */;
	struct bq25890_device cocci_id/* drivers/power/supply/bq25890_charger.c 736 */;
	struct notifier_block *cocci_id/* drivers/power/supply/bq25890_charger.c 732 */;
	unsigned long cocci_id/* drivers/power/supply/bq25890_charger.c 732 */;
	struct bq25890_state {
		u8 online;
		u8 chrg_status;
		u8 chrg_fault;
		u8 vsys_status;
		u8 boost_fault;
		u8 bat_fault;
	} cocci_id/* drivers/power/supply/bq25890_charger.c 72 */;
	struct work_struct *cocci_id/* drivers/power/supply/bq25890_charger.c 702 */;
	struct power_supply_config cocci_id/* drivers/power/supply/bq25890_charger.c 691 */;
	const struct power_supply_desc cocci_id/* drivers/power/supply/bq25890_charger.c 681 */;
	char *cocci_id/* drivers/power/supply/bq25890_charger.c 677 */[];
	enum power_supply_property cocci_id/* drivers/power/supply/bq25890_charger.c 663 */[];
	const struct {
		enum bq25890_fields id;
		u32 value;
	} cocci_id/* drivers/power/supply/bq25890_charger.c 604 */[];
	struct bq25890_init_data {
		u8 ichg;
		u8 vreg;
		u8 iterm;
		u8 iprechg;
		u8 sysvmin;
		u8 boostv;
		u8 boosti;
		u8 boostf;
		u8 ilim_en;
		u8 treg;
	} cocci_id/* drivers/power/supply/bq25890_charger.c 59 */;
	struct bq25890_device *cocci_id/* drivers/power/supply/bq25890_charger.c 575 */;
	int cocci_id/* drivers/power/supply/bq25890_charger.c 575 */;
	irqreturn_t cocci_id/* drivers/power/supply/bq25890_charger.c 550 */;
	void *cocci_id/* drivers/power/supply/bq25890_charger.c 550 */;
	struct bq25890_state cocci_id/* drivers/power/supply/bq25890_charger.c 526 */;
	void cocci_id/* drivers/power/supply/bq25890_charger.c 522 */;
	bool cocci_id/* drivers/power/supply/bq25890_charger.c 505 */;
	struct {
		enum bq25890_fields id;
		u8 *data;
	} cocci_id/* drivers/power/supply/bq25890_charger.c 478 */[];
	struct bq25890_state *cocci_id/* drivers/power/supply/bq25890_charger.c 474 */;
	union power_supply_propval *cocci_id/* drivers/power/supply/bq25890_charger.c 363 */;
	enum power_supply_property cocci_id/* drivers/power/supply/bq25890_charger.c 362 */;
	struct power_supply *cocci_id/* drivers/power/supply/bq25890_charger.c 361 */;
	enum bq25890_chrg_fault{CHRG_FAULT_NORMAL, CHRG_FAULT_INPUT, CHRG_FAULT_THERMAL_SHUTDOWN, CHRG_FAULT_TIMER_EXPIRED,} cocci_id/* drivers/power/supply/bq25890_charger.c 354 */;
	enum bq25890_status{STATUS_NOT_CHARGING, STATUS_PRE_CHARGING, STATUS_FAST_CHARGING, STATUS_TERMINATION_DONE,} cocci_id/* drivers/power/supply/bq25890_charger.c 347 */;
	const struct bq25890_range *cocci_id/* drivers/power/supply/bq25890_charger.c 319 */;
	const u32 *cocci_id/* drivers/power/supply/bq25890_charger.c 313 */;
	u32 cocci_id/* drivers/power/supply/bq25890_charger.c 308 */;
	enum bq25890_table_ids cocci_id/* drivers/power/supply/bq25890_charger.c 308 */;
	u8 cocci_id/* drivers/power/supply/bq25890_charger.c 303 */;
	enum bq25890_fields cocci_id/* drivers/power/supply/bq25890_charger.c 290 */;
	enum bq25890_fields{F_EN_HIZ, F_EN_ILIM, F_IILIM, F_BHOT, F_BCOLD, F_VINDPM_OFS, F_CONV_START, F_CONV_RATE, F_BOOSTF, F_ICO_EN, F_HVDCP_EN, F_MAXC_EN, F_FORCE_DPM, F_AUTO_DPDM_EN, F_BAT_LOAD_EN, F_WD_RST, F_OTG_CFG, F_CHG_CFG, F_SYSVMIN, F_PUMPX_EN, F_ICHG, F_IPRECHG, F_ITERM, F_VREG, F_BATLOWV, F_VRECHG, F_TERM_EN, F_STAT_DIS, F_WD, F_TMR_EN, F_CHG_TMR, F_JEITA_ISET, F_BATCMP, F_VCLAMP, F_TREG, F_FORCE_ICO, F_TMR2X_EN, F_BATFET_DIS, F_JEITA_VSET, F_BATFET_DLY, F_BATFET_RST_EN, F_PUMPX_UP, F_PUMPX_DN, F_BOOSTV, F_BOOSTI, F_VBUS_STAT, F_CHG_STAT, F_PG_STAT, F_SDP_STAT, F_VSYS_STAT, F_WD_FAULT, F_BOOST_FAULT, F_CHG_FAULT, F_BAT_FAULT, F_NTC_FAULT, F_FORCE_VINDPM, F_VINDPM, F_THERM_STAT, F_BATV, F_SYSV, F_TSPCT, F_VBUS_GD, F_VBUSV, F_ICHGR, F_VDPM_STAT, F_IDPM_STAT, F_IDPM_LIM, F_REG_RST, F_ICO_OPTIMIZED, F_PN, F_TS_PROFILE, F_DEV_REV, F_MAX_FIELDS,} cocci_id/* drivers/power/supply/bq25890_charger.c 28 */;
	const union {
		struct bq25890_range rt;
		struct bq25890_lookup lt;
	} cocci_id/* drivers/power/supply/bq25890_charger.c 273 */[];
	struct bq25890_lookup {
		const u32 *tbl;
		u32 size;
	} cocci_id/* drivers/power/supply/bq25890_charger.c 268 */;
	struct bq25890_range {
		u32 min;
		u32 max;
		u32 step;
	} cocci_id/* drivers/power/supply/bq25890_charger.c 262 */;
	const u32 cocci_id/* drivers/power/supply/bq25890_charger.c 256 */[];
	enum bq25890_table_ids{TBL_ICHG, TBL_ITERM, TBL_VREG, TBL_BOOSTV, TBL_SYSVMIN, TBL_TREG, TBL_BOOSTI,} cocci_id/* drivers/power/supply/bq25890_charger.c 237 */;
	const struct reg_field cocci_id/* drivers/power/supply/bq25890_charger.c 134 */[];
	const struct regmap_config cocci_id/* drivers/power/supply/bq25890_charger.c 123 */;
	const struct regmap_access_table cocci_id/* drivers/power/supply/bq25890_charger.c 118 */;
	const struct regmap_range cocci_id/* drivers/power/supply/bq25890_charger.c 101 */[];
	struct i2c_driver cocci_id/* drivers/power/supply/bq25890_charger.c 1005 */;
}
