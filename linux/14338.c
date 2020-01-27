cocci_test_suite() {
	u8 cocci_id/* drivers/media/dvb-frontends/drx39xyj/drxj.c 9933 */[4][6];
	u8 cocci_id/* drivers/media/dvb-frontends/drx39xyj/drxj.c 9932 */[4];
	s16 cocci_id/* drivers/media/dvb-frontends/drx39xyj/drxj.c 9926 */[4][(NYQFILTERLEN + 1) / 2];
	u16 cocci_id/* drivers/media/dvb-frontends/drx39xyj/drxj.c 9924 */[3];
	bool cocci_id/* drivers/media/dvb-frontends/drx39xyj/drxj.c 9921 */;
	struct drxoob *cocci_id/* drivers/media/dvb-frontends/drx39xyj/drxj.c 9914 */;
	struct drxj_hi_cmd {
		u16 cmd;
		u16 param1;
		u16 param2;
		u16 param3;
		u16 param4;
		u16 param5;
		u16 param6;
	} cocci_id/* drivers/media/dvb-frontends/drx39xyj/drxj.c 986 */;
	struct drxjeq_stat {
		u16 eq_mse;
		u8 eq_mode;
		u8 eq_ctrl;
		u8 eq_stat;
	} cocci_id/* drivers/media/dvb-frontends/drx39xyj/drxj.c 978 */;
	u32 cocci_id/* drivers/media/dvb-frontends/drx39xyj/drxj.c 9464 */;
	enum drx_modulation cocci_id/* drivers/media/dvb-frontends/drx39xyj/drxj.c 9461 */;
	struct drxjrs_errors cocci_id/* drivers/media/dvb-frontends/drx39xyj/drxj.c 9460 */;
	struct dtv_frontend_properties *cocci_id/* drivers/media/dvb-frontends/drx39xyj/drxj.c 9459 */;
	struct drx39xxj_state *cocci_id/* drivers/media/dvb-frontends/drx39xyj/drxj.c 9458 */;
	struct drxjrs_errors *cocci_id/* drivers/media/dvb-frontends/drx39xyj/drxj.c 9300 */;
	struct drx_aud_data cocci_id/* drivers/media/dvb-frontends/drx39xyj/drxj.c 906 */;
	int cocci_id/* drivers/media/dvb-frontends/drx39xyj/drxj.c 8666 */(struct drx_demod_instance *demod);
	struct drxj_cfg_afe_gain cocci_id/* drivers/media/dvb-frontends/drx39xyj/drxj.c 8477 */;
	const u8 cocci_id/* drivers/media/dvb-frontends/drx39xyj/drxj.c 7869 */[];
	struct drx_version_list *cocci_id/* drivers/media/dvb-frontends/drx39xyj/drxj.c 742 */;
	struct drx_version *cocci_id/* drivers/media/dvb-frontends/drx39xyj/drxj.c 741 */;
	int cocci_id/* drivers/media/dvb-frontends/drx39xyj/drxj.c 561 */(struct i2c_device_addr *dev_addr,
									  u32 addr,
									  u32 data,
									  u32 flags);
	int cocci_id/* drivers/media/dvb-frontends/drx39xyj/drxj.c 557 */(struct i2c_device_addr *dev_addr,
									  u32 addr,
									  u16 data,
									  u32 flags);
	int cocci_id/* drivers/media/dvb-frontends/drx39xyj/drxj.c 548 */(struct i2c_device_addr *dev_addr,
									  u32 addr,
									  u32 *data,
									  u32 flags);
	int cocci_id/* drivers/media/dvb-frontends/drx39xyj/drxj.c 544 */(struct i2c_device_addr *dev_addr,
									  u32 addr,
									  u16 *data,
									  u32 flags);
	int cocci_id/* drivers/media/dvb-frontends/drx39xyj/drxj.c 539 */(struct i2c_device_addr *dev_addr,
									  u32 waddr,
									  u32 raddr,
									  u16 wdata,
									  u16 *rdata);
	int cocci_id/* drivers/media/dvb-frontends/drx39xyj/drxj.c 533 */(struct i2c_device_addr *dev_addr,
									  u32 addr,
									  u16 datasize,
									  u8 *data,
									  u32 flags);
	drx_read_reg16func_t cocci_id/* drivers/media/dvb-frontends/drx39xyj/drxj.c 5126 */;
	drx_write_reg16func_t cocci_id/* drivers/media/dvb-frontends/drx39xyj/drxj.c 5125 */;
	struct drxj_cfg_agc *cocci_id/* drivers/media/dvb-frontends/drx39xyj/drxj.c 4383 */;
	u16 cocci_id/* drivers/media/dvb-frontends/drx39xyj/drxj.c 4256 */;
	struct i2c_device_addr *cocci_id/* drivers/media/dvb-frontends/drx39xyj/drxj.c 4254 */;
	u16 *cocci_id/* drivers/media/dvb-frontends/drx39xyj/drxj.c 4252 */;
	struct drx_demod_instance *cocci_id/* drivers/media/dvb-frontends/drx39xyj/drxj.c 4252 */;
	int cocci_id/* drivers/media/dvb-frontends/drx39xyj/drxj.c 4252 */;
	u8 cocci_id/* drivers/media/dvb-frontends/drx39xyj/drxj.c 4203 */[2];
	u16 cocci_id/* drivers/media/dvb-frontends/drx39xyj/drxj.c 4142 */[15];
	u16 cocci_id/* drivers/media/dvb-frontends/drx39xyj/drxj.c 4141 */[18];
	s16 cocci_id/* drivers/media/dvb-frontends/drx39xyj/drxj.c 4063 */;
	unsigned long cocci_id/* drivers/media/dvb-frontends/drx39xyj/drxj.c 3986 */;
	struct drxjscu_cmd *cocci_id/* drivers/media/dvb-frontends/drx39xyj/drxj.c 3982 */;
	struct drxj_hi_cmd cocci_id/* drivers/media/dvb-frontends/drx39xyj/drxj.c 3885 */;
	bool *cocci_id/* drivers/media/dvb-frontends/drx39xyj/drxj.c 3883 */;
	struct drxuio_data *cocci_id/* drivers/media/dvb-frontends/drx39xyj/drxj.c 3673 */;
	struct drxuio_cfg *cocci_id/* drivers/media/dvb-frontends/drx39xyj/drxj.c 3535 */;
	struct drxj_data *cocci_id/* drivers/media/dvb-frontends/drx39xyj/drxj.c 3446 */;
	struct drx_cfg_mpeg_output *cocci_id/* drivers/media/dvb-frontends/drx39xyj/drxj.c 2728 */;
	const struct drxj_hi_cmd *cocci_id/* drivers/media/dvb-frontends/drx39xyj/drxj.c 2277 */;
	const struct drx_demod_instance *cocci_id/* drivers/media/dvb-frontends/drx39xyj/drxj.c 2233 */;
	const u32 cocci_id/* drivers/media/dvb-frontends/drx39xyj/drxj.c 1919 */;
	u8 cocci_id/* drivers/media/dvb-frontends/drx39xyj/drxj.c 1729 */[sizeof(data)];
	u8 cocci_id/* drivers/media/dvb-frontends/drx39xyj/drxj.c 1596 */[DRXDAP_MAX_WCHUNKSIZE];
	u8 cocci_id/* drivers/media/dvb-frontends/drx39xyj/drxj.c 1523 */[sizeof(*data)];
	unsigned int cocci_id/* drivers/media/dvb-frontends/drx39xyj/drxj.c 1316 */;
	struct i2c_msg cocci_id/* drivers/media/dvb-frontends/drx39xyj/drxj.c 1315 */[2];
	struct dvb_frontend_ops cocci_id/* drivers/media/dvb-frontends/drx39xyj/drxj.c 12334 */;
	struct drxj_data cocci_id/* drivers/media/dvb-frontends/drx39xyj/drxj.c 12305 */;
	struct drx_common_attr cocci_id/* drivers/media/dvb-frontends/drx39xyj/drxj.c 12301 */;
	struct i2c_device_addr cocci_id/* drivers/media/dvb-frontends/drx39xyj/drxj.c 12296 */;
	struct drx_demod_instance cocci_id/* drivers/media/dvb-frontends/drx39xyj/drxj.c 12291 */;
	struct drx39xxj_state cocci_id/* drivers/media/dvb-frontends/drx39xyj/drxj.c 12286 */;
	struct i2c_adapter *cocci_id/* drivers/media/dvb-frontends/drx39xyj/drxj.c 12275 */;
	struct dvb_frontend *cocci_id/* drivers/media/dvb-frontends/drx39xyj/drxj.c 12275 */;
	const struct dvb_frontend_ops cocci_id/* drivers/media/dvb-frontends/drx39xyj/drxj.c 12273 */;
	void cocci_id/* drivers/media/dvb-frontends/drx39xyj/drxj.c 12256 */;
	struct dvb_frontend_tune_settings *cocci_id/* drivers/media/dvb-frontends/drx39xyj/drxj.c 12250 */;
	const struct drx_channel cocci_id/* drivers/media/dvb-frontends/drx39xyj/drxj.c 12082 */;
	struct drx_channel cocci_id/* drivers/media/dvb-frontends/drx39xyj/drxj.c 12080 */;
	u64 cocci_id/* drivers/media/dvb-frontends/drx39xyj/drxj.c 12045 */;
	u32 *cocci_id/* drivers/media/dvb-frontends/drx39xyj/drxj.c 12007 */;
	enum fe_status *cocci_id/* drivers/media/dvb-frontends/drx39xyj/drxj.c 11959 */;
	enum drx_power_mode cocci_id/* drivers/media/dvb-frontends/drx39xyj/drxj.c 11943 */;
	dr_xaddr_t cocci_id/* drivers/media/dvb-frontends/drx39xyj/drxj.c 11882 */;
	u8 cocci_id/* drivers/media/dvb-frontends/drx39xyj/drxj.c 11851 */[DRX_UCODE_MAX_BUF_SIZE];
	const struct firmware *cocci_id/* drivers/media/dvb-frontends/drx39xyj/drxj.c 11754 */;
	char *cocci_id/* drivers/media/dvb-frontends/drx39xyj/drxj.c 11745 */;
	const u8 *cocci_id/* drivers/media/dvb-frontends/drx39xyj/drxj.c 11742 */;
	enum drxu_code_action cocci_id/* drivers/media/dvb-frontends/drx39xyj/drxj.c 11735 */;
	struct drxu_code_info *cocci_id/* drivers/media/dvb-frontends/drx39xyj/drxj.c 11734 */;
	void *cocci_id/* drivers/media/dvb-frontends/drx39xyj/drxj.c 11674 */;
	__be32 *cocci_id/* drivers/media/dvb-frontends/drx39xyj/drxj.c 11660 */;
	__be16 *cocci_id/* drivers/media/dvb-frontends/drx39xyj/drxj.c 11642 */;
	struct drxu_code_block_hdr cocci_id/* drivers/media/dvb-frontends/drx39xyj/drxj.c 11638 */;
	unsigned cocci_id/* drivers/media/dvb-frontends/drx39xyj/drxj.c 11636 */;
	struct drx_cfg_mpeg_output cocci_id/* drivers/media/dvb-frontends/drx39xyj/drxj.c 11348 */;
	struct drxu_code_info cocci_id/* drivers/media/dvb-frontends/drx39xyj/drxj.c 11347 */;
	int cocci_id/* drivers/media/dvb-frontends/drx39xyj/drxj.c 11328 */(struct drx_demod_instance *demod,
									    bool state);
	int cocci_id/* drivers/media/dvb-frontends/drx39xyj/drxj.c 11325 */(struct drx_demod_instance *demod,
									    struct drxu_code_info *mc_info,
									    enum drxu_code_action action);
	u8 cocci_id/* drivers/media/dvb-frontends/drx39xyj/drxj.c 11257 */;
	struct drxj_cfg_afe_gain *cocci_id/* drivers/media/dvb-frontends/drx39xyj/drxj.c 11252 */;
	struct drxj_cfg_pre_saw *cocci_id/* drivers/media/dvb-frontends/drx39xyj/drxj.c 11189 */;
	const u32 cocci_id/* drivers/media/dvb-frontends/drx39xyj/drxj.c 1114 */[];
	const u8 cocci_id/* drivers/media/dvb-frontends/drx39xyj/drxj.c 1107 */;
	struct drx_common_attr *cocci_id/* drivers/media/dvb-frontends/drx39xyj/drxj.c 11033 */;
	enum drx_power_mode *cocci_id/* drivers/media/dvb-frontends/drx39xyj/drxj.c 11031 */;
	enum drx_standard *cocci_id/* drivers/media/dvb-frontends/drx39xyj/drxj.c 10873 */;
	u16 cocci_id/* drivers/media/dvb-frontends/drx39xyj/drxj.c 10795 */[2];
	struct drxjscu_cmd cocci_id/* drivers/media/dvb-frontends/drx39xyj/drxj.c 10788 */;
	enum drx_standard cocci_id/* drivers/media/dvb-frontends/drx39xyj/drxj.c 10785 */;
	enum drx_lock_status *cocci_id/* drivers/media/dvb-frontends/drx39xyj/drxj.c 10783 */;
	enum drx_lock_status cocci_id/* drivers/media/dvb-frontends/drx39xyj/drxj.c 10671 */;
	struct drxuio_data cocci_id/* drivers/media/dvb-frontends/drx39xyj/drxj.c 10580 */;
	struct drxuio_cfg cocci_id/* drivers/media/dvb-frontends/drx39xyj/drxj.c 10495 */;
	s32 cocci_id/* drivers/media/dvb-frontends/drx39xyj/drxj.c 10440 */;
	struct drx_channel *cocci_id/* drivers/media/dvb-frontends/drx39xyj/drxj.c 10437 */;
	int cocci_id/* drivers/media/dvb-frontends/drx39xyj/drxj.c 1035 */(struct drx_demod_instance *demod,
									   struct drxj_cfg_afe_gain *afe_gain);
	u8 *cocci_id/* drivers/media/dvb-frontends/drx39xyj/drxj.c 10348 */;
	int cocci_id/* drivers/media/dvb-frontends/drx39xyj/drxj.c 1032 */(struct drx_demod_instance *demod,
									   struct drxj_cfg_pre_saw *pre_saw);
	int cocci_id/* drivers/media/dvb-frontends/drx39xyj/drxj.c 1027 */(struct drx_demod_instance *demod,
									   enum drx_power_mode *mode);
	int cocci_id/* drivers/media/dvb-frontends/drx39xyj/drxj.c 1024 */(struct drx_demod_instance *demod,
									   enum drx_lock_status *lock_stat);
	int cocci_id/* drivers/media/dvb-frontends/drx39xyj/drxj.c 1020 */(struct i2c_device_addr *dev_addr,
									   const struct drxj_hi_cmd *cmd,
									   u16 *result);
	struct drxu_code_block_hdr {
		u32 addr;
		u16 size;
		u16 flags;
		u16 CRC;
	} cocci_id/* drivers/media/dvb-frontends/drx39xyj/drxj.c 1009 */;
}
