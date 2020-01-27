cocci_test_suite() {
	uint32_t cocci_id/* drivers/counter/ftm-quaddec.c 54 */;
	struct ftm_quaddec *cocci_id/* drivers/counter/ftm-quaddec.c 52 */;
	void cocci_id/* drivers/counter/ftm-quaddec.c 52 */;
	uint32_t *cocci_id/* drivers/counter/ftm-quaddec.c 35 */;
	struct platform_driver cocci_id/* drivers/counter/ftm-quaddec.c 332 */;
	const struct of_device_id cocci_id/* drivers/counter/ftm-quaddec.c 327 */[];
	struct resource *cocci_id/* drivers/counter/ftm-quaddec.c 280 */;
	struct device_node *cocci_id/* drivers/counter/ftm-quaddec.c 279 */;
	struct platform_device *cocci_id/* drivers/counter/ftm-quaddec.c 275 */;
	struct ftm_quaddec {
		struct counter_device counter;
		struct platform_device *pdev;
		void __iomem *ftm_base;
		bool big_endian;
		struct mutex ftm_quaddec_mutex;
	} cocci_id/* drivers/counter/ftm-quaddec.c 27 */;
	struct counter_count cocci_id/* drivers/counter/ftm-quaddec.c 264 */;
	const struct counter_count_ext cocci_id/* drivers/counter/ftm-quaddec.c 259 */[];
	struct counter_synapse cocci_id/* drivers/counter/ftm-quaddec.c 246 */[];
	struct counter_signal cocci_id/* drivers/counter/ftm-quaddec.c 235 */[];
	const struct counter_ops cocci_id/* drivers/counter/ftm-quaddec.c 228 */;
	size_t *cocci_id/* drivers/counter/ftm-quaddec.c 221 */;
	struct counter_synapse *cocci_id/* drivers/counter/ftm-quaddec.c 220 */;
	struct counter_count *cocci_id/* drivers/counter/ftm-quaddec.c 219 */;
	struct counter_device *cocci_id/* drivers/counter/ftm-quaddec.c 218 */;
	int cocci_id/* drivers/counter/ftm-quaddec.c 218 */;
	const unsigned long cocci_id/* drivers/counter/ftm-quaddec.c 195 */;
	struct ftm_quaddec *constcocci_id/* drivers/counter/ftm-quaddec.c 183 */;
	unsigned long *cocci_id/* drivers/counter/ftm-quaddec.c 181 */;
	const enum counter_count_function cocci_id/* drivers/counter/ftm-quaddec.c 174 */[];
	enum ftm_quaddec_count_function{FTM_QUADDEC_COUNT_ENCODER_MODE_1,} cocci_id/* drivers/counter/ftm-quaddec.c 170 */;
	enum counter_synapse_action cocci_id/* drivers/counter/ftm-quaddec.c 165 */[];
	enum ftm_quaddec_synapse_action{FTM_QUADDEC_SYNAPSE_ACTION_BOTH_EDGES,} cocci_id/* drivers/counter/ftm-quaddec.c 161 */;
	struct counter_count_enum_ext cocci_id/* drivers/counter/ftm-quaddec.c 154 */;
	const char *constcocci_id/* drivers/counter/ftm-quaddec.c 150 */[];
	size_t cocci_id/* drivers/counter/ftm-quaddec.c 133 */;
	void *cocci_id/* drivers/counter/ftm-quaddec.c 103 */;
}
