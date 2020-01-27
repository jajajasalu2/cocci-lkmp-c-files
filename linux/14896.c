cocci_test_suite() {
	struct parents_resp {
#define NA_PARENT 0xFFFFFFFF
#define DUMMY_PARENT 0xFFFFFFFE
#define CLK_PARENTS_ID GENMASK(15, 0)
#define CLK_PARENTS_FLAGS GENMASK(31, 16)
				u32 parents[CLK_GET_PARENTS_RESP_WORDS];
	} cocci_id/* drivers/clk/zynqmp/clkc.c 92 */;
	struct topology_resp {
#define CLK_TOPOLOGY_TYPE GENMASK(3, 0)
#define CLK_TOPOLOGY_FLAGS GENMASK(23, 8)
#define CLK_TOPOLOGY_TYPE_FLAGS GENMASK(31, 24)
					u32 topology[CLK_GET_TOPOLOGY_RESP_WORDS];
	} cocci_id/* drivers/clk/zynqmp/clkc.c 85 */;
	struct name_resp {
		char name[CLK_GET_NAME_RESP_LEN];
	} cocci_id/* drivers/clk/zynqmp/clkc.c 81 */;
	struct platform_driver cocci_id/* drivers/clk/zynqmp/clkc.c 756 */;
	const struct of_device_id cocci_id/* drivers/clk/zynqmp/clkc.c 750 */[];
	struct device *cocci_id/* drivers/clk/zynqmp/clkc.c 739 */;
	struct platform_device *cocci_id/* drivers/clk/zynqmp/clkc.c 736 */;
	struct device_node *cocci_id/* drivers/clk/zynqmp/clkc.c 708 */;
	struct zynqmp_clock {
		char clk_name[MAX_NAME_LEN];
		u32 valid;
		enum clk_type type;
		struct clock_topology node[MAX_NODES];
		u32 num_nodes;
		struct clock_parent parent[MAX_PARENT];
		u32 num_parents;
		u32 clk_id;
	} cocci_id/* drivers/clk/zynqmp/clkc.c 70 */;
	struct name_resp cocci_id/* drivers/clk/zynqmp/clkc.c 658 */;
	struct attr_resp cocci_id/* drivers/clk/zynqmp/clkc.c 657 */;
	void cocci_id/* drivers/clk/zynqmp/clkc.c 652 */;
	char cocci_id/* drivers/clk/zynqmp/clkc.c 612 */[MAX_NAME_LEN];
	const char *cocci_id/* drivers/clk/zynqmp/clkc.c 609 */[MAX_PARENT];
	struct clock_parent {
		char name[MAX_NAME_LEN];
		int id;
		u32 flag;
	} cocci_id/* drivers/clk/zynqmp/clkc.c 53 */;
	const char **cocci_id/* drivers/clk/zynqmp/clkc.c 515 */;
	struct parents_resp cocci_id/* drivers/clk/zynqmp/clkc.c 485 */;
	u32 *cocci_id/* drivers/clk/zynqmp/clkc.c 447 */;
	struct parents_resp *cocci_id/* drivers/clk/zynqmp/clkc.c 446 */;
	struct clock_parent *cocci_id/* drivers/clk/zynqmp/clkc.c 445 */;
	int cocci_id/* drivers/clk/zynqmp/clkc.c 445 */;
	enum clk_type{CLK_TYPE_OUTPUT, CLK_TYPE_EXTERNAL,} cocci_id/* drivers/clk/zynqmp/clkc.c 42 */;
	struct topology_resp cocci_id/* drivers/clk/zynqmp/clkc.c 419 */;
	u32 cocci_id/* drivers/clk/zynqmp/clkc.c 387 */;
	struct topology_resp *cocci_id/* drivers/clk/zynqmp/clkc.c 383 */;
	struct clock_topology *cocci_id/* drivers/clk/zynqmp/clkc.c 382 */;
	struct attr_resp *cocci_id/* drivers/clk/zynqmp/clkc.c 358 */;
	u32 cocci_id/* drivers/clk/zynqmp/clkc.c 293 */[PAYLOAD_ARG_CNT];
	struct zynqmp_pm_query_data cocci_id/* drivers/clk/zynqmp/clkc.c 292 */;
	const struct clock_topology *cocci_id/* drivers/clk/zynqmp/clkc.c 288 */;
	u8 cocci_id/* drivers/clk/zynqmp/clkc.c 287 */;
	const char *const *cocci_id/* drivers/clk/zynqmp/clkc.c 286 */;
	const char *cocci_id/* drivers/clk/zynqmp/clkc.c 285 */;
	struct clk_hw *cocci_id/* drivers/clk/zynqmp/clkc.c 285 */;
	struct name_resp *cocci_id/* drivers/clk/zynqmp/clkc.c 226 */;
	char *cocci_id/* drivers/clk/zynqmp/clkc.c 160 */;
	const struct zynqmp_eemi_ops *cocci_id/* drivers/clk/zynqmp/clkc.c 137 */;
	unsigned int cocci_id/* drivers/clk/zynqmp/clkc.c 136 */;
	struct clk_hw_onecell_data *cocci_id/* drivers/clk/zynqmp/clkc.c 135 */;
	struct zynqmp_clock *cocci_id/* drivers/clk/zynqmp/clkc.c 134 */;
	struct clk_hw *(*cocci_id/* drivers/clk/zynqmp/clkc.c 120 */[])(const char *name, u32 clk_id, const char *const *parents, u8 num_parents, const struct clock_topology *nodes);
	const char cocci_id/* drivers/clk/zynqmp/clkc.c 110 */[][10];
	struct attr_resp {
#define CLK_ATTR_VALID BIT(0)
#define CLK_ATTR_TYPE BIT(2)
#define CLK_ATTR_NODE_INDEX GENMASK(13, 0)
#define CLK_ATTR_NODE_TYPE GENMASK(19, 14)
#define CLK_ATTR_NODE_SUBCLASS GENMASK(25, 20)
#define CLK_ATTR_NODE_CLASS GENMASK(31, 26)
								u32 attr[CLK_GET_ATTR_RESP_WORDS];
	} cocci_id/* drivers/clk/zynqmp/clkc.c 100 */;
}
