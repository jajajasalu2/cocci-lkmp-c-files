cocci_test_suite() {
	struct imx_rproc {
		struct device *dev;
		struct regmap *regmap;
		struct rproc *rproc;
		const struct imx_rproc_dcfg *dcfg;
		struct imx_rproc_mem mem[IMX7D_RPROC_MEM_MAX];
		struct clk *clk;
	} cocci_id/* drivers/remoteproc/imx_rproc.c 81 */;
	struct imx_rproc_dcfg {
		u32 src_reg;
		u32 src_mask;
		u32 src_start;
		u32 src_stop;
		const struct imx_rproc_att *att;
		size_t att_size;
	} cocci_id/* drivers/remoteproc/imx_rproc.c 72 */;
	struct imx_rproc_att {
		u32 da;
		u32 sa;
		u32 size;
		int flags;
	} cocci_id/* drivers/remoteproc/imx_rproc.c 65 */;
	struct imx_rproc_mem {
		void __iomem *cpu_addr;
		phys_addr_t sys_addr;
		size_t size;
	} cocci_id/* drivers/remoteproc/imx_rproc.c 54 */;
	struct platform_driver cocci_id/* drivers/remoteproc/imx_rproc.c 408 */;
	const struct of_device_id cocci_id/* drivers/remoteproc/imx_rproc.c 401 */[];
	struct regmap *cocci_id/* drivers/remoteproc/imx_rproc.c 320 */;
	struct regmap_config cocci_id/* drivers/remoteproc/imx_rproc.c 318 */;
	struct resource cocci_id/* drivers/remoteproc/imx_rproc.c 286 */;
	const struct imx_rproc_att *cocci_id/* drivers/remoteproc/imx_rproc.c 259 */;
	struct device_node *cocci_id/* drivers/remoteproc/imx_rproc.c 254 */;
	struct device *cocci_id/* drivers/remoteproc/imx_rproc.c 253 */;
	const struct imx_rproc_dcfg *cocci_id/* drivers/remoteproc/imx_rproc.c 252 */;
	struct platform_device *cocci_id/* drivers/remoteproc/imx_rproc.c 250 */;
	struct imx_rproc *cocci_id/* drivers/remoteproc/imx_rproc.c 249 */;
	int cocci_id/* drivers/remoteproc/imx_rproc.c 249 */;
	const struct rproc_ops cocci_id/* drivers/remoteproc/imx_rproc.c 243 */;
	struct rproc *cocci_id/* drivers/remoteproc/imx_rproc.c 211 */;
	void *cocci_id/* drivers/remoteproc/imx_rproc.c 211 */;
	unsigned int cocci_id/* drivers/remoteproc/imx_rproc.c 199 */;
	u64 *cocci_id/* drivers/remoteproc/imx_rproc.c 189 */;
	u64 cocci_id/* drivers/remoteproc/imx_rproc.c 188 */;
	const struct imx_rproc_dcfg cocci_id/* drivers/remoteproc/imx_rproc.c 149 */;
	const struct imx_rproc_att cocci_id/* drivers/remoteproc/imx_rproc.c 119 */[];
}
