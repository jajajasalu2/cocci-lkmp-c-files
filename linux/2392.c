cocci_test_suite() {
	struct uniphier_mdmac_desc cocci_id/* drivers/dma/uniphier-mdmac.c 83 */;
	struct virt_dma_desc *cocci_id/* drivers/dma/uniphier-mdmac.c 81 */;
	struct uniphier_mdmac_desc *cocci_id/* drivers/dma/uniphier-mdmac.c 80 */;
	struct uniphier_mdmac_chan cocci_id/* drivers/dma/uniphier-mdmac.c 77 */;
	struct virt_dma_chan *cocci_id/* drivers/dma/uniphier-mdmac.c 75 */;
	struct uniphier_mdmac_chan *cocci_id/* drivers/dma/uniphier-mdmac.c 74 */;
	struct uniphier_mdmac_device {
		struct dma_device ddev;
		struct clk *clk;
		void __iomem *reg_base;
		struct uniphier_mdmac_chan channels[0];
	} cocci_id/* drivers/dma/uniphier-mdmac.c 67 */;
	struct uniphier_mdmac_chan {
		struct virt_dma_chan vc;
		struct uniphier_mdmac_device *mdev;
		struct uniphier_mdmac_desc *md;
		void __iomem *reg_ch_base;
		unsigned int chan_id;
	} cocci_id/* drivers/dma/uniphier-mdmac.c 59 */;
	struct uniphier_mdmac_desc {
		struct virt_dma_desc vd;
		struct scatterlist *sgl;
		unsigned int sg_len;
		unsigned int sg_cur;
		enum dma_transfer_direction dir;
	} cocci_id/* drivers/dma/uniphier-mdmac.c 51 */;
	struct platform_driver cocci_id/* drivers/dma/uniphier-mdmac.c 489 */;
	const struct of_device_id cocci_id/* drivers/dma/uniphier-mdmac.c 483 */[];
	struct dma_device *cocci_id/* drivers/dma/uniphier-mdmac.c 384 */;
	char *cocci_id/* drivers/dma/uniphier-mdmac.c 353 */;
	struct device *cocci_id/* drivers/dma/uniphier-mdmac.c 351 */;
	struct platform_device *cocci_id/* drivers/dma/uniphier-mdmac.c 347 */;
	void cocci_id/* drivers/dma/uniphier-mdmac.c 342 */;
	unsigned long cocci_id/* drivers/dma/uniphier-mdmac.c 332 */;
	struct dma_tx_state *cocci_id/* drivers/dma/uniphier-mdmac.c 283 */;
	dma_cookie_t cocci_id/* drivers/dma/uniphier-mdmac.c 282 */;
	enum dma_status cocci_id/* drivers/dma/uniphier-mdmac.c 281 */;
	enum dma_transfer_direction cocci_id/* drivers/dma/uniphier-mdmac.c 232 */;
	unsigned int cocci_id/* drivers/dma/uniphier-mdmac.c 231 */;
	struct dma_async_tx_descriptor *cocci_id/* drivers/dma/uniphier-mdmac.c 229 */;
	struct dma_chan *cocci_id/* drivers/dma/uniphier-mdmac.c 224 */;
	irqreturn_t cocci_id/* drivers/dma/uniphier-mdmac.c 175 */;
	void *cocci_id/* drivers/dma/uniphier-mdmac.c 175 */;
	u32 cocci_id/* drivers/dma/uniphier-mdmac.c 158 */;
	struct uniphier_mdmac_device *cocci_id/* drivers/dma/uniphier-mdmac.c 157 */;
	int cocci_id/* drivers/dma/uniphier-mdmac.c 155 */;
	struct scatterlist *cocci_id/* drivers/dma/uniphier-mdmac.c 110 */;
}
