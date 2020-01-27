cocci_test_suite() {
	struct bstrap *cocci_id/* drivers/soc/fsl/qbman/qman_test_stash.c 91 */;
	struct bstrap {
		int (*fn)(void);
		atomic_t started;
	} cocci_id/* drivers/soc/fsl/qbman/qman_test_stash.c 85 */;
	struct qm_fd cocci_id/* drivers/soc/fsl/qbman/qman_test_stash.c 522 */;
	struct hp_cpu cocci_id/* drivers/soc/fsl/qbman/qman_test_stash.c 476 */;
	struct qm_mcc_initfq cocci_id/* drivers/soc/fsl/qbman/qman_test_stash.c 389 */;
	u8 cocci_id/* drivers/soc/fsl/qbman/qman_test_stash.c 374 */;
	struct hp_handler cocci_id/* drivers/soc/fsl/qbman/qman_test_stash.c 352 */;
	struct list_head *cocci_id/* drivers/soc/fsl/qbman/qman_test_stash.c 344 */;
	struct hp_cpu *cocci_id/* drivers/soc/fsl/qbman/qman_test_stash.c 319 */;
	struct hp_handler *cocci_id/* drivers/soc/fsl/qbman/qman_test_stash.c 317 */;
	const struct qm_dqrr_entry *cocci_id/* drivers/soc/fsl/qbman/qman_test_stash.c 278 */;
	struct qman_fq *cocci_id/* drivers/soc/fsl/qbman/qman_test_stash.c 277 */;
	enum qman_cb_dqrr_result cocci_id/* drivers/soc/fsl/qbman/qman_test_stash.c 276 */;
	struct qman_portal *cocci_id/* drivers/soc/fsl/qbman/qman_test_stash.c 276 */;
	const struct qm_fd *cocci_id/* drivers/soc/fsl/qbman/qman_test_stash.c 253 */;
	u32 cocci_id/* drivers/soc/fsl/qbman/qman_test_stash.c 214 */;
	int cocci_id/* drivers/soc/fsl/qbman/qman_test_stash.c 212 */;
	void cocci_id/* drivers/soc/fsl/qbman/qman_test_stash.c 212 */;
	const struct qm_portal_config *cocci_id/* drivers/soc/fsl/qbman/qman_test_stash.c 195 */;
	dma_addr_t cocci_id/* drivers/soc/fsl/qbman/qman_test_stash.c 192 */;
	u32 *cocci_id/* drivers/soc/fsl/qbman/qman_test_stash.c 191 */;
	void *cocci_id/* drivers/soc/fsl/qbman/qman_test_stash.c 190 */;
	struct kmem_cache *cocci_id/* drivers/soc/fsl/qbman/qman_test_stash.c 187 */;
	unsigned int cocci_id/* drivers/soc/fsl/qbman/qman_test_stash.c 180 */;
	struct hp_cpu {
		unsigned int processor_id;
		struct list_head handlers;
		struct list_head node;
		struct hp_handler *iterator;
	} cocci_id/* drivers/soc/fsl/qbman/qman_test_stash.c 159 */;
	struct hp_handler {
		struct qman_fq rx;
		struct qman_fq tx;
		u32 rx_mixer;
		u32 tx_mixer;
		dma_addr_t addr;
		u32 *frame_ptr;
		u32 fqid_rx,fqid_tx;
		struct list_head node;
		unsigned int processor_id;
	}____cacheline_aligned cocci_id/* drivers/soc/fsl/qbman/qman_test_stash.c 134 */;
	struct task_struct *cocci_id/* drivers/soc/fsl/qbman/qman_test_stash.c 111 */;
	struct bstrap cocci_id/* drivers/soc/fsl/qbman/qman_test_stash.c 107 */;
	int (*cocci_id/* drivers/soc/fsl/qbman/qman_test_stash.c 102 */)(void);
	__typeof__(struct hp_cpu) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
}
