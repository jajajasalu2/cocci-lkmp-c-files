cocci_test_suite() {
	const struct mdmaspec cocci_id/* drivers/ata/pata_mpc52xx.c 96 */[3];
	struct platform_driver cocci_id/* drivers/ata/pata_mpc52xx.c 856 */;
	const struct of_device_id cocci_id/* drivers/ata/pata_mpc52xx.c 849 */[];
	pm_message_t cocci_id/* drivers/ata/pata_mpc52xx.c 823 */;
	struct mdmaspec {
		u8 t0M;
		u8 td;
		u8 th;
		u8 tj;
		u8 tkw;
		u8 tm;
		u8 tn;
	} cocci_id/* drivers/ata/pata_mpc52xx.c 80 */;
	struct bcom_task *cocci_id/* drivers/ata/pata_mpc52xx.c 682 */;
	const __be32 *cocci_id/* drivers/ata/pata_mpc52xx.c 680 */;
	struct resource cocci_id/* drivers/ata/pata_mpc52xx.c 674 */;
	struct platform_device *cocci_id/* drivers/ata/pata_mpc52xx.c 671 */;
	const u16 cocci_id/* drivers/ata/pata_mpc52xx.c 67 */[5];
	struct ata_ioports *cocci_id/* drivers/ata/pata_mpc52xx.c 631 */;
	struct ata_host *cocci_id/* drivers/ata/pata_mpc52xx.c 629 */;
	unsigned long cocci_id/* drivers/ata/pata_mpc52xx.c 626 */;
	struct device *cocci_id/* drivers/ata/pata_mpc52xx.c 624 */;
	struct ata_port_operations cocci_id/* drivers/ata/pata_mpc52xx.c 612 */;
	struct scsi_host_template cocci_id/* drivers/ata/pata_mpc52xx.c 608 */;
	void *cocci_id/* drivers/ata/pata_mpc52xx.c 597 */;
	irqreturn_t cocci_id/* drivers/ata/pata_mpc52xx.c 596 */;
	u8 cocci_id/* drivers/ata/pata_mpc52xx.c 506 */;
	struct mpc52xx_ata_priv {
		unsigned int ipb_period;
		struct mpc52xx_ata __iomem *ata_regs;
		phys_addr_t ata_regs_pa;
		int ata_irq;
		struct mpc52xx_ata_timings timings[2];
		int csel;
		struct bcom_task *dmatsk;
		const struct udmaspec *udmaspec;
		const struct mdmaspec *mdmaspec;
		int mpc52xx_ata_dma_last_write;
		int waiting_for_dma;
	} cocci_id/* drivers/ata/pata_mpc52xx.c 49 */;
	struct mpc52xx_ata cocci_id/* drivers/ata/pata_mpc52xx.c 469 */;
	u32 cocci_id/* drivers/ata/pata_mpc52xx.c 459 */;
	dma_addr_t cocci_id/* drivers/ata/pata_mpc52xx.c 458 */;
	struct scatterlist *cocci_id/* drivers/ata/pata_mpc52xx.c 449 */;
	unsigned int cocci_id/* drivers/ata/pata_mpc52xx.c 448 */;
	struct bcom_ata_bd *cocci_id/* drivers/ata/pata_mpc52xx.c 447 */;
	struct ata_port *cocci_id/* drivers/ata/pata_mpc52xx.c 445 */;
	struct ata_queued_cmd *cocci_id/* drivers/ata/pata_mpc52xx.c 443 */;
	struct ata_device *cocci_id/* drivers/ata/pata_mpc52xx.c 408 */;
	struct mpc52xx_ata_timings cocci_id/* drivers/ata/pata_mpc52xx.c 374 */;
	struct mpc52xx_ata_timings {
		u32 pio1;
		u32 pio2;
		u32 mdma1;
		u32 mdma2;
		u32 udma1;
		u32 udma2;
		u32 udma3;
		u32 udma4;
		u32 udma5;
		int using_udma;
	} cocci_id/* drivers/ata/pata_mpc52xx.c 36 */;
	struct mpc52xx_ata_timings *cocci_id/* drivers/ata/pata_mpc52xx.c 333 */;
	struct mpc52xx_ata __iomem *cocci_id/* drivers/ata/pata_mpc52xx.c 332 */;
	struct mpc52xx_ata_priv *cocci_id/* drivers/ata/pata_mpc52xx.c 330 */;
	int cocci_id/* drivers/ata/pata_mpc52xx.c 330 */;
	void cocci_id/* drivers/ata/pata_mpc52xx.c 329 */;
	const struct udmaspec *cocci_id/* drivers/ata/pata_mpc52xx.c 314 */;
	const struct mdmaspec *cocci_id/* drivers/ata/pata_mpc52xx.c 297 */;
	struct mpc52xx_ata {
		u32 config;
		u32 host_status;
		u32 pio1;
		u32 pio2;
		u32 mdma1;
		u32 mdma2;
		u32 udma1;
		u32 udma2;
		u32 udma3;
		u32 udma4;
		u32 udma5;
		u32 share_cnt;
		u32 reserved0[3];
		u32 fifo_data;
		u8 fifo_status_frame;
		u8 fifo_status;
		u16 reserved7[1];
		u8 fifo_control;
		u8 reserved8[5];
		u16 fifo_alarm;
		u16 reserved9;
		u16 fifo_rdp;
		u16 reserved10;
		u16 fifo_wrp;
		u16 reserved11;
		u16 fifo_lfrdp;
		u16 reserved12;
		u16 fifo_lfwrp;
		u8 tf_control;
		u8 reserved13[3];
		u16 tf_data;
		u16 reserved14;
		u8 tf_features;
		u8 reserved15[3];
		u8 tf_sec_count;
		u8 reserved16[3];
		u8 tf_sec_num;
		u8 reserved17[3];
		u8 tf_cyl_low;
		u8 reserved18[3];
		u8 tf_cyl_high;
		u8 reserved19[3];
		u8 tf_dev_head;
		u8 reserved20[3];
		u8 tf_command;
		u8 dma_mode;
		u8 reserved21[2];
	} cocci_id/* drivers/ata/pata_mpc52xx.c 205 */;
	const struct udmaspec cocci_id/* drivers/ata/pata_mpc52xx.c 150 */[6];
	struct udmaspec {
		u8 tcyc;
		u8 t2cyc;
		u8 tds;
		u8 tdh;
		u8 tdvs;
		u8 tdvh;
		u8 tfs;
		u8 tli;
		u8 tmli;
		u8 taz;
		u8 tzah;
		u8 tenv;
		u8 tsr;
		u8 trfs;
		u8 trp;
		u8 tack;
		u8 tss;
	} cocci_id/* drivers/ata/pata_mpc52xx.c 103 */;
}