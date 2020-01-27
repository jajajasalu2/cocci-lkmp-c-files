cocci_test_suite() {
	struct clk_sam9x5_slow cocci_id/* drivers/clk/at91/sckc.c 66 */;
	struct clk_sam9x5_slow {
		struct clk_hw hw;
		void __iomem *sckcr;
		const struct clk_slow_bits *bits;
		u8 parent;
	} cocci_id/* drivers/clk/at91/sckc.c 59 */;
	struct clk_slow_rc_osc cocci_id/* drivers/clk/at91/sckc.c 57 */;
	struct clk_sama5d4_slow_osc *cocci_id/* drivers/clk/at91/sckc.c 555 */;
	struct clk_slow_rc_osc {
		struct clk_hw hw;
		void __iomem *sckcr;
		const struct clk_slow_bits *bits;
		unsigned long frequency;
		unsigned long accuracy;
		unsigned long startup_usec;
	} cocci_id/* drivers/clk/at91/sckc.c 48 */;
	struct clk_hw_onecell_data *cocci_id/* drivers/clk/at91/sckc.c 464 */;
	struct clk_sama5d4_slow_osc cocci_id/* drivers/clk/at91/sckc.c 46 */;
	const struct clk_slow_bits cocci_id/* drivers/clk/at91/sckc.c 434 */;
	struct clk_sama5d4_slow_osc {
		struct clk_hw hw;
		void __iomem *sckcr;
		const struct clk_slow_bits *bits;
		unsigned long startup_usec;
		bool prepared;
	} cocci_id/* drivers/clk/at91/sckc.c 38 */;
	const char *cocci_id/* drivers/clk/at91/sckc.c 369 */[2];
	unsigned int cocci_id/* drivers/clk/at91/sckc.c 366 */;
	struct device_node *cocci_id/* drivers/clk/at91/sckc.c 365 */;
	void __init cocci_id/* drivers/clk/at91/sckc.c 365 */;
	struct clk_slow_osc cocci_id/* drivers/clk/at91/sckc.c 36 */;
	void cocci_id/* drivers/clk/at91/sckc.c 357 */;
	struct clk_init_data cocci_id/* drivers/clk/at91/sckc.c 326 */;
	struct clk_hw *cocci_id/* drivers/clk/at91/sckc.c 325 */;
	struct clk_sam9x5_slow *cocci_id/* drivers/clk/at91/sckc.c 324 */;
	const struct clk_slow_bits *cocci_id/* drivers/clk/at91/sckc.c 322 */;
	int cocci_id/* drivers/clk/at91/sckc.c 321 */;
	const char **cocci_id/* drivers/clk/at91/sckc.c 320 */;
	const char *cocci_id/* drivers/clk/at91/sckc.c 319 */;
	void __iomem *cocci_id/* drivers/clk/at91/sckc.c 318 */;
	struct clk_hw *__initcocci_id/* drivers/clk/at91/sckc.c 317 */;
	const struct clk_ops cocci_id/* drivers/clk/at91/sckc.c 312 */;
	u8 cocci_id/* drivers/clk/at91/sckc.c 305 */;
	struct clk_slow_osc {
		struct clk_hw hw;
		void __iomem *sckcr;
		const struct clk_slow_bits *bits;
		unsigned long startup_usec;
	} cocci_id/* drivers/clk/at91/sckc.c 29 */;
	u32 cocci_id/* drivers/clk/at91/sckc.c 279 */;
	struct clk_slow_rc_osc *cocci_id/* drivers/clk/at91/sckc.c 232 */;
	struct clk_slow_bits {
		u32 cr_rcen;
		u32 cr_osc32en;
		u32 cr_osc32byp;
		u32 cr_oscsel;
	} cocci_id/* drivers/clk/at91/sckc.c 22 */;
	struct clk_slow_osc *cocci_id/* drivers/clk/at91/sckc.c 125 */;
	bool cocci_id/* drivers/clk/at91/sckc.c 122 */;
	unsigned long cocci_id/* drivers/clk/at91/sckc.c 121 */;
}
