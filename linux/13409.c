cocci_test_suite() {
	struct tda18271_rf_tracking_filter_cal cocci_id/* drivers/media/tuners/tda18271-maps.c 988 */[];
	u8 *cocci_id/* drivers/media/tuners/tda18271-maps.c 967 */;
	u32 *cocci_id/* drivers/media/tuners/tda18271-maps.c 967 */;
	u16 *cocci_id/* drivers/media/tuners/tda18271-maps.c 967 */;
	struct tda18271_cid_target_map cocci_id/* drivers/media/tuners/tda18271-maps.c 950 */[];
	struct tda18271_cid_target_map {
		u32 rfmax;
		u8 target;
		u16 limit;
	} cocci_id/* drivers/media/tuners/tda18271-maps.c 944 */;
	unsigned char *cocci_id/* drivers/media/tuners/tda18271-maps.c 923 */;
	struct tda18271_thermo_map cocci_id/* drivers/media/tuners/tda18271-maps.c 900 */[];
	struct tda18271_thermo_map {
		u8 d;
		u8 r0;
		u8 r1;
	} cocci_id/* drivers/media/tuners/tda18271-maps.c 894 */;
	struct tda18271_map cocci_id/* drivers/media/tuners/tda18271-maps.c 189 */[];
	struct tda18271_map {
		u32 rfmax;
		u8 val;
	} cocci_id/* drivers/media/tuners/tda18271-maps.c 17 */;
	struct tda18271_priv *cocci_id/* drivers/media/tuners/tda18271-maps.c 1271 */;
	struct dvb_frontend *cocci_id/* drivers/media/tuners/tda18271-maps.c 1269 */;
	int cocci_id/* drivers/media/tuners/tda18271-maps.c 1269 */;
	struct tda18271_map_layout cocci_id/* drivers/media/tuners/tda18271-maps.c 1241 */;
	const struct tda18271_std_map cocci_id/* drivers/media/tuners/tda18271-maps.c 1173 */;
	struct tda18271_pll_map cocci_id/* drivers/media/tuners/tda18271-maps.c 112 */[];
	char *cocci_id/* drivers/media/tuners/tda18271-maps.c 1109 */;
	unsigned int cocci_id/* drivers/media/tuners/tda18271-maps.c 1108 */;
	struct tda18271_map *cocci_id/* drivers/media/tuners/tda18271-maps.c 1107 */;
	enum tda18271_map_type cocci_id/* drivers/media/tuners/tda18271-maps.c 1103 */;
	struct tda18271_pll_map {
		u32 lomax;
		u8 pd;
		u8 d;
	} cocci_id/* drivers/media/tuners/tda18271-maps.c 11 */;
	struct tda18271_pll_map *cocci_id/* drivers/media/tuners/tda18271-maps.c 1056 */;
	struct tda18271_map_layout {
		struct tda18271_pll_map *main_pll;
		struct tda18271_pll_map *cal_pll;
		struct tda18271_map *rf_cal;
		struct tda18271_map *rf_cal_kmco;
		struct tda18271_map *rf_cal_dc_over_dt;
		struct tda18271_map *bp_filter;
		struct tda18271_map *rf_band;
		struct tda18271_map *gain_taper;
		struct tda18271_map *ir_measure;
	} cocci_id/* drivers/media/tuners/tda18271-maps.c 1035 */;
	struct tda18271_rf_tracking_filter_cal *cocci_id/* drivers/media/tuners/tda18271-maps.c 1010 */;
}
