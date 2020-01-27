cocci_test_suite() {
	u8 *cocci_id/* drivers/power/supply/bq27xxx_battery.c 948 */;
	const struct kernel_param_ops cocci_id/* drivers/power/supply/bq27xxx_battery.c 898 */;
	unsigned int *cocci_id/* drivers/power/supply/bq27xxx_battery.c 881 */;
	const struct kernel_param *cocci_id/* drivers/power/supply/bq27xxx_battery.c 878 */;
	const char *constcocci_id/* drivers/power/supply/bq27xxx_battery.c 860 */[];
	struct bq27xxx_dm_buf {
		u8 class;
		u8 block;
		u8 data[BQ27XXX_DM_SZ];
		bool has_data,dirty;
	} cocci_id/* drivers/power/supply/bq27xxx_battery.c 838 */;
	struct {
		u32 opts;
		u32 unseal_key;
		u8 *regs;
		struct bq27xxx_dm_reg *dm_regs;
		enum power_supply_property *props;
		size_t props_size;
	} cocci_id/* drivers/power/supply/bq27xxx_battery.c 784 */[];
	struct bq27xxx_dm_reg cocci_id/* drivers/power/supply/bq27xxx_battery.c 730 */[];
	enum bq27xxx_dm_reg_id{BQ27XXX_DM_DESIGN_CAPACITY=0, BQ27XXX_DM_DESIGN_ENERGY, BQ27XXX_DM_TERMINATE_VOLTAGE,} cocci_id/* drivers/power/supply/bq27xxx_battery.c 682 */;
	struct bq27xxx_dm_reg {
		u8 subclass_id;
		u8 offset;
		u8 bytes;
		u16 min,max;
	} cocci_id/* drivers/power/supply/bq27xxx_battery.c 675 */;
	enum power_supply_property cocci_id/* drivers/power/supply/bq27xxx_battery.c 441 */[];
	struct power_supply_config cocci_id/* drivers/power/supply/bq27xxx_battery.c 1862 */;
	struct power_supply_desc *cocci_id/* drivers/power/supply/bq27xxx_battery.c 1861 */;
	enum power_supply_property cocci_id/* drivers/power/supply/bq27xxx_battery.c 1761 */;
	struct power_supply *cocci_id/* drivers/power/supply/bq27xxx_battery.c 1760 */;
	union power_supply_propval *cocci_id/* drivers/power/supply/bq27xxx_battery.c 1700 */;
	struct bq27xxx_device_info *cocci_id/* drivers/power/supply/bq27xxx_battery.c 1699 */;
	int cocci_id/* drivers/power/supply/bq27xxx_battery.c 1699 */;
	s16 cocci_id/* drivers/power/supply/bq27xxx_battery.c 1665 */;
	struct bq27xxx_device_info cocci_id/* drivers/power/supply/bq27xxx_battery.c 1629 */;
	struct work_struct *cocci_id/* drivers/power/supply/bq27xxx_battery.c 1626 */;
	void cocci_id/* drivers/power/supply/bq27xxx_battery.c 1626 */;
	struct bq27xxx_reg_cache cocci_id/* drivers/power/supply/bq27xxx_battery.c 1573 */;
	u8 cocci_id/* drivers/power/supply/bq27xxx_battery.c 134 */[BQ27XXX_REG_MAX];
	unsigned int cocci_id/* drivers/power/supply/bq27xxx_battery.c 1281 */;
	struct power_supply_battery_info cocci_id/* drivers/power/supply/bq27xxx_battery.c 1280 */;
	struct bq27xxx_dm_buf cocci_id/* drivers/power/supply/bq27xxx_battery.c 1236 */;
	struct power_supply_battery_info *cocci_id/* drivers/power/supply/bq27xxx_battery.c 1234 */;
	u16 cocci_id/* drivers/power/supply/bq27xxx_battery.c 1126 */;
	const int cocci_id/* drivers/power/supply/bq27xxx_battery.c 1125 */;
	bool cocci_id/* drivers/power/supply/bq27xxx_battery.c 1123 */;
	u16 *cocci_id/* drivers/power/supply/bq27xxx_battery.c 1081 */;
	const char *cocci_id/* drivers/power/supply/bq27xxx_battery.c 1080 */;
	struct bq27xxx_dm_reg *cocci_id/* drivers/power/supply/bq27xxx_battery.c 1079 */;
	enum bq27xxx_dm_reg_id cocci_id/* drivers/power/supply/bq27xxx_battery.c 1076 */;
	u8 cocci_id/* drivers/power/supply/bq27xxx_battery.c 1022 */;
	struct bq27xxx_dm_buf *cocci_id/* drivers/power/supply/bq27xxx_battery.c 1022 */;
	enum bq27xxx_reg_index{BQ27XXX_REG_CTRL=0, BQ27XXX_REG_TEMP, BQ27XXX_REG_INT_TEMP, BQ27XXX_REG_VOLT, BQ27XXX_REG_AI, BQ27XXX_REG_FLAGS, BQ27XXX_REG_TTE, BQ27XXX_REG_TTF, BQ27XXX_REG_TTES, BQ27XXX_REG_TTECP, BQ27XXX_REG_NAC, BQ27XXX_REG_FCC, BQ27XXX_REG_CYCT, BQ27XXX_REG_AE, BQ27XXX_REG_SOC, BQ27XXX_REG_DCAP, BQ27XXX_REG_AP, BQ27XXX_DM_CTRL, BQ27XXX_DM_CLASS, BQ27XXX_DM_BLOCK, BQ27XXX_DM_DATA, BQ27XXX_DM_CKSUM, BQ27XXX_REG_MAX,} cocci_id/* drivers/power/supply/bq27xxx_battery.c 100 */;
}
