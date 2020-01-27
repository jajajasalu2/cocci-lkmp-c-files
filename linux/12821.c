cocci_test_suite() {
	const struct atmel_smc_timing_xlate cocci_id/* drivers/memory/atmel-ebi.c 93 */[];
	struct atmel_smc_timing_xlate {
		const char *name;
		int (*converter)(struct atmel_smc_cs_conf *conf,
				 unsigned int shift, unsigned int nycles);
		unsigned int shift;
	} cocci_id/* drivers/memory/atmel-ebi.c 63 */;
	struct platform_driver cocci_id/* drivers/memory/atmel-ebi.c 628 */;
	struct clk *cocci_id/* drivers/memory/atmel-ebi.c 521 */;
	const struct of_device_id *cocci_id/* drivers/memory/atmel-ebi.c 518 */;
	struct platform_device *cocci_id/* drivers/memory/atmel-ebi.c 514 */;
	struct property *cocci_id/* drivers/memory/atmel-ebi.c 495 */;
	struct device *cocci_id/* drivers/memory/atmel-ebi.c 494 */;
	struct device_node *cocci_id/* drivers/memory/atmel-ebi.c 492 */;
	struct atmel_ebi *cocci_id/* drivers/memory/atmel-ebi.c 492 */;
	int cocci_id/* drivers/memory/atmel-ebi.c 492 */;
	struct atmel_ebi {
		struct clk *clk;
		struct regmap *regmap;
		struct {
			struct regmap *regmap;
			struct clk *clk;
			const struct atmel_hsmc_reg_layout *layout;
		} smc;
		struct device *dev;
		const struct atmel_ebi_caps *caps;
		struct list_head devs;
	} cocci_id/* drivers/memory/atmel-ebi.c 49 */;
	const struct of_device_id cocci_id/* drivers/memory/atmel-ebi.c 452 */[];
	const struct atmel_ebi_caps cocci_id/* drivers/memory/atmel-ebi.c 373 */;
	struct atmel_ebi_caps {
		unsigned int available_cs;
		unsigned int ebi_csa_offs;
		const char *regmap_name;
		void (*get_config)(struct atmel_ebi_dev *ebid,
				   struct atmel_ebi_dev_config *conf);
		int (*xlate_config)(struct atmel_ebi_dev *ebid,
				    struct device_node *configs_np,
				    struct atmel_ebi_dev_config *conf);
		void (*apply_config)(struct atmel_ebi_dev *ebid,
				     struct atmel_ebi_dev_config *conf);
	} cocci_id/* drivers/memory/atmel-ebi.c 36 */;
	u32 cocci_id/* drivers/memory/atmel-ebi.c 306 */;
	bool cocci_id/* drivers/memory/atmel-ebi.c 305 */;
	unsigned long cocci_id/* drivers/memory/atmel-ebi.c 303 */;
	struct atmel_ebi_dev_config cocci_id/* drivers/memory/atmel-ebi.c 300 */;
	const struct atmel_ebi_caps *cocci_id/* drivers/memory/atmel-ebi.c 299 */;
	struct atmel_ebi_dev_config *cocci_id/* drivers/memory/atmel-ebi.c 283 */;
	struct atmel_ebi_dev *cocci_id/* drivers/memory/atmel-ebi.c 282 */;
	void cocci_id/* drivers/memory/atmel-ebi.c 282 */;
	struct atmel_ebi_dev {
		struct list_head node;
		struct atmel_ebi *ebi;
		u32 mode;
		int numcs;
		struct atmel_ebi_dev_config configs[];
	} cocci_id/* drivers/memory/atmel-ebi.c 28 */;
	struct atmel_ebi cocci_id/* drivers/memory/atmel-ebi.c 26 */;
	struct atmel_ebi_dev_config {
		int cs;
		struct atmel_smc_cs_conf smcconf;
	} cocci_id/* drivers/memory/atmel-ebi.c 21 */;
	const char *cocci_id/* drivers/memory/atmel-ebi.c 177 */;
	struct atmel_smc_cs_conf *cocci_id/* drivers/memory/atmel-ebi.c 175 */;
	const struct atmel_smc_timing_xlate *cocci_id/* drivers/memory/atmel-ebi.c 137 */;
	unsigned int cocci_id/* drivers/memory/atmel-ebi.c 114 */;
}
