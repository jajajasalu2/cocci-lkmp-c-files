cocci_test_suite() {
	struct as10x_tune_args cocci_id/* drivers/media/dvb-frontends/as102_fe.c 58 */;
	struct dvb_frontend_ops cocci_id/* drivers/media/dvb-frontends/as102_fe.c 460 */;
	struct as102_state *cocci_id/* drivers/media/dvb-frontends/as102_fe.c 446 */;
	uint8_t cocci_id/* drivers/media/dvb-frontends/as102_fe.c 444 */;
	void *cocci_id/* drivers/media/dvb-frontends/as102_fe.c 443 */;
	const struct as102_fe_ops *cocci_id/* drivers/media/dvb-frontends/as102_fe.c 442 */;
	const char *cocci_id/* drivers/media/dvb-frontends/as102_fe.c 441 */;
	struct dvb_frontend *cocci_id/* drivers/media/dvb-frontends/as102_fe.c 441 */;
	const struct dvb_frontend_ops cocci_id/* drivers/media/dvb-frontends/as102_fe.c 409 */;
	void cocci_id/* drivers/media/dvb-frontends/as102_fe.c 401 */;
	u16 *cocci_id/* drivers/media/dvb-frontends/as102_fe.c 372 */;
	u32 *cocci_id/* drivers/media/dvb-frontends/as102_fe.c 362 */;
	struct as10x_tune_status cocci_id/* drivers/media/dvb-frontends/as102_fe.c 304 */;
	enum fe_status *cocci_id/* drivers/media/dvb-frontends/as102_fe.c 300 */;
	struct dvb_frontend_tune_settings *cocci_id/* drivers/media/dvb-frontends/as102_fe.c 293 */;
	enum fe_code_rate cocci_id/* drivers/media/dvb-frontends/as102_fe.c 26 */;
	struct as10x_tps cocci_id/* drivers/media/dvb-frontends/as102_fe.c 189 */;
	struct dtv_frontend_properties *cocci_id/* drivers/media/dvb-frontends/as102_fe.c 185 */;
	int cocci_id/* drivers/media/dvb-frontends/as102_fe.c 184 */;
	struct as102_state {
		struct dvb_frontend frontend;
		struct as10x_demod_stats demod_stats;
		const struct as102_fe_ops *ops;
		void *priv;
		uint8_t elna_cfg;
		uint16_t signal_strength;
		uint32_t ber;
	} cocci_id/* drivers/media/dvb-frontends/as102_fe.c 12 */;
}
