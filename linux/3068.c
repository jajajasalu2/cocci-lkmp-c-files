cocci_test_suite() {
	unsigned long long cocci_id/* drivers/block/rsxx/dma.c 90 */;
	u64 cocci_id/* drivers/block/rsxx/dma.c 88 */;
	struct pci_dev *cocci_id/* drivers/block/rsxx/dma.c 803 */;
	struct dma_tracker_list {
		spinlock_t lock;
		int head;
		struct dma_tracker list[0];
	} cocci_id/* drivers/block/rsxx/dma.c 80 */;
	struct dma_tracker cocci_id/* drivers/block/rsxx/dma.c 78 */;
	struct dma_tracker_list cocci_id/* drivers/block/rsxx/dma.c 77 */;
	struct dma_tracker {
		int next_tag;
		struct rsxx_dma *dma;
	} cocci_id/* drivers/block/rsxx/dma.c 72 */;
	struct kmem_cache *cocci_id/* drivers/block/rsxx/dma.c 70 */;
	int cocci_id/* drivers/block/rsxx/dma.c 681 */[RSXX_MAX_TARGETS];
	struct bvec_iter cocci_id/* drivers/block/rsxx/dma.c 674 */;
	struct bio_vec cocci_id/* drivers/block/rsxx/dma.c 673 */;
	struct list_head cocci_id/* drivers/block/rsxx/dma.c 672 */[RSXX_MAX_TARGETS];
	void *cocci_id/* drivers/block/rsxx/dma.c 670 */;
	rsxx_dma_cb cocci_id/* drivers/block/rsxx/dma.c 669 */;
	atomic_t *cocci_id/* drivers/block/rsxx/dma.c 668 */;
	struct bio *cocci_id/* drivers/block/rsxx/dma.c 667 */;
	blk_status_t cocci_id/* drivers/block/rsxx/dma.c 666 */;
	struct page *cocci_id/* drivers/block/rsxx/dma.c 635 */;
	enum rsxx_hw_status{HW_STATUS_CRC=0x01, HW_STATUS_HARD_ERR=0x02, HW_STATUS_SOFT_ERR=0x04, HW_STATUS_FAULT=0x08,} cocci_id/* drivers/block/rsxx/dma.c 63 */;
	struct rsxx_dma_ctrl cocci_id/* drivers/block/rsxx/dma.c 593 */;
	struct work_struct *cocci_id/* drivers/block/rsxx/dma.c 589 */;
	enum rsxx_hw_cmd{HW_CMD_BLK_DISCARD=0x70, HW_CMD_BLK_WRITE=0x80, HW_CMD_BLK_READ=0xC0, HW_CMD_BLK_RECON_READ=0xE0,} cocci_id/* drivers/block/rsxx/dma.c 56 */;
	struct hw_status *cocci_id/* drivers/block/rsxx/dma.c 501 */;
	u8 cocci_id/* drivers/block/rsxx/dma.c 499 */;
	u16 cocci_id/* drivers/block/rsxx/dma.c 498 */;
	unsigned long cocci_id/* drivers/block/rsxx/dma.c 497 */;
	struct hw_cmd {
		u8 command;
		u8 tag;
		u8 _rsvd;
		u8 sub_page;
		__le32 device_addr;
		__le64 host_addr;
	}__packed cocci_id/* drivers/block/rsxx/dma.c 46 */;
	struct rsxx_dma cocci_id/* drivers/block/rsxx/dma.c 409 */;
	enum rsxx_dma_status{DMA_SW_ERR=0x1, DMA_HW_FAULT=0x2, DMA_CANCELLED=0x4,} cocci_id/* drivers/block/rsxx/dma.c 40 */;
	struct hw_cmd *cocci_id/* drivers/block/rsxx/dma.c 387 */;
	int cocci_id/* drivers/block/rsxx/dma.c 346 */;
	struct rsxx_dma_ctrl *cocci_id/* drivers/block/rsxx/dma.c 345 */;
	struct timer_list *cocci_id/* drivers/block/rsxx/dma.c 343 */;
	void cocci_id/* drivers/block/rsxx/dma.c 343 */;
	struct hw_status {
		u8 status;
		u8 tag;
		__le16 count;
		__le32 _rsvd2;
		__le64 _rsvd3;
	}__packed cocci_id/* drivers/block/rsxx/dma.c 32 */;
	struct list_head *cocci_id/* drivers/block/rsxx/dma.c 243 */;
	u32 cocci_id/* drivers/block/rsxx/dma.c 193 */;
	struct rsxx_cardinfo *cocci_id/* drivers/block/rsxx/dma.c 190 */;
	struct rsxx_dma {
		struct list_head list;
		u8 cmd;
		unsigned int laddr;
		struct {
			u32 off;
			u32 cnt;
		} sub_page;
		dma_addr_t dma_addr;
		struct page *page;
		unsigned int pg_off;
		rsxx_dma_cb cb;
		void *cb_data;
	} cocci_id/* drivers/block/rsxx/dma.c 14 */;
	struct dma_tracker_list *cocci_id/* drivers/block/rsxx/dma.c 131 */;
	struct rsxx_dma *cocci_id/* drivers/block/rsxx/dma.c 114 */;
	unsigned int cocci_id/* drivers/block/rsxx/dma.c 114 */;
}
