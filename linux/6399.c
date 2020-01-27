cocci_test_suite() {
	struct ab8500_regulator_info cocci_id/* drivers/regulator/ab8500.c 772 */[AB8505_NUM_REGULATORS];
	struct ab8500_regulator_info {
		struct device *dev;
		struct regulator_desc desc;
		struct ab8500_shared_mode *shared_mode;
		int load_lp_uA;
		u8 update_bank;
		u8 update_reg;
		u8 update_mask;
		u8 update_val;
		u8 update_val_idle;
		u8 update_val_normal;
		u8 mode_bank;
		u8 mode_reg;
		u8 mode_mask;
		u8 mode_val_idle;
		u8 mode_val_normal;
		u8 voltage_bank;
		u8 voltage_reg;
		u8 voltage_mask;
		struct {
			u8 voltage_limit;
			u8 voltage_bank;
			u8 voltage_reg;
			u8 voltage_mask;
		} expand_register;
	} cocci_id/* drivers/regulator/ab8500.c 63 */;
	struct ab8500_regulator_info cocci_id/* drivers/regulator/ab8500.c 558 */[AB8500_NUM_REGULATORS];
	const struct regulator_ops cocci_id/* drivers/regulator/ab8500.c 548 */;
	unsigned cocci_id/* drivers/regulator/ab8500.c 479 */;
	u8 cocci_id/* drivers/regulator/ab8500.c 405 */;
	unsigned int cocci_id/* drivers/regulator/ab8500.c 401 */;
	struct ab8500_shared_mode {
		struct ab8500_regulator_info *shared_regulator;
		bool lp_mode_req;
	} cocci_id/* drivers/regulator/ab8500.c 37 */;
	bool cocci_id/* drivers/regulator/ab8500.c 317 */;
	struct ab8500_regulator_info *cocci_id/* drivers/regulator/ab8500.c 236 */;
	struct regulator_dev *cocci_id/* drivers/regulator/ab8500.c 233 */;
	int cocci_id/* drivers/regulator/ab8500.c 233 */;
	struct ab8500_shared_mode cocci_id/* drivers/regulator/ab8500.c 203 */;
	void __exit cocci_id/* drivers/regulator/ab8500.c 1668 */;
	void cocci_id/* drivers/regulator/ab8500.c 1668 */;
	int __init cocci_id/* drivers/regulator/ab8500.c 1656 */;
	struct platform_driver cocci_id/* drivers/regulator/ab8500.c 1649 */;
	struct of_regulator_match *cocci_id/* drivers/regulator/ab8500.c 1619 */;
	struct device_node *cocci_id/* drivers/regulator/ab8500.c 1618 */;
	struct ab8500 *cocci_id/* drivers/regulator/ab8500.c 1617 */;
	struct platform_device *cocci_id/* drivers/regulator/ab8500.c 1615 */;
	struct regulator_config cocci_id/* drivers/regulator/ab8500.c 1582 */;
	struct regulator_init_data *cocci_id/* drivers/regulator/ab8500.c 1577 */;
	struct {
		struct ab8500_regulator_info *info;
		int info_size;
		struct ab8500_reg_init *init;
		int init_size;
		struct of_regulator_match *match;
		int match_size;
	} cocci_id/* drivers/regulator/ab8500.c 1548 */;
	const unsigned int cocci_id/* drivers/regulator/ab8500.c 153 */[];
	void *cocci_id/* drivers/regulator/ab8500.c 1520 */;
	struct of_regulator_match cocci_id/* drivers/regulator/ab8500.c 1519 */[];
	struct ab8500_reg_init cocci_id/* drivers/regulator/ab8500.c 1079 */[];
	struct ab8500_reg_init {
		u8 bank;
		u8 addr;
		u8 mask;
	} cocci_id/* drivers/regulator/ab8500.c 1065 */;
}
