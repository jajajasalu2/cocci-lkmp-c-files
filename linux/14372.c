cocci_test_suite() {
	void cocci_id/* drivers/media/dvb-frontends/dib7000p.c 97 */(struct dib7000p_state *state,
								     int mode);
	int cocci_id/* drivers/media/dvb-frontends/dib7000p.c 96 */(struct dvb_frontend *fe,
								    int onoff);
	int cocci_id/* drivers/media/dvb-frontends/dib7000p.c 95 */(struct dvb_frontend *fe,
								    int mode);
	enum dib7000p_power_mode{DIB7000P_POWER_ALL=0, DIB7000P_POWER_ANALOG_ADC, DIB7000P_POWER_INTERFACE_ONLY,} cocci_id/* drivers/media/dvb-frontends/dib7000p.c 88 */;
	s32 cocci_id/* drivers/media/dvb-frontends/dib7000p.c 846 */;
	u32 cocci_id/* drivers/media/dvb-frontends/dib7000p.c 845 */;
	u16 cocci_id/* drivers/media/dvb-frontends/dib7000p.c 844 */;
	u8 cocci_id/* drivers/media/dvb-frontends/dib7000p.c 843 */;
	u8 *cocci_id/* drivers/media/dvb-frontends/dib7000p.c 842 */;
	struct dib7000p_state *cocci_id/* drivers/media/dvb-frontends/dib7000p.c 840 */;
	struct dtv_frontend_properties *cocci_id/* drivers/media/dvb-frontends/dib7000p.c 839 */;
	struct dvb_frontend *cocci_id/* drivers/media/dvb-frontends/dib7000p.c 837 */;
	struct dibx000_agc_config *cocci_id/* drivers/media/dvb-frontends/dib7000p.c 753 */;
	void cocci_id/* drivers/media/dvb-frontends/dib7000p.c 720 */;
	void cocci_id/* drivers/media/dvb-frontends/dib7000p.c 645 */(struct dvb_frontend *fe);
	u16 cocci_id/* drivers/media/dvb-frontends/dib7000p.c 562 */[];
	struct dibx000_bandwidth_config *cocci_id/* drivers/media/dvb-frontends/dib7000p.c 449 */;
	u16 *cocci_id/* drivers/media/dvb-frontends/dib7000p.c 425 */;
	struct dib7000p_state {
		struct dvb_frontend demod;
		struct dib7000p_config cfg;
		u8 i2c_addr;
		struct i2c_adapter *i2c_adap;
		struct dibx000_i2c_master i2c_master;
		u16 wbd_ref;
		u8 current_band;
		u32 current_bandwidth;
		struct dibx000_agc_config *current_agc;
		u32 timf;
		u8 div_force_off:1;
		u8 div_state:1;
		u16 div_sync_wait;
		u8 agc_state;
		u16 gpio_dir;
		u16 gpio_val;
		u8 sfn_workaround_active:1;
#define SOC7090 0x7090
		u16 version;
		u16 tuner_enable;
		struct i2c_adapter dib7090_tuner_adap;
		struct i2c_msg msg[2];
		u8 i2c_write_buffer[4];
		u8 i2c_read_buffer[2];
		struct mutex i2c_buffer_lock;
		u8 input_mode_mpeg;
		s64 old_ucb;
		unsigned long per_jiffies_stats;
		unsigned long ber_jiffies_stats;
		unsigned long get_stats_time;
	} cocci_id/* drivers/media/dvb-frontends/dib7000p.c 40 */;
	struct i2c_device {
		struct i2c_adapter *i2c_adap;
		u8 i2c_addr;
	} cocci_id/* drivers/media/dvb-frontends/dib7000p.c 35 */;
	enum dibx000_adc_states cocci_id/* drivers/media/dvb-frontends/dib7000p.c 302 */;
	struct dib7000p_ops *cocci_id/* drivers/media/dvb-frontends/dib7000p.c 2801 */;
	void *cocci_id/* drivers/media/dvb-frontends/dib7000p.c 2801 */;
	struct dvb_frontend_ops cocci_id/* drivers/media/dvb-frontends/dib7000p.c 2759 */;
	struct dib7000p_config cocci_id/* drivers/media/dvb-frontends/dib7000p.c 2745 */;
	struct dib7000p_config *cocci_id/* drivers/media/dvb-frontends/dib7000p.c 2737 */;
	const struct dvb_frontend_ops cocci_id/* drivers/media/dvb-frontends/dib7000p.c 2736 */;
	enum dib7000p_power_mode cocci_id/* drivers/media/dvb-frontends/dib7000p.c 251 */;
	int cocci_id/* drivers/media/dvb-frontends/dib7000p.c 25 */;
	const struct i2c_algorithm cocci_id/* drivers/media/dvb-frontends/dib7000p.c 2394 */;
	struct i2c_msg cocci_id/* drivers/media/dvb-frontends/dib7000p.c 2274 */[];
	struct i2c_msg *cocci_id/* drivers/media/dvb-frontends/dib7000p.c 2177 */;
	u16 cocci_id/* drivers/media/dvb-frontends/dib7000p.c 2152 */[2];
	const s32 cocci_id/* drivers/media/dvb-frontends/dib7000p.c 2143 */[];
	struct dib7000p_state cocci_id/* drivers/media/dvb-frontends/dib7000p.c 2089 */;
	struct dib7000p_config cocci_id/* drivers/media/dvb-frontends/dib7000p.c 2083 */[];
	enum dibx000_i2c_interface cocci_id/* drivers/media/dvb-frontends/dib7000p.c 2061 */;
	struct i2c_adapter *cocci_id/* drivers/media/dvb-frontends/dib7000p.c 2061 */;
	struct i2c_msg cocci_id/* drivers/media/dvb-frontends/dib7000p.c 2015 */[2];
	struct dvb_frontend_tune_settings *cocci_id/* drivers/media/dvb-frontends/dib7000p.c 1998 */;
	u64 cocci_id/* drivers/media/dvb-frontends/dib7000p.c 1902 */;
	enum fe_status cocci_id/* drivers/media/dvb-frontends/dib7000p.c 1896 */;
	unsigned cocci_id/* drivers/media/dvb-frontends/dib7000p.c 1763 */;
	struct linear_segments *cocci_id/* drivers/media/dvb-frontends/dib7000p.c 1762 */;
	struct linear_segments cocci_id/* drivers/media/dvb-frontends/dib7000p.c 1725 */[];
	struct linear_segments {
		unsigned x;
		signed y;
	} cocci_id/* drivers/media/dvb-frontends/dib7000p.c 1699 */;
	u32 *cocci_id/* drivers/media/dvb-frontends/dib7000p.c 1599 */;
	enum fe_status *cocci_id/* drivers/media/dvb-frontends/dib7000p.c 1576 */;
	int cocci_id/* drivers/media/dvb-frontends/dib7000p.c 1574 */(struct dvb_frontend *fe, enum fe_status stat);
	int cocci_id/* drivers/media/dvb-frontends/dib7000p.c 1214 */[8];
	u8 cocci_id/* drivers/media/dvb-frontends/dib7000p.c 1192 */[];
	s16 cocci_id/* drivers/media/dvb-frontends/dib7000p.c 1191 */[];
	struct dtv_frontend_properties cocci_id/* drivers/media/dvb-frontends/dib7000p.c 1134 */;
	struct i2c_msg cocci_id/* drivers/media/dvb-frontends/dib7000p.c 112 */;
}
