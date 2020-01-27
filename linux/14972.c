cocci_test_suite() {
	void cocci_id/* drivers/clk/imx/clk-pllv3.c 90 */;
	struct clk_pllv3 cocci_id/* drivers/clk/imx/clk-pllv3.c 52 */;
	struct clk_init_data cocci_id/* drivers/clk/imx/clk-pllv3.c 420 */;
	const struct clk_ops *cocci_id/* drivers/clk/imx/clk-pllv3.c 418 */;
	void __iomem *cocci_id/* drivers/clk/imx/clk-pllv3.c 414 */;
	enum imx_pllv3_type cocci_id/* drivers/clk/imx/clk-pllv3.c 413 */;
	const char *cocci_id/* drivers/clk/imx/clk-pllv3.c 413 */;
	struct clk_pllv3 {
		struct clk_hw hw;
		void __iomem *base;
		u32 power_bit;
		bool powerup_set;
		u32 div_mask;
		u32 div_shift;
		unsigned long ref_clock;
		u32 num_offset;
		u32 denom_offset;
	} cocci_id/* drivers/clk/imx/clk-pllv3.c 40 */;
	struct clk_pllv3_vf610_mf cocci_id/* drivers/clk/imx/clk-pllv3.c 312 */;
	struct clk_pllv3_vf610_mf {
		u32 mfi;
		u32 mfn;
		u32 mfd;
	} cocci_id/* drivers/clk/imx/clk-pllv3.c 305 */;
	const struct clk_ops cocci_id/* drivers/clk/imx/clk-pllv3.c 296 */;
	int cocci_id/* drivers/clk/imx/clk-pllv3.c 263 */;
	unsigned long *cocci_id/* drivers/clk/imx/clk-pllv3.c 232 */;
	long cocci_id/* drivers/clk/imx/clk-pllv3.c 231 */;
	u64 cocci_id/* drivers/clk/imx/clk-pllv3.c 223 */;
	u32 cocci_id/* drivers/clk/imx/clk-pllv3.c 220 */;
	struct clk_pllv3 *cocci_id/* drivers/clk/imx/clk-pllv3.c 219 */;
	struct clk_hw *cocci_id/* drivers/clk/imx/clk-pllv3.c 216 */;
	unsigned long cocci_id/* drivers/clk/imx/clk-pllv3.c 216 */;
}
