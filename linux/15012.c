cocci_test_suite() {
	struct hisi_gate_clock cocci_id/* drivers/clk/hisilicon/clk-hix5hd2.c 70 */[]__initdata;
	struct hisi_mux_clock cocci_id/* drivers/clk/hisilicon/clk-hix5hd2.c 58 */[]__initdata;
	u32 cocci_id/* drivers/clk/hisilicon/clk-hix5hd2.c 55 */[];
	const char *constcocci_id/* drivers/clk/hisilicon/clk-hix5hd2.c 54 */[]__initconst;
	struct hisi_clock_data *cocci_id/* drivers/clk/hisilicon/clk-hix5hd2.c 301 */;
	struct device_node *cocci_id/* drivers/clk/hisilicon/clk-hix5hd2.c 299 */;
	void __init cocci_id/* drivers/clk/hisilicon/clk-hix5hd2.c 299 */;
	struct clk_init_data cocci_id/* drivers/clk/hisilicon/clk-hix5hd2.c 262 */;
	struct clk *cocci_id/* drivers/clk/hisilicon/clk-hix5hd2.c 261 */;
	void __iomem *cocci_id/* drivers/clk/hisilicon/clk-hix5hd2.c 256 */;
	struct hix5hd2_complex_clock *cocci_id/* drivers/clk/hisilicon/clk-hix5hd2.c 253 */;
	void __init cocci_id/* drivers/clk/hisilicon/clk-hix5hd2.c 252 */;
	const struct clk_ops cocci_id/* drivers/clk/hisilicon/clk-hix5hd2.c 247 */;
	u32 cocci_id/* drivers/clk/hisilicon/clk-hix5hd2.c 234 */;
	struct hix5hd2_clk_complex *cocci_id/* drivers/clk/hisilicon/clk-hix5hd2.c 233 */;
	struct clk_hw *cocci_id/* drivers/clk/hisilicon/clk-hix5hd2.c 231 */;
	void cocci_id/* drivers/clk/hisilicon/clk-hix5hd2.c 231 */;
	int cocci_id/* drivers/clk/hisilicon/clk-hix5hd2.c 213 */;
	struct hix5hd2_clk_complex cocci_id/* drivers/clk/hisilicon/clk-hix5hd2.c 167 */;
	struct hix5hd2_complex_clock cocci_id/* drivers/clk/hisilicon/clk-hix5hd2.c 156 */[]__initdata;
	struct hix5hd2_clk_complex {
		struct clk_hw hw;
		u32 id;
		void __iomem *ctrl_reg;
		u32 ctrl_clk_mask;
		u32 ctrl_rst_mask;
		void __iomem *phy_reg;
		u32 phy_clk_mask;
		u32 phy_rst_mask;
	} cocci_id/* drivers/clk/hisilicon/clk-hix5hd2.c 145 */;
	struct hix5hd2_complex_clock {
		const char *name;
		const char *parent_name;
		u32 id;
		u32 ctrl_reg;
		u32 ctrl_clk_mask;
		u32 ctrl_rst_mask;
		u32 phy_reg;
		u32 phy_clk_mask;
		u32 phy_rst_mask;
		enum hix5hd2_clk_type type;
	} cocci_id/* drivers/clk/hisilicon/clk-hix5hd2.c 132 */;
	struct hisi_fixed_rate_clock cocci_id/* drivers/clk/hisilicon/clk-hix5hd2.c 13 */[]__initdata;
	enum hix5hd2_clk_type{TYPE_COMPLEX, TYPE_ETHER,} cocci_id/* drivers/clk/hisilicon/clk-hix5hd2.c 127 */;
}
