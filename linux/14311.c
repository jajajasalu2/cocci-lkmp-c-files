cocci_test_suite() {
	enum dib9000_power_mode cocci_id/* drivers/media/dvb-frontends/dib9000.c 897 */;
	u8 cocci_id/* drivers/media/dvb-frontends/dib9000.c 766 */[4];
	char *cocci_id/* drivers/media/dvb-frontends/dib9000.c 649 */;
	u8 *cocci_id/* drivers/media/dvb-frontends/dib9000.c 488 */;
	struct dib9000_state {
		struct i2c_device i2c;
		struct dibx000_i2c_master i2c_master;
		struct i2c_adapter tuner_adap;
		struct i2c_adapter component_bus;
		u16 revision;
		u8 reg_offs;
		enum frontend_tune_state tune_state;
		u32 status;
		struct dvb_frontend_parametersContext channel_status;
		u8 fe_id;
#define DIB9000_GPIO_DEFAULT_DIRECTIONS 0xffff
		u16 gpio_dir;
#define DIB9000_GPIO_DEFAULT_VALUES 0x0000
		u16 gpio_val;
#define DIB9000_GPIO_DEFAULT_PWM_POS 0xffff
		u16 gpio_pwm_pos;
		union {
			struct {
				u8 mobile_mode:1;
			} host;
			struct {
				struct dib9000_fe_memory_map {
					u16 addr;
					u16 size;
				} fe_mm[18];
				u8 memcmd;
				struct mutex mbx_if_lock;
				struct mutex mbx_lock;
				struct mutex mem_lock;
				struct mutex mem_mbx_lock;
#define MBX_MAX_WORDS (256 - 200 - 2)
#define DIB9000_MSG_CACHE_SIZE 2
					u16 message_cache[DIB9000_MSG_CACHE_SIZE][MBX_MAX_WORDS];
				u8 fw_is_running;
			} risc;
		} platform;
		union {
			struct {
				struct dib9000_config cfg;
			} d9;
		} chip;
		struct dvb_frontend *fe[MAX_NUMBER_OF_FRONTENDS];
		u16 component_bus_speed;
		struct i2c_msg msg[2];
		u8 i2c_write_buffer[255];
		u8 i2c_read_buffer[255];
		struct mutex demod_lock;
		u8 get_frontend_internal;
		struct dib9000_pid_ctrl pid_ctrl[10];
		s8 pid_ctrl_index;
	} cocci_id/* drivers/media/dvb-frontends/dib9000.c 48 */;
	u32 cocci_id/* drivers/media/dvb-frontends/dib9000.c 473 */;
	u16 cocci_id/* drivers/media/dvb-frontends/dib9000.c 473 */;
	const u8 *cocci_id/* drivers/media/dvb-frontends/dib9000.c 473 */;
	u8 cocci_id/* drivers/media/dvb-frontends/dib9000.c 403 */[14];
	struct dib9000_pid_ctrl {
#define DIB9000_PID_FILTER_CTRL 0
#define DIB9000_PID_FILTER 1
		u8 cmd;
		u8 id;
		u16 pid;
		u8 onoff;
	} cocci_id/* drivers/media/dvb-frontends/dib9000.c 39 */;
	u8 cocci_id/* drivers/media/dvb-frontends/dib9000.c 378 */[2];
	struct i2c_msg cocci_id/* drivers/media/dvb-frontends/dib9000.c 363 */;
	struct i2c_device {
		struct i2c_adapter *i2c_adap;
		u8 i2c_addr;
		u8 *i2c_read_buffer;
		u8 *i2c_write_buffer;
	} cocci_id/* drivers/media/dvb-frontends/dib9000.c 32 */;
	struct i2c_msg cocci_id/* drivers/media/dvb-frontends/dib9000.c 282 */[2];
	struct i2c_device *cocci_id/* drivers/media/dvb-frontends/dib9000.c 280 */;
	struct dvb_frontend_ops cocci_id/* drivers/media/dvb-frontends/dib9000.c 2507 */;
	struct dib9000_config cocci_id/* drivers/media/dvb-frontends/dib9000.c 2486 */;
	struct dvb_frontend cocci_id/* drivers/media/dvb-frontends/dib9000.c 2480 */;
	struct dib9000_state cocci_id/* drivers/media/dvb-frontends/dib9000.c 2477 */;
	struct dib9000_state *cocci_id/* drivers/media/dvb-frontends/dib9000.c 2476 */;
	u8 cocci_id/* drivers/media/dvb-frontends/dib9000.c 2473 */;
	const struct dib9000_config *cocci_id/* drivers/media/dvb-frontends/dib9000.c 2473 */;
	struct i2c_adapter *cocci_id/* drivers/media/dvb-frontends/dib9000.c 2473 */;
	struct dvb_frontend *cocci_id/* drivers/media/dvb-frontends/dib9000.c 2473 */;
	const struct dvb_frontend_ops cocci_id/* drivers/media/dvb-frontends/dib9000.c 2472 */;
	struct i2c_device cocci_id/* drivers/media/dvb-frontends/dib9000.c 2379 */;
	u16 *cocci_id/* drivers/media/dvb-frontends/dib9000.c 2283 */;
	u32 *cocci_id/* drivers/media/dvb-frontends/dib9000.c 2202 */;
	enum fe_status *cocci_id/* drivers/media/dvb-frontends/dib9000.c 2169 */;
	int cocci_id/* drivers/media/dvb-frontends/dib9000.c 209 */(struct dib9000_state *state, u32 address, u16 attribute, const u8 *b, u32 len);
	int cocci_id/* drivers/media/dvb-frontends/dib9000.c 208 */(struct dib9000_state *state, u32 address, u16 attribute, const u8 *tx, u32 txlen, u8 *b, u32 len);
	struct dtv_frontend_properties cocci_id/* drivers/media/dvb-frontends/dib9000.c 2034 */;
	int cocci_id/* drivers/media/dvb-frontends/dib9000.c 20 */;
	struct dvb_frontend_parametersContext cocci_id/* drivers/media/dvb-frontends/dib9000.c 1988 */;
	struct dvb_frontend_parametersContext *cocci_id/* drivers/media/dvb-frontends/dib9000.c 1984 */;
	enum frontend_tune_state cocci_id/* drivers/media/dvb-frontends/dib9000.c 1968 */;
	enum fe_status cocci_id/* drivers/media/dvb-frontends/dib9000.c 1901 */;
	struct dtv_frontend_properties *cocci_id/* drivers/media/dvb-frontends/dib9000.c 1897 */;
	struct dvb_frontend_tune_settings *cocci_id/* drivers/media/dvb-frontends/dib9000.c 1890 */;
	enum dibx000_i2c_interface cocci_id/* drivers/media/dvb-frontends/dib9000.c 1738 */;
	const struct i2c_algorithm cocci_id/* drivers/media/dvb-frontends/dib9000.c 1719 */;
	u8 cocci_id/* drivers/media/dvb-frontends/dib9000.c 1660 */[13];
	struct dib9000_fe_memory_map *cocci_id/* drivers/media/dvb-frontends/dib9000.c 1659 */;
	struct i2c_msg cocci_id/* drivers/media/dvb-frontends/dib9000.c 1653 */[];
	enum dib9000_in_messages{IN_MSG_DATA, IN_MSG_FRAME_INFO, IN_MSG_CTL_MONIT, IN_MSG_ACK_FREE_ITEM, IN_MSG_DEBUG_BUF, IN_MSG_MPE_MONITOR, IN_MSG_RAWTS_MONITOR, IN_MSG_END_BRIDGE_I2C_RW, IN_MSG_END_BRIDGE_APB_RW, IN_MSG_VERSION, IN_MSG_END_OF_SCAN, IN_MSG_MONIT_DEMOD, IN_MSG_ERROR, IN_MSG_FE_FW_DL_DONE, IN_MSG_EVENT, IN_MSG_ACK_CHANGE_SVC, IN_MSG_HBM_PROF,} cocci_id/* drivers/media/dvb-frontends/dib9000.c 161 */;
	s8 cocci_id/* drivers/media/dvb-frontends/dib9000.c 1480 */;
	enum dib9000_out_messages{OUT_MSG_HBM_ACK, OUT_MSG_HOST_BUF_FAIL, OUT_MSG_REQ_VERSION, OUT_MSG_BRIDGE_I2C_W, OUT_MSG_BRIDGE_I2C_R, OUT_MSG_BRIDGE_APB_W, OUT_MSG_BRIDGE_APB_R, OUT_MSG_SCAN_CHANNEL, OUT_MSG_MONIT_DEMOD, OUT_MSG_CONF_GPIO, OUT_MSG_DEBUG_HELP, OUT_MSG_SUBBAND_SEL, OUT_MSG_ENABLE_TIME_SLICE, OUT_MSG_FE_FW_DL, OUT_MSG_FE_CHANNEL_SEARCH, OUT_MSG_FE_CHANNEL_TUNE, OUT_MSG_FE_SLEEP, OUT_MSG_FE_SYNC, OUT_MSG_CTL_MONIT, OUT_MSG_CONF_SVC, OUT_MSG_SET_HBM, OUT_MSG_INIT_DEMOD, OUT_MSG_ENABLE_DIVERSITY, OUT_MSG_SET_OUTPUT_MODE, OUT_MSG_SET_PRIORITARY_CHANNEL, OUT_MSG_ACK_FRG, OUT_MSG_INIT_PMU,} cocci_id/* drivers/media/dvb-frontends/dib9000.c 130 */;
	struct dibDVBTChannel cocci_id/* drivers/media/dvb-frontends/dib9000.c 1207 */;
	enum dib9000_power_mode{DIB9000_POWER_ALL=0, DIB9000_POWER_NO, DIB9000_POWER_INTERF_ANALOG_AGC, DIB9000_POWER_COR4_DINTLV_ICIRM_EQUAL_CFROD, DIB9000_POWER_COR4_CRY_ESRAM_MOUT_NUD, DIB9000_POWER_INTERFACE_ONLY,} cocci_id/* drivers/media/dvb-frontends/dib9000.c 120 */;
	struct dibDVBTChannel *cocci_id/* drivers/media/dvb-frontends/dib9000.c 1194 */;
	struct dibDVBTChannel {
		s8 spectrum_inversion;
		s8 nfft;
		s8 guard;
		s8 constellation;
		s8 hrch;
		s8 alpha;
		s8 code_rate_hp;
		s8 code_rate_lp;
		s8 select_hp;
		s8 intlv_native;
	} cocci_id/* drivers/media/dvb-frontends/dib9000.c 1179 */;
	u8 cocci_id/* drivers/media/dvb-frontends/dib9000.c 1157 */[9];
	void cocci_id/* drivers/media/dvb-frontends/dib9000.c 1155 */;
	const u32 cocci_id/* drivers/media/dvb-frontends/dib9000.c 115 */[44];
	u16 cocci_id/* drivers/media/dvb-frontends/dib9000.c 1081 */[40];
	struct dibGPIOFunction *cocci_id/* drivers/media/dvb-frontends/dib9000.c 1080 */;
	u16 cocci_id/* drivers/media/dvb-frontends/dib9000.c 1014 */[10];
}
