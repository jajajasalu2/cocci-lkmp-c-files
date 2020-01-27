cocci_test_suite() {
	struct pci_driver cocci_id/* drivers/net/ethernet/marvell/octeontx2/af/cgx.c 926 */;
	const struct pci_device_id *cocci_id/* drivers/net/ethernet/marvell/octeontx2/af/cgx.c 837 */;
	struct pci_dev *cocci_id/* drivers/net/ethernet/marvell/octeontx2/af/cgx.c 837 */;
	struct lmac cocci_id/* drivers/net/ethernet/marvell/octeontx2/af/cgx.c 784 */;
	const struct pci_device_id cocci_id/* drivers/net/ethernet/marvell/octeontx2/af/cgx.c 77 */[];
	struct work_struct *cocci_id/* drivers/net/ethernet/marvell/octeontx2/af/cgx.c 746 */;
	int cocci_id/* drivers/net/ethernet/marvell/octeontx2/af/cgx.c 74 */(struct cgx *cgx,
									     int lmac_id,
									     bool en);
	char *cocci_id/* drivers/net/ethernet/marvell/octeontx2/af/cgx.c 71 */[LMAC_MODE_MAX];
	unsigned long cocci_id/* drivers/net/ethernet/marvell/octeontx2/af/cgx.c 684 */;
	u32 cocci_id/* drivers/net/ethernet/marvell/octeontx2/af/cgx.c 68 */[CGX_LINK_SPEED_MAX];
	struct cgx_event_cb *cocci_id/* drivers/net/ethernet/marvell/octeontx2/af/cgx.c 666 */;
	irqreturn_t cocci_id/* drivers/net/ethernet/marvell/octeontx2/af/cgx.c 615 */;
	void *cocci_id/* drivers/net/ethernet/marvell/octeontx2/af/cgx.c 615 */;
	struct cgx cocci_id/* drivers/net/ethernet/marvell/octeontx2/af/cgx.c 599 */;
	u8 cocci_id/* drivers/net/ethernet/marvell/octeontx2/af/cgx.c 543 */;
	u64 cocci_id/* drivers/net/ethernet/marvell/octeontx2/af/cgx.c 541 */;
	bool cocci_id/* drivers/net/ethernet/marvell/octeontx2/af/cgx.c 541 */;
	struct cgx {
		void __iomem *reg_base;
		struct pci_dev *pdev;
		u8 cgx_id;
		u8 lmac_count;
		struct lmac *lmac_idmap[MAX_LMAC_PER_CGX];
		struct work_struct cgx_cmd_work;
		struct workqueue_struct *cgx_cmd_workq;
		struct list_head cgx_list;
	} cocci_id/* drivers/net/ethernet/marvell/octeontx2/af/cgx.c 54 */;
	struct cgx_link_event cocci_id/* drivers/net/ethernet/marvell/octeontx2/af/cgx.c 503 */;
	char *cocci_id/* drivers/net/ethernet/marvell/octeontx2/af/cgx.c 487 */;
	struct lmac *cocci_id/* drivers/net/ethernet/marvell/octeontx2/af/cgx.c 436 */;
	struct cgx *cocci_id/* drivers/net/ethernet/marvell/octeontx2/af/cgx.c 434 */;
	u64 *cocci_id/* drivers/net/ethernet/marvell/octeontx2/af/cgx.c 433 */;
	int cocci_id/* drivers/net/ethernet/marvell/octeontx2/af/cgx.c 433 */;
	struct lmac {
		wait_queue_head_t wq_cmd_cmplt;
		struct mutex cmd_lock;
		u64 resp;
		struct cgx_link_user_info link_info;
		struct cgx_event_cb event_cb;
		spinlock_t event_cb_lock;
		bool cmd_pend;
		struct cgx *cgx;
		u8 lmac_id;
		char *name;
	} cocci_id/* drivers/net/ethernet/marvell/octeontx2/af/cgx.c 41 */;
	struct device *cocci_id/* drivers/net/ethernet/marvell/octeontx2/af/cgx.c 388 */;
	u8 *cocci_id/* drivers/net/ethernet/marvell/octeontx2/af/cgx.c 179 */;
	struct cgx_link_user_info *cocci_id/* drivers/net/ethernet/marvell/octeontx2/af/cgx.c 157 */;
	void cocci_id/* drivers/net/ethernet/marvell/octeontx2/af/cgx.c 102 */;
}
