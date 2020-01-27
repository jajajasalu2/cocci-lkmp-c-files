cocci_test_suite() {
	uint32_t cocci_id/* drivers/misc/cs5535-mfgpt.c 99 */;
	int *cocci_id/* drivers/misc/cs5535-mfgpt.c 96 */;
	int __init cocci_id/* drivers/misc/cs5535-mfgpt.c 370 */;
	struct platform_driver cocci_id/* drivers/misc/cs5535-mfgpt.c 362 */;
	struct cs5535_mfgpt_chip {
	DECLARE_BITMAP(avail,MFGPT_MAX_TIMERS)
		;
		resource_size_t base;
		struct platform_device *pdev;
		spinlock_t lock;
		int initialized;
	} cocci_id/* drivers/misc/cs5535-mfgpt.c 35 */;
	struct resource *cocci_id/* drivers/misc/cs5535-mfgpt.c 318 */;
	struct platform_device *cocci_id/* drivers/misc/cs5535-mfgpt.c 316 */;
	struct cs5535_mfgpt_timer {
		struct cs5535_mfgpt_chip *chip;
		int nr;
	} cocci_id/* drivers/misc/cs5535-mfgpt.c 30 */;
	struct cs5535_mfgpt_timer cocci_id/* drivers/misc/cs5535-mfgpt.c 289 */;
	uint16_t cocci_id/* drivers/misc/cs5535-mfgpt.c 214 */;
	void cocci_id/* drivers/misc/cs5535-mfgpt.c 211 */;
	unsigned long cocci_id/* drivers/misc/cs5535-mfgpt.c 149 */;
	struct cs5535_mfgpt_chip *cocci_id/* drivers/misc/cs5535-mfgpt.c 147 */;
	struct cs5535_mfgpt_timer *cocci_id/* drivers/misc/cs5535-mfgpt.c 145 */;
	int cocci_id/* drivers/misc/cs5535-mfgpt.c 145 */;
}
