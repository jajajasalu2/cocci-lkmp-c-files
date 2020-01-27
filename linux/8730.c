cocci_test_suite() {
	u8 *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_hw.c 867 */;
	const char *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_hw.c 848 */;
	struct qed_ptt_pool *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_hw.c 72 */;
	struct dmae_cmd *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_hw.c 710 */;
	u16 cocci_id/* drivers/net/ethernet/qlogic/qed/qed_hw.c 709 */;
	dma_addr_t cocci_id/* drivers/net/ethernet/qlogic/qed/qed_hw.c 708 */;
	struct qed_dmae_params *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_hw.c 706 */;
	u32 cocci_id/* drivers/net/ethernet/qlogic/qed/qed_hw.c 705 */;
	u8 cocci_id/* drivers/net/ethernet/qlogic/qed/qed_hw.c 704 */;
	u64 cocci_id/* drivers/net/ethernet/qlogic/qed/qed_hw.c 703 */;
	struct qed_ptt *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_hw.c 702 */;
	struct qed_hwfn *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_hw.c 701 */;
	int cocci_id/* drivers/net/ethernet/qlogic/qed/qed_hw.c 701 */;
	uintptr_t cocci_id/* drivers/net/ethernet/qlogic/qed/qed_hw.c 658 */;
	void *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_hw.c 658 */;
	struct qed_ptt_pool {
		struct list_head free_list;
		spinlock_t lock;
		struct qed_ptt ptts[PXP_EXTERNAL_BAR_PF_WINDOW_NUM];
	} cocci_id/* drivers/net/ethernet/qlogic/qed/qed_hw.c 64 */;
	void cocci_id/* drivers/net/ethernet/qlogic/qed/qed_hw.c 571 */;
	struct qed_ptt {
		struct list_head list_entry;
		unsigned int idx;
		struct pxp_ptt_entry pxp;
		u8 hwfn_id;
	} cocci_id/* drivers/net/ethernet/qlogic/qed/qed_hw.c 57 */;
	struct dmae_cmd cocci_id/* drivers/net/ethernet/qlogic/qed/qed_hw.c 551 */;
	u32 **cocci_id/* drivers/net/ethernet/qlogic/qed/qed_hw.c 541 */;
	struct dmae_cmd **cocci_id/* drivers/net/ethernet/qlogic/qed/qed_hw.c 540 */;
	dma_addr_t *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_hw.c 539 */;
	u32 *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_hw.c 524 */;
	const u8 cocci_id/* drivers/net/ethernet/qlogic/qed/qed_hw.c 399 */;
	struct pxp_ptt_entry cocci_id/* drivers/net/ethernet/qlogic/qed/qed_hw.c 326 */;
	unsigned long cocci_id/* drivers/net/ethernet/qlogic/qed/qed_hw.c 289 */;
	size_t cocci_id/* drivers/net/ethernet/qlogic/qed/qed_hw.c 285 */;
	u32 __iomem *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_hw.c 257 */;
	bool cocci_id/* drivers/net/ethernet/qlogic/qed/qed_hw.c 253 */;
	enum reserved_ptts cocci_id/* drivers/net/ethernet/qlogic/qed/qed_hw.c 214 */;
	struct qed_ptt cocci_id/* drivers/net/ethernet/qlogic/qed/qed_hw.c 123 */;
	unsigned int cocci_id/* drivers/net/ethernet/qlogic/qed/qed_hw.c 115 */;
}
