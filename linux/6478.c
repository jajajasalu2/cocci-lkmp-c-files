cocci_test_suite() {
	u32 cocci_id/* drivers/regulator/stm32-pwr.c 89 */;
	struct stm32_pwr_reg *cocci_id/* drivers/regulator/stm32-pwr.c 87 */;
	struct regulator_dev *cocci_id/* drivers/regulator/stm32-pwr.c 85 */;
	int cocci_id/* drivers/regulator/stm32-pwr.c 85 */;
	struct stm32_pwr_reg {
		void __iomem *base;
		u32 ready_mask;
	} cocci_id/* drivers/regulator/stm32-pwr.c 41 */;
	u32 cocci_id/* drivers/regulator/stm32-pwr.c 35 */[STM32PWR_REG_NUM_REGS];
	enum{PWR_REG11, PWR_REG18, PWR_USB33, STM32PWR_REG_NUM_REGS,} cocci_id/* drivers/regulator/stm32-pwr.c 28 */;
	struct platform_driver cocci_id/* drivers/regulator/stm32-pwr.c 175 */;
	const struct of_device_id cocci_id/* drivers/regulator/stm32-pwr.c 169 */[];
	struct stm32_pwr_reg cocci_id/* drivers/regulator/stm32-pwr.c 148 */;
	struct regulator_config cocci_id/* drivers/regulator/stm32-pwr.c 136 */;
	void __iomem *cocci_id/* drivers/regulator/stm32-pwr.c 134 */;
	struct device_node *cocci_id/* drivers/regulator/stm32-pwr.c 132 */;
	struct platform_device *cocci_id/* drivers/regulator/stm32-pwr.c 130 */;
	const struct regulator_desc cocci_id/* drivers/regulator/stm32-pwr.c 124 */[];
	const struct regulator_ops cocci_id/* drivers/regulator/stm32-pwr.c 104 */;
}
