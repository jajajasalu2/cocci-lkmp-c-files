cocci_test_suite() {
	enum dma_transfer_direction cocci_id/* drivers/dma/sh/rcar-dmac.c 904 */;
	dma_addr_t cocci_id/* drivers/dma/sh/rcar-dmac.c 903 */;
	struct scatterlist *cocci_id/* drivers/dma/sh/rcar-dmac.c 902 */;
	struct dma_async_tx_descriptor *cocci_id/* drivers/dma/sh/rcar-dmac.c 901 */;
	u32 cocci_id/* drivers/dma/sh/rcar-dmac.c 864 */;
	unsigned int cocci_id/* drivers/dma/sh/rcar-dmac.c 863 */;
	const u32 cocci_id/* drivers/dma/sh/rcar-dmac.c 856 */[];
	struct rcar_dmac_desc *cocci_id/* drivers/dma/sh/rcar-dmac.c 854 */;
	void cocci_id/* drivers/dma/sh/rcar-dmac.c 853 */;
	unsigned long cocci_id/* drivers/dma/sh/rcar-dmac.c 839 */;
	struct rcar_dmac_hw_desc *cocci_id/* drivers/dma/sh/rcar-dmac.c 733 */;
	struct rcar_dmac_desc {
		struct dma_async_tx_descriptor async_tx;
		enum dma_transfer_direction direction;
		unsigned int xfer_shift;
		u32 chcr;
		struct list_head node;
		struct list_head chunks;
		struct rcar_dmac_xfer_chunk *running;
		unsigned int nchunks;
		struct {
			bool use;
			struct rcar_dmac_hw_desc *mem;
			dma_addr_t dma;
			size_t size;
		} hwdescs;
		unsigned int size;
		bool cyclic;
	} cocci_id/* drivers/dma/sh/rcar-dmac.c 72 */;
	struct rcar_dmac_desc cocci_id/* drivers/dma/sh/rcar-dmac.c 618 */;
	struct rcar_dmac_desc_page *cocci_id/* drivers/dma/sh/rcar-dmac.c 502 */;
	gfp_t cocci_id/* drivers/dma/sh/rcar-dmac.c 500 */;
	struct rcar_dmac_hw_desc {
		u32 sar;
		u32 dar;
		u32 tcr;
		u32 reserved;
	}__attribute__((__packed__)) cocci_id/* drivers/dma/sh/rcar-dmac.c 48 */;
	u16 cocci_id/* drivers/dma/sh/rcar-dmac.c 448 */;
	struct rcar_dmac_xfer_chunk cocci_id/* drivers/dma/sh/rcar-dmac.c 360 */;
	struct rcar_dmac_xfer_chunk {
		struct list_head node;
		dma_addr_t src_addr;
		dma_addr_t dst_addr;
		u32 size;
	} cocci_id/* drivers/dma/sh/rcar-dmac.c 34 */;
	struct rcar_dmac_of_data {
		u32 chan_offset_base;
		u32 chan_offset_stride;
	} cocci_id/* drivers/dma/sh/rcar-dmac.c 218 */;
	struct rcar_dmac cocci_id/* drivers/dma/sh/rcar-dmac.c 211 */;
	struct platform_driver cocci_id/* drivers/dma/sh/rcar-dmac.c 1986 */;
	struct rcar_dmac {
		struct dma_device engine;
		struct device *dev;
		void __iomem *iomem;
		struct device_dma_parameters parms;
		unsigned int n_channels;
		struct rcar_dmac_chan *channels;
		u32 channels_mask;
	DECLARE_BITMAP(modules,256)
		;
	} cocci_id/* drivers/dma/sh/rcar-dmac.c 198 */;
	const struct of_device_id cocci_id/* drivers/dma/sh/rcar-dmac.c 1977 */[];
	const struct rcar_dmac_of_data cocci_id/* drivers/dma/sh/rcar-dmac.c 1972 */;
	struct rcar_dmac_chan cocci_id/* drivers/dma/sh/rcar-dmac.c 186 */;
	struct dma_device *cocci_id/* drivers/dma/sh/rcar-dmac.c 1832 */;
	const enum dma_slave_buswidth cocci_id/* drivers/dma/sh/rcar-dmac.c 1828 */;
	struct device_node *cocci_id/* drivers/dma/sh/rcar-dmac.c 1796 */;
	struct device *cocci_id/* drivers/dma/sh/rcar-dmac.c 1794 */;
	char *cocci_id/* drivers/dma/sh/rcar-dmac.c 1743 */;
	char cocci_id/* drivers/dma/sh/rcar-dmac.c 1742 */[5];
	struct platform_device *cocci_id/* drivers/dma/sh/rcar-dmac.c 1740 */;
	const struct rcar_dmac_of_data *cocci_id/* drivers/dma/sh/rcar-dmac.c 1737 */;
	dma_cap_mask_t cocci_id/* drivers/dma/sh/rcar-dmac.c 1681 */;
	struct of_dma *cocci_id/* drivers/dma/sh/rcar-dmac.c 1677 */;
	struct of_phandle_args *cocci_id/* drivers/dma/sh/rcar-dmac.c 1661 */;
	struct rcar_dmac *cocci_id/* drivers/dma/sh/rcar-dmac.c 1660 */;
	bool cocci_id/* drivers/dma/sh/rcar-dmac.c 1658 */;
	void *cocci_id/* drivers/dma/sh/rcar-dmac.c 1658 */;
	struct dmaengine_desc_callback cocci_id/* drivers/dma/sh/rcar-dmac.c 1605 */;
	struct rcar_dmac_chan {
		struct dma_chan chan;
		void __iomem *iomem;
		unsigned int index;
		int irq;
		struct rcar_dmac_chan_slave src;
		struct rcar_dmac_chan_slave dst;
		struct rcar_dmac_chan_map map;
		int mid_rid;
		spinlock_t lock;
		struct {
			struct list_head free;
			struct list_head pending;
			struct list_head active;
			struct list_head done;
			struct list_head wait;
			struct rcar_dmac_desc *running;
			struct list_head chunks_free;
			struct list_head pages;
		} desc;
	} cocci_id/* drivers/dma/sh/rcar-dmac.c 159 */;
	irqreturn_t cocci_id/* drivers/dma/sh/rcar-dmac.c 1551 */;
	struct dma_tx_state *cocci_id/* drivers/dma/sh/rcar-dmac.c 1398 */;
	struct rcar_dmac_chan_map {
		dma_addr_t addr;
		enum dma_data_direction dir;
		struct rcar_dmac_chan_slave slave;
	} cocci_id/* drivers/dma/sh/rcar-dmac.c 134 */;
	enum dma_status cocci_id/* drivers/dma/sh/rcar-dmac.c 1295 */;
	struct rcar_dmac_xfer_chunk *cocci_id/* drivers/dma/sh/rcar-dmac.c 1293 */;
	dma_cookie_t cocci_id/* drivers/dma/sh/rcar-dmac.c 1290 */;
	struct dma_slave_config *cocci_id/* drivers/dma/sh/rcar-dmac.c 1254 */;
	struct rcar_dmac_chan_slave {
		phys_addr_t slave_addr;
		unsigned int xfer_size;
	} cocci_id/* drivers/dma/sh/rcar-dmac.c 123 */;
	enum dma_data_direction cocci_id/* drivers/dma/sh/rcar-dmac.c 1127 */;
	size_t cocci_id/* drivers/dma/sh/rcar-dmac.c 1126 */;
	phys_addr_t cocci_id/* drivers/dma/sh/rcar-dmac.c 1125 */;
	struct rcar_dmac_desc_page cocci_id/* drivers/dma/sh/rcar-dmac.c 112 */;
	struct scatterlist cocci_id/* drivers/dma/sh/rcar-dmac.c 1105 */;
	struct rcar_dmac_chan_map *cocci_id/* drivers/dma/sh/rcar-dmac.c 1052 */;
	struct rcar_dmac_chan *cocci_id/* drivers/dma/sh/rcar-dmac.c 1030 */;
	struct dma_chan *cocci_id/* drivers/dma/sh/rcar-dmac.c 1028 */;
	int cocci_id/* drivers/dma/sh/rcar-dmac.c 1028 */;
	struct rcar_dmac_desc_page {
		struct list_head node;
		union {
			struct rcar_dmac_desc descs[0];
			struct rcar_dmac_xfer_chunk chunks[0];
		};
	} cocci_id/* drivers/dma/sh/rcar-dmac.c 102 */;
}
