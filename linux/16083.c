cocci_test_suite() {
	struct s626_private {
		u8 ai_cmd_running;
		unsigned int ai_sample_timer;
		int ai_convert_count;
		unsigned int ai_convert_timer;
		u16 counter_int_enabs;
		u8 adc_items;
		struct s626_buffer_dma rps_buf;
		struct s626_buffer_dma ana_buf;
		u32 *dac_wbuf;
		u16 dacpol;
		u8 trim_setpoint[12];
		u32 i2c_adrs;
	} cocci_id/* drivers/staging/comedi/drivers/s626.c 83 */;
	struct s626_buffer_dma {
		dma_addr_t physical_base;
		void *logical_base;
	} cocci_id/* drivers/staging/comedi/drivers/s626.c 63 */;
	int16_t cocci_id/* drivers/staging/comedi/drivers/s626.c 516 */;
	enum{s626_send_dac_wait_not_mc1_a2out, s626_send_dac_wait_ssr_af2_out, s626_send_dac_wait_fb_buffer2_msb_00, s626_send_dac_wait_fb_buffer2_msb_ff,} cocci_id/* drivers/staging/comedi/drivers/s626.c 311 */;
	const u8 cocci_id/* drivers/staging/comedi/drivers/s626.c 307 */[];
	struct pci_driver cocci_id/* drivers/staging/comedi/drivers/s626.c 2594 */;
	const struct pci_device_id cocci_id/* drivers/staging/comedi/drivers/s626.c 2587 */[];
	const struct pci_device_id *cocci_id/* drivers/staging/comedi/drivers/s626.c 2577 */;
	struct comedi_driver cocci_id/* drivers/staging/comedi/drivers/s626.c 2569 */;
	dma_addr_t cocci_id/* drivers/staging/comedi/drivers/s626.c 2132 */;
	void *cocci_id/* drivers/staging/comedi/drivers/s626.c 2131 */;
	struct pci_dev *cocci_id/* drivers/staging/comedi/drivers/s626.c 2129 */;
	s16 cocci_id/* drivers/staging/comedi/drivers/s626.c 1930 */;
	struct s626_private *cocci_id/* drivers/staging/comedi/drivers/s626.c 1908 */;
	struct comedi_subdevice *cocci_id/* drivers/staging/comedi/drivers/s626.c 1906 */;
	struct comedi_device *cocci_id/* drivers/staging/comedi/drivers/s626.c 1906 */;
	int cocci_id/* drivers/staging/comedi/drivers/s626.c 1906 */;
	unsigned int cocci_id/* drivers/staging/comedi/drivers/s626.c 1795 */;
	struct comedi_cmd *cocci_id/* drivers/staging/comedi/drivers/s626.c 1696 */;
	u8 cocci_id/* drivers/staging/comedi/drivers/s626.c 1695 */[16];
	u8 *cocci_id/* drivers/staging/comedi/drivers/s626.c 1587 */;
	u32 cocci_id/* drivers/staging/comedi/drivers/s626.c 1493 */;
	u16 cocci_id/* drivers/staging/comedi/drivers/s626.c 1490 */;
	unsigned int *cocci_id/* drivers/staging/comedi/drivers/s626.c 1488 */;
	unsigned long cocci_id/* drivers/staging/comedi/drivers/s626.c 1475 */;
	struct comedi_insn *cocci_id/* drivers/staging/comedi/drivers/s626.c 1474 */;
	const int cocci_id/* drivers/staging/comedi/drivers/s626.c 147 */;
	const struct comedi_lrange cocci_id/* drivers/staging/comedi/drivers/s626.c 135 */;
	irqreturn_t cocci_id/* drivers/staging/comedi/drivers/s626.c 1230 */;
	unsigned short cocci_id/* drivers/staging/comedi/drivers/s626.c 1204 */;
	u32 *cocci_id/* drivers/staging/comedi/drivers/s626.c 1199 */;
	bool cocci_id/* drivers/staging/comedi/drivers/s626.c 1188 */;
	struct comedi_async *cocci_id/* drivers/staging/comedi/drivers/s626.c 1132 */;
	void cocci_id/* drivers/staging/comedi/drivers/s626.c 1128 */;
	u8 cocci_id/* drivers/staging/comedi/drivers/s626.c 1114 */;
}
