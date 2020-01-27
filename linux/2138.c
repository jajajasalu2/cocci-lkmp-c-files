cocci_test_suite() {
	const struct reg_field cocci_id/* drivers/power/supply/rt9455_charger.c 95 */[];
	bool cocci_id/* drivers/power/supply/rt9455_charger.c 856 */;
	bool *cocci_id/* drivers/power/supply/rt9455_charger.c 851 */;
	u32 cocci_id/* drivers/power/supply/rt9455_charger.c 650 */;
	enum power_supply_property cocci_id/* drivers/power/supply/rt9455_charger.c 612 */;
	struct power_supply *cocci_id/* drivers/power/supply/rt9455_charger.c 611 */;
	enum rt9455_fields{F_STAT, F_BOOST, F_PWR_RDY, F_OTG_PIN_POLARITY, F_IAICR, F_TE_SHDN_EN, F_HIGHER_OCP, F_TE, F_IAICR_INT, F_HIZ, F_OPA_MODE, F_VOREG, F_OTG_PL, F_OTG_EN, F_VENDOR_ID, F_CHIP_REV, F_RST, F_TMR_EN, F_MIVR, F_IPREC, F_IEOC_PERCENTAGE, F_IAICR_SEL, F_ICHRG, F_VPREC, F_BATD_EN, F_CHG_EN, F_VMREG, F_TSDI, F_VINOVPI, F_BATAB, F_CHRVPI, F_CHBATOVI, F_CHTERMI, F_CHRCHGI, F_CH32MI, F_CHTREGI, F_CHMIVRI, F_BSTBUSOVI, F_BSTOLI, F_BSTLOWVI, F_BST32SI, F_TSDM, F_VINOVPIM, F_BATABM, F_CHRVPIM, F_CHBATOVIM, F_CHTERMIM, F_CHRCHGIM, F_CH32MIM, F_CHTREGIM, F_CHMIVRIM, F_BSTVINOVIM, F_BSTOLIM, F_BSTLOWVIM, F_BST32SIM, F_MAX_FIELDS,} cocci_id/* drivers/power/supply/rt9455_charger.c 60 */;
	union power_supply_propval *cocci_id/* drivers/power/supply/rt9455_charger.c 485 */;
	char *cocci_id/* drivers/power/supply/rt9455_charger.c 348 */[];
	enum power_supply_property cocci_id/* drivers/power/supply/rt9455_charger.c 333 */[];
	int *cocci_id/* drivers/power/supply/rt9455_charger.c 273 */;
	enum rt9455_fields cocci_id/* drivers/power/supply/rt9455_charger.c 272 */;
	const int cocci_id/* drivers/power/supply/rt9455_charger.c 201 */[];
	struct i2c_driver cocci_id/* drivers/power/supply/rt9455_charger.c 1740 */;
	const struct acpi_device_id cocci_id/* drivers/power/supply/rt9455_charger.c 1734 */[];
	const struct of_device_id cocci_id/* drivers/power/supply/rt9455_charger.c 1728 */[];
	const struct i2c_device_id cocci_id/* drivers/power/supply/rt9455_charger.c 1722 */[];
	struct power_supply_config cocci_id/* drivers/power/supply/rt9455_charger.c 1590 */;
	struct i2c_adapter *cocci_id/* drivers/power/supply/rt9455_charger.c 1587 */;
	const struct i2c_device_id *cocci_id/* drivers/power/supply/rt9455_charger.c 1585 */;
	struct i2c_client *cocci_id/* drivers/power/supply/rt9455_charger.c 1584 */;
	const struct regmap_config cocci_id/* drivers/power/supply/rt9455_charger.c 1575 */;
	const struct power_supply_desc cocci_id/* drivers/power/supply/rt9455_charger.c 1542 */;
	int cocci_id/* drivers/power/supply/rt9455_charger.c 1501 */;
	unsigned int cocci_id/* drivers/power/supply/rt9455_charger.c 1500 */;
	struct device *cocci_id/* drivers/power/supply/rt9455_charger.c 1499 */;
	struct rt9455_info cocci_id/* drivers/power/supply/rt9455_charger.c 1497 */;
	struct rt9455_info *cocci_id/* drivers/power/supply/rt9455_charger.c 1497 */;
	struct work_struct *cocci_id/* drivers/power/supply/rt9455_charger.c 1495 */;
	void cocci_id/* drivers/power/supply/rt9455_charger.c 1495 */;
	unsigned long cocci_id/* drivers/power/supply/rt9455_charger.c 1401 */;
	struct notifier_block *cocci_id/* drivers/power/supply/rt9455_charger.c 1400 */;
	u8 cocci_id/* drivers/power/supply/rt9455_charger.c 1361 */;
	u32 *cocci_id/* drivers/power/supply/rt9455_charger.c 1183 */;
	irqreturn_t cocci_id/* drivers/power/supply/rt9455_charger.c 1113 */;
	void *cocci_id/* drivers/power/supply/rt9455_charger.c 1113 */;
	struct rt9455_info {
		struct i2c_client *client;
		struct regmap *regmap;
		struct regmap_field *regmap_fields[F_MAX_FIELDS];
		struct power_supply *charger;
#if IS_ENABLED(CONFIG_USB_PHY)
		struct usb_phy *usb_phy;
		struct notifier_block nb;
#endif
		struct delayed_work pwr_rdy_work;
		struct delayed_work max_charging_time_work;
		struct delayed_work batt_presence_work;
		u32 voreg;
		u32 boost_voltage;
	} cocci_id/*  1 */;
}
