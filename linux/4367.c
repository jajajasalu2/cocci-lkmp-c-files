cocci_test_suite() {
	u8 cocci_id/* drivers/char/ipmi/kcs_bmc_npcm7xx.c 79 */;
	u32 cocci_id/* drivers/char/ipmi/kcs_bmc_npcm7xx.c 79 */;
	const struct npcm7xx_kcs_reg cocci_id/* drivers/char/ipmi/kcs_bmc_npcm7xx.c 73 */[KCS_CHANNEL_MAX];
	struct npcm7xx_kcs_bmc {
		struct regmap *map;
		const struct npcm7xx_kcs_reg *reg;
	} cocci_id/* drivers/char/ipmi/kcs_bmc_npcm7xx.c 67 */;
	struct npcm7xx_kcs_reg {
		u32 sts;
		u32 dob;
		u32 dib;
		u32 ctl;
		u32 ie;
	} cocci_id/* drivers/char/ipmi/kcs_bmc_npcm7xx.c 59 */;
	struct platform_driver cocci_id/* drivers/char/ipmi/kcs_bmc_npcm7xx.c 202 */;
	const struct of_device_id cocci_id/* drivers/char/ipmi/kcs_bmc_npcm7xx.c 196 */[];
	struct device *cocci_id/* drivers/char/ipmi/kcs_bmc_npcm7xx.c 124 */;
	struct platform_device *cocci_id/* drivers/char/ipmi/kcs_bmc_npcm7xx.c 122 */;
	struct kcs_bmc *cocci_id/* drivers/char/ipmi/kcs_bmc_npcm7xx.c 121 */;
	int cocci_id/* drivers/char/ipmi/kcs_bmc_npcm7xx.c 121 */;
	irqreturn_t cocci_id/* drivers/char/ipmi/kcs_bmc_npcm7xx.c 111 */;
	void *cocci_id/* drivers/char/ipmi/kcs_bmc_npcm7xx.c 111 */;
	struct npcm7xx_kcs_bmc *cocci_id/* drivers/char/ipmi/kcs_bmc_npcm7xx.c 102 */;
	bool cocci_id/* drivers/char/ipmi/kcs_bmc_npcm7xx.c 100 */;
	void cocci_id/* drivers/char/ipmi/kcs_bmc_npcm7xx.c 100 */;
}
