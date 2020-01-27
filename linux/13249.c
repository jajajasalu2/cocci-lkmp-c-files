cocci_test_suite() {
	struct i2c_msg cocci_id/* drivers/media/pci/cx23885/cimax2.c 86 */[];
	u8 *cocci_id/* drivers/media/pci/cx23885/cimax2.c 83 */;
	struct i2c_adapter *cocci_id/* drivers/media/pci/cx23885/cimax2.c 82 */;
	struct netup_ci_state {
		struct dvb_ca_en50221 ca;
		struct mutex ca_mutex;
		struct i2c_adapter *i2c_adap;
		u8 ci_i2c_addr;
		int status;
		struct work_struct work;
		void *priv;
		u8 current_irq_mode;
		int current_ci_flag;
		unsigned long next_status_checked_time;
	} cocci_id/* drivers/media/pci/cx23885/cimax2.c 68 */;
	struct netup_ci_state *cocci_id/* drivers/media/pci/cx23885/cimax2.c 519 */;
	struct cx23885_tsport *cocci_id/* drivers/media/pci/cx23885/cimax2.c 517 */;
	void cocci_id/* drivers/media/pci/cx23885/cimax2.c 517 */;
	unsigned int cocci_id/* drivers/media/pci/cx23885/cimax2.c 50 */;
	struct netup_ci_state cocci_id/* drivers/media/pci/cx23885/cimax2.c 454 */;
	u8 cocci_id/* drivers/media/pci/cx23885/cimax2.c 415 */[34];
	u32 cocci_id/* drivers/media/pci/cx23885/cimax2.c 371 */;
	u8 cocci_id/* drivers/media/pci/cx23885/cimax2.c 339 */[33];
	struct work_struct *cocci_id/* drivers/media/pci/cx23885/cimax2.c 335 */;
	u8 cocci_id/* drivers/media/pci/cx23885/cimax2.c 168 */;
	struct dvb_ca_en50221 *cocci_id/* drivers/media/pci/cx23885/cimax2.c 167 */;
	unsigned long cocci_id/* drivers/media/pci/cx23885/cimax2.c 151 */;
	struct cx23885_dev *cocci_id/* drivers/media/pci/cx23885/cimax2.c 148 */;
	int cocci_id/* drivers/media/pci/cx23885/cimax2.c 148 */;
	struct i2c_msg cocci_id/* drivers/media/pci/cx23885/cimax2.c 121 */;
	u8 cocci_id/* drivers/media/pci/cx23885/cimax2.c 119 */[MAX_XFER_SIZE];
}
