cocci_test_suite() {
	struct clk_audio_pmc cocci_id/* drivers/clk/at91/clk-audio-pll.c 80 */;
	struct clk_audio_pad cocci_id/* drivers/clk/at91/clk-audio-pll.c 79 */;
	struct clk_audio_frac cocci_id/* drivers/clk/at91/clk-audio-pll.c 78 */;
	struct clk_audio_pmc {
		struct clk_hw hw;
		struct regmap *regmap;
		u8 qdpmc;
	} cocci_id/* drivers/clk/at91/clk-audio-pll.c 72 */;
	struct clk_audio_pad {
		struct clk_hw hw;
		struct regmap *regmap;
		u8 qdaudio;
		u8 div;
	} cocci_id/* drivers/clk/at91/clk-audio-pll.c 65 */;
	struct clk_audio_frac {
		struct clk_hw hw;
		struct regmap *regmap;
		u32 fracr;
		u8 nd;
	} cocci_id/* drivers/clk/at91/clk-audio-pll.c 58 */;
	struct clk_audio_pmc *cocci_id/* drivers/clk/at91/clk-audio-pll.c 516 */;
	struct clk_audio_pad *cocci_id/* drivers/clk/at91/clk-audio-pll.c 485 */;
	int cocci_id/* drivers/clk/at91/clk-audio-pll.c 457 */;
	struct clk_init_data cocci_id/* drivers/clk/at91/clk-audio-pll.c 456 */;
	struct clk_audio_frac *cocci_id/* drivers/clk/at91/clk-audio-pll.c 455 */;
	const char *cocci_id/* drivers/clk/at91/clk-audio-pll.c 452 */;
	struct regmap *cocci_id/* drivers/clk/at91/clk-audio-pll.c 452 */;
	struct clk_hw *__init cocci_id/* drivers/clk/at91/clk-audio-pll.c 451 */;
	const struct clk_ops cocci_id/* drivers/clk/at91/clk-audio-pll.c 427 */;
	u8 cocci_id/* drivers/clk/at91/clk-audio-pll.c 391 */;
	u32 cocci_id/* drivers/clk/at91/clk-audio-pll.c 280 */;
	long cocci_id/* drivers/clk/at91/clk-audio-pll.c 273 */;
	struct clk_rate_request *cocci_id/* drivers/clk/at91/clk-audio-pll.c 245 */;
	struct clk_hw *cocci_id/* drivers/clk/at91/clk-audio-pll.c 244 */;
	unsigned long *cocci_id/* drivers/clk/at91/clk-audio-pll.c 218 */;
	unsigned long long cocci_id/* drivers/clk/at91/clk-audio-pll.c 162 */;
	unsigned long cocci_id/* drivers/clk/at91/clk-audio-pll.c 159 */;
	void cocci_id/* drivers/clk/at91/clk-audio-pll.c 132 */;
}
