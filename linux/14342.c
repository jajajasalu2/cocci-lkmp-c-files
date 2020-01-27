cocci_test_suite() {
	struct dvb_frontend_ops cocci_id/* drivers/media/dvb-frontends/s5h1411.c 881 */;
	struct s5h1411_state cocci_id/* drivers/media/dvb-frontends/s5h1411.c 864 */;
	u16 cocci_id/* drivers/media/dvb-frontends/s5h1411.c 861 */;
	struct s5h1411_state *cocci_id/* drivers/media/dvb-frontends/s5h1411.c 860 */;
	struct i2c_adapter *cocci_id/* drivers/media/dvb-frontends/s5h1411.c 858 */;
	const struct s5h1411_config *cocci_id/* drivers/media/dvb-frontends/s5h1411.c 857 */;
	struct dvb_frontend *cocci_id/* drivers/media/dvb-frontends/s5h1411.c 857 */;
	const struct dvb_frontend_ops cocci_id/* drivers/media/dvb-frontends/s5h1411.c 855 */;
	void cocci_id/* drivers/media/dvb-frontends/s5h1411.c 849 */;
	struct dvb_frontend_tune_settings *cocci_id/* drivers/media/dvb-frontends/s5h1411.c 843 */;
	struct dtv_frontend_properties *cocci_id/* drivers/media/dvb-frontends/s5h1411.c 832 */;
	u32 *cocci_id/* drivers/media/dvb-frontends/s5h1411.c 826 */;
	u32 cocci_id/* drivers/media/dvb-frontends/s5h1411.c 793 */;
	u16 *cocci_id/* drivers/media/dvb-frontends/s5h1411.c 712 */;
	enum fe_status *cocci_id/* drivers/media/dvb-frontends/s5h1411.c 650 */;
	enum fe_modulation cocci_id/* drivers/media/dvb-frontends/s5h1411.c 475 */;
	struct init_tab {
		u8 addr;
		u8 reg;
		u16 data;
	} cocci_id/* drivers/media/dvb-frontends/s5h1411.c 45 */[];
	int cocci_id/* drivers/media/dvb-frontends/s5h1411.c 37 */;
	struct i2c_msg cocci_id/* drivers/media/dvb-frontends/s5h1411.c 353 */[];
	u8 cocci_id/* drivers/media/dvb-frontends/s5h1411.c 350 */[];
	u8 cocci_id/* drivers/media/dvb-frontends/s5h1411.c 347 */;
	struct i2c_msg cocci_id/* drivers/media/dvb-frontends/s5h1411.c 336 */;
	struct qam256_snr_tab {
		u16 val;
		u16 data;
	} cocci_id/* drivers/media/dvb-frontends/s5h1411.c 251 */[];
	struct s5h1411_state {
		struct i2c_adapter *i2c;
		const struct s5h1411_config *config;
		struct dvb_frontend frontend;
		enum fe_modulation current_modulation;
		unsigned int first_tune:1;
		u32 current_frequency;
		int if_freq;
		u8 inversion;
	} cocci_id/* drivers/media/dvb-frontends/s5h1411.c 19 */;
	struct qam64_snr_tab {
		u16 val;
		u16 data;
	} cocci_id/* drivers/media/dvb-frontends/s5h1411.c 178 */[];
	struct vsb_snr_tab {
		u16 val;
		u16 data;
	} cocci_id/* drivers/media/dvb-frontends/s5h1411.c 133 */[];
}
