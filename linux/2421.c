cocci_test_suite() {
	struct mxs_dma_ccw {
		u32 next;
		u16 bits;
		u16 xfer_bytes;
#define MAX_XFER_BYTES 0xff00
		u32 bufaddr;
#define MXS_PIO_WORDS 16
		u32 pio_words[MXS_PIO_WORDS];
	} cocci_id/* drivers/dma/mxs-dma.c 96 */;
	struct platform_driver cocci_id/* drivers/dma/mxs-dma.c 866 */;
	struct mxs_dma_type *cocci_id/* drivers/dma/mxs-dma.c 789 */;
	struct resource *cocci_id/* drivers/dma/mxs-dma.c 770 */;
	const struct mxs_dma_type *cocci_id/* drivers/dma/mxs-dma.c 768 */;
	const struct of_device_id *cocci_id/* drivers/dma/mxs-dma.c 767 */;
	const struct platform_device_id *cocci_id/* drivers/dma/mxs-dma.c 766 */;
	struct device_node *cocci_id/* drivers/dma/mxs-dma.c 765 */;
	struct platform_device *cocci_id/* drivers/dma/mxs-dma.c 763 */;
	struct mxs_dma_filter_param cocci_id/* drivers/dma/mxs-dma.c 749 */;
	dma_cap_mask_t cocci_id/* drivers/dma/mxs-dma.c 748 */;
	struct of_dma *cocci_id/* drivers/dma/mxs-dma.c 745 */;
	struct of_phandle_args *cocci_id/* drivers/dma/mxs-dma.c 744 */;
	struct mxs_dma_filter_param *cocci_id/* drivers/dma/mxs-dma.c 727 */;
	bool cocci_id/* drivers/dma/mxs-dma.c 725 */;
	void *cocci_id/* drivers/dma/mxs-dma.c 725 */;
	struct mxs_dma_filter_param {
		unsigned int chan_id;
	} cocci_id/* drivers/dma/mxs-dma.c 721 */;
	int __init cocci_id/* drivers/dma/mxs-dma.c 692 */;
	dma_cookie_t cocci_id/* drivers/dma/mxs-dma.c 667 */;
	struct dma_tx_state *cocci_id/* drivers/dma/mxs-dma.c 667 */;
	enum dma_status cocci_id/* drivers/dma/mxs-dma.c 666 */;
	struct mxs_dma_ccw *cocci_id/* drivers/dma/mxs-dma.c 625 */;
	unsigned long cocci_id/* drivers/dma/mxs-dma.c 596 */;
	enum dma_transfer_direction cocci_id/* drivers/dma/mxs-dma.c 595 */;
	dma_addr_t cocci_id/* drivers/dma/mxs-dma.c 594 */;
	size_t cocci_id/* drivers/dma/mxs-dma.c 594 */;
	struct dma_async_tx_descriptor *cocci_id/* drivers/dma/mxs-dma.c 593 */;
	u32 *cocci_id/* drivers/dma/mxs-dma.c 504 */;
	unsigned int cocci_id/* drivers/dma/mxs-dma.c 496 */;
	struct scatterlist *cocci_id/* drivers/dma/mxs-dma.c 495 */;
	struct mxs_dma_engine *cocci_id/* drivers/dma/mxs-dma.c 418 */;
	struct mxs_dma_chan *cocci_id/* drivers/dma/mxs-dma.c 417 */;
	struct dma_chan *cocci_id/* drivers/dma/mxs-dma.c 415 */;
	int cocci_id/* drivers/dma/mxs-dma.c 415 */;
	u32 cocci_id/* drivers/dma/mxs-dma.c 345 */;
	irqreturn_t cocci_id/* drivers/dma/mxs-dma.c 341 */;
	void cocci_id/* drivers/dma/mxs-dma.c 275 */;
	void __iomem *cocci_id/* drivers/dma/mxs-dma.c 225 */;
	const unsigned long cocci_id/* drivers/dma/mxs-dma.c 224 */;
	struct mxs_dma_chan cocci_id/* drivers/dma/mxs-dma.c 200 */;
	const struct of_device_id cocci_id/* drivers/dma/mxs-dma.c 189 */[];
	const struct platform_device_id cocci_id/* drivers/dma/mxs-dma.c 171 */[];
	struct mxs_dma_type cocci_id/* drivers/dma/mxs-dma.c 155 */[];
	struct mxs_dma_type {
		enum mxs_dma_id id;
		enum mxs_dma_devtype type;
	} cocci_id/* drivers/dma/mxs-dma.c 150 */;
	struct mxs_dma_engine {
		enum mxs_dma_id dev_id;
		enum mxs_dma_devtype type;
		void __iomem *base;
		struct clk *clk;
		struct dma_device dma_device;
		struct device_dma_parameters dma_parms;
		struct mxs_dma_chan mxs_chans[MXS_DMA_CHANNELS];
		struct platform_device *pdev;
		unsigned int nr_channels;
	} cocci_id/* drivers/dma/mxs-dma.c 138 */;
	enum mxs_dma_id{IMX23_DMA, IMX28_DMA,} cocci_id/* drivers/dma/mxs-dma.c 133 */;
	enum mxs_dma_devtype{MXS_DMA_APBH, MXS_DMA_APBX,} cocci_id/* drivers/dma/mxs-dma.c 128 */;
	struct mxs_dma_chan {
		struct mxs_dma_engine *mxs_dma;
		struct dma_chan chan;
		struct dma_async_tx_descriptor desc;
		struct tasklet_struct tasklet;
		unsigned int chan_irq;
		struct mxs_dma_ccw *ccw;
		dma_addr_t ccw_phys;
		int desc_count;
		enum dma_status status;
		unsigned int flags;
		bool reset;
#define MXS_DMA_SG_LOOP (1 << 0)
#define MXS_DMA_USE_SEMAPHORE (1 << 1)
			} cocci_id/* drivers/dma/mxs-dma.c 109 */;
	struct mxs_dma_ccw cocci_id/* drivers/dma/mxs-dma.c 107 */;
}
