cocci_test_suite() {
	unsigned long *cocci_id/* drivers/counter/ti-eqep.c 96 */;
	struct ti_eqep_cnt {
		struct counter_device counter;
		struct regmap *regmap32;
		struct regmap *regmap16;
	} cocci_id/* drivers/counter/ti-eqep.c 89 */;
	enum{TI_EQEP_SYNAPSE_ACTION_BOTH_EDGES, TI_EQEP_SYNAPSE_ACTION_RISING_EDGE, TI_EQEP_SYNAPSE_ACTION_NONE,} cocci_id/* drivers/counter/ti-eqep.c 83 */;
	enum{TI_EQEP_COUNT_FUNC_QUAD_COUNT, TI_EQEP_COUNT_FUNC_DIR_COUNT, TI_EQEP_COUNT_FUNC_UP_COUNT, TI_EQEP_COUNT_FUNC_DOWN_COUNT,} cocci_id/* drivers/counter/ti-eqep.c 76 */;
	enum{TI_EQEP_SIGNAL_QEPA, TI_EQEP_SIGNAL_QEPB,} cocci_id/* drivers/counter/ti-eqep.c 70 */;
	struct platform_driver cocci_id/* drivers/counter/ti-eqep.c 454 */;
	const struct of_device_id cocci_id/* drivers/counter/ti-eqep.c 448 */[];
	void __iomem *cocci_id/* drivers/counter/ti-eqep.c 386 */;
	struct device *cocci_id/* drivers/counter/ti-eqep.c 384 */;
	struct platform_device *cocci_id/* drivers/counter/ti-eqep.c 382 */;
	const struct regmap_config cocci_id/* drivers/counter/ti-eqep.c 374 */;
	struct counter_count cocci_id/* drivers/counter/ti-eqep.c 353 */[];
	struct counter_synapse cocci_id/* drivers/counter/ti-eqep.c 340 */[];
	const enum counter_synapse_action cocci_id/* drivers/counter/ti-eqep.c 334 */[];
	const enum counter_count_function cocci_id/* drivers/counter/ti-eqep.c 327 */[];
	struct counter_signal cocci_id/* drivers/counter/ti-eqep.c 316 */[];
	struct counter_count_ext cocci_id/* drivers/counter/ti-eqep.c 298 */[];
	bool cocci_id/* drivers/counter/ti-eqep.c 287 */;
	const char *cocci_id/* drivers/counter/ti-eqep.c 222 */;
	char *cocci_id/* drivers/counter/ti-eqep.c 210 */;
	void *cocci_id/* drivers/counter/ti-eqep.c 210 */;
	ssize_t cocci_id/* drivers/counter/ti-eqep.c 208 */;
	const struct counter_ops cocci_id/* drivers/counter/ti-eqep.c 200 */;
	u32 cocci_id/* drivers/counter/ti-eqep.c 147 */;
	size_t cocci_id/* drivers/counter/ti-eqep.c 146 */;
	struct ti_eqep_cnt *cocci_id/* drivers/counter/ti-eqep.c 145 */;
	struct counter_synapse *cocci_id/* drivers/counter/ti-eqep.c 143 */;
	size_t *cocci_id/* drivers/counter/ti-eqep.c 143 */;
	struct counter_count *cocci_id/* drivers/counter/ti-eqep.c 142 */;
	struct counter_device *cocci_id/* drivers/counter/ti-eqep.c 141 */;
	int cocci_id/* drivers/counter/ti-eqep.c 141 */;
	unsigned long cocci_id/* drivers/counter/ti-eqep.c 108 */;
}
