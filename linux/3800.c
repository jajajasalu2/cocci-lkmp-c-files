cocci_test_suite() {
	struct iommu_domain *cocci_id/* drivers/crypto/caam/qi.c 97 */;
	void *cocci_id/* drivers/crypto/caam/qi.c 97 */;
	struct kmem_cache *cocci_id/* drivers/crypto/caam/qi.c 95 */;
	struct net_device *cocci_id/* drivers/crypto/caam/qi.c 741 */;
	struct napi_struct *cocci_id/* drivers/crypto/caam/qi.c 740 */;
	struct caam_napi *cocci_id/* drivers/crypto/caam/qi.c 739 */;
	struct caam_qi_pcpu_priv *cocci_id/* drivers/crypto/caam/qi.c 738 */;
	bool cocci_id/* drivers/crypto/caam/qi.c 73 */;
	struct platform_device *cocci_id/* drivers/crypto/caam/qi.c 708 */;
	const cpumask_t *cocci_id/* drivers/crypto/caam/qi.c 685 */;
	struct caam_qi_priv cocci_id/* drivers/crypto/caam/qi.c 67 */;
	const u64 cocci_id/* drivers/crypto/caam/qi.c 654 */;
	u64 cocci_id/* drivers/crypto/caam/qi.c 654 */;
	struct qm_mcc_initcgr cocci_id/* drivers/crypto/caam/qi.c 653 */;
	struct caam_qi_priv {
		struct qman_cgr cgr;
	} cocci_id/* drivers/crypto/caam/qi.c 63 */;
	struct qman_fq *cocci_id/* drivers/crypto/caam/qi.c 608 */;
	struct qm_mcc_initfq cocci_id/* drivers/crypto/caam/qi.c 607 */;
	struct device *cocci_id/* drivers/crypto/caam/qi.c 605 */;
	unsigned int cocci_id/* drivers/crypto/caam/qi.c 605 */;
	int cocci_id/* drivers/crypto/caam/qi.c 605 */;
	u8 cocci_id/* drivers/crypto/caam/qi.c 577 */;
	const struct qm_dqrr_entry *cocci_id/* drivers/crypto/caam/qi.c 561 */;
	enum qman_cb_dqrr_result cocci_id/* drivers/crypto/caam/qi.c 559 */;
	struct qman_cgr *cocci_id/* drivers/crypto/caam/qi.c 527 */;
	struct caam_qi_priv *cocci_id/* drivers/crypto/caam/qi.c 507 */;
	struct caam_qi_pcpu_priv {
		struct caam_napi caam_napi;
		struct net_device net_dev;
		struct qman_fq *rsp_fq;
	}____cacheline_aligned cocci_id/* drivers/crypto/caam/qi.c 50 */;
	void cocci_id/* drivers/crypto/caam/qi.c 487 */;
	struct caam_napi cocci_id/* drivers/crypto/caam/qi.c 475 */;
	gfp_t cocci_id/* drivers/crypto/caam/qi.c 461 */;
	dma_addr_t cocci_id/* drivers/crypto/caam/qi.c 397 */;
	u32 cocci_id/* drivers/crypto/caam/qi.c 396 */;
	size_t cocci_id/* drivers/crypto/caam/qi.c 395 */;
	u32 *cocci_id/* drivers/crypto/caam/qi.c 393 */;
	int *cocci_id/* drivers/crypto/caam/qi.c 392 */;
	struct caam_drv_ctx *cocci_id/* drivers/crypto/caam/qi.c 391 */;
	struct caam_napi {
		struct napi_struct irqtask;
		struct qman_portal *p;
	} cocci_id/* drivers/crypto/caam/qi.c 38 */;
	struct qm_mcr_queryfq_np cocci_id/* drivers/crypto/caam/qi.c 293 */;
	struct caam_drv_private *cocci_id/* drivers/crypto/caam/qi.c 147 */;
	struct caam_drv_req *cocci_id/* drivers/crypto/caam/qi.c 145 */;
	const struct qm_fd *cocci_id/* drivers/crypto/caam/qi.c 144 */;
	const union qm_mr_entry *cocci_id/* drivers/crypto/caam/qi.c 142 */;
	struct qman_portal *cocci_id/* drivers/crypto/caam/qi.c 141 */;
	struct qm_fd cocci_id/* drivers/crypto/caam/qi.c 109 */;
	phys_addr_t cocci_id/* drivers/crypto/caam/qi.c 100 */;
	__typeof__(struct caam_qi_pcpu_priv) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
	__typeof__(int) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
}
