cocci_test_suite() {
	struct dscr_ops {
		void (*init)(struct device_node *node);
	} cocci_id/* arch/c6x/platforms/dscr.c 98 */;
	struct devstate_info {
		struct devstate_ctl_reg *ctl;
		struct devstate_stat_reg *stat;
	} cocci_id/* arch/c6x/platforms/dscr.c 92 */;
	struct devstate_stat_reg {
		u32 reg;
		u8 start_id;
		u8 num_ids;
		u8 enable;
		u8 disable;
		u8 shift;
		u8 nbits;
	} cocci_id/* arch/c6x/platforms/dscr.c 82 */;
	struct devstate_ctl_reg {
		u32 reg;
		u8 start_id;
		u8 num_ids;
		u8 enable_only;
		u8 enable;
		u8 disable;
		u8 shift;
		u8 nbits;
	} cocci_id/* arch/c6x/platforms/dscr.c 63 */;
	void cocci_id/* arch/c6x/platforms/dscr.c 567 */;
	struct of_device_id cocci_id/* arch/c6x/platforms/dscr.c 555 */[]__initdata;
	struct devstate_stat_reg *cocci_id/* arch/c6x/platforms/dscr.c 525 */;
	struct locked_reg {
		u32 reg;
		u32 lockreg;
		u32 key;
	} cocci_id/* arch/c6x/platforms/dscr.c 50 */;
	const __be32 *cocci_id/* arch/c6x/platforms/dscr.c 470 */;
	struct devstate_ctl_reg *cocci_id/* arch/c6x/platforms/dscr.c 469 */;
	u32 cocci_id/* arch/c6x/platforms/dscr.c 431 */[4];
	struct rmii_reset_reg {
		u32 reg;
		u32 mask;
	} cocci_id/* arch/c6x/platforms/dscr.c 41 */;
	struct locked_reg *cocci_id/* arch/c6x/platforms/dscr.c 396 */;
	u32 cocci_id/* arch/c6x/platforms/dscr.c 368 */[2];
	u32 cocci_id/* arch/c6x/platforms/dscr.c 327 */[10];
	u32 cocci_id/* arch/c6x/platforms/dscr.c 296 */[3];
	int cocci_id/* arch/c6x/platforms/dscr.c 285 */;
	u32 cocci_id/* arch/c6x/platforms/dscr.c 284 */;
	void __iomem *cocci_id/* arch/c6x/platforms/dscr.c 282 */;
	struct device_node *cocci_id/* arch/c6x/platforms/dscr.c 281 */;
	void __init cocci_id/* arch/c6x/platforms/dscr.c 281 */;
	unsigned long cocci_id/* arch/c6x/platforms/dscr.c 259 */;
	struct rmii_reset_reg *cocci_id/* arch/c6x/platforms/dscr.c 258 */;
	struct devstate_info *cocci_id/* arch/c6x/platforms/dscr.c 191 */;
	enum dscr_devstate_t cocci_id/* arch/c6x/platforms/dscr.c 187 */;
	struct dscr_regs cocci_id/* arch/c6x/platforms/dscr.c 114 */;
	struct dscr_regs {
		spinlock_t lock;
		void __iomem *base;
		u32 kick_reg[2];
		u32 kick_key[2];
		struct locked_reg locked[MAX_LOCKED_REGS];
		struct devstate_info devstate_info[MAX_DEVSTATE_IDS];
		struct rmii_reset_reg rmii_resets[MAX_SOC_EMACS];
		struct devstate_ctl_reg devctl[MAX_DEVCTL_REGS];
		struct devstate_stat_reg devstat[MAX_DEVSTAT_REGS];
	} cocci_id/* arch/c6x/platforms/dscr.c 102 */;
}
