cocci_test_suite() {
	struct of_regulator_match **cocci_id/* drivers/regulator/tps65910-regulator.c 999 */;
	struct platform_device *cocci_id/* drivers/regulator/tps65910-regulator.c 998 */;
	struct tps65910_board *cocci_id/* drivers/regulator/tps65910-regulator.c 997 */;
	void *cocci_id/* drivers/regulator/tps65910-regulator.c 965 */;
	struct of_regulator_match cocci_id/* drivers/regulator/tps65910-regulator.c 964 */[];
	struct tps_info {
		const char *name;
		const char *vin_name;
		u8 n_voltages;
		const unsigned int *voltage_table;
		int enable_time_us;
	} cocci_id/* drivers/regulator/tps65910-regulator.c 92 */;
	u8 cocci_id/* drivers/regulator/tps65910-regulator.c 824 */;
	struct regulator_ops cocci_id/* drivers/regulator/tps65910-regulator.c 796 */;
	unsigned cocci_id/* drivers/regulator/tps65910-regulator.c 698 */;
	const unsigned int cocci_id/* drivers/regulator/tps65910-regulator.c 68 */[];
	struct tps65910_reg *cocci_id/* drivers/regulator/tps65910-regulator.c 417 */;
	struct regulator_dev *cocci_id/* drivers/regulator/tps65910-regulator.c 415 */;
	unsigned int cocci_id/* drivers/regulator/tps65910-regulator.c 415 */;
	int cocci_id/* drivers/regulator/tps65910-regulator.c 320 */;
	struct tps65910_reg {
		struct regulator_desc *desc;
		struct tps65910 *mfd;
		struct regulator_dev **rdev;
		struct tps_info **info;
		int num_regulators;
		int mode;
		int (*get_ctrl_reg)(int);
		unsigned int *ext_sleep_control;
		unsigned int board_ext_control[TPS65910_NUM_REGS];
	} cocci_id/* drivers/regulator/tps65910-regulator.c 308 */;
	unsigned int cocci_id/* drivers/regulator/tps65910-regulator.c 276 */[];
	void __exit cocci_id/* drivers/regulator/tps65910-regulator.c 1270 */;
	void cocci_id/* drivers/regulator/tps65910-regulator.c 1270 */;
	int __init cocci_id/* drivers/regulator/tps65910-regulator.c 1264 */;
	struct platform_driver cocci_id/* drivers/regulator/tps65910-regulator.c 1256 */;
	struct regulator_desc cocci_id/* drivers/regulator/tps65910-regulator.c 1133 */;
	struct tps_info *cocci_id/* drivers/regulator/tps65910-regulator.c 1075 */;
	struct regulator_config cocci_id/* drivers/regulator/tps65910-regulator.c 1074 */;
	struct of_regulator_match *cocci_id/* drivers/regulator/tps65910-regulator.c 1004 */;
	struct device_node *cocci_id/* drivers/regulator/tps65910-regulator.c 1003 */;
	struct tps65910 *cocci_id/* drivers/regulator/tps65910-regulator.c 1002 */;
	struct tps_info cocci_id/* drivers/regulator/tps65910-regulator.c 100 */[];
}
