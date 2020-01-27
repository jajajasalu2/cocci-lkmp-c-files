cocci_test_suite() {
	u32 cocci_id/* drivers/net/ethernet/qlogic/qed/qed_int.c 995 */[NUM_ATTN_REGS];
	enum dbg_status cocci_id/* drivers/net/ethernet/qlogic/qed/qed_int.c 876 */;
	struct dbg_attn_block_result cocci_id/* drivers/net/ethernet/qlogic/qed/qed_int.c 875 */;
	enum dbg_attn_type cocci_id/* drivers/net/ethernet/qlogic/qed/qed_int.c 873 */;
	enum block_id cocci_id/* drivers/net/ethernet/qlogic/qed/qed_int.c 872 */;
	u8 __iomem *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_int.c 859 */;
	struct qed_sb_attn_info *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_int.c 813 */;
	u16 cocci_id/* drivers/net/ethernet/qlogic/qed/qed_int.c 812 */;
	struct qed_hwfn *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_int.c 812 */;
	struct qed_sb_attn_info {
		struct atten_status_block *sb_attn;
		dma_addr_t sb_phys;
		u16 index;
		u32 parity_mask[NUM_ATTN_REGS];
		struct aeu_invert_reg *p_aeu_desc;
		u16 known_attn;
		u32 mfw_attn_addr;
	} cocci_id/* drivers/net/ethernet/qlogic/qed/qed_int.c 791 */;
	struct aeu_invert_reg_bit *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_int.c 768 */;
	struct aeu_invert_reg_bit {
		char bit_name[30];
#define ATTENTION_PARITY (1 << 0)
#define ATTENTION_LENGTH_MASK (0x00000ff0)
#define ATTENTION_LENGTH_SHIFT (4)
#define ATTENTION_LENGTH (flags)(((flags) & ATTENTION_LENGTH_MASK) >> ATTENTION_LENGTH_SHIFT)
#define ATTENTION_SINGLE BIT(ATTENTION_LENGTH_SHIFT)
#define ATTENTION_PAR (ATTENTION_SINGLE | ATTENTION_PARITY)
#define ATTENTION_PAR_INT ((2 << ATTENTION_LENGTH_SHIFT) | ATTENTION_PARITY)
#define ATTENTION_OFFSET_MASK (0x000ff000)
#define ATTENTION_OFFSET_SHIFT (12)
#define ATTENTION_BB_MASK (0x00700000)
#define ATTENTION_BB_SHIFT (20)
#define ATTENTION_BB (value)(value << ATTENTION_BB_SHIFT)
#define ATTENTION_BB_DIFFERENT BIT(23)
																	unsigned int flags;
		int (*cb)(struct qed_hwfn *p_hwfn);
		enum block_id block_index;
	} cocci_id/* drivers/net/ethernet/qlogic/qed/qed_int.c 76 */;
	struct atten_status_block cocci_id/* drivers/net/ethernet/qlogic/qed/qed_int.c 74 */;
	enum qed_attention_type{QED_ATTN_TYPE_ATTN, QED_ATTN_TYPE_PARITY,} cocci_id/* drivers/net/ethernet/qlogic/qed/qed_int.c 68 */;
	struct qed_sb_sp_info {
		struct qed_sb_info sb_info;
		struct qed_pi_info pi_info_arr[PIS_PER_SB_E4];
	} cocci_id/* drivers/net/ethernet/qlogic/qed/qed_int.c 61 */;
	struct aeu_invert_reg cocci_id/* drivers/net/ethernet/qlogic/qed/qed_int.c 570 */[NUM_ATTN_REGS];
	struct aeu_invert_reg_bit cocci_id/* drivers/net/ethernet/qlogic/qed/qed_int.c 561 */[AEU_INVERT_REG_SPECIAL_MAX];
	struct qed_pi_info {
		qed_int_comp_cb_t comp_cb;
		void *cookie;
	} cocci_id/* drivers/net/ethernet/qlogic/qed/qed_int.c 56 */;
	enum aeu_invert_reg_special_type{AEU_INVERT_REG_SPECIAL_CNIG_0, AEU_INVERT_REG_SPECIAL_CNIG_1, AEU_INVERT_REG_SPECIAL_CNIG_2, AEU_INVERT_REG_SPECIAL_CNIG_3, AEU_INVERT_REG_SPECIAL_MAX,} cocci_id/* drivers/net/ethernet/qlogic/qed/qed_int.c 553 */;
	void cocci_id/* drivers/net/ethernet/qlogic/qed/qed_int.c 539 */;
	u32 cocci_id/* drivers/net/ethernet/qlogic/qed/qed_int.c 378 */;
	struct qed_ptt *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_int.c 376 */;
	int cocci_id/* drivers/net/ethernet/qlogic/qed/qed_int.c 375 */;
	struct qed_igu_info *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_int.c 2336 */;
	struct qed_sb_cnt_info *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_int.c 2334 */;
	struct qed_hw_sriov_info *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_int.c 2176 */;
	u8 cocci_id/* drivers/net/ethernet/qlogic/qed/qed_int.c 187 */;
	const char *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_int.c 187 */;
	enum qed_int_mode cocci_id/* drivers/net/ethernet/qlogic/qed/qed_int.c 1850 */;
	struct qed_sb_sp_info *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_int.c 1769 */;
	u8 *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_int.c 1767 */;
	__le16 **cocci_id/* drivers/net/ethernet/qlogic/qed/qed_int.c 1767 */;
	void *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_int.c 1767 */;
	qed_int_comp_cb_t cocci_id/* drivers/net/ethernet/qlogic/qed/qed_int.c 1766 */;
	struct qed_sb_info *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_int.c 1637 */;
	bool cocci_id/* drivers/net/ethernet/qlogic/qed/qed_int.c 1573 */;
	struct qed_igu_block *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_int.c 1573 */;
	u64 cocci_id/* drivers/net/ethernet/qlogic/qed/qed_int.c 1507 */;
	struct cau_sb_entry cocci_id/* drivers/net/ethernet/qlogic/qed/qed_int.c 1500 */;
	dma_addr_t cocci_id/* drivers/net/ethernet/qlogic/qed/qed_int.c 1497 */;
	u32 *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_int.c 1487 */;
	struct cau_pi_entry cocci_id/* drivers/net/ethernet/qlogic/qed/qed_int.c 1468 */;
	enum qed_coalescing_fsm cocci_id/* drivers/net/ethernet/qlogic/qed/qed_int.c 1465 */;
	struct qed_dev *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_int.c 1418 */;
	struct cau_sb_entry *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_int.c 1415 */;
	struct qed_pi_info *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_int.c 1216 */;
	unsigned long cocci_id/* drivers/net/ethernet/qlogic/qed/qed_int.c 1213 */;
	struct igu_prod_cons_update cocci_id/* drivers/net/ethernet/qlogic/qed/qed_int.c 1196 */;
	void __iomem *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_int.c 1194 */;
	__le16 cocci_id/* drivers/net/ethernet/qlogic/qed/qed_int.c 1144 */;
	struct atten_status_block *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_int.c 1141 */;
	char cocci_id/* drivers/net/ethernet/qlogic/qed/qed_int.c 1080 */[30];
	struct aeu_invert_reg {
		struct aeu_invert_reg_bit bits[32];
	} cocci_id/* drivers/net/ethernet/qlogic/qed/qed_int.c 107 */;
	long unsigned int cocci_id/* drivers/net/ethernet/qlogic/qed/qed_int.c 1061 */;
	struct aeu_invert_reg *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_int.c 1011 */;
}
