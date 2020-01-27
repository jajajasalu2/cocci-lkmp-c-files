cocci_test_suite() {
	u32 cocci_id/* drivers/clk/at91/clk-peripheral.c 98 */;
	const char *cocci_id/* drivers/clk/at91/clk-peripheral.c 97 */;
	struct regmap *cocci_id/* drivers/clk/at91/clk-peripheral.c 97 */;
	struct clk_hw *__init cocci_id/* drivers/clk/at91/clk-peripheral.c 96 */;
	const struct clk_ops cocci_id/* drivers/clk/at91/clk-peripheral.c 90 */;
	unsigned int cocci_id/* drivers/clk/at91/clk-peripheral.c 78 */;
	void cocci_id/* drivers/clk/at91/clk-peripheral.c 61 */;
	struct clk_sam9x5_peripheral cocci_id/* drivers/clk/at91/clk-peripheral.c 44 */;
	struct clk_sam9x5_peripheral *cocci_id/* drivers/clk/at91/clk-peripheral.c 329 */;
	const struct clk_range *cocci_id/* drivers/clk/at91/clk-peripheral.c 327 */;
	const struct clk_pcr_layout *cocci_id/* drivers/clk/at91/clk-peripheral.c 325 */;
	spinlock_t *cocci_id/* drivers/clk/at91/clk-peripheral.c 324 */;
	struct clk_sam9x5_peripheral {
		struct clk_hw hw;
		struct regmap *regmap;
		struct clk_range range;
		spinlock_t *lock;
		u32 id;
		u32 div;
		const struct clk_pcr_layout *layout;
		bool auto_div;
	} cocci_id/* drivers/clk/at91/clk-peripheral.c 32 */;
	struct clk_peripheral cocci_id/* drivers/clk/at91/clk-peripheral.c 30 */;
	unsigned long *cocci_id/* drivers/clk/at91/clk-peripheral.c 243 */;
	long cocci_id/* drivers/clk/at91/clk-peripheral.c 241 */;
	struct clk_peripheral {
		struct clk_hw hw;
		struct regmap *regmap;
		u32 id;
	} cocci_id/* drivers/clk/at91/clk-peripheral.c 24 */;
	unsigned long cocci_id/* drivers/clk/at91/clk-peripheral.c 135 */;
	int cocci_id/* drivers/clk/at91/clk-peripheral.c 103 */;
	struct clk_hw *cocci_id/* drivers/clk/at91/clk-peripheral.c 102 */;
	struct clk_init_data cocci_id/* drivers/clk/at91/clk-peripheral.c 101 */;
	struct clk_peripheral *cocci_id/* drivers/clk/at91/clk-peripheral.c 100 */;
}
