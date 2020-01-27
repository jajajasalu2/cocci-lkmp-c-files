cocci_test_suite() {
	struct dbglog {
		char *fmt;
		u32 tb;
		u8 phase;
		u8 bs0;
		u8 bs1;
		u8 tgt;
		int d;
	} cocci_id/* drivers/scsi/mesh.c 93 */;
	unsigned char cocci_id/* drivers/scsi/mesh.c 80 */;
	int cocci_id/* drivers/scsi/mesh.c 628 */;
	struct mesh_state *cocci_id/* drivers/scsi/mesh.c 626 */;
	void cocci_id/* drivers/scsi/mesh.c 626 */;
	struct dbglog *cocci_id/* drivers/scsi/mesh.c 216 */;
	char *cocci_id/* drivers/scsi/mesh.c 213 */;
	void __exit cocci_id/* drivers/scsi/mesh.c 2070 */;
	int __init cocci_id/* drivers/scsi/mesh.c 2054 */;
	struct macio_driver cocci_id/* drivers/scsi/mesh.c 2037 */;
	struct of_device_id cocci_id/* drivers/scsi/mesh.c 2024 */[];
	u32 cocci_id/* drivers/scsi/mesh.c 200 */;
	struct dbdma_cmd *cocci_id/* drivers/scsi/mesh.c 1927 */;
	struct dbdma_cmd cocci_id/* drivers/scsi/mesh.c 1914 */;
	void cocci_id/* drivers/scsi/mesh.c 189 */(struct mesh_state *ms,
						   struct scsi_cmnd *cmd);
	void cocci_id/* drivers/scsi/mesh.c 188 */(struct mesh_state *ms);
	struct mesh_state cocci_id/* drivers/scsi/mesh.c 1877 */;
	void cocci_id/* drivers/scsi/mesh.c 186 */(struct mesh_state *ms,
						   int start_next);
	dma_addr_t cocci_id/* drivers/scsi/mesh.c 1854 */;
	const int *cocci_id/* drivers/scsi/mesh.c 1850 */;
	struct pci_dev *cocci_id/* drivers/scsi/mesh.c 1848 */;
	struct device_node *cocci_id/* drivers/scsi/mesh.c 1847 */;
	const struct of_device_id *cocci_id/* drivers/scsi/mesh.c 1845 */;
	struct macio_dev *cocci_id/* drivers/scsi/mesh.c 1845 */;
	struct scsi_host_template cocci_id/* drivers/scsi/mesh.c 1832 */;
	pm_message_t cocci_id/* drivers/scsi/mesh.c 1755 */;
	void (*cocci_id/* drivers/scsi/mesh.c 1629 */)(struct scsi_cmnd *);
	struct mesh_target *cocci_id/* drivers/scsi/mesh.c 1447 */;
	struct scsi_cmnd *cocci_id/* drivers/scsi/mesh.c 1446 */;
	volatile struct mesh_regs __iomem *cocci_id/* drivers/scsi/mesh.c 1445 */;
	struct mesh_state {
		volatile struct mesh_regs __iomem *mesh;
		int meshintr;
		volatile struct dbdma_regs __iomem *dma;
		int dmaintr;
		struct Scsi_Host *host;
		struct mesh_state *next;
		struct scsi_cmnd *request_q;
		struct scsi_cmnd *request_qtail;
		enum mesh_phase phase;
		enum msg_phase msgphase;
		int conn_tgt;
		struct scsi_cmnd *current_req;
		int data_ptr;
		int dma_started;
		int dma_count;
		int stat;
		int aborting;
		int expect_reply;
		int n_msgin;
		u8 msgin[16];
		int n_msgout;
		int last_n_msgout;
		u8 msgout[16];
		struct dbdma_cmd *dma_cmds;
		dma_addr_t dma_cmd_bus;
		void *dma_cmd_space;
		int dma_cmd_size;
		int clk_freq;
		struct mesh_target tgts[8];
		struct macio_dev *mdev;
		struct pci_dev *pdev;
#ifdef MESH_DBG
		int log_ix;
		int n_log;
		struct dbglog log[N_DBG_SLOG];
#endif
	} cocci_id/* drivers/scsi/mesh.c 144 */;
	volatile struct dbdma_regs __iomem *cocci_id/* drivers/scsi/mesh.c 1321 */;
	struct mesh_target {
		enum sdtr_phase sdtr_state;
		int sync_params;
		int data_goes_out;
		struct scsi_cmnd *current_req;
		u32 saved_ptr;
#ifdef MESH_DBG
		int log_ix;
		int n_log;
		struct dbglog log[N_DBG_LOG];
#endif
	} cocci_id/* drivers/scsi/mesh.c 131 */;
	char cocci_id/* drivers/scsi/mesh.c 1304 */[64];
	struct scatterlist *cocci_id/* drivers/scsi/mesh.c 1261 */;
	enum sdtr_phase{do_sdtr, sdtr_sent, sdtr_done,} cocci_id/* drivers/scsi/mesh.c 125 */;
	enum msg_phase{msg_none, msg_out, msg_out_xxx, msg_out_last, msg_in, msg_in_bad,} cocci_id/* drivers/scsi/mesh.c 116 */;
	enum mesh_phase{idle, arbitrating, selecting, commanding, dataing, statusing, busfreeing, disconnecting, reselecting, sleeping,} cocci_id/* drivers/scsi/mesh.c 103 */;
	struct Scsi_Host *cocci_id/* drivers/scsi/mesh.c 1023 */;
	unsigned long cocci_id/* drivers/scsi/mesh.c 1021 */;
	irqreturn_t cocci_id/* drivers/scsi/mesh.c 1019 */;
	void *cocci_id/* drivers/scsi/mesh.c 1019 */;
}
