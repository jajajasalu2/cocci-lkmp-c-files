cocci_test_suite() {
	const struct pck cocci_id/* drivers/clk/at91/at91sam9260.c 80 */[];
	const struct sck cocci_id/* drivers/clk/at91/at91sam9260.c 73 */[];
	const struct clk_pll_characteristics cocci_id/* drivers/clk/at91/at91sam9260.c 49 */;
	struct device_node *cocci_id/* drivers/clk/at91/at91sam9260.c 468 */;
	void __init cocci_id/* drivers/clk/at91/at91sam9260.c 468 */;
	const struct clk_range cocci_id/* drivers/clk/at91/at91sam9260.c 44 */[];
	char cocci_id/* drivers/clk/at91/at91sam9260.c 428 */[6];
	u16 cocci_id/* drivers/clk/at91/at91sam9260.c 42 */[];
	u8 cocci_id/* drivers/clk/at91/at91sam9260.c 40 */[];
	const struct clk_master_characteristics cocci_id/* drivers/clk/at91/at91sam9260.c 35 */;
	bool cocci_id/* drivers/clk/at91/at91sam9260.c 338 */;
	int cocci_id/* drivers/clk/at91/at91sam9260.c 337 */;
	struct clk_hw *cocci_id/* drivers/clk/at91/at91sam9260.c 336 */;
	struct regmap *cocci_id/* drivers/clk/at91/at91sam9260.c 335 */;
	const char *cocci_id/* drivers/clk/at91/at91sam9260.c 333 */[6];
	u32 cocci_id/* drivers/clk/at91/at91sam9260.c 332 */[];
	struct pmc_data *cocci_id/* drivers/clk/at91/at91sam9260.c 331 */;
	const char *cocci_id/* drivers/clk/at91/at91sam9260.c 330 */;
	struct at91sam926x_data *cocci_id/* drivers/clk/at91/at91sam9260.c 328 */;
	struct at91sam926x_data {
		const struct clk_pll_layout *plla_layout;
		const struct clk_pll_characteristics *plla_characteristics;
		const struct clk_pll_layout *pllb_layout;
		const struct clk_pll_characteristics *pllb_characteristics;
		const struct clk_master_characteristics *mck_characteristics;
		const struct sck *sck;
		const struct pck *pck;
		u8 num_sck;
		u8 num_pck;
		u8 num_progck;
		bool has_slck;
	} cocci_id/* drivers/clk/at91/at91sam9260.c 21 */;
	struct pck {
		char *n;
		u8 id;
	} cocci_id/* drivers/clk/at91/at91sam9260.c 16 */;
	struct at91sam926x_data cocci_id/* drivers/clk/at91/at91sam9260.c 108 */;
	struct sck {
		char *n;
		char *p;
		u8 id;
	} cocci_id/* drivers/clk/at91/at91sam9260.c 10 */;
}
