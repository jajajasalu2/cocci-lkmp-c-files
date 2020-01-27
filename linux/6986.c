cocci_test_suite() {
	struct imx_mu_priv cocci_id/* drivers/mailbox/imx-mailbox.c 86 */;
	const struct imx_mu_dcfg cocci_id/* drivers/mailbox/imx-mailbox.c 70 */;
	struct imx_mu_priv {
		struct device *dev;
		void __iomem *base;
		spinlock_t xcr_lock;
		struct mbox_controller mbox;
		struct mbox_chan mbox_chans[IMX_MU_CHANS];
		struct imx_mu_con_priv con_priv[IMX_MU_CHANS];
		const struct imx_mu_dcfg *dcfg;
		struct clk *clk;
		int irq;
		bool side_b;
	} cocci_id/* drivers/mailbox/imx-mailbox.c 54 */;
	struct imx_mu_con_priv {
		unsigned int idx;
		char irq_desc[IMX_MU_CHAN_NAME_SIZE];
		enum imx_mu_chan_type type;
		struct mbox_chan *chan;
		struct tasklet_struct txdb_tasklet;
	} cocci_id/* drivers/mailbox/imx-mailbox.c 46 */;
	struct imx_mu_dcfg {
		u32 xTR[4];
		u32 xRR[4];
		u32 xSR;
		u32 xCR;
	} cocci_id/* drivers/mailbox/imx-mailbox.c 39 */;
	struct platform_driver cocci_id/* drivers/mailbox/imx-mailbox.c 377 */;
	const struct of_device_id cocci_id/* drivers/mailbox/imx-mailbox.c 370 */[];
	enum imx_mu_chan_type{IMX_MU_TYPE_TX, IMX_MU_TYPE_RX, IMX_MU_TYPE_TXDB, IMX_MU_TYPE_RXDB,} cocci_id/* drivers/mailbox/imx-mailbox.c 32 */;
	unsigned int cocci_id/* drivers/mailbox/imx-mailbox.c 296 */;
	const struct imx_mu_dcfg *cocci_id/* drivers/mailbox/imx-mailbox.c 295 */;
	struct device_node *cocci_id/* drivers/mailbox/imx-mailbox.c 293 */;
	struct device *cocci_id/* drivers/mailbox/imx-mailbox.c 292 */;
	struct platform_device *cocci_id/* drivers/mailbox/imx-mailbox.c 290 */;
	struct imx_mu_priv *cocci_id/* drivers/mailbox/imx-mailbox.c 281 */;
	void cocci_id/* drivers/mailbox/imx-mailbox.c 281 */;
	const struct of_phandle_args *cocci_id/* drivers/mailbox/imx-mailbox.c 260 */;
	struct mbox_controller *cocci_id/* drivers/mailbox/imx-mailbox.c 259 */;
	const struct mbox_chan_ops cocci_id/* drivers/mailbox/imx-mailbox.c 253 */;
	unsigned long cocci_id/* drivers/mailbox/imx-mailbox.c 200 */;
	u32 *cocci_id/* drivers/mailbox/imx-mailbox.c 172 */;
	u32 cocci_id/* drivers/mailbox/imx-mailbox.c 126 */;
	struct imx_mu_con_priv *cocci_id/* drivers/mailbox/imx-mailbox.c 125 */;
	struct mbox_chan *cocci_id/* drivers/mailbox/imx-mailbox.c 123 */;
	irqreturn_t cocci_id/* drivers/mailbox/imx-mailbox.c 121 */;
	void *cocci_id/* drivers/mailbox/imx-mailbox.c 121 */;
	int cocci_id/* drivers/mailbox/imx-mailbox.c 121 */;
}
