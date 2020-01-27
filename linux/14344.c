cocci_test_suite() {
	void cocci_id/* drivers/media/dvb-frontends/gp8psk-fe.c 88 */;
	u32 *cocci_id/* drivers/media/dvb-frontends/gp8psk-fe.c 86 */;
	enum fe_status *cocci_id/* drivers/media/dvb-frontends/gp8psk-fe.c 68 */;
	u8 cocci_id/* drivers/media/dvb-frontends/gp8psk-fe.c 57 */[6];
	struct dvb_frontend_ops cocci_id/* drivers/media/dvb-frontends/gp8psk-fe.c 339 */;
	struct gp8psk_fe_state cocci_id/* drivers/media/dvb-frontends/gp8psk-fe.c 335 */;
	struct gp8psk_fe_state *cocci_id/* drivers/media/dvb-frontends/gp8psk-fe.c 328 */;
	bool cocci_id/* drivers/media/dvb-frontends/gp8psk-fe.c 326 */;
	void *cocci_id/* drivers/media/dvb-frontends/gp8psk-fe.c 326 */;
	const struct gp8psk_fe_ops *cocci_id/* drivers/media/dvb-frontends/gp8psk-fe.c 325 */;
	struct dvb_frontend *cocci_id/* drivers/media/dvb-frontends/gp8psk-fe.c 325 */;
	const struct dvb_frontend_ops cocci_id/* drivers/media/dvb-frontends/gp8psk-fe.c 323 */;
	unsigned long cocci_id/* drivers/media/dvb-frontends/gp8psk-fe.c 301 */;
	long cocci_id/* drivers/media/dvb-frontends/gp8psk-fe.c 294 */;
	enum fe_sec_voltage cocci_id/* drivers/media/dvb-frontends/gp8psk-fe.c 283 */;
	struct gp8psk_fe_state {
		struct dvb_frontend fe;
		void *priv;
		const struct gp8psk_fe_ops *ops;
		bool is_rev1;
		u8 lock;
		u16 snr;
		unsigned long next_status_check;
		unsigned long status_check_interval;
	} cocci_id/* drivers/media/dvb-frontends/gp8psk-fe.c 28 */;
	enum fe_sec_tone_mode cocci_id/* drivers/media/dvb-frontends/gp8psk-fe.c 271 */;
	u8 cocci_id/* drivers/media/dvb-frontends/gp8psk-fe.c 256 */;
	enum fe_sec_mini_cmd cocci_id/* drivers/media/dvb-frontends/gp8psk-fe.c 253 */;
	struct dvb_diseqc_master_cmd *cocci_id/* drivers/media/dvb-frontends/gp8psk-fe.c 239 */;
	int cocci_id/* drivers/media/dvb-frontends/gp8psk-fe.c 18 */;
	u32 cocci_id/* drivers/media/dvb-frontends/gp8psk-fe.c 135 */;
	u8 cocci_id/* drivers/media/dvb-frontends/gp8psk-fe.c 134 */[10];
	struct dtv_frontend_properties *cocci_id/* drivers/media/dvb-frontends/gp8psk-fe.c 133 */;
	struct dvb_frontend_tune_settings *cocci_id/* drivers/media/dvb-frontends/gp8psk-fe.c 124 */;
	u16 *cocci_id/* drivers/media/dvb-frontends/gp8psk-fe.c 110 */;
}
