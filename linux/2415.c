cocci_test_suite() {
	void __iomem *cocci_id/* drivers/dma/fsl-qdma.c 943 */;
	struct virt_dma_desc *cocci_id/* drivers/dma/fsl-qdma.c 940 */;
	size_t cocci_id/* drivers/dma/fsl-qdma.c 922 */;
	struct dma_async_tx_descriptor *cocci_id/* drivers/dma/fsl-qdma.c 920 */;
	char cocci_id/* drivers/dma/fsl-qdma.c 757 */[20];
	unsigned int cocci_id/* drivers/dma/fsl-qdma.c 700 */;
	irqreturn_t cocci_id/* drivers/dma/fsl-qdma.c 698 */;
	void *cocci_id/* drivers/dma/fsl-qdma.c 698 */;
	struct fsl_qdma_comp cocci_id/* drivers/dma/fsl-qdma.c 656 */;
	bool cocci_id/* drivers/dma/fsl-qdma.c 619 */;
	struct device_node *cocci_id/* drivers/dma/fsl-qdma.c 534 */;
	struct fsl_qdma_format cocci_id/* drivers/dma/fsl-qdma.c 506 */;
	unsigned int cocci_id/* drivers/dma/fsl-qdma.c 475 */[FSL_QDMA_QUEUE_MAX];
	struct platform_device *cocci_id/* drivers/dma/fsl-qdma.c 470 */;
	struct fsl_qdma_format *cocci_id/* drivers/dma/fsl-qdma.c 346 */;
	u32 cocci_id/* drivers/dma/fsl-qdma.c 343 */;
	dma_addr_t cocci_id/* drivers/dma/fsl-qdma.c 343 */;
	struct fsl_qdma_comp *cocci_id/* drivers/dma/fsl-qdma.c 342 */;
	unsigned long cocci_id/* drivers/dma/fsl-qdma.c 298 */;
	struct fsl_qdma_chan cocci_id/* drivers/dma/fsl-qdma.c 284 */;
	u8 cocci_id/* drivers/dma/fsl-qdma.c 231 */;
	const struct fsl_qdma_format *cocci_id/* drivers/dma/fsl-qdma.c 219 */;
	u64 cocci_id/* drivers/dma/fsl-qdma.c 218 */;
	struct fsl_qdma_engine {
		struct dma_device dma_dev;
		void __iomem *ctrl_base;
		void __iomem *status_base;
		void __iomem *block_base;
		u32 n_chans;
		u32 n_queues;
		struct mutex fsl_qdma_mutex;
		int error_irq;
		int *queue_irq;
		u32 feature;
		struct fsl_qdma_queue *queue;
		struct fsl_qdma_queue **status;
		struct fsl_qdma_chan *chans;
		int block_number;
		int block_offset;
		int irq_base;
		int desc_allocated;
	} cocci_id/* drivers/dma/fsl-qdma.c 197 */;
	struct fsl_qdma_comp {
		dma_addr_t bus_addr;
		dma_addr_t desc_bus_addr;
		struct fsl_qdma_format *virt_addr;
		struct fsl_qdma_format *desc_virt_addr;
		struct fsl_qdma_chan *qchan;
		struct virt_dma_desc vdesc;
		struct list_head list;
	} cocci_id/* drivers/dma/fsl-qdma.c 187 */;
	struct fsl_qdma_queue {
		struct fsl_qdma_format *virt_head;
		struct fsl_qdma_format *virt_tail;
		struct list_head comp_used;
		struct list_head comp_free;
		struct dma_pool *comp_pool;
		struct dma_pool *desc_pool;
		spinlock_t queue_lock;
		dma_addr_t bus_addr;
		u32 n_cq;
		u32 id;
		struct fsl_qdma_format *cq;
		void __iomem *block_base;
	} cocci_id/* drivers/dma/fsl-qdma.c 172 */;
	struct fsl_qdma_chan {
		struct virt_dma_chan vchan;
		struct virt_dma_desc vdesc;
		enum dma_status status;
		struct fsl_qdma_engine *qdma;
		struct fsl_qdma_queue *queue;
	} cocci_id/* drivers/dma/fsl-qdma.c 164 */;
	struct fsl_pre_status {
		u64 addr;
		u8 queue;
	} cocci_id/* drivers/dma/fsl-qdma.c 157 */;
	struct fsl_qdma_format {
		__le32 status;
		__le32 cfg;
		union {
			struct {
				__le32 addr_lo;
				u8 addr_hi;
				u8 __reserved1[2];
				u8 cfg8b_w1;
			}__packed;
			__le64 data;
		};
	}__packed cocci_id/* drivers/dma/fsl-qdma.c 142 */;
	struct platform_driver cocci_id/* drivers/dma/fsl-qdma.c 1244 */;
	const struct of_device_id cocci_id/* drivers/dma/fsl-qdma.c 1238 */[];
	struct dma_device *cocci_id/* drivers/dma/fsl-qdma.c 1207 */;
	void cocci_id/* drivers/dma/fsl-qdma.c 1207 */;
	struct resource *cocci_id/* drivers/dma/fsl-qdma.c 1071 */;
	struct fsl_qdma_queue *cocci_id/* drivers/dma/fsl-qdma.c 1020 */;
	struct fsl_qdma_engine *cocci_id/* drivers/dma/fsl-qdma.c 1019 */;
	struct fsl_qdma_chan *cocci_id/* drivers/dma/fsl-qdma.c 1018 */;
	struct dma_chan *cocci_id/* drivers/dma/fsl-qdma.c 1015 */;
	int cocci_id/* drivers/dma/fsl-qdma.c 1015 */;
	__typeof__(struct fsl_pre_status) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
}
