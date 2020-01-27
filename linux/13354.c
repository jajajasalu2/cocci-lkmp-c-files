cocci_test_suite() {
	s32 cocci_id/* drivers/media/pci/ddbridge/ddbridge-sx8.c 98 */;
	s64 cocci_id/* drivers/media/pci/ddbridge/ddbridge-sx8.c 89 */;
	struct dtv_frontend_properties *cocci_id/* drivers/media/pci/ddbridge/ddbridge-sx8.c 84 */;
	struct mci_command cocci_id/* drivers/media/pci/ddbridge/ddbridge-sx8.c 72 */;
	struct sx8 *cocci_id/* drivers/media/pci/ddbridge/ddbridge-sx8.c 71 */;
	int cocci_id/* drivers/media/pci/ddbridge/ddbridge-sx8.c 68 */;
	void cocci_id/* drivers/media/pci/ddbridge/ddbridge-sx8.c 55 */;
	struct sx8 cocci_id/* drivers/media/pci/ddbridge/ddbridge-sx8.c 483 */;
	struct sx8_base cocci_id/* drivers/media/pci/ddbridge/ddbridge-sx8.c 482 */;
	const struct mci_cfg cocci_id/* drivers/media/pci/ddbridge/ddbridge-sx8.c 479 */;
	struct mci *cocci_id/* drivers/media/pci/ddbridge/ddbridge-sx8.c 471 */;
	struct dvb_frontend_ops cocci_id/* drivers/media/pci/ddbridge/ddbridge-sx8.c 451 */;
	struct sx8 {
		struct mci mci;
		int first_time_lock;
		int started;
		struct mci_result signal_info;
		u32 bb_mode;
		u32 local_frequency;
	} cocci_id/* drivers/media/pci/ddbridge/ddbridge-sx8.c 44 */;
	enum dvbfe_algo cocci_id/* drivers/media/pci/ddbridge/ddbridge-sx8.c 433 */;
	struct dvb_frontend *cocci_id/* drivers/media/pci/ddbridge/ddbridge-sx8.c 433 */;
	unsigned int *cocci_id/* drivers/media/pci/ddbridge/ddbridge-sx8.c 414 */;
	unsigned int cocci_id/* drivers/media/pci/ddbridge/ddbridge-sx8.c 413 */;
	bool cocci_id/* drivers/media/pci/ddbridge/ddbridge-sx8.c 412 */;
	struct sx8_base {
		struct mci_base mci_base;
		u8 tuner_use_count[SX8_TUNER_NUM];
		u32 gain_mode[SX8_TUNER_NUM];
		u32 used_ldpc_bitrate[SX8_DEMOD_NUM];
		u8 demod_in_use[SX8_DEMOD_NUM];
		u32 iq_mode;
		u32 burst_size;
		u32 direct_mode;
	} cocci_id/* drivers/media/pci/ddbridge/ddbridge-sx8.c 31 */;
	const u32 cocci_id/* drivers/media/pci/ddbridge/ddbridge-sx8.c 25 */;
	struct sx8_base *cocci_id/* drivers/media/pci/ddbridge/ddbridge-sx8.c 137 */;
	struct mci_base *cocci_id/* drivers/media/pci/ddbridge/ddbridge-sx8.c 136 */;
	u32 cocci_id/* drivers/media/pci/ddbridge/ddbridge-sx8.c 133 */;
	struct mci_result cocci_id/* drivers/media/pci/ddbridge/ddbridge-sx8.c 114 */;
	enum fe_status *cocci_id/* drivers/media/pci/ddbridge/ddbridge-sx8.c 109 */;
}
