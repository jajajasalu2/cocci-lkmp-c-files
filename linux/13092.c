cocci_test_suite() {
	struct qman_portal {
		struct qm_portal p;
		unsigned long bits;
		unsigned long irq_sources;
		u32 use_eqcr_ci_stashing;
		struct qman_fq *vdqcr_owned;
		u32 sdqcr;
		const struct qm_portal_config *config;
		struct qman_cgrs *cgrs;
		struct list_head cgr_cbs;
		spinlock_t cgr_lock;
		struct work_struct congestion_work;
		struct work_struct mr_work;
		char irqname[MAX_IRQNAME];
	} cocci_id/* drivers/soc/fsl/qbman/qman.c 982 */;
	union qm_mc_result **cocci_id/* drivers/soc/fsl/qbman/qman.c 948 */;
	struct qm_mc *cocci_id/* drivers/soc/fsl/qbman/qman.c 911 */;
	union qm_mc_command *cocci_id/* drivers/soc/fsl/qbman/qman.c 897 */;
	struct qm_mr *cocci_id/* drivers/soc/fsl/qbman/qman.c 836 */;
	enum qm_mr_cmode cocci_id/* drivers/soc/fsl/qbman/qman.c 768 */;
	enum qm_mr_pmode cocci_id/* drivers/soc/fsl/qbman/qman.c 767 */;
	union qm_mr_entry *cocci_id/* drivers/soc/fsl/qbman/qman.c 748 */;
	struct qm_dqrr *cocci_id/* drivers/soc/fsl/qbman/qman.c 702 */;
	struct qm_dqrr_entry *cocci_id/* drivers/soc/fsl/qbman/qman.c 680 */;
	enum qm_dqrr_cmode cocci_id/* drivers/soc/fsl/qbman/qman.c 610 */;
	enum qm_dqrr_pmode cocci_id/* drivers/soc/fsl/qbman/qman.c 609 */;
	enum qm_dqrr_dmode cocci_id/* drivers/soc/fsl/qbman/qman.c 608 */;
	const struct qm_portal_config *cocci_id/* drivers/soc/fsl/qbman/qman.c 607 */;
	uintptr_t cocci_id/* drivers/soc/fsl/qbman/qman.c 583 */;
	struct qm_dqrr_entry cocci_id/* drivers/soc/fsl/qbman/qman.c 577 */;
	struct qm_eqcr *cocci_id/* drivers/soc/fsl/qbman/qman.c 511 */;
	enum qm_eqcr_pmode cocci_id/* drivers/soc/fsl/qbman/qman.c 422 */;
	struct qm_eqcr_entry *cocci_id/* drivers/soc/fsl/qbman/qman.c 395 */;
	struct qm_eqcr_entry cocci_id/* drivers/soc/fsl/qbman/qman.c 391 */;
	struct qm_portal {
		struct qm_addr addr;
		struct qm_eqcr eqcr;
		struct qm_dqrr dqrr;
		struct qm_mr mr;
		struct qm_mc mc;
	}____cacheline_aligned cocci_id/* drivers/soc/fsl/qbman/qman.c 348 */;
	struct qm_addr {
		void *ce;
		__be32 *ce_be;
		void __iomem *ci;
	} cocci_id/* drivers/soc/fsl/qbman/qman.c 342 */;
	struct qm_mc {
		union qm_mc_command *cr;
		union qm_mc_result *rr;
		u8 rridx,vbit;
#ifdef CONFIG_FSL_DPAA_CHECKING
		enum{qman_mc_idle, qman_mc_user, qman_mc_hw,} state;
#endif
	} cocci_id/* drivers/soc/fsl/qbman/qman.c 326 */;
	union qm_mc_result {
		struct {
			u8 verb;
			u8 result;
			u8 __reserved1[62];
		};
		struct qm_mcr_queryfq queryfq;
		struct qm_mcr_alterfq alterfq;
		struct qm_mcr_querycgr querycgr;
		struct qm_mcr_querycongestion querycongestion;
		struct qm_mcr_querywq querywq;
		struct qm_mcr_queryfq_np queryfq_np;
	} cocci_id/* drivers/soc/fsl/qbman/qman.c 312 */;
	struct qm_fqd cocci_id/* drivers/soc/fsl/qbman/qman.c 2975 */;
	struct qm_mcr_queryfq_np cocci_id/* drivers/soc/fsl/qbman/qman.c 2965 */;
	struct qman_fq cocci_id/* drivers/soc/fsl/qbman/qman.c 2959 */;
	u32 *cocci_id/* drivers/soc/fsl/qbman/qman.c 2873 */;
	unsigned long cocci_id/* drivers/soc/fsl/qbman/qman.c 2847 */;
	struct gen_pool *cocci_id/* drivers/soc/fsl/qbman/qman.c 2843 */;
	struct qm_mcr_alterfq {
		u8 verb;
		u8 result;
		u8 fqs;
		u8 __reserved1[61];
	} cocci_id/* drivers/soc/fsl/qbman/qman.c 283 */;
	struct qm_mcr_queryfq {
		u8 verb;
		u8 result;
		u8 __reserved1[8];
		struct qm_fqd fqd;
		u8 __reserved2[30];
	}__packed cocci_id/* drivers/soc/fsl/qbman/qman.c 274 */;
	struct device *cocci_id/* drivers/soc/fsl/qbman/qman.c 2626 */;
	union qm_mc_command {
		struct {
			u8 _ncw_verb;
			u8 __reserved[63];
		};
		struct qm_mcc_initfq initfq;
		struct qm_mcc_initcgr initcgr;
		struct qm_mcc_fq fq;
		struct qm_mcc_cgr cgr;
	} cocci_id/* drivers/soc/fsl/qbman/qman.c 261 */;
	bool cocci_id/* drivers/soc/fsl/qbman/qman.c 2588 */;
	struct qm_portal *cocci_id/* drivers/soc/fsl/qbman/qman.c 2587 */;
	int cocci_id/* drivers/soc/fsl/qbman/qman.c 2587 */;
	const union qm_mr_entry *cocci_id/* drivers/soc/fsl/qbman/qman.c 2571 */;
	struct cgr_comp {
		struct qman_cgr *cgr;
		struct completion completion;
	} cocci_id/* drivers/soc/fsl/qbman/qman.c 2542 */;
	struct qm_mcc_initcgr cocci_id/* drivers/soc/fsl/qbman/qman.c 2451 */;
	struct qm_mcr_querycgr cocci_id/* drivers/soc/fsl/qbman/qman.c 2429 */;
	struct qman_cgr cocci_id/* drivers/soc/fsl/qbman/qman.c 2413 */;
	u8 cocci_id/* drivers/soc/fsl/qbman/qman.c 2409 */[CGR_NUM];
	struct __qm_mc_cgr *cocci_id/* drivers/soc/fsl/qbman/qman.c 2401 */;
	struct qm_mcc_initcgr *cocci_id/* drivers/soc/fsl/qbman/qman.c 2360 */;
	struct qm_mcc_cgr {
		u8 _ncw_verb;
		u8 __reserved1[30];
		u8 cgid;
		u8 __reserved2[32];
	} cocci_id/* drivers/soc/fsl/qbman/qman.c 235 */;
	const struct qm_fd *cocci_id/* drivers/soc/fsl/qbman/qman.c 2317 */;
	struct qm_mcc_fq {
		u8 _ncw_verb;
		u8 __reserved1[3];
		__be32 fqid;
		u8 __reserved2[56];
	}__packed cocci_id/* drivers/soc/fsl/qbman/qman.c 227 */;
	struct qman_portal **cocci_id/* drivers/soc/fsl/qbman/qman.c 2248 */;
	bool *cocci_id/* drivers/soc/fsl/qbman/qman.c 2213 */;
	struct qm_mcr_querycgr *cocci_id/* drivers/soc/fsl/qbman/qman.c 2186 */;
	struct qm_mr {
		union qm_mr_entry *ring,*cursor;
		u8 pi,ci,fill,ithresh,vbit;
#ifdef CONFIG_FSL_DPAA_CHECKING
		enum qm_mr_pmode pmode;
		enum qm_mr_cmode cmode;
#endif
	} cocci_id/* drivers/soc/fsl/qbman/qman.c 216 */;
	struct qm_mcr_queryfq_np *cocci_id/* drivers/soc/fsl/qbman/qman.c 2157 */;
	struct qm_fqd *cocci_id/* drivers/soc/fsl/qbman/qman.c 2132 */;
	union qm_mr_entry cocci_id/* drivers/soc/fsl/qbman/qman.c 2074 */;
	struct qm_dqrr {
		const struct qm_dqrr_entry *ring,*cursor;
		u8 pi,ci,fill,ithresh,vbit;
#ifdef CONFIG_FSL_DPAA_CHECKING
		enum qm_dqrr_dmode dmode;
		enum qm_dqrr_pmode pmode;
		enum qm_dqrr_cmode cmode;
#endif
	} cocci_id/* drivers/soc/fsl/qbman/qman.c 206 */;
	struct qm_eqcr {
		struct qm_eqcr_entry *ring,*cursor;
		u8 ci,available,ithresh,vbit;
#ifdef CONFIG_FSL_DPAA_CHECKING
		u32 busy;
		enum qm_eqcr_pmode pmode;
#endif
	} cocci_id/* drivers/soc/fsl/qbman/qman.c 197 */;
	dma_addr_t cocci_id/* drivers/soc/fsl/qbman/qman.c 1900 */;
	struct qm_mcc_initfq *cocci_id/* drivers/soc/fsl/qbman/qman.c 1858 */;
	struct qm_eqcr_entry {
		u8 _ncw_verb;
		u8 dca;
		__be16 seqnum;
		u8 __reserved[4];
		__be32 fqid;
		__be32 tag;
		struct qm_fd fd;
		u8 __reserved3[32];
	}__packed cocci_id/* drivers/soc/fsl/qbman/qman.c 180 */;
	const char *cocci_id/* drivers/soc/fsl/qbman/qman.c 1779 */;
	const cpumask_t *cocci_id/* drivers/soc/fsl/qbman/qman.c 1727 */;
	enum qm_mr_cmode{qm_mr_cci=0, qm_mr_cce=1,} cocci_id/* drivers/soc/fsl/qbman/qman.c 168 */;
	enum qm_mr_pmode{qm_mr_pci, qm_mr_pce, qm_mr_pvb,} cocci_id/* drivers/soc/fsl/qbman/qman.c 163 */;
	enum qman_cb_dqrr_result cocci_id/* drivers/soc/fsl/qbman/qman.c 1614 */;
	struct qman_fq *cocci_id/* drivers/soc/fsl/qbman/qman.c 1613 */;
	const struct qm_dqrr_entry *cocci_id/* drivers/soc/fsl/qbman/qman.c 1612 */;
	struct qman_portal *cocci_id/* drivers/soc/fsl/qbman/qman.c 1609 */;
	unsigned int cocci_id/* drivers/soc/fsl/qbman/qman.c 1609 */;
	enum qm_dqrr_cmode{qm_dqrr_cci=0, qm_dqrr_cce=1, qm_dqrr_cdc=2,} cocci_id/* drivers/soc/fsl/qbman/qman.c 158 */;
	void cocci_id/* drivers/soc/fsl/qbman/qman.c 1576 */;
	u32 cocci_id/* drivers/soc/fsl/qbman/qman.c 1549 */;
	enum qm_dqrr_pmode{qm_dqrr_pci, qm_dqrr_pce, qm_dqrr_pvb,} cocci_id/* drivers/soc/fsl/qbman/qman.c 153 */;
	enum qm_dqrr_dmode{qm_dqrr_dpush=0, qm_dqrr_dpull=1,} cocci_id/* drivers/soc/fsl/qbman/qman.c 149 */;
	struct qman_cgrs *cocci_id/* drivers/soc/fsl/qbman/qman.c 1474 */;
	struct qman_cgr *cocci_id/* drivers/soc/fsl/qbman/qman.c 1462 */;
	union qm_mc_result *cocci_id/* drivers/soc/fsl/qbman/qman.c 1461 */;
	struct qman_cgrs cocci_id/* drivers/soc/fsl/qbman/qman.c 1460 */;
	struct qman_portal cocci_id/* drivers/soc/fsl/qbman/qman.c 1458 */;
	struct work_struct *cocci_id/* drivers/soc/fsl/qbman/qman.c 1456 */;
	enum qm_eqcr_pmode{qm_eqcr_pci=0, qm_eqcr_pce=1, qm_eqcr_pvb=2,} cocci_id/* drivers/soc/fsl/qbman/qman.c 144 */;
	u8 cocci_id/* drivers/soc/fsl/qbman/qman.c 1431 */;
	const struct qman_cgrs *cocci_id/* drivers/soc/fsl/qbman/qman.c 1361 */;
	irqreturn_t cocci_id/* drivers/soc/fsl/qbman/qman.c 1171 */;
	void *cocci_id/* drivers/soc/fsl/qbman/qman.c 1171 */;
	void cocci_id/* drivers/soc/fsl/qbman/qman.c 1168 */(struct work_struct *work);
	unsigned int cocci_id/* drivers/soc/fsl/qbman/qman.c 1166 */(struct qman_portal *p,
								     unsigned int poll_limit);
	u32 cocci_id/* drivers/soc/fsl/qbman/qman.c 1165 */(struct qman_portal *p,
							    u32 is);
	struct qman_fq **cocci_id/* drivers/soc/fsl/qbman/qman.c 1107 */;
	u8 *cocci_id/* drivers/soc/fsl/qbman/qman.c 1054 */;
	struct workqueue_struct *cocci_id/* drivers/soc/fsl/qbman/qman.c 1035 */;
	u16 cocci_id/* drivers/soc/fsl/qbman/qman.c 1022 */;
	struct qman_portal *cocci_id/* drivers/soc/fsl/qbman/qman.c 1009 */[NR_CPUS];
	u16 cocci_id/* drivers/soc/fsl/qbman/qman.c 1007 */[NR_CPUS];
	cpumask_t cocci_id/* drivers/soc/fsl/qbman/qman.c 1005 */;
	__typeof__(struct qman_portal) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
}
