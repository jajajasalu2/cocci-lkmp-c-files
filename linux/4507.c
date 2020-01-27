cocci_test_suite() {
	const struct ti_opp_supply_of_data *cocci_id/* drivers/opp/ti-opp-supply.c 83 */;
	const __be32 *cocci_id/* drivers/opp/ti-opp-supply.c 79 */;
	struct resource *cocci_id/* drivers/opp/ti-opp-supply.c 78 */;
	struct property *cocci_id/* drivers/opp/ti-opp-supply.c 77 */;
	void __iomem *cocci_id/* drivers/opp/ti-opp-supply.c 76 */;
	struct ti_opp_supply_of_data {
#define OPPDM_EFUSE_CLASS0_OPTIMIZED_VOLTAGE BIT(1)
#define OPPDM_HAS_NO_ABB BIT(2)
				const u8 flags;
		const u32 efuse_voltage_mask;
		const bool efuse_voltage_uv;
	} cocci_id/* drivers/opp/ti-opp-supply.c 55 */;
	struct ti_opp_supply_data cocci_id/* drivers/opp/ti-opp-supply.c 46 */;
	struct platform_driver cocci_id/* drivers/opp/ti-opp-supply.c 416 */;
	struct ti_opp_supply_data {
		struct ti_opp_supply_optimum_voltage_table *vdd_table;
		u32 num_vdd_table;
		u32 vdd_absolute_max_voltage_uv;
	} cocci_id/* drivers/opp/ti-opp-supply.c 40 */;
	void *cocci_id/* drivers/opp/ti-opp-supply.c 399 */;
	const struct of_device_id *cocci_id/* drivers/opp/ti-opp-supply.c 382 */;
	struct platform_device *cocci_id/* drivers/opp/ti-opp-supply.c 378 */;
	const struct of_device_id cocci_id/* drivers/opp/ti-opp-supply.c 369 */[];
	const struct ti_opp_supply_of_data cocci_id/* drivers/opp/ti-opp-supply.c 354 */;
	struct ti_opp_supply_optimum_voltage_table {
		unsigned int reference_uv;
		unsigned int optimized_uv;
	} cocci_id/* drivers/opp/ti-opp-supply.c 29 */;
	struct clk *cocci_id/* drivers/opp/ti-opp-supply.c 284 */;
	struct dev_pm_set_opp_data *cocci_id/* drivers/opp/ti-opp-supply.c 276 */;
	unsigned long cocci_id/* drivers/opp/ti-opp-supply.c 222 */;
	char *cocci_id/* drivers/opp/ti-opp-supply.c 219 */;
	struct regulator *cocci_id/* drivers/opp/ti-opp-supply.c 218 */;
	struct dev_pm_opp_supply *cocci_id/* drivers/opp/ti-opp-supply.c 217 */;
	struct ti_opp_supply_optimum_voltage_table *cocci_id/* drivers/opp/ti-opp-supply.c 196 */;
	int cocci_id/* drivers/opp/ti-opp-supply.c 191 */;
	struct ti_opp_supply_data *cocci_id/* drivers/opp/ti-opp-supply.c 175 */;
	struct device *cocci_id/* drivers/opp/ti-opp-supply.c 174 */;
	void cocci_id/* drivers/opp/ti-opp-supply.c 174 */;
	u32 cocci_id/* drivers/opp/ti-opp-supply.c 135 */;
}
