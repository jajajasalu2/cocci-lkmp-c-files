cocci_test_suite() {
	void *cocci_id/* drivers/scsi/fnic/vnic_dev.c 941 */;
	struct vnic_dev cocci_id/* drivers/scsi/fnic/vnic_dev.c 920 */;
	struct pci_dev *cocci_id/* drivers/scsi/fnic/vnic_dev.c 917 */;
	struct vnic_resource __iomem *cocci_id/* drivers/scsi/fnic/vnic_dev.c 91 */;
	struct vnic_resource_header __iomem *cocci_id/* drivers/scsi/fnic/vnic_dev.c 90 */;
	enum vnic_dev_intr_mode cocci_id/* drivers/scsi/fnic/vnic_dev.c 883 */;
	struct vnic_dev_bar *cocci_id/* drivers/scsi/fnic/vnic_dev.c 88 */;
	struct vnic_devcmd_notify cocci_id/* drivers/scsi/fnic/vnic_dev.c 798 */;
	u32 *cocci_id/* drivers/scsi/fnic/vnic_dev.c 797 */;
	struct vnic_resource cocci_id/* drivers/scsi/fnic/vnic_dev.c 79 */;
	struct vnic_resource_header cocci_id/* drivers/scsi/fnic/vnic_dev.c 78 */;
	u16 cocci_id/* drivers/scsi/fnic/vnic_dev.c 763 */;
	int cocci_id/* drivers/scsi/fnic/vnic_dev.c 736 */;
	u64 cocci_id/* drivers/scsi/fnic/vnic_dev.c 735 */;
	u8 *cocci_id/* drivers/scsi/fnic/vnic_dev.c 733 */;
	struct vnic_dev *cocci_id/* drivers/scsi/fnic/vnic_dev.c 733 */;
	void cocci_id/* drivers/scsi/fnic/vnic_dev.c 733 */;
	int *cocci_id/* drivers/scsi/fnic/vnic_dev.c 648 */;
	struct vnic_stats cocci_id/* drivers/scsi/fnic/vnic_dev.c 608 */;
	struct vnic_stats **cocci_id/* drivers/scsi/fnic/vnic_dev.c 601 */;
	u16 *cocci_id/* drivers/scsi/fnic/vnic_dev.c 578 */;
	struct vnic_devcmd_fw_info cocci_id/* drivers/scsi/fnic/vnic_dev.c 545 */;
	struct vnic_dev {
		void *priv;
		struct pci_dev *pdev;
		struct vnic_res res[RES_TYPE_MAX];
		enum vnic_dev_intr_mode intr_mode;
		struct vnic_devcmd __iomem *devcmd;
		struct vnic_devcmd_notify *notify;
		struct vnic_devcmd_notify notify_copy;
		dma_addr_t notify_pa;
		u32 *linkstatus;
		dma_addr_t linkstatus_pa;
		struct vnic_stats *stats;
		dma_addr_t stats_pa;
		struct vnic_devcmd_fw_info *fw_info;
		dma_addr_t fw_info_pa;
		enum vnic_proxy_type proxy;
		u32 proxy_index;
		u64 args[VNIC_DEVCMD_NARGS];
		struct devcmd2_controller *devcmd2;
		int (*devcmd_rtn)(struct vnic_dev *vdev,
				  enum vnic_devcmd_cmd cmd, int wait);
	} cocci_id/* drivers/scsi/fnic/vnic_dev.c 54 */;
	struct vnic_devcmd_fw_info **cocci_id/* drivers/scsi/fnic/vnic_dev.c 537 */;
	u64 *cocci_id/* drivers/scsi/fnic/vnic_dev.c 524 */;
	enum vnic_devcmd_cmd cocci_id/* drivers/scsi/fnic/vnic_dev.c 523 */;
	struct vnic_res {
		void __iomem *vaddr;
		unsigned int count;
	} cocci_id/* drivers/scsi/fnic/vnic_dev.c 49 */;
	struct vnic_devcmd2 *cocci_id/* drivers/scsi/fnic/vnic_dev.c 468 */;
	enum vnic_proxy_type{PROXY_NONE, PROXY_BY_BDF, PROXY_BY_INDEX,} cocci_id/* drivers/scsi/fnic/vnic_dev.c 43 */;
	u8 cocci_id/* drivers/scsi/fnic/vnic_dev.c 324 */;
	struct devcmd2_result *cocci_id/* drivers/scsi/fnic/vnic_dev.c 323 */;
	struct devcmd2_controller *cocci_id/* drivers/scsi/fnic/vnic_dev.c 322 */;
	struct devcmd2_controller {
		struct vnic_wq_ctrl *wq_ctrl;
		struct vnic_dev_ring results_ring;
		struct vnic_wq wq;
		struct vnic_devcmd2 *cmd_ring;
		struct devcmd2_result *result;
		u16 next_result;
		u16 result_size;
		int color;
	} cocci_id/* drivers/scsi/fnic/vnic_dev.c 32 */;
	const int cocci_id/* drivers/scsi/fnic/vnic_dev.c 262 */[];
	u32 cocci_id/* drivers/scsi/fnic/vnic_dev.c 261 */;
	struct vnic_devcmd __iomem *cocci_id/* drivers/scsi/fnic/vnic_dev.c 259 */;
	unsigned int cocci_id/* drivers/scsi/fnic/vnic_dev.c 219 */;
	struct vnic_dev_ring *cocci_id/* drivers/scsi/fnic/vnic_dev.c 218 */;
	enum vnic_res_type cocci_id/* drivers/scsi/fnic/vnic_dev.c 167 */;
	void __iomem *cocci_id/* drivers/scsi/fnic/vnic_dev.c 167 */;
	char __iomem *cocci_id/* drivers/scsi/fnic/vnic_dev.c 155 */;
}
