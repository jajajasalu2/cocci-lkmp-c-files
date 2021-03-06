cocci_test_suite() {
	u32 cocci_id/* drivers/ntb/hw/mscc/ntb_hw_switchtec.c 954 */;
	int *cocci_id/* drivers/ntb/hw/mscc/ntb_hw_switchtec.c 951 */;
	struct ntb_ctrl_regs __iomem *cocci_id/* drivers/ntb/hw/mscc/ntb_hw_switchtec.c 950 */;
	int cocci_id/* drivers/ntb/hw/mscc/ntb_hw_switchtec.c 949 */;
	struct ntb_dev *cocci_id/* drivers/ntb/hw/mscc/ntb_hw_switchtec.c 93 */;
	u64 cocci_id/* drivers/ntb/hw/mscc/ntb_hw_switchtec.c 912 */;
	void *__iomemcocci_id/* drivers/ntb/hw/mscc/ntb_hw_switchtec.c 897 */;
	const struct ntb_dev_ops cocci_id/* drivers/ntb/hw/mscc/ntb_hw_switchtec.c 811 */;
	unsigned long cocci_id/* drivers/ntb/hw/mscc/ntb_hw_switchtec.c 662 */;
	enum ntb_width cocci_id/* drivers/ntb/hw/mscc/ntb_hw_switchtec.c 573 */;
	enum ntb_speed cocci_id/* drivers/ntb/hw/mscc/ntb_hw_switchtec.c 572 */;
	enum ntb_width *cocci_id/* drivers/ntb/hw/mscc/ntb_hw_switchtec.c 559 */;
	enum ntb_speed *cocci_id/* drivers/ntb/hw/mscc/ntb_hw_switchtec.c 558 */;
	enum switchtec_msg cocci_id/* drivers/ntb/hw/mscc/ntb_hw_switchtec.c 542 */;
	struct switchtec_ntb cocci_id/* drivers/ntb/hw/mscc/ntb_hw_switchtec.c 522 */;
	struct switchtec_ntb *cocci_id/* drivers/ntb/hw/mscc/ntb_hw_switchtec.c 520 */;
	struct work_struct *cocci_id/* drivers/ntb/hw/mscc/ntb_hw_switchtec.c 518 */;
	void cocci_id/* drivers/ntb/hw/mscc/ntb_hw_switchtec.c 518 */;
	int cocci_id/* drivers/ntb/hw/mscc/ntb_hw_switchtec.c 487 */(struct switchtec_ntb *sndev);
	enum switchtec_msg{LINK_MESSAGE=0, MSG_LINK_UP=1, MSG_LINK_DOWN=2, MSG_CHECK_LINK=3, MSG_LINK_FORCE_DOWN=4,} cocci_id/* drivers/ntb/hw/mscc/ntb_hw_switchtec.c 479 */;
	struct ntb_info_regs __iomem *cocci_id/* drivers/ntb/hw/mscc/ntb_hw_switchtec.c 455 */;
	struct switchtec_ntb {
		struct ntb_dev ntb;
		struct switchtec_dev *stdev;
		int self_partition;
		int peer_partition;
		int doorbell_irq;
		int message_irq;
		struct ntb_info_regs __iomem *mmio_ntb;
		struct ntb_ctrl_regs __iomem *mmio_ctrl;
		struct ntb_dbmsg_regs __iomem *mmio_dbmsg;
		struct ntb_ctrl_regs __iomem *mmio_self_ctrl;
		struct ntb_ctrl_regs __iomem *mmio_peer_ctrl;
		struct ntb_dbmsg_regs __iomem *mmio_self_dbmsg;
		struct ntb_dbmsg_regs __iomem *mmio_peer_dbmsg;
		void __iomem *mmio_xlink_win;
		struct shared_mw *self_shared;
		struct shared_mw __iomem *peer_shared;
		dma_addr_t self_shared_dma;
		u64 db_mask;
		u64 db_valid_mask;
		int db_shift;
		int db_peer_shift;
		spinlock_t db_mask_lock;
		int nr_direct_mw;
		int nr_lut_mw;
		int nr_rsvd_luts;
		int direct_mw_to_bar[MAX_DIRECT_MW];
		int peer_nr_direct_mw;
		int peer_nr_lut_mw;
		int peer_direct_mw_to_bar[MAX_DIRECT_MW];
		bool link_is_up;
		enum ntb_speed link_speed;
		enum ntb_width link_width;
		struct work_struct check_link_status_work;
		bool link_force_down;
	} cocci_id/* drivers/ntb/hw/mscc/ntb_hw_switchtec.c 45 */;
	struct ntb_ctrl_regs *cocci_id/* drivers/ntb/hw/mscc/ntb_hw_switchtec.c 42 */;
	resource_size_t *cocci_id/* drivers/ntb/hw/mscc/ntb_hw_switchtec.c 351 */;
	phys_addr_t *cocci_id/* drivers/ntb/hw/mscc/ntb_hw_switchtec.c 350 */;
	struct shared_mw {
		u32 magic;
		u32 link_sta;
		u32 partition_id;
		u64 mw_sizes[MAX_MWS];
		u32 spad[128];
	} cocci_id/* drivers/ntb/hw/mscc/ntb_hw_switchtec.c 34 */;
	bool cocci_id/* drivers/ntb/hw/mscc/ntb_hw_switchtec.c 27 */;
	dma_addr_t cocci_id/* drivers/ntb/hw/mscc/ntb_hw_switchtec.c 243 */;
	ulong cocci_id/* drivers/ntb/hw/mscc/ntb_hw_switchtec.c 21 */;
	void __exit cocci_id/* drivers/ntb/hw/mscc/ntb_hw_switchtec.c 1577 */;
	int __init cocci_id/* drivers/ntb/hw/mscc/ntb_hw_switchtec.c 1570 */;
	struct class_interface cocci_id/* drivers/ntb/hw/mscc/ntb_hw_switchtec.c 1565 */;
	struct switchtec_dev *cocci_id/* drivers/ntb/hw/mscc/ntb_hw_switchtec.c 1478 */;
	struct class_interface *cocci_id/* drivers/ntb/hw/mscc/ntb_hw_switchtec.c 1476 */;
	struct device *cocci_id/* drivers/ntb/hw/mscc/ntb_hw_switchtec.c 1475 */;
	irqreturn_t cocci_id/* drivers/ntb/hw/mscc/ntb_hw_switchtec.c 1375 */;
	void *cocci_id/* drivers/ntb/hw/mscc/ntb_hw_switchtec.c 1375 */;
	resource_size_t cocci_id/* drivers/ntb/hw/mscc/ntb_hw_switchtec.c 1307 */;
	int cocci_id/* drivers/ntb/hw/mscc/ntb_hw_switchtec.c 1281 */[2];
	struct ntb_dbmsg_regs cocci_id/* drivers/ntb/hw/mscc/ntb_hw_switchtec.c 1146 */;
	u64 cocci_id/* drivers/ntb/hw/mscc/ntb_hw_switchtec.c 1126 */[6];
	const int cocci_id/* drivers/ntb/hw/mscc/ntb_hw_switchtec.c 1125 */;
	const u64 cocci_id/* drivers/ntb/hw/mscc/ntb_hw_switchtec.c 1096 */;
	struct pff_csr_regs __iomem *cocci_id/* drivers/ntb/hw/mscc/ntb_hw_switchtec.c 1094 */;
	struct part_cfg_regs __iomem *cocci_id/* drivers/ntb/hw/mscc/ntb_hw_switchtec.c 1091 */;
	u64 *cocci_id/* drivers/ntb/hw/mscc/ntb_hw_switchtec.c 1089 */;
	int cocci_id/* drivers/ntb/hw/mscc/ntb_hw_switchtec.c 1067 */[16];
	const char *constcocci_id/* drivers/ntb/hw/mscc/ntb_hw_switchtec.c 102 */[];
	size_t cocci_id/* drivers/ntb/hw/mscc/ntb_hw_switchtec.c 1004 */;
}
