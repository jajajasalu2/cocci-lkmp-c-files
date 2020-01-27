cocci_test_suite() {
	struct fpga_internal {
		void *dev;
		struct mutex fpga_mutex;
		struct netup_hw_pid_filter *pid_filt[2];
		struct altera_ci_state *state[2];
		struct work_struct work;
		int (*fpga_rw)(void *dev, int flag, int data, int rw);
		int cis_used;
		int filts_used;
		int strt_wrk;
	} cocci_id/* drivers/media/pci/cx23885/altera-ci.c 97 */;
	struct fpga_internal cocci_id/* drivers/media/pci/cx23885/altera-ci.c 724 */;
	struct altera_ci_state cocci_id/* drivers/media/pci/cx23885/altera-ci.c 709 */;
	u8 cocci_id/* drivers/media/pci/cx23885/altera-ci.c 707 */;
	struct fpga_internal *cocci_id/* drivers/media/pci/cx23885/altera-ci.c 705 */;
	struct fpga_inode *cocci_id/* drivers/media/pci/cx23885/altera-ci.c 704 */;
	struct altera_ci_state *cocci_id/* drivers/media/pci/cx23885/altera-ci.c 703 */;
	struct altera_ci_config *cocci_id/* drivers/media/pci/cx23885/altera-ci.c 701 */;
	int cocci_id/* drivers/media/pci/cx23885/altera-ci.c 701 */;
	unsigned int cocci_id/* drivers/media/pci/cx23885/altera-ci.c 68 */;
	struct netup_hw_pid_filter cocci_id/* drivers/media/pci/cx23885/altera-ci.c 637 */;
	struct netup_hw_pid_filter *cocci_id/* drivers/media/pci/cx23885/altera-ci.c 632 */;
	struct dvb_demux_feed *cocci_id/* drivers/media/pci/cx23885/altera-ci.c 596 */;
	u16 cocci_id/* drivers/media/pci/cx23885/altera-ci.c 515 */;
	void cocci_id/* drivers/media/pci/cx23885/altera-ci.c 482 */;
	void *cocci_id/* drivers/media/pci/cx23885/altera-ci.c 424 */;
	struct work_struct *cocci_id/* drivers/media/pci/cx23885/altera-ci.c 389 */;
	unsigned long cocci_id/* drivers/media/pci/cx23885/altera-ci.c 322 */;
	struct dvb_ca_en50221 *cocci_id/* drivers/media/pci/cx23885/altera-ci.c 257 */;
	struct fpga_inode cocci_id/* drivers/media/pci/cx23885/altera-ci.c 227 */;
	struct fpga_inode {
		struct fpga_internal *internal;
		struct fpga_inode *next_inode;
	} cocci_id/* drivers/media/pci/cx23885/altera-ci.c 130 */;
	struct netup_hw_pid_filter {
		struct fpga_internal *internal;
		struct dvb_demux *demux;
		int (*start_feed)(struct dvb_demux_feed *feed);
		int (*stop_feed)(struct dvb_demux_feed *feed);
		int status;
		int nr;
	} cocci_id/* drivers/media/pci/cx23885/altera-ci.c 118 */;
	struct altera_ci_state {
		struct fpga_internal *internal;
		struct dvb_ca_en50221 ca;
		int status;
		int nr;
	} cocci_id/* drivers/media/pci/cx23885/altera-ci.c 110 */;
}
