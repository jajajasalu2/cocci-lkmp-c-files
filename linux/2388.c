cocci_test_suite() {
	struct scatterlist *cocci_id/* drivers/dma/pxa_dma.c 971 */;
	struct pxad_phy {
		int idx;
		void __iomem *base;
		struct pxad_chan *vchan;
	} cocci_id/* drivers/dma/pxa_dma.c 97 */;
	enum dma_slave_buswidth cocci_id/* drivers/dma/pxa_dma.c 871 */;
	u32 *cocci_id/* drivers/dma/pxa_dma.c 868 */;
	enum dma_transfer_direction cocci_id/* drivers/dma/pxa_dma.c 867 */;
	struct pxad_chan cocci_id/* drivers/dma/pxa_dma.c 853 */;
	struct pxad_desc_sw {
		struct virt_dma_desc vd;
		int nb_desc;
		size_t len;
		dma_addr_t first;
		bool misaligned;
		bool cyclic;
		struct dma_pool *desc_pool;
		struct pxad_desc_hw *hw_desc[];
	} cocci_id/* drivers/dma/pxa_dma.c 83 */;
	struct pxad_desc_hw {
		u32 ddadr;
		u32 dsadr;
		u32 dtadr;
		u32 dcmd;
	}__aligned(16) cocci_id/* drivers/dma/pxa_dma.c 76 */;
	dma_addr_t cocci_id/* drivers/dma/pxa_dma.c 743 */;
	struct pxad_desc_hw cocci_id/* drivers/dma/pxa_dma.c 695 */;
	struct dma_chan *cocci_id/* drivers/dma/pxa_dma.c 685 */;
	struct virt_dma_desc cocci_id/* drivers/dma/pxa_dma.c 657 */;
	dma_cookie_t cocci_id/* drivers/dma/pxa_dma.c 611 */;
	irqreturn_t cocci_id/* drivers/dma/pxa_dma.c 603 */;
	unsigned int cocci_id/* drivers/dma/pxa_dma.c 584 */;
	struct virt_dma_chan *cocci_id/* drivers/dma/pxa_dma.c 554 */;
	struct pxad_desc_sw *cocci_id/* drivers/dma/pxa_dma.c 536 */;
	struct virt_dma_desc *cocci_id/* drivers/dma/pxa_dma.c 534 */;
	void cocci_id/* drivers/dma/pxa_dma.c 479 */;
	bool cocci_id/* drivers/dma/pxa_dma.c 430 */;
	struct pxad_chan *cocci_id/* drivers/dma/pxa_dma.c 430 */;
	struct pxad_device *cocci_id/* drivers/dma/pxa_dma.c 372 */;
	char cocci_id/* drivers/dma/pxa_dma.c 324 */[11];
	struct dentry *cocci_id/* drivers/dma/pxa_dma.c 321 */;
	const char *constcocci_id/* drivers/dma/pxa_dma.c 267 */[];
	u32 cocci_id/* drivers/dma/pxa_dma.c 265 */;
	struct pxad_phy *cocci_id/* drivers/dma/pxa_dma.c 264 */;
	struct seq_file *cocci_id/* drivers/dma/pxa_dma.c 262 */;
	void *cocci_id/* drivers/dma/pxa_dma.c 262 */;
	int cocci_id/* drivers/dma/pxa_dma.c 262 */;
	struct pxad_desc_hw *cocci_id/* drivers/dma/pxa_dma.c 225 */;
	unsigned long cocci_id/* drivers/dma/pxa_dma.c 224 */;
	bool cocci_id/* drivers/dma/pxa_dma.c 178 */(struct dma_chan *chan,
						     void *param);
	struct pxad_param *cocci_id/* drivers/dma/pxa_dma.c 1457 */;
	struct platform_driver cocci_id/* drivers/dma/pxa_dma.c 1444 */;
	const struct platform_device_id cocci_id/* drivers/dma/pxa_dma.c 1439 */[];
	struct pxad_device cocci_id/* drivers/dma/pxa_dma.c 141 */;
	struct pxad_desc_sw cocci_id/* drivers/dma/pxa_dma.c 137 */;
	const enum dma_slave_buswidth cocci_id/* drivers/dma/pxa_dma.c 1360 */;
	struct resource *cocci_id/* drivers/dma/pxa_dma.c 1358 */;
	struct mmp_dma_platdata *cocci_id/* drivers/dma/pxa_dma.c 1357 */;
	const struct dma_slave_map *cocci_id/* drivers/dma/pxa_dma.c 1356 */;
	const struct of_device_id *cocci_id/* drivers/dma/pxa_dma.c 1355 */;
	struct platform_device *cocci_id/* drivers/dma/pxa_dma.c 1308 */;
	struct of_dma *cocci_id/* drivers/dma/pxa_dma.c 1293 */;
	struct of_phandle_args *cocci_id/* drivers/dma/pxa_dma.c 1292 */;
	const struct of_device_id cocci_id/* drivers/dma/pxa_dma.c 1286 */[];
	struct pxad_device {
		struct dma_device slave;
		int nr_chans;
		int nr_requestors;
		void __iomem *base;
		struct pxad_phy *phys;
		spinlock_t phy_lock;
#ifdef CONFIG_DEBUG_FS
		struct dentry *dbgfs_root;
		struct dentry **dbgfs_chan;
#endif
	} cocci_id/* drivers/dma/pxa_dma.c 123 */;
	struct dma_device *cocci_id/* drivers/dma/pxa_dma.c 1222 */;
	struct dma_tx_state *cocci_id/* drivers/dma/pxa_dma.c 1199 */;
	enum dma_status cocci_id/* drivers/dma/pxa_dma.c 1197 */;
	struct dma_slave_config *cocci_id/* drivers/dma/pxa_dma.c 1074 */;
	struct pxad_chan {
		struct virt_dma_chan vc;
		u32 drcmr;
		enum pxad_chan_prio prio;
		bool misaligned;
		struct dma_slave_config cfg;
		struct pxad_phy *phy;
		struct dma_pool *desc_pool;
		dma_cookie_t bus_error;
		wait_queue_head_t wq_state;
	} cocci_id/* drivers/dma/pxa_dma.c 103 */;
	struct pxad_desc_hw **cocci_id/* drivers/dma/pxa_dma.c 1027 */;
	size_t cocci_id/* drivers/dma/pxa_dma.c 1022 */;
	struct dma_async_tx_descriptor *cocci_id/* drivers/dma/pxa_dma.c 1020 */;
}
