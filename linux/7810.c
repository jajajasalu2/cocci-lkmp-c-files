cocci_test_suite() {
	struct ntb_transport_qp cocci_id/* drivers/ntb/ntb_transport.c 954 */;
	struct work_struct *cocci_id/* drivers/ntb/ntb_transport.c 951 */;
	unsigned int cocci_id/* drivers/ntb/ntb_transport.c 88 */;
	resource_size_t cocci_id/* drivers/ntb/ntb_transport.c 856 */;
	unsigned char cocci_id/* drivers/ntb/ntb_transport.c 84 */;
	void *cocci_id/* drivers/ntb/ntb_transport.c 815 */;
	dma_addr_t cocci_id/* drivers/ntb/ntb_transport.c 814 */;
	struct device *cocci_id/* drivers/ntb/ntb_transport.c 812 */;
	struct ntb_transport_mw *cocci_id/* drivers/ntb/ntb_transport.c 811 */;
	int cocci_id/* drivers/ntb/ntb_transport.c 811 */;
	struct pci_dev *cocci_id/* drivers/ntb/ntb_transport.c 796 */;
	unsigned long cocci_id/* drivers/ntb/ntb_transport.c 76 */;
	irqreturn_t cocci_id/* drivers/ntb/ntb_transport.c 685 */;
	spinlock_t *cocci_id/* drivers/ntb/ntb_transport.c 564 */;
	struct list_head *cocci_id/* drivers/ntb/ntb_transport.c 564 */;
	const struct file_operations cocci_id/* drivers/ntb/ntb_transport.c 558 */;
	char *cocci_id/* drivers/ntb/ntb_transport.c 469 */;
	struct ntb_transport_qp *cocci_id/* drivers/ntb/ntb_transport.c 468 */;
	loff_t *cocci_id/* drivers/ntb/ntb_transport.c 466 */;
	struct file *cocci_id/* drivers/ntb/ntb_transport.c 465 */;
	char __user *cocci_id/* drivers/ntb/ntb_transport.c 465 */;
	ssize_t cocci_id/* drivers/ntb/ntb_transport.c 465 */;
	size_t cocci_id/* drivers/ntb/ntb_transport.c 465 */;
	struct ntb_transport_client *cocci_id/* drivers/ntb/ntb_transport.c 440 */;
	struct ntb_transport_client_dev *cocci_id/* drivers/ntb/ntb_transport.c 336 */;
	struct ntb_transport_ctx *cocci_id/* drivers/ntb/ntb_transport.c 328 */;
	struct bus_type cocci_id/* drivers/ntb/ntb_transport.c 319 */;
	const struct ntb_transport_client *cocci_id/* drivers/ntb/ntb_transport.c 294 */;
	struct device_driver *cocci_id/* drivers/ntb/ntb_transport.c 287 */;
	void cocci_id/* drivers/ntb/ntb_transport.c 283 */(struct ntb_queue_entry *entry,
							   void *offset);
	int cocci_id/* drivers/ntb/ntb_transport.c 282 */(struct ntb_queue_entry *entry,
							  void *offset);
	void cocci_id/* drivers/ntb/ntb_transport.c 281 */(struct ntb_queue_entry *entry,
							   void __iomem *offset);
	int cocci_id/* drivers/ntb/ntb_transport.c 279 */(struct ntb_transport_qp *qp,
							  struct ntb_queue_entry *entry);
	struct ntb_client cocci_id/* drivers/ntb/ntb_transport.c 278 */;
	const struct ntb_ctx_ops cocci_id/* drivers/ntb/ntb_transport.c 277 */;
	void cocci_id/* drivers/ntb/ntb_transport.c 276 */(unsigned long data);
	struct ntb_transport_client cocci_id/* drivers/ntb/ntb_transport.c 270 */;
	struct ntb_transport_client_dev cocci_id/* drivers/ntb/ntb_transport.c 267 */;
	enum{VERSION=0, QP_LINKS, NUM_QPS, NUM_MWS, MW0_SZ_HIGH, MW0_SZ_LOW,} cocci_id/* drivers/ntb/ntb_transport.c 257 */;
	struct ntb_payload_header {
		unsigned int ver;
		unsigned int len;
		unsigned int flags;
	} cocci_id/* drivers/ntb/ntb_transport.c 251 */;
	void __exit cocci_id/* drivers/ntb/ntb_transport.c 2492 */;
	int __init cocci_id/* drivers/ntb/ntb_transport.c 2465 */;
	enum{DESC_DONE_FLAG=BIT(0), LINK_DOWN_FLAG=BIT(1),} cocci_id/* drivers/ntb/ntb_transport.c 246 */;
	struct ntb_transport_ctx {
		struct list_head entry;
		struct list_head client_devs;
		struct ntb_dev *ndev;
		struct ntb_transport_mw *mw_vec;
		struct ntb_transport_qp *qp_vec;
		unsigned int mw_count;
		unsigned int qp_count;
		u64 qp_bitmap;
		u64 qp_bitmap_free;
		bool use_msi;
		unsigned int msi_spad_offset;
		u64 msi_db_mask;
		bool link_is_up;
		struct delayed_work link_work;
		struct work_struct link_cleanup;
		struct dentry *debugfs_node_dir;
	} cocci_id/* drivers/ntb/ntb_transport.c 222 */;
	unsigned int *cocci_id/* drivers/ntb/ntb_transport.c 2200 */;
	struct ntb_transport_client_dev {
		struct list_head entry;
		struct ntb_transport_ctx *nt;
		struct device dev;
	} cocci_id/* drivers/ntb/ntb_transport.c 216 */;
	struct ntb_transport_mw {
		phys_addr_t phys_addr;
		resource_size_t phys_size;
		void __iomem *vbase;
		size_t xlat_size;
		size_t buff_size;
		size_t alloc_size;
		void *alloc_addr;
		void *virt_addr;
		dma_addr_t dma_addr;
	} cocci_id/* drivers/ntb/ntb_transport.c 204 */;
	dma_cap_mask_t cocci_id/* drivers/ntb/ntb_transport.c 1987 */;
	u64 cocci_id/* drivers/ntb/ntb_transport.c 1985 */;
	struct ntb_dev *cocci_id/* drivers/ntb/ntb_transport.c 1980 */;
	const struct ntb_queue_handlers *cocci_id/* drivers/ntb/ntb_transport.c 1978 */;
	bool cocci_id/* drivers/ntb/ntb_transport.c 1957 */;
	u32 cocci_id/* drivers/ntb/ntb_transport.c 1874 */;
	struct ntb_payload_header cocci_id/* drivers/ntb/ntb_transport.c 1870 */;
	void __iomem *cocci_id/* drivers/ntb/ntb_transport.c 1865 */;
	struct ntb_payload_header __iomem *cocci_id/* drivers/ntb/ntb_transport.c 1863 */;
	struct ntb_payload_header *cocci_id/* drivers/ntb/ntb_transport.c 1618 */;
	struct dma_chan *cocci_id/* drivers/ntb/ntb_transport.c 1593 */;
	struct ntb_queue_entry *cocci_id/* drivers/ntb/ntb_transport.c 1590 */;
	void cocci_id/* drivers/ntb/ntb_transport.c 1590 */;
	dma_cookie_t cocci_id/* drivers/ntb/ntb_transport.c 1530 */;
	struct dmaengine_unmap_data *cocci_id/* drivers/ntb/ntb_transport.c 1529 */;
	struct dma_device *cocci_id/* drivers/ntb/ntb_transport.c 1527 */;
	struct dma_async_tx_descriptor *cocci_id/* drivers/ntb/ntb_transport.c 1524 */;
	enum dmaengine_tx_result cocci_id/* drivers/ntb/ntb_transport.c 1480 */;
	const struct dmaengine_result *cocci_id/* drivers/ntb/ntb_transport.c 1474 */;
	struct ntb_queue_entry cocci_id/* drivers/ntb/ntb_transport.c 1450 */;
	struct ntb_client *cocci_id/* drivers/ntb/ntb_transport.c 1403 */;
	struct ntb_transport_qp {
		struct ntb_transport_ctx *transport;
		struct ntb_dev *ndev;
		void *cb_data;
		struct dma_chan *tx_dma_chan;
		struct dma_chan *rx_dma_chan;
		bool client_ready;
		bool link_is_up;
		bool active;
		u8 qp_num;
		u64 qp_bit;
		struct ntb_rx_info __iomem *rx_info;
		struct ntb_rx_info *remote_rx_info;
		void (*tx_handler)(struct ntb_transport_qp *qp, void *qp_data,
				   void *data, int len);
		struct list_head tx_free_q;
		spinlock_t ntb_tx_free_q_lock;
		void __iomem *tx_mw;
		phys_addr_t tx_mw_phys;
		size_t tx_mw_size;
		dma_addr_t tx_mw_dma_addr;
		unsigned int tx_index;
		unsigned int tx_max_entry;
		unsigned int tx_max_frame;
		void (*rx_handler)(struct ntb_transport_qp *qp, void *qp_data,
				   void *data, int len);
		struct list_head rx_post_q;
		struct list_head rx_pend_q;
		struct list_head rx_free_q;
		spinlock_t ntb_rx_q_lock;
		void *rx_buff;
		unsigned int rx_index;
		unsigned int rx_max_entry;
		unsigned int rx_max_frame;
		unsigned int rx_alloc_entry;
		dma_cookie_t last_cookie;
		struct tasklet_struct rxc_db_work;
		void (*event_handler)(void *data, int status);
		struct delayed_work link_work;
		struct work_struct link_cleanup;
		struct dentry *debugfs_dir;
		struct dentry *debugfs_stats;
		u64 rx_bytes;
		u64 rx_pkts;
		u64 rx_ring_empty;
		u64 rx_err_no_buf;
		u64 rx_err_oflow;
		u64 rx_err_ver;
		u64 rx_memcpy;
		u64 rx_async;
		u64 tx_bytes;
		u64 tx_pkts;
		u64 tx_ring_full;
		u64 tx_err_no_buf;
		u64 tx_memcpy;
		u64 tx_async;
		bool use_msi;
		int msi_irq;
		struct ntb_msi_desc msi_desc;
		struct ntb_msi_desc peer_msi_desc;
	} cocci_id/* drivers/ntb/ntb_transport.c 131 */;
	struct ntb_rx_info {
		unsigned int entry;
	} cocci_id/* drivers/ntb/ntb_transport.c 127 */;
	char cocci_id/* drivers/ntb/ntb_transport.c 1212 */[4];
	struct ntb_rx_info cocci_id/* drivers/ntb/ntb_transport.c 1204 */;
	phys_addr_t cocci_id/* drivers/ntb/ntb_transport.c 1162 */;
	struct ntb_queue_entry {
		struct list_head entry;
		void *cb_data;
		void *buf;
		unsigned int len;
		unsigned int flags;
		int retries;
		int errors;
		unsigned int tx_index;
		unsigned int rx_index;
		struct ntb_transport_qp *qp;
		union {
			struct ntb_payload_header __iomem *tx_hdr;
			struct ntb_payload_header *rx_hdr;
		};
	} cocci_id/* drivers/ntb/ntb_transport.c 107 */;
	struct dentry *cocci_id/* drivers/ntb/ntb_transport.c 102 */;
	struct ntb_transport_ctx cocci_id/* drivers/ntb/ntb_transport.c 1005 */;
}