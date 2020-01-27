cocci_test_suite() {
	struct cpcap_regulator {
		struct regulator_desc rdesc;
		const u16 assign_reg;
		const u16 assign_mask;
	} cocci_id/* drivers/regulator/cpcap-regulator.c 99 */;
	struct platform_driver cocci_id/* drivers/regulator/cpcap-regulator.c 560 */;
	void *cocci_id/* drivers/regulator/cpcap-regulator.c 545 */;
	struct regulator_config cocci_id/* drivers/regulator/cpcap-regulator.c 509 */;
	const struct cpcap_regulator *cocci_id/* drivers/regulator/cpcap-regulator.c 508 */;
	struct cpcap_ddata *cocci_id/* drivers/regulator/cpcap-regulator.c 507 */;
	struct platform_device *cocci_id/* drivers/regulator/cpcap-regulator.c 505 */;
	const struct of_device_id cocci_id/* drivers/regulator/cpcap-regulator.c 489 */[];
	const struct cpcap_regulator cocci_id/* drivers/regulator/cpcap-regulator.c 337 */[];
	const unsigned int cocci_id/* drivers/regulator/cpcap-regulator.c 272 */[];
	struct regulator_ops cocci_id/* drivers/regulator/cpcap-regulator.c 259 */;
	unsigned int cocci_id/* drivers/regulator/cpcap-regulator.c 215 */;
	struct cpcap_regulator *cocci_id/* drivers/regulator/cpcap-regulator.c 195 */;
	struct regulator_dev *cocci_id/* drivers/regulator/cpcap-regulator.c 193 */;
	int cocci_id/* drivers/regulator/cpcap-regulator.c 193 */;
	enum cpcap_regulator_id{CPCAP_SW1, CPCAP_SW2, CPCAP_SW3, CPCAP_SW4, CPCAP_SW5, CPCAP_SW6, CPCAP_VCAM, CPCAP_VCSI, CPCAP_VDAC, CPCAP_VDIG, CPCAP_VFUSE, CPCAP_VHVIO, CPCAP_VSDIO, CPCAP_VPLL, CPCAP_VRF1, CPCAP_VRF2, CPCAP_VRFREF, CPCAP_VWLAN1, CPCAP_VWLAN2, CPCAP_VSIM, CPCAP_VSIMCARD, CPCAP_VVIB, CPCAP_VUSB, CPCAP_VAUDIO, CPCAP_NR_REGULATORS,} cocci_id/* drivers/regulator/cpcap-regulator.c 137 */;
	struct cpcap_ddata {
		struct regmap *reg;
		struct device *dev;
		const struct cpcap_regulator *soc;
	} cocci_id/* drivers/regulator/cpcap-regulator.c 131 */;
}
