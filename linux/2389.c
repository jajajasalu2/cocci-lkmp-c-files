cocci_test_suite() {
	struct milbeaut_xdmac_desc cocci_id/* drivers/dma/milbeaut-xdmac.c 89 */;
	struct milbeaut_xdmac_chan cocci_id/* drivers/dma/milbeaut-xdmac.c 83 */;
	struct milbeaut_xdmac_device {
		struct dma_device ddev;
		void __iomem *reg_base;
		struct milbeaut_xdmac_chan channels[0];
	} cocci_id/* drivers/dma/milbeaut-xdmac.c 74 */;
	struct milbeaut_xdmac_chan {
		struct virt_dma_chan vc;
		struct milbeaut_xdmac_desc *md;
		void __iomem *reg_ch_base;
	} cocci_id/* drivers/dma/milbeaut-xdmac.c 68 */;
	struct milbeaut_xdmac_desc {
		struct virt_dma_desc vd;
		size_t len;
		dma_addr_t src;
		dma_addr_t dst;
	} cocci_id/* drivers/dma/milbeaut-xdmac.c 61 */;
	struct platform_driver cocci_id/* drivers/dma/milbeaut-xdmac.c 404 */;
	const struct of_device_id cocci_id/* drivers/dma/milbeaut-xdmac.c 398 */[];
	struct dma_device *cocci_id/* drivers/dma/milbeaut-xdmac.c 315 */;
	unsigned int cocci_id/* drivers/dma/milbeaut-xdmac.c 304 */;
	struct milbeaut_xdmac_device *cocci_id/* drivers/dma/milbeaut-xdmac.c 302 */;
	void cocci_id/* drivers/dma/milbeaut-xdmac.c 302 */;
	char *cocci_id/* drivers/dma/milbeaut-xdmac.c 268 */;
	struct device *cocci_id/* drivers/dma/milbeaut-xdmac.c 266 */;
	struct platform_device *cocci_id/* drivers/dma/milbeaut-xdmac.c 262 */;
	int cocci_id/* drivers/dma/milbeaut-xdmac.c 262 */;
	struct virt_dma_desc *cocci_id/* drivers/dma/milbeaut-xdmac.c 257 */;
	struct virt_dma_chan *cocci_id/* drivers/dma/milbeaut-xdmac.c 245 */;
	size_t cocci_id/* drivers/dma/milbeaut-xdmac.c 191 */;
	dma_addr_t cocci_id/* drivers/dma/milbeaut-xdmac.c 190 */;
	struct dma_async_tx_descriptor *cocci_id/* drivers/dma/milbeaut-xdmac.c 189 */;
	struct dma_chan *cocci_id/* drivers/dma/milbeaut-xdmac.c 184 */;
	unsigned long cocci_id/* drivers/dma/milbeaut-xdmac.c 163 */;
	irqreturn_t cocci_id/* drivers/dma/milbeaut-xdmac.c 159 */;
	void *cocci_id/* drivers/dma/milbeaut-xdmac.c 159 */;
	u32 cocci_id/* drivers/dma/milbeaut-xdmac.c 115 */;
	struct milbeaut_xdmac_desc *cocci_id/* drivers/dma/milbeaut-xdmac.c 113 */;
	struct milbeaut_xdmac_chan *cocci_id/* drivers/dma/milbeaut-xdmac.c 112 */;
}
