cocci_test_suite() {
	int __init cocci_id/* drivers/clk/renesas/r9a06g032-clocks.c 980 */;
	struct platform_driver cocci_id/* drivers/clk/renesas/r9a06g032-clocks.c 973 */;
	const struct of_device_id cocci_id/* drivers/clk/renesas/r9a06g032-clocks.c 968 */[];
	const char *cocci_id/* drivers/clk/renesas/r9a06g032-clocks.c 926 */;
	const struct r9a06g032_clkdesc *cocci_id/* drivers/clk/renesas/r9a06g032-clocks.c 925 */;
	u16 cocci_id/* drivers/clk/renesas/r9a06g032-clocks.c 903 */[2];
	struct clk **cocci_id/* drivers/clk/renesas/r9a06g032-clocks.c 900 */;
	enum{K_GATE=0, K_FFC, K_DIV, K_BITSEL, K_DUALGATE,} cocci_id/* drivers/clk/renesas/r9a06g032-clocks.c 90 */;
	struct platform_device *cocci_id/* drivers/clk/renesas/r9a06g032-clocks.c 895 */;
	void *cocci_id/* drivers/clk/renesas/r9a06g032-clocks.c 890 */;
	u8 cocci_id/* drivers/clk/renesas/r9a06g032-clocks.c 833 */;
	struct r9a06g032_clk_dualgate *cocci_id/* drivers/clk/renesas/r9a06g032-clocks.c 825 */;
	struct clk_hw *cocci_id/* drivers/clk/renesas/r9a06g032-clocks.c 823 */;
	struct r9a06g032_clk_dualgate cocci_id/* drivers/clk/renesas/r9a06g032-clocks.c 800 */;
	struct r9a06g032_clk_dualgate {
		struct clk_hw hw;
		struct r9a06g032_priv *clocks;
		u16 index;
		u16 selector;
		struct r9a06g032_gate gate[2];
	} cocci_id/* drivers/clk/renesas/r9a06g032-clocks.c 791 */;
	const char *cocci_id/* drivers/clk/renesas/r9a06g032-clocks.c 762 */[2];
	struct clk_init_data cocci_id/* drivers/clk/renesas/r9a06g032-clocks.c 761 */;
	const struct clk_ops cocci_id/* drivers/clk/renesas/r9a06g032-clocks.c 749 */;
	struct r9a06g032_clk_bitsel *cocci_id/* drivers/clk/renesas/r9a06g032-clocks.c 734 */;
	struct r9a06g032_clk_bitsel cocci_id/* drivers/clk/renesas/r9a06g032-clocks.c 730 */;
	struct r9a06g032_clk_bitsel {
		struct clk_hw hw;
		struct r9a06g032_priv *clocks;
		u16 index;
		u16 selector;
	} cocci_id/* drivers/clk/renesas/r9a06g032-clocks.c 722 */;
	unsigned long *cocci_id/* drivers/clk/renesas/r9a06g032-clocks.c 609 */;
	struct r9a06g032_clk_div *cocci_id/* drivers/clk/renesas/r9a06g032-clocks.c 577 */;
	long cocci_id/* drivers/clk/renesas/r9a06g032-clocks.c 576 */;
	struct r9a06g032_clk_div cocci_id/* drivers/clk/renesas/r9a06g032-clocks.c 553 */;
	struct r9a06g032_clk_div {
		struct clk_hw hw;
		struct r9a06g032_priv *clocks;
		u16 index;
		u16 reg;
		u16 min,max;
		u8 table_size;
		u16 table[8];
	} cocci_id/* drivers/clk/renesas/r9a06g032-clocks.c 542 */;
	struct r9a06g032_clk_gate *cocci_id/* drivers/clk/renesas/r9a06g032-clocks.c 478 */;
	unsigned long cocci_id/* drivers/clk/renesas/r9a06g032-clocks.c 438 */;
	struct r9a06g032_gate *cocci_id/* drivers/clk/renesas/r9a06g032-clocks.c 436 */;
	struct generic_pm_domain *cocci_id/* drivers/clk/renesas/r9a06g032-clocks.c 417 */;
	struct device_node *cocci_id/* drivers/clk/renesas/r9a06g032-clocks.c 416 */;
	struct of_phandle_args cocci_id/* drivers/clk/renesas/r9a06g032-clocks.c 384 */;
	struct clk *cocci_id/* drivers/clk/renesas/r9a06g032-clocks.c 358 */;
	struct device *cocci_id/* drivers/clk/renesas/r9a06g032-clocks.c 356 */;
	struct of_phandle_args *cocci_id/* drivers/clk/renesas/r9a06g032-clocks.c 355 */;
	struct r9a06g032_clk_gate cocci_id/* drivers/clk/renesas/r9a06g032-clocks.c 353 */;
	struct r9a06g032_clk_gate {
		struct clk_hw hw;
		struct r9a06g032_priv *clocks;
		u16 index;
		struct r9a06g032_gate gate;
	} cocci_id/* drivers/clk/renesas/r9a06g032-clocks.c 345 */;
	u32 cocci_id/* drivers/clk/renesas/r9a06g032-clocks.c 335 */;
	u32 __iomem *cocci_id/* drivers/clk/renesas/r9a06g032-clocks.c 334 */;
	uint16_t cocci_id/* drivers/clk/renesas/r9a06g032-clocks.c 332 */;
	struct r9a06g032_priv *cocci_id/* drivers/clk/renesas/r9a06g032-clocks.c 331 */;
	int cocci_id/* drivers/clk/renesas/r9a06g032-clocks.c 330 */;
	u16 cocci_id/* drivers/clk/renesas/r9a06g032-clocks.c 321 */;
	unsigned int cocci_id/* drivers/clk/renesas/r9a06g032-clocks.c 321 */;
	struct r9a06g032_clkdesc {
		const char *name;
		uint32_t managed:1;
		uint32_t type:3;
		uint32_t index:8;
		uint32_t source:8;
		union {
			struct r9a06g032_gate gate;
			struct {
				unsigned int div_min:10,div_max:10,reg:10;
				u16 div_table[4];
			};
			struct {
				u16 div,mul;
			};
			unsigned int factor;
			unsigned int frequency;
			struct {
				uint16_t group:1,index:3;
				u16 sel,g1,r1,g2,r2;
			} dual;
		};
	}__packed cocci_id/* drivers/clk/renesas/r9a06g032-clocks.c 32 */;
	void cocci_id/* drivers/clk/renesas/r9a06g032-clocks.c 319 */;
	struct r9a06g032_priv {
		struct clk_onecell_data data;
		spinlock_t lock;
		void __iomem *reg;
	} cocci_id/* drivers/clk/renesas/r9a06g032-clocks.c 312 */;
	struct r9a06g032_gate {
		u16 gate,reset,ready,midle,scon,mirack,mistat;
	} cocci_id/* drivers/clk/renesas/r9a06g032-clocks.c 26 */;
	const struct r9a06g032_clkdesc cocci_id/* drivers/clk/renesas/r9a06g032-clocks.c 132 */[];
}
