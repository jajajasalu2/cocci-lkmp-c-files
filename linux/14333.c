cocci_test_suite() {
	struct i2c_msg cocci_id/* drivers/media/dvb-frontends/bcm3510.c 85 */;
	u8 cocci_id/* drivers/media/dvb-frontends/bcm3510.c 83 */[256];
	struct dvb_frontend_ops cocci_id/* drivers/media/dvb-frontends/bcm3510.c 813 */;
	struct bcm3510_state cocci_id/* drivers/media/dvb-frontends/bcm3510.c 803 */;
	bcm3510_register_value cocci_id/* drivers/media/dvb-frontends/bcm3510.c 800 */;
	int cocci_id/* drivers/media/dvb-frontends/bcm3510.c 799 */;
	struct bcm3510_state *cocci_id/* drivers/media/dvb-frontends/bcm3510.c 798 */;
	struct i2c_adapter *cocci_id/* drivers/media/dvb-frontends/bcm3510.c 796 */;
	const struct bcm3510_config *cocci_id/* drivers/media/dvb-frontends/bcm3510.c 795 */;
	struct dvb_frontend *cocci_id/* drivers/media/dvb-frontends/bcm3510.c 795 */;
	const struct dvb_frontend_ops cocci_id/* drivers/media/dvb-frontends/bcm3510.c 793 */;
	struct bcm3510_hab_cmd_set_agc cocci_id/* drivers/media/dvb-frontends/bcm3510.c 763 */;
	unsigned long cocci_id/* drivers/media/dvb-frontends/bcm3510.c 706 */;
	u8 *cocci_id/* drivers/media/dvb-frontends/bcm3510.c 664 */;
	struct bcm3510_hab_cmd_get_version_info cocci_id/* drivers/media/dvb-frontends/bcm3510.c 663 */;
	__le16 *cocci_id/* drivers/media/dvb-frontends/bcm3510.c 647 */;
	const u8 *cocci_id/* drivers/media/dvb-frontends/bcm3510.c 635 */;
	u16 cocci_id/* drivers/media/dvb-frontends/bcm3510.c 634 */;
	const struct firmware *cocci_id/* drivers/media/dvb-frontends/bcm3510.c 633 */;
	void cocci_id/* drivers/media/dvb-frontends/bcm3510.c 598 */;
	struct dvb_frontend_tune_settings *cocci_id/* drivers/media/dvb-frontends/bcm3510.c 590 */;
	struct bcm3510_hab_cmd_bert_control cocci_id/* drivers/media/dvb-frontends/bcm3510.c 500 */;
	struct bcm3510_state {
		struct i2c_adapter *i2c;
		const struct bcm3510_config *config;
		struct dvb_frontend frontend;
		struct mutex hab_mutex;
		u8 firmware_loaded:1;
		unsigned long next_status_check;
		unsigned long status_check_interval;
		struct bcm3510_hab_cmd_status1 status1;
		struct bcm3510_hab_cmd_status2 status2;
	} cocci_id/* drivers/media/dvb-frontends/bcm3510.c 50 */;
	struct bcm3510_hab_cmd_ext_acquire cocci_id/* drivers/media/dvb-frontends/bcm3510.c 499 */;
	struct dtv_frontend_properties *cocci_id/* drivers/media/dvb-frontends/bcm3510.c 497 */;
	u32 cocci_id/* drivers/media/dvb-frontends/bcm3510.c 452 */;
	struct bcm3510_hab_cmd_tune cocci_id/* drivers/media/dvb-frontends/bcm3510.c 365 */;
	s32 cocci_id/* drivers/media/dvb-frontends/bcm3510.c 336 */;
	u16 *cocci_id/* drivers/media/dvb-frontends/bcm3510.c 333 */;
	u32 *cocci_id/* drivers/media/dvb-frontends/bcm3510.c 316 */;
	enum fe_status *cocci_id/* drivers/media/dvb-frontends/bcm3510.c 292 */;
	u8 cocci_id/* drivers/media/dvb-frontends/bcm3510.c 207 */[MAX_XFER_SIZE];
	u8 cocci_id/* drivers/media/dvb-frontends/bcm3510.c 205 */;
	bcm3510_register_value *cocci_id/* drivers/media/dvb-frontends/bcm3510.c 131 */;
	struct i2c_msg cocci_id/* drivers/media/dvb-frontends/bcm3510.c 106 */[];
}