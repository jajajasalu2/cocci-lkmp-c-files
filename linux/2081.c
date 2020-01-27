cocci_test_suite() {
	struct rockchip_iodomain {
		struct device *dev;
		struct regmap *grf;
		const struct rockchip_iodomain_soc_data *soc_data;
		struct rockchip_iodomain_supply supplies[MAX_SUPPLIES];
	} cocci_id/* drivers/power/avs/rockchip-io-domain.c 72 */;
	struct rockchip_iodomain_supply {
		struct rockchip_iodomain *iod;
		struct regulator *reg;
		struct notifier_block nb;
		int idx;
	} cocci_id/* drivers/power/avs/rockchip-io-domain.c 65 */;
	struct platform_driver cocci_id/* drivers/power/avs/rockchip-io-domain.c 616 */;
	struct rockchip_iodomain_soc_data {
		int grf_offset;
		const char *supply_names[MAX_SUPPLIES];
		void (*init)(struct rockchip_iodomain *iod);
	} cocci_id/* drivers/power/avs/rockchip-io-domain.c 59 */;
	struct rockchip_iodomain cocci_id/* drivers/power/avs/rockchip-io-domain.c 54 */;
	struct regulator *cocci_id/* drivers/power/avs/rockchip-io-domain.c 524 */;
	const char *cocci_id/* drivers/power/avs/rockchip-io-domain.c 522 */;
	struct device *cocci_id/* drivers/power/avs/rockchip-io-domain.c 492 */;
	const struct of_device_id *cocci_id/* drivers/power/avs/rockchip-io-domain.c 490 */;
	struct device_node *cocci_id/* drivers/power/avs/rockchip-io-domain.c 489 */;
	struct platform_device *cocci_id/* drivers/power/avs/rockchip-io-domain.c 487 */;
	void *cocci_id/* drivers/power/avs/rockchip-io-domain.c 437 */;
	const struct of_device_id cocci_id/* drivers/power/avs/rockchip-io-domain.c 434 */[];
	const struct rockchip_iodomain_soc_data cocci_id/* drivers/power/avs/rockchip-io-domain.c 245 */;
	u32 cocci_id/* drivers/power/avs/rockchip-io-domain.c 153 */;
	int cocci_id/* drivers/power/avs/rockchip-io-domain.c 152 */;
	struct rockchip_iodomain *cocci_id/* drivers/power/avs/rockchip-io-domain.c 150 */;
	void cocci_id/* drivers/power/avs/rockchip-io-domain.c 150 */;
	struct pre_voltage_change_data *cocci_id/* drivers/power/avs/rockchip-io-domain.c 123 */;
	struct rockchip_iodomain_supply cocci_id/* drivers/power/avs/rockchip-io-domain.c 105 */;
	struct rockchip_iodomain_supply *cocci_id/* drivers/power/avs/rockchip-io-domain.c 104 */;
	unsigned long cocci_id/* drivers/power/avs/rockchip-io-domain.c 101 */;
	struct notifier_block *cocci_id/* drivers/power/avs/rockchip-io-domain.c 100 */;
}
