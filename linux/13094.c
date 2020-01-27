cocci_test_suite() {
	enum bm_rcr_cmode{bm_rcr_cci, bm_rcr_cce,} cocci_id/* drivers/soc/fsl/qbman/bman.c 95 */;
	enum bm_rcr_pmode{bm_rcr_pci=0, bm_rcr_pce=1, bm_rcr_pvb=2,} cocci_id/* drivers/soc/fsl/qbman/bman.c 90 */;
	const struct bman_portal *cocci_id/* drivers/soc/fsl/qbman/bman.c 817 */;
	struct bman_pool *cocci_id/* drivers/soc/fsl/qbman/bman.c 787 */;
	struct bm_buffer *cocci_id/* drivers/soc/fsl/qbman/bman.c 787 */;
	const struct bm_buffer *cocci_id/* drivers/soc/fsl/qbman/bman.c 739 */;
	const struct bman_pool *cocci_id/* drivers/soc/fsl/qbman/bman.c 725 */;
	unsigned long cocci_id/* drivers/soc/fsl/qbman/bman.c 670 */;
	u32 cocci_id/* drivers/soc/fsl/qbman/bman.c 668 */;
	u32 *cocci_id/* drivers/soc/fsl/qbman/bman.c 668 */;
	int cocci_id/* drivers/soc/fsl/qbman/bman.c 668 */;
	struct gen_pool *cocci_id/* drivers/soc/fsl/qbman/bman.c 666 */;
	struct bman_portal *cocci_id/* drivers/soc/fsl/qbman/bman.c 645 */;
	const struct bm_portal_config *cocci_id/* drivers/soc/fsl/qbman/bman.c 594 */;
	union bm_mc_result **cocci_id/* drivers/soc/fsl/qbman/bman.c 505 */;
	union bm_mc_result *cocci_id/* drivers/soc/fsl/qbman/bman.c 469 */;
	struct bm_mc *cocci_id/* drivers/soc/fsl/qbman/bman.c 468 */;
	u8 cocci_id/* drivers/soc/fsl/qbman/bman.c 466 */;
	struct bm_mc_command *cocci_id/* drivers/soc/fsl/qbman/bman.c 454 */;
	enum bm_rcr_cmode cocci_id/* drivers/soc/fsl/qbman/bman.c 381 */;
	enum bm_rcr_pmode cocci_id/* drivers/soc/fsl/qbman/bman.c 380 */;
	struct bm_rcr_entry *cocci_id/* drivers/soc/fsl/qbman/bman.c 364 */;
	struct bm_rcr *cocci_id/* drivers/soc/fsl/qbman/bman.c 328 */;
	uintptr_t cocci_id/* drivers/soc/fsl/qbman/bman.c 278 */;
	struct bm_rcr_entry cocci_id/* drivers/soc/fsl/qbman/bman.c 272 */;
	irqreturn_t cocci_id/* drivers/soc/fsl/qbman/bman.c 255 */;
	void *cocci_id/* drivers/soc/fsl/qbman/bman.c 255 */;
	u32 cocci_id/* drivers/soc/fsl/qbman/bman.c 253 */(struct bman_portal *p,
							   u32 is);
	struct bman_pool {
		u32 bpid;
		struct bman_portal *portal;
		struct bman_pool *next;
	} cocci_id/* drivers/soc/fsl/qbman/bman.c 245 */;
	cpumask_t cocci_id/* drivers/soc/fsl/qbman/bman.c 226 */;
	struct bman_portal {
		struct bm_portal p;
		unsigned long irq_sources;
		const struct bm_portal_config *config;
		char irqname[MAX_IRQNAME];
	} cocci_id/* drivers/soc/fsl/qbman/bman.c 217 */;
	struct bm_portal *cocci_id/* drivers/soc/fsl/qbman/bman.c 212 */;
	void cocci_id/* drivers/soc/fsl/qbman/bman.c 202 */;
	struct bm_portal {
		struct bm_addr addr;
		struct bm_rcr rcr;
		struct bm_mc mc;
	}____cacheline_aligned cocci_id/* drivers/soc/fsl/qbman/bman.c 184 */;
	struct bm_addr {
		void *ce;
		__be32 *ce_be;
		void __iomem *ci;
	} cocci_id/* drivers/soc/fsl/qbman/bman.c 178 */;
	struct bm_mc {
		struct bm_mc_command *cr;
		union bm_mc_result *rr;
		u8 rridx,vbit;
#ifdef CONFIG_FSL_DPAA_CHECKING
		enum{mc_idle, mc_user, mc_hw,} state;
#endif
	} cocci_id/* drivers/soc/fsl/qbman/bman.c 162 */;
	union bm_mc_result {
		struct {
			u8 verb;
			u8 bpid;
			u8 __reserved[62];
		};
		struct bm_buffer bufs[8];
	} cocci_id/* drivers/soc/fsl/qbman/bman.c 145 */;
	struct bm_mc_command {
		u8 _ncw_verb;
		u8 bpid;
		u8 __reserved[62];
	} cocci_id/* drivers/soc/fsl/qbman/bman.c 133 */;
	struct bm_rcr {
		struct bm_rcr_entry *ring,*cursor;
		u8 ci,available,ithresh,vbit;
#ifdef CONFIG_FSL_DPAA_CHECKING
		u32 busy;
		enum bm_rcr_pmode pmode;
		enum bm_rcr_cmode cmode;
#endif
	} cocci_id/* drivers/soc/fsl/qbman/bman.c 122 */;
	struct bm_rcr_entry {
		union {
			struct {
				u8 _ncw_verb;
				u8 bpid;
				u8 __reserved1[62];
			};
			struct bm_buffer bufs[8];
		};
	} cocci_id/* drivers/soc/fsl/qbman/bman.c 106 */;
	__typeof__(struct bman_portal) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
}
