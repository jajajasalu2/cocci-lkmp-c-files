cocci_test_suite() {
	struct netup_dma_regs {
		__le32 ctrlstat_set;
		__le32 ctrlstat_clear;
		__le32 start_addr_lo;
		__le32 start_addr_hi;
		__le32 size;
		__le32 timeout;
		__le32 curr_addr_lo;
		__le32 curr_addr_hi;
		__le32 stat_pkt_received;
		__le32 stat_pkt_accepted;
		__le32 stat_pkt_overruns;
		__le32 stat_pkt_underruns;
		__le32 stat_fifo_overruns;
	}__packed __aligned(1) cocci_id/* drivers/media/pci/netup_unidvb/netup_unidvb_core.c 89 */;
	u8 cocci_id/* drivers/media/pci/netup_unidvb/netup_unidvb_core.c 775 */;
	const struct pci_device_id *cocci_id/* drivers/media/pci/netup_unidvb/netup_unidvb_core.c 773 */;
	const char *const*cocci_id/* drivers/media/pci/netup_unidvb/netup_unidvb_core.c 758 */;
	const char *constcocci_id/* drivers/media/pci/netup_unidvb/netup_unidvb_core.c 755 */[];
	struct pci_dev *cocci_id/* drivers/media/pci/netup_unidvb/netup_unidvb_core.c 716 */;
	struct netup_unidvb_dev *cocci_id/* drivers/media/pci/netup_unidvb/netup_unidvb_core.c 715 */;
	struct netup_dma_regs __iomem *cocci_id/* drivers/media/pci/netup_unidvb/netup_unidvb_core.c 670 */;
	u8 __iomem *cocci_id/* drivers/media/pci/netup_unidvb/netup_unidvb_core.c 667 */;
	unsigned long long cocci_id/* drivers/media/pci/netup_unidvb/netup_unidvb_core.c 665 */;
	dma_addr_t cocci_id/* drivers/media/pci/netup_unidvb/netup_unidvb_core.c 661 */;
	struct timer_list *cocci_id/* drivers/media/pci/netup_unidvb/netup_unidvb_core.c 632 */;
	struct netup_dma cocci_id/* drivers/media/pci/netup_unidvb/netup_unidvb_core.c 575 */;
	struct work_struct *cocci_id/* drivers/media/pci/netup_unidvb/netup_unidvb_core.c 573 */;
	u8 *cocci_id/* drivers/media/pci/netup_unidvb/netup_unidvb_core.c 537 */;
	u8 cocci_id/* drivers/media/pci/netup_unidvb/netup_unidvb_core.c 383 */[32];
	struct vb2_dvb_frontend *cocci_id/* drivers/media/pci/netup_unidvb/netup_unidvb_core.c 382 */[2];
	struct vb2_queue *cocci_id/* drivers/media/pci/netup_unidvb/netup_unidvb_core.c 357 */;
	const struct vb2_ops cocci_id/* drivers/media/pci/netup_unidvb/netup_unidvb_core.c 348 */;
	unsigned int cocci_id/* drivers/media/pci/netup_unidvb/netup_unidvb_core.c 330 */;
	void cocci_id/* drivers/media/pci/netup_unidvb/netup_unidvb_core.c 315 */;
	struct netup_unidvb_buffer cocci_id/* drivers/media/pci/netup_unidvb/netup_unidvb_core.c 308 */;
	struct netup_unidvb_buffer *cocci_id/* drivers/media/pci/netup_unidvb/netup_unidvb_core.c 307 */;
	struct vb2_v4l2_buffer *cocci_id/* drivers/media/pci/netup_unidvb/netup_unidvb_core.c 306 */;
	struct vb2_buffer *cocci_id/* drivers/media/pci/netup_unidvb/netup_unidvb_core.c 303 */;
	int cocci_id/* drivers/media/pci/netup_unidvb/netup_unidvb_core.c 303 */;
	struct device *cocci_id/* drivers/media/pci/netup_unidvb/netup_unidvb_core.c 288 */[];
	unsigned int cocci_id/* drivers/media/pci/netup_unidvb/netup_unidvb_core.c 287 */[];
	unsigned int *cocci_id/* drivers/media/pci/netup_unidvb/netup_unidvb_core.c 285 */;
	void *cocci_id/* drivers/media/pci/netup_unidvb/netup_unidvb_core.c 247 */;
	struct device *cocci_id/* drivers/media/pci/netup_unidvb/netup_unidvb_core.c 210 */;
	unsigned long cocci_id/* drivers/media/pci/netup_unidvb/netup_unidvb_core.c 209 */;
	u32 cocci_id/* drivers/media/pci/netup_unidvb/netup_unidvb_core.c 208 */;
	u64 cocci_id/* drivers/media/pci/netup_unidvb/netup_unidvb_core.c 207 */;
	irqreturn_t cocci_id/* drivers/media/pci/netup_unidvb/netup_unidvb_core.c 205 */;
	struct netup_dma *cocci_id/* drivers/media/pci/netup_unidvb/netup_unidvb_core.c 205 */;
	u16 cocci_id/* drivers/media/pci/netup_unidvb/netup_unidvb_core.c 170 */;
	struct lnbh25_config cocci_id/* drivers/media/pci/netup_unidvb/netup_unidvb_core.c 137 */;
	struct helene_config cocci_id/* drivers/media/pci/netup_unidvb/netup_unidvb_core.c 131 */;
	struct ascot2e_config cocci_id/* drivers/media/pci/netup_unidvb/netup_unidvb_core.c 126 */;
	struct horus3a_config cocci_id/* drivers/media/pci/netup_unidvb/netup_unidvb_core.c 120 */;
	struct cxd2841er_config cocci_id/* drivers/media/pci/netup_unidvb/netup_unidvb_core.c 114 */;
	void cocci_id/* drivers/media/pci/netup_unidvb/netup_unidvb_core.c 112 */(struct netup_dma *dma);
	int cocci_id/* drivers/media/pci/netup_unidvb/netup_unidvb_core.c 111 */(void *priv,
										 int is_dvb_tc);
	struct netup_unidvb_buffer {
		struct vb2_v4l2_buffer vb;
		struct list_head list;
		u32 size;
	} cocci_id/* drivers/media/pci/netup_unidvb/netup_unidvb_core.c 105 */;
	struct pci_driver cocci_id/* drivers/media/pci/netup_unidvb/netup_unidvb_core.c 1014 */;
	const struct pci_device_id cocci_id/* drivers/media/pci/netup_unidvb/netup_unidvb_core.c 1007 */[];
}
