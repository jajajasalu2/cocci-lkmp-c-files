cocci_test_suite() {
	int cocci_id/* sound/soc/codecs/tlv320aic32x4-clk.c 463 */;
	struct clk_aic32x4 cocci_id/* sound/soc/codecs/tlv320aic32x4-clk.c 450 */;
	const char *cocci_id/* sound/soc/codecs/tlv320aic32x4-clk.c 442 */;
	struct clk_aic32x4 *cocci_id/* sound/soc/codecs/tlv320aic32x4-clk.c 441 */;
	struct clk_init_data cocci_id/* sound/soc/codecs/tlv320aic32x4-clk.c 440 */;
	struct aic32x4_clkdesc *cocci_id/* sound/soc/codecs/tlv320aic32x4-clk.c 438 */;
	struct device *cocci_id/* sound/soc/codecs/tlv320aic32x4-clk.c 437 */;
	struct clk *cocci_id/* sound/soc/codecs/tlv320aic32x4-clk.c 437 */;
	struct aic32x4_clkdesc {
		const char *name;
		const char *const *parent_names;
		unsigned int num_parents;
		const struct clk_ops *ops;
		unsigned int reg;
	} cocci_id/* sound/soc/codecs/tlv320aic32x4-clk.c 39 */;
	const char *cocci_id/* sound/soc/codecs/tlv320aic32x4-clk.c 386 */[];
	struct aic32x4_clkdesc cocci_id/* sound/soc/codecs/tlv320aic32x4-clk.c 382 */[];
	const struct clk_ops cocci_id/* sound/soc/codecs/tlv320aic32x4-clk.c 372 */;
	unsigned int cocci_id/* sound/soc/codecs/tlv320aic32x4-clk.c 365 */;
	u8 cocci_id/* sound/soc/codecs/tlv320aic32x4-clk.c 362 */;
	struct clk_hw *cocci_id/* sound/soc/codecs/tlv320aic32x4-clk.c 362 */;
	unsigned long cocci_id/* sound/soc/codecs/tlv320aic32x4-clk.c 334 */;
	unsigned long *cocci_id/* sound/soc/codecs/tlv320aic32x4-clk.c 323 */;
	long cocci_id/* sound/soc/codecs/tlv320aic32x4-clk.c 322 */;
	struct clk_aic32x4_pll_muldiv {
		u8 p;
		u16 r;
		u8 j;
		u16 d;
	} cocci_id/* sound/soc/codecs/tlv320aic32x4-clk.c 32 */;
	void cocci_id/* sound/soc/codecs/tlv320aic32x4-clk.c 300 */;
	struct clk_aic32x4_pll_muldiv cocci_id/* sound/soc/codecs/tlv320aic32x4-clk.c 197 */;
	struct clk_aic32x4 {
		struct clk_hw hw;
		struct device *dev;
		struct regmap *regmap;
		unsigned int reg;
	} cocci_id/* sound/soc/codecs/tlv320aic32x4-clk.c 18 */;
	u32 cocci_id/* sound/soc/codecs/tlv320aic32x4-clk.c 175 */;
	u64 cocci_id/* sound/soc/codecs/tlv320aic32x4-clk.c 157 */;
	struct clk_aic32x4_pll_muldiv *cocci_id/* sound/soc/codecs/tlv320aic32x4-clk.c 154 */;
}
