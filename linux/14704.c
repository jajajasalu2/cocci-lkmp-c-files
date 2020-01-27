cocci_test_suite() {
	const struct {
		char *n;
		u8 id;
	} cocci_id/* drivers/clk/at91/sama5d2.c 95 */[];
	const struct {
		char *n;
		u8 id;
		struct clk_range r;
	} cocci_id/* drivers/clk/at91/sama5d2.c 53 */[];
	const struct {
		char *n;
		char *p;
		u8 id;
	} cocci_id/* drivers/clk/at91/sama5d2.c 38 */[];
	const struct clk_pcr_layout cocci_id/* drivers/clk/at91/sama5d2.c 31 */;
	char cocci_id/* drivers/clk/at91/sama5d2.c 261 */[6];
	const struct clk_pll_characteristics cocci_id/* drivers/clk/at91/sama5d2.c 23 */;
	const struct clk_range cocci_id/* drivers/clk/at91/sama5d2.c 19 */[];
	u16 cocci_id/* drivers/clk/at91/sama5d2.c 17 */[];
	bool cocci_id/* drivers/clk/at91/sama5d2.c 152 */;
	int cocci_id/* drivers/clk/at91/sama5d2.c 151 */;
	struct clk_hw *cocci_id/* drivers/clk/at91/sama5d2.c 150 */;
	u8 cocci_id/* drivers/clk/at91/sama5d2.c 15 */[];
	struct regmap *cocci_id/* drivers/clk/at91/sama5d2.c 149 */;
	const char *cocci_id/* drivers/clk/at91/sama5d2.c 148 */[6];
	struct pmc_data *cocci_id/* drivers/clk/at91/sama5d2.c 147 */;
	const char *cocci_id/* drivers/clk/at91/sama5d2.c 146 */;
	struct clk_range cocci_id/* drivers/clk/at91/sama5d2.c 145 */;
	struct device_node *cocci_id/* drivers/clk/at91/sama5d2.c 143 */;
	void __init cocci_id/* drivers/clk/at91/sama5d2.c 143 */;
	const struct clk_programmable_layout cocci_id/* drivers/clk/at91/sama5d2.c 135 */;
	const struct {
		char *n;
		u8 id;
		struct clk_range r;
		bool pll;
	} cocci_id/* drivers/clk/at91/sama5d2.c 114 */[];
	const struct clk_master_characteristics cocci_id/* drivers/clk/at91/sama5d2.c 10 */;
}
