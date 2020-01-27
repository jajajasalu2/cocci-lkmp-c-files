cocci_test_suite() {
	struct dvb_pll_config cocci_id/* drivers/media/pci/pt1/pt1.c 997 */;
	struct qm1d1b0004_config cocci_id/* drivers/media/pci/pt1/pt1.c 988 */;
	struct tc90522_config cocci_id/* drivers/media/pci/pt1/pt1.c 972 */;
	const struct i2c_board_info *cocci_id/* drivers/media/pci/pt1/pt1.c 971 */;
	struct dvb_frontend *cocci_id/* drivers/media/pci/pt1/pt1.c 939 */;
	void cocci_id/* drivers/media/pci/pt1/pt1.c 900 */;
	struct pt1_adapter {
		struct pt1 *pt1;
		int index;
		u8 *buf;
		int upacket_count;
		int packet_count;
		int st_count;
		struct dvb_adapter adap;
		struct dvb_demux demux;
		int users;
		struct dmxdev dmxdev;
		struct dvb_frontend *fe;
		struct i2c_client *demod_i2c_client;
		struct i2c_client *tuner_i2c_client;
		int (*orig_set_voltage)(struct dvb_frontend *fe,
					enum fe_sec_voltage voltage);
		int (*orig_sleep)(struct dvb_frontend *fe);
		int (*orig_init)(struct dvb_frontend *fe);
		enum fe_sec_voltage voltage;
		int sleep;
	} cocci_id/* drivers/media/pci/pt1/pt1.c 90 */;
	unsigned long cocci_id/* drivers/media/pci/pt1/pt1.c 893 */;
	u8 *cocci_id/* drivers/media/pci/pt1/pt1.c 848 */;
	struct pt1_adapter cocci_id/* drivers/media/pci/pt1/pt1.c 837 */;
	struct dmxdev *cocci_id/* drivers/media/pci/pt1/pt1.c 834 */;
	struct dvb_demux *cocci_id/* drivers/media/pci/pt1/pt1.c 833 */;
	struct dvb_adapter *cocci_id/* drivers/media/pci/pt1/pt1.c 832 */;
	void *cocci_id/* drivers/media/pci/pt1/pt1.c 831 */;
	struct pt1 *cocci_id/* drivers/media/pci/pt1/pt1.c 828 */;
	struct pt1_adapter *cocci_id/* drivers/media/pci/pt1/pt1.c 827 */;
	enum fe_sec_voltage cocci_id/* drivers/media/pci/pt1/pt1.c 769 */;
	const int cocci_id/* drivers/media/pci/pt1/pt1.c 740 */[];
	struct pt1 {
		struct pci_dev *pdev;
		void __iomem *regs;
		struct i2c_adapter i2c_adap;
		int i2c_running;
		struct pt1_adapter *adaps[PT1_NR_ADAPS];
		struct pt1_table *tables;
		struct task_struct *kthread;
		int table_index;
		int buf_index;
		struct mutex lock;
		int power;
		int reset;
		enum pt1_fe_clk fe_clk;
	} cocci_id/* drivers/media/pci/pt1/pt1.c 72 */;
	struct dvb_demux_feed *cocci_id/* drivers/media/pci/pt1/pt1.c 693 */;
	struct pt1_table cocci_id/* drivers/media/pci/pt1/pt1.c 643 */;
	enum pt1_fe_clk{PT1_FE_CLK_20MHZ, PT1_FE_CLK_25MHZ,} cocci_id/* drivers/media/pci/pt1/pt1.c 63 */;
	struct pt1_table_page *cocci_id/* drivers/media/pci/pt1/pt1.c 590 */;
	struct pt1_table *cocci_id/* drivers/media/pci/pt1/pt1.c 577 */;
	struct pt1_table {
		struct pt1_table_page *page;
		dma_addr_t addr;
		struct pt1_buffer bufs[PT1_NR_BUFS];
	} cocci_id/* drivers/media/pci/pt1/pt1.c 57 */;
	struct pt1_buffer *cocci_id/* drivers/media/pci/pt1/pt1.c 555 */;
	dma_addr_t cocci_id/* drivers/media/pci/pt1/pt1.c 540 */;
	u32 *cocci_id/* drivers/media/pci/pt1/pt1.c 537 */;
	dma_addr_t *cocci_id/* drivers/media/pci/pt1/pt1.c 537 */;
	struct pt1_buffer {
		struct pt1_buffer_page *page;
		dma_addr_t addr;
	} cocci_id/* drivers/media/pci/pt1/pt1.c 52 */;
	ktime_t cocci_id/* drivers/media/pci/pt1/pt1.c 511 */;
	struct pt1_table_page {
		__le32 next_pfn;
		__le32 buf_pfns[PT1_NR_BUFS];
	} cocci_id/* drivers/media/pci/pt1/pt1.c 47 */;
	struct pt1_buffer_page *cocci_id/* drivers/media/pci/pt1/pt1.c 435 */;
	struct pt1_buffer_page {
		__le32 upackets[PT1_NR_UPACKETS];
	} cocci_id/* drivers/media/pci/pt1/pt1.c 43 */;
	u32 cocci_id/* drivers/media/pci/pt1/pt1.c 390 */;
	u64 cocci_id/* drivers/media/pci/pt1/pt1.c 334 */;
	unsigned int cocci_id/* drivers/media/pci/pt1/pt1.c 298 */;
	u8 cocci_id/* drivers/media/pci/pt1/pt1.c 257 */[2];
	u8 cocci_id/* drivers/media/pci/pt1/pt1.c 202 */;
	struct i2c_msg cocci_id/* drivers/media/pci/pt1/pt1.c 201 */[2];
	const u8 *cocci_id/* drivers/media/pci/pt1/pt1.c 195 */[2];
	bool cocci_id/* drivers/media/pci/pt1/pt1.c 194 */;
	enum pt1_fe_clk cocci_id/* drivers/media/pci/pt1/pt1.c 191 */;
	struct i2c_client *cocci_id/* drivers/media/pci/pt1/pt1.c 191 */;
	int cocci_id/* drivers/media/pci/pt1/pt1.c 191 */;
	const u8 cocci_id/* drivers/media/pci/pt1/pt1.c 163 */[][2];
	struct pci_driver cocci_id/* drivers/media/pci/pt1/pt1.c 1472 */;
	const struct pci_device_id cocci_id/* drivers/media/pci/pt1/pt1.c 1463 */[];
	struct pt1 cocci_id/* drivers/media/pci/pt1/pt1.c 1361 */;
	void __iomem *cocci_id/* drivers/media/pci/pt1/pt1.c 1337 */;
	const struct pci_device_id *cocci_id/* drivers/media/pci/pt1/pt1.c 1334 */;
	struct pci_dev *cocci_id/* drivers/media/pci/pt1/pt1.c 1334 */;
	const struct pt1_config cocci_id/* drivers/media/pci/pt1/pt1.c 128 */[PT1_NR_ADAPS];
	struct device *cocci_id/* drivers/media/pci/pt1/pt1.c 1230 */;
	struct pt1_config {
		struct i2c_board_info demod_info;
		struct tc90522_config demod_cfg;
		struct i2c_board_info tuner_info;
		union pt1_tuner_config tuner_cfg;
	} cocci_id/* drivers/media/pci/pt1/pt1.c 120 */;
	const struct i2c_algorithm cocci_id/* drivers/media/pci/pt1/pt1.c 1197 */;
	struct i2c_adapter *cocci_id/* drivers/media/pci/pt1/pt1.c 1192 */;
	union pt1_tuner_config {
		struct qm1d1b0004_config qm1d1b0004;
		struct dvb_pll_config tda6651;
	} cocci_id/* drivers/media/pci/pt1/pt1.c 115 */;
	u16 cocci_id/* drivers/media/pci/pt1/pt1.c 1146 */;
	int *cocci_id/* drivers/media/pci/pt1/pt1.c 1123 */;
	struct i2c_msg *cocci_id/* drivers/media/pci/pt1/pt1.c 1098 */;
}
