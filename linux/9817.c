cocci_test_suite() {
	const struct ath5k_ini cocci_id/* drivers/net/wireless/ath/ath5k/initvals.c 55 */[];
	struct ath5k_ini_mode {
		u16 mode_register;
		u32 mode_value[3];
	} cocci_id/* drivers/net/wireless/ath/ath5k/initvals.c 49 */;
	const struct ath5k_ini_mode cocci_id/* drivers/net/wireless/ath/ath5k/initvals.c 395 */[];
	struct ath5k_ini {
		u16 ini_register;
		u32 ini_value;
		enum{AR5K_INI_WRITE=0, AR5K_INI_READ=1,} ini_mode;
	} cocci_id/* drivers/net/wireless/ath/ath5k/initvals.c 34 */;
	int cocci_id/* drivers/net/wireless/ath/ath5k/initvals.c 1439 */;
	u32 cocci_id/* drivers/net/wireless/ath/ath5k/initvals.c 1425 */;
	u8 cocci_id/* drivers/net/wireless/ath/ath5k/initvals.c 1418 */;
	const struct ath5k_ini_mode *cocci_id/* drivers/net/wireless/ath/ath5k/initvals.c 1417 */;
	unsigned int cocci_id/* drivers/net/wireless/ath/ath5k/initvals.c 1417 */;
	struct ath5k_hw *cocci_id/* drivers/net/wireless/ath/ath5k/initvals.c 1416 */;
	void cocci_id/* drivers/net/wireless/ath/ath5k/initvals.c 1415 */;
	bool cocci_id/* drivers/net/wireless/ath/ath5k/initvals.c 1381 */;
	const struct ath5k_ini *cocci_id/* drivers/net/wireless/ath/ath5k/initvals.c 1381 */;
}
