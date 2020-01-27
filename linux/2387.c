cocci_test_suite() {
	void *cocci_id/* drivers/dma/xilinx/xilinx_dma.c 987 */;
	dma_async_tx_callback cocci_id/* drivers/dma/xilinx/xilinx_dma.c 986 */;
	unsigned long *cocci_id/* drivers/dma/xilinx/xilinx_dma.c 984 */;
	struct list_head *cocci_id/* drivers/dma/xilinx/xilinx_dma.c 864 */;
	struct xilinx_aximcdma_desc_hw cocci_id/* drivers/dma/xilinx/xilinx_dma.c 736 */;
	struct xilinx_axidma_desc_hw cocci_id/* drivers/dma/xilinx/xilinx_dma.c 725 */;
	struct xilinx_aximcdma_tx_segment cocci_id/* drivers/dma/xilinx/xilinx_dma.c 711 */;
	struct xilinx_aximcdma_tx_segment *cocci_id/* drivers/dma/xilinx/xilinx_dma.c 702 */;
	unsigned long cocci_id/* drivers/dma/xilinx/xilinx_dma.c 679 */;
	struct xilinx_aximcdma_desc_hw *cocci_id/* drivers/dma/xilinx/xilinx_dma.c 612 */;
	dma_addr_t cocci_id/* drivers/dma/xilinx/xilinx_dma.c 599 */;
	size_t cocci_id/* drivers/dma/xilinx/xilinx_dma.c 599 */;
	struct xilinx_axidma_desc_hw *cocci_id/* drivers/dma/xilinx/xilinx_dma.c 598 */;
	u64 cocci_id/* drivers/dma/xilinx/xilinx_dma.c 583 */;
	struct xilinx_dma_chan cocci_id/* drivers/dma/xilinx/xilinx_dma.c 515 */;
	struct xilinx_dma_device {
		void __iomem *regs;
		struct device *dev;
		struct dma_device common;
		struct xilinx_dma_chan *chan[XILINX_DMA_MAX_CHANS_PER_DEVICE];
		u32 flush_on_fsync;
		bool ext_addr;
		struct platform_device *pdev;
		const struct xilinx_dma_config *dma_config;
		struct clk *axi_clk;
		struct clk *tx_clk;
		struct clk *txs_clk;
		struct clk *rx_clk;
		struct clk *rxs_clk;
		u32 nr_channels;
		u32 chan_id;
		u32 max_buffer_len;
		u32 s2mm_index;
	} cocci_id/* drivers/dma/xilinx/xilinx_dma.c 493 */;
	struct xilinx_dma_config {
		enum xdma_ip_type dmatype;
		int (*clk_init)(struct platform_device *pdev,
				struct clk **axi_clk, struct clk **tx_clk,
				struct clk **txs_clk, struct clk **rx_clk,
				struct clk **rxs_clk);
		irqreturn_t (*irq_handler)(int irq, void *data);
	} cocci_id/* drivers/dma/xilinx/xilinx_dma.c 465 */;
	enum xdma_ip_type{XDMA_TYPE_AXIDMA=0, XDMA_TYPE_CDMA, XDMA_TYPE_VDMA, XDMA_TYPE_AXIMCDMA,} cocci_id/* drivers/dma/xilinx/xilinx_dma.c 458 */;
	struct xilinx_dma_chan {
		struct xilinx_dma_device *xdev;
		u32 ctrl_offset;
		u32 desc_offset;
		spinlock_t lock;
		struct list_head pending_list;
		struct list_head active_list;
		struct list_head done_list;
		struct list_head free_seg_list;
		struct dma_chan common;
		struct dma_pool *desc_pool;
		struct device *dev;
		int irq;
		int id;
		enum dma_transfer_direction direction;
		int num_frms;
		bool has_sg;
		bool cyclic;
		bool genlock;
		bool err;
		bool idle;
		struct tasklet_struct tasklet;
		struct xilinx_vdma_config config;
		bool flush_on_fsync;
		u32 desc_pendingcount;
		bool ext_addr;
		u32 desc_submitcount;
		struct xilinx_axidma_tx_segment *seg_v;
		struct xilinx_aximcdma_tx_segment *seg_mv;
		dma_addr_t seg_p;
		struct xilinx_axidma_tx_segment *cyclic_seg_v;
		dma_addr_t cyclic_seg_p;
		void (*start_transfer)(struct xilinx_dma_chan *chan);
		int (*stop_transfer)(struct xilinx_dma_chan *chan);
		u16 tdest;
		bool has_vflip;
	} cocci_id/* drivers/dma/xilinx/xilinx_dma.c 411 */;
	struct xilinx_dma_tx_descriptor {
		struct dma_async_tx_descriptor async_tx;
		struct list_head segments;
		struct list_head node;
		bool cyclic;
		bool err;
		u32 residue;
	} cocci_id/* drivers/dma/xilinx/xilinx_dma.c 364 */;
	struct xilinx_cdma_tx_segment {
		struct xilinx_cdma_desc_hw hw;
		struct list_head node;
		dma_addr_t phys;
	}__aligned(64) cocci_id/* drivers/dma/xilinx/xilinx_dma.c 349 */;
	struct xilinx_aximcdma_tx_segment {
		struct xilinx_aximcdma_desc_hw hw;
		struct list_head node;
		dma_addr_t phys;
	}__aligned(64) cocci_id/* drivers/dma/xilinx/xilinx_dma.c 337 */;
	struct xilinx_axidma_tx_segment {
		struct xilinx_axidma_desc_hw hw;
		struct list_head node;
		dma_addr_t phys;
	}__aligned(64) cocci_id/* drivers/dma/xilinx/xilinx_dma.c 325 */;
	struct platform_driver cocci_id/* drivers/dma/xilinx/xilinx_dma.c 3168 */;
	struct xilinx_vdma_tx_segment {
		struct xilinx_vdma_desc_hw hw;
		struct list_head node;
		dma_addr_t phys;
	}__aligned(64) cocci_id/* drivers/dma/xilinx/xilinx_dma.c 313 */;
	const struct of_device_id *cocci_id/* drivers/dma/xilinx/xilinx_dma.c 2993 */;
	int (*cocci_id/* drivers/dma/xilinx/xilinx_dma.c 2977 */)(struct platform_device *,
								  struct clk **,
								  struct clk **,
								  struct clk **,
								  struct clk **,
								  struct clk **);
	const struct of_device_id cocci_id/* drivers/dma/xilinx/xilinx_dma.c 2960 */[];
	struct xilinx_cdma_desc_hw {
		u32 next_desc;
		u32 next_desc_msb;
		u32 src_addr;
		u32 src_addr_msb;
		u32 dest_addr;
		u32 dest_addr_msb;
		u32 control;
		u32 status;
	}__aligned(64) cocci_id/* drivers/dma/xilinx/xilinx_dma.c 296 */;
	const struct xilinx_dma_config cocci_id/* drivers/dma/xilinx/xilinx_dma.c 2948 */;
	struct xilinx_dma_device *cocci_id/* drivers/dma/xilinx/xilinx_dma.c 2928 */;
	struct of_dma *cocci_id/* drivers/dma/xilinx/xilinx_dma.c 2926 */;
	struct of_phandle_args *cocci_id/* drivers/dma/xilinx/xilinx_dma.c 2925 */;
	struct dma_chan *cocci_id/* drivers/dma/xilinx/xilinx_dma.c 2925 */;
	bool cocci_id/* drivers/dma/xilinx/xilinx_dma.c 2741 */;
	struct device_node *cocci_id/* drivers/dma/xilinx/xilinx_dma.c 2738 */;
	struct xilinx_aximcdma_desc_hw {
		u32 next_desc;
		u32 next_desc_msb;
		u32 buf_addr;
		u32 buf_addr_msb;
		u32 rsvd;
		u32 control;
		u32 status;
		u32 sideband_status;
		u32 app[XILINX_DMA_NUM_APP_WORDS];
	}__aligned(64) cocci_id/* drivers/dma/xilinx/xilinx_dma.c 273 */;
	struct platform_device *cocci_id/* drivers/dma/xilinx/xilinx_dma.c 2593 */;
	struct clk **cocci_id/* drivers/dma/xilinx/xilinx_dma.c 2593 */;
	int cocci_id/* drivers/dma/xilinx/xilinx_dma.c 2593 */;
	struct xilinx_axidma_desc_hw {
		u32 next_desc;
		u32 next_desc_msb;
		u32 buf_addr;
		u32 buf_addr_msb;
		u32 reserved1;
		u32 reserved2;
		u32 control;
		u32 status;
		u32 app[XILINX_DMA_NUM_APP_WORDS];
	}__aligned(64) cocci_id/* drivers/dma/xilinx/xilinx_dma.c 249 */;
	struct xilinx_vdma_config *cocci_id/* drivers/dma/xilinx/xilinx_dma.c 2449 */;
	struct xilinx_vdma_desc_hw {
		u32 next_desc;
		u32 pad1;
		u32 buf_addr;
		u32 buf_addr_msb;
		u32 vsize;
		u32 hsize;
		u32 stride;
	}__aligned(64) cocci_id/* drivers/dma/xilinx/xilinx_dma.c 227 */;
	unsigned int cocci_id/* drivers/dma/xilinx/xilinx_dma.c 2210 */;
	enum dma_transfer_direction cocci_id/* drivers/dma/xilinx/xilinx_dma.c 2203 */;
	u32 *cocci_id/* drivers/dma/xilinx/xilinx_dma.c 2110 */;
	struct scatterlist *cocci_id/* drivers/dma/xilinx/xilinx_dma.c 2103 */;
	struct xilinx_cdma_desc_hw *cocci_id/* drivers/dma/xilinx/xilinx_dma.c 2052 */;
	struct dma_async_tx_descriptor *cocci_id/* drivers/dma/xilinx/xilinx_dma.c 2045 */;
	struct xilinx_vdma_desc_hw *cocci_id/* drivers/dma/xilinx/xilinx_dma.c 1970 */;
	struct dma_interleaved_template *cocci_id/* drivers/dma/xilinx/xilinx_dma.c 1964 */;
	struct xilinx_axidma_tx_segment cocci_id/* drivers/dma/xilinx/xilinx_dma.c 1889 */;
	struct xilinx_cdma_tx_segment cocci_id/* drivers/dma/xilinx/xilinx_dma.c 1884 */;
	u32 cocci_id/* drivers/dma/xilinx/xilinx_dma.c 1881 */;
	struct xilinx_vdma_tx_segment cocci_id/* drivers/dma/xilinx/xilinx_dma.c 1879 */;
	struct xilinx_dma_tx_descriptor cocci_id/* drivers/dma/xilinx/xilinx_dma.c 1876 */;
	struct xilinx_cdma_tx_segment *cocci_id/* drivers/dma/xilinx/xilinx_dma.c 1866 */;
	struct xilinx_axidma_tx_segment *cocci_id/* drivers/dma/xilinx/xilinx_dma.c 1865 */;
	struct xilinx_vdma_tx_segment *cocci_id/* drivers/dma/xilinx/xilinx_dma.c 1863 */;
	struct xilinx_dma_tx_descriptor *cocci_id/* drivers/dma/xilinx/xilinx_dma.c 1861 */;
	struct xilinx_dma_chan *cocci_id/* drivers/dma/xilinx/xilinx_dma.c 1860 */;
	void cocci_id/* drivers/dma/xilinx/xilinx_dma.c 1860 */;
	irqreturn_t cocci_id/* drivers/dma/xilinx/xilinx_dma.c 1798 */;
	struct dma_tx_state *cocci_id/* drivers/dma/xilinx/xilinx_dma.c 1219 */;
	dma_cookie_t cocci_id/* drivers/dma/xilinx/xilinx_dma.c 1218 */;
	enum dma_status cocci_id/* drivers/dma/xilinx/xilinx_dma.c 1217 */;
	struct dmaengine_result cocci_id/* drivers/dma/xilinx/xilinx_dma.c 1010 */;
}
