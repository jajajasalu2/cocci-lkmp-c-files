cocci_test_suite() {
	struct milbeaut_hdmac_desc cocci_id/* drivers/dma/milbeaut-hdmac.c 92 */;
	struct milbeaut_hdmac_chan cocci_id/* drivers/dma/milbeaut-hdmac.c 86 */;
	struct milbeaut_hdmac_device {
		struct dma_device ddev;
		struct clk *clk;
		void __iomem *reg_base;
		struct milbeaut_hdmac_chan channels[0];
	} cocci_id/* drivers/dma/milbeaut-hdmac.c 76 */;
	struct milbeaut_hdmac_chan {
		struct virt_dma_chan vc;
		struct milbeaut_hdmac_device *mdev;
		struct milbeaut_hdmac_desc *md;
		void __iomem *reg_ch_base;
		unsigned int slave_id;
		struct dma_slave_config cfg;
	} cocci_id/* drivers/dma/milbeaut-hdmac.c 67 */;
	struct milbeaut_hdmac_desc {
		struct virt_dma_desc vd;
		struct scatterlist *sgl;
		unsigned int sg_len;
		unsigned int sg_cur;
		enum dma_transfer_direction dir;
	} cocci_id/* drivers/dma/milbeaut-hdmac.c 59 */;
	struct platform_driver cocci_id/* drivers/dma/milbeaut-hdmac.c 567 */;
	const struct of_device_id cocci_id/* drivers/dma/milbeaut-hdmac.c 561 */[];
	struct dma_device *cocci_id/* drivers/dma/milbeaut-hdmac.c 459 */;
	char *cocci_id/* drivers/dma/milbeaut-hdmac.c 430 */;
	struct device *cocci_id/* drivers/dma/milbeaut-hdmac.c 428 */;
	struct milbeaut_hdmac_device *cocci_id/* drivers/dma/milbeaut-hdmac.c 425 */;
	struct platform_device *cocci_id/* drivers/dma/milbeaut-hdmac.c 424 */;
	struct of_phandle_args *cocci_id/* drivers/dma/milbeaut-hdmac.c 403 */;
	struct of_dma *cocci_id/* drivers/dma/milbeaut-hdmac.c 403 */;
	struct virt_dma_desc *cocci_id/* drivers/dma/milbeaut-hdmac.c 394 */;
	unsigned long cocci_id/* drivers/dma/milbeaut-hdmac.c 384 */;
	struct dma_tx_state *cocci_id/* drivers/dma/milbeaut-hdmac.c 323 */;
	dma_cookie_t cocci_id/* drivers/dma/milbeaut-hdmac.c 322 */;
	enum dma_status cocci_id/* drivers/dma/milbeaut-hdmac.c 321 */;
	enum dma_transfer_direction cocci_id/* drivers/dma/milbeaut-hdmac.c 258 */;
	unsigned int cocci_id/* drivers/dma/milbeaut-hdmac.c 257 */;
	struct dma_async_tx_descriptor *cocci_id/* drivers/dma/milbeaut-hdmac.c 255 */;
	struct virt_dma_chan *cocci_id/* drivers/dma/milbeaut-hdmac.c 215 */;
	struct dma_slave_config *cocci_id/* drivers/dma/milbeaut-hdmac.c 213 */;
	struct dma_chan *cocci_id/* drivers/dma/milbeaut-hdmac.c 213 */;
	int cocci_id/* drivers/dma/milbeaut-hdmac.c 212 */;
	irqreturn_t cocci_id/* drivers/dma/milbeaut-hdmac.c 171 */;
	void *cocci_id/* drivers/dma/milbeaut-hdmac.c 171 */;
	u32 cocci_id/* drivers/dma/milbeaut-hdmac.c 119 */;
	struct scatterlist *cocci_id/* drivers/dma/milbeaut-hdmac.c 118 */;
	struct milbeaut_hdmac_desc *cocci_id/* drivers/dma/milbeaut-hdmac.c 116 */;
	struct milbeaut_hdmac_chan *cocci_id/* drivers/dma/milbeaut-hdmac.c 115 */;
	void cocci_id/* drivers/dma/milbeaut-hdmac.c 115 */;
}
