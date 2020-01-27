cocci_test_suite() {
	struct i2c_msg cocci_id/* drivers/media/dvb-frontends/cx24113.c 93 */;
	u8 cocci_id/* drivers/media/dvb-frontends/cx24113.c 92 */[];
	struct dvb_tuner_ops cocci_id/* drivers/media/dvb-frontends/cx24113.c 584 */;
	int cocci_id/* drivers/media/dvb-frontends/cx24113.c 546 */;
	const struct cx24113_config *cocci_id/* drivers/media/dvb-frontends/cx24113.c 542 */;
	struct i2c_adapter *cocci_id/* drivers/media/dvb-frontends/cx24113.c 542 */;
	const struct dvb_tuner_ops cocci_id/* drivers/media/dvb-frontends/cx24113.c 524 */;
	u32 *cocci_id/* drivers/media/dvb-frontends/cx24113.c 509 */;
	u16 *cocci_id/* drivers/media/dvb-frontends/cx24113.c 498 */;
	s16 cocci_id/* drivers/media/dvb-frontends/cx24113.c 492 */;
	struct cx24113_state *cocci_id/* drivers/media/dvb-frontends/cx24113.c 491 */;
	struct dvb_frontend *cocci_id/* drivers/media/dvb-frontends/cx24113.c 489 */;
	void cocci_id/* drivers/media/dvb-frontends/cx24113.c 489 */;
	s8 cocci_id/* drivers/media/dvb-frontends/cx24113.c 484 */[2][10];
	struct dtv_frontend_properties *cocci_id/* drivers/media/dvb-frontends/cx24113.c 467 */;
	u16 cocci_id/* drivers/media/dvb-frontends/cx24113.c 358 */;
	long long cocci_id/* drivers/media/dvb-frontends/cx24113.c 335 */;
	struct cx24113_state {
		struct i2c_adapter *i2c;
		const struct cx24113_config *config;
#define REV_CX24113 0x23
		u8 rev;
		u8 ver;
		u8 icp_mode:1;
#define ICP_LEVEL1 0
#define ICP_LEVEL2 1
#define ICP_LEVEL3 2
#define ICP_LEVEL4 3
		u8 icp_man:2;
		u8 icp_auto_low:2;
		u8 icp_auto_mlow:2;
		u8 icp_auto_mhi:2;
		u8 icp_auto_hi:2;
		u8 icp_dig;
#define LNA_MIN_GAIN 0
#define LNA_MID_GAIN 1
#define LNA_MAX_GAIN 2
		u8 lna_gain:2;
		u8 acp_on:1;
		u8 vco_mode:2;
		u8 vco_shift:1;
#define VCOBANDSEL_6 0x80
#define VCOBANDSEL_5 0x01
#define VCOBANDSEL_4 0x02
#define VCOBANDSEL_3 0x04
#define VCOBANDSEL_2 0x08
#define VCOBANDSEL_1 0x10
		u8 vco_band;
#define VCODIV4 4
#define VCODIV2 2
		u8 vcodiv;
		u8 bs_delay:4;
		u16 bs_freqcnt:13;
		u16 bs_rdiv;
		u8 prescaler_mode:1;
		u8 rfvga_bias_ctrl;
		s16 tuner_gain_thres;
		u8 gain_level;
		u32 frequency;
		u8 refdiv;
		u8 Fwindow_enabled;
	} cocci_id/* drivers/media/dvb-frontends/cx24113.c 31 */;
	u8 cocci_id/* drivers/media/dvb-frontends/cx24113.c 293 */;
	u64 cocci_id/* drivers/media/dvb-frontends/cx24113.c 292 */;
	s64 cocci_id/* drivers/media/dvb-frontends/cx24113.c 291 */;
	s32 cocci_id/* drivers/media/dvb-frontends/cx24113.c 290 */;
	s32 *cocci_id/* drivers/media/dvb-frontends/cx24113.c 288 */;
	u32 cocci_id/* drivers/media/dvb-frontends/cx24113.c 240 */;
	struct i2c_msg cocci_id/* drivers/media/dvb-frontends/cx24113.c 109 */[];
}
