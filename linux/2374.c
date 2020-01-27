cocci_test_suite() {
	struct rproc_mem_entry *cocci_id/* drivers/remoteproc/st_remoteproc.c 93 */;
	void *cocci_id/* drivers/remoteproc/st_remoteproc.c 87 */;
	struct device *cocci_id/* drivers/remoteproc/st_remoteproc.c 79 */;
	struct st_rproc *cocci_id/* drivers/remoteproc/st_remoteproc.c 78 */;
	struct rproc *cocci_id/* drivers/remoteproc/st_remoteproc.c 76 */;
	int cocci_id/* drivers/remoteproc/st_remoteproc.c 76 */;
	void cocci_id/* drivers/remoteproc/st_remoteproc.c 76 */;
	struct mbox_client *cocci_id/* drivers/remoteproc/st_remoteproc.c 65 */;
	u32 cocci_id/* drivers/remoteproc/st_remoteproc.c 56 */;
	struct platform_driver cocci_id/* drivers/remoteproc/st_remoteproc.c 466 */;
	struct st_rproc {
		struct st_rproc_config *config;
		struct reset_control *sw_reset;
		struct reset_control *pwr_reset;
		struct clk *clk;
		u32 clk_rate;
		struct regmap *boot_base;
		u32 boot_offset;
		struct mbox_chan *mbox_chan[ST_RPROC_MAX_VRING * MBOX_MAX];
		struct mbox_client mbox_client_vq0;
		struct mbox_client mbox_client_vq1;
	} cocci_id/* drivers/remoteproc/st_remoteproc.c 43 */;
	struct st_rproc_config {
		bool sw_reset;
		bool pwr_reset;
		unsigned long bootaddr_mask;
	} cocci_id/* drivers/remoteproc/st_remoteproc.c 37 */;
	struct st_rproc_config *cocci_id/* drivers/remoteproc/st_remoteproc.c 361 */;
	struct mbox_chan *cocci_id/* drivers/remoteproc/st_remoteproc.c 345 */;
	const struct of_device_id *cocci_id/* drivers/remoteproc/st_remoteproc.c 341 */;
	struct device_node *cocci_id/* drivers/remoteproc/st_remoteproc.c 285 */;
	struct platform_device *cocci_id/* drivers/remoteproc/st_remoteproc.c 280 */;
	const struct of_device_id cocci_id/* drivers/remoteproc/st_remoteproc.c 273 */[];
	const struct st_rproc_config cocci_id/* drivers/remoteproc/st_remoteproc.c 267 */;
	const struct rproc_ops cocci_id/* drivers/remoteproc/st_remoteproc.c 229 */;
	dma_addr_t cocci_id/* drivers/remoteproc/st_remoteproc.c 140 */;
	struct of_phandle_iterator cocci_id/* drivers/remoteproc/st_remoteproc.c 125 */;
	struct reserved_mem *cocci_id/* drivers/remoteproc/st_remoteproc.c 124 */;
	const struct firmware *cocci_id/* drivers/remoteproc/st_remoteproc.c 119 */;
}
