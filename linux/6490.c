cocci_test_suite() {
	struct spi_driver cocci_id/* drivers/regulator/tps6524x-regulator.c 627 */;
	struct tps6524x cocci_id/* drivers/regulator/tps6524x-regulator.c 595 */;
	struct regulator_config cocci_id/* drivers/regulator/tps6524x-regulator.c 585 */;
	struct regulator_init_data *cocci_id/* drivers/regulator/tps6524x-regulator.c 584 */;
	struct device *cocci_id/* drivers/regulator/tps6524x-regulator.c 582 */;
	struct spi_device *cocci_id/* drivers/regulator/tps6524x-regulator.c 579 */;
	const struct regulator_ops cocci_id/* drivers/regulator/tps6524x-regulator.c 567 */;
	const struct supply_info *cocci_id/* drivers/regulator/tps6524x-regulator.c 547 */;
	struct regulator_dev *cocci_id/* drivers/regulator/tps6524x-regulator.c 545 */;
	unsigned cocci_id/* drivers/regulator/tps6524x-regulator.c 456 */;
	const struct supply_info cocci_id/* drivers/regulator/tps6524x-regulator.c 374 */[N_REGULATORS];
	const unsigned int cocci_id/* drivers/regulator/tps6524x-regulator.c 303 */[];
	const struct field *cocci_id/* drivers/regulator/tps6524x-regulator.c 281 */;
	struct spi_transfer cocci_id/* drivers/regulator/tps6524x-regulator.c 148 */[3];
	struct spi_message cocci_id/* drivers/regulator/tps6524x-regulator.c 147 */;
	u8 cocci_id/* drivers/regulator/tps6524x-regulator.c 146 */;
	u16 cocci_id/* drivers/regulator/tps6524x-regulator.c 145 */;
	struct tps6524x *cocci_id/* drivers/regulator/tps6524x-regulator.c 142 */;
	int cocci_id/* drivers/regulator/tps6524x-regulator.c 142 */;
	struct tps6524x {
		struct device *dev;
		struct spi_device *spi;
		struct mutex lock;
		struct regulator_desc desc[N_REGULATORS];
	} cocci_id/* drivers/regulator/tps6524x-regulator.c 135 */;
	struct supply_info {
		const char *name;
		int n_voltages;
		const unsigned int *voltages;
		int n_ilimsels;
		const unsigned int *ilimsels;
		struct field enable,voltage,ilimsel;
	} cocci_id/* drivers/regulator/tps6524x-regulator.c 126 */;
	struct field {
		int reg;
		int shift;
		int mask;
	} cocci_id/* drivers/regulator/tps6524x-regulator.c 120 */;
}
