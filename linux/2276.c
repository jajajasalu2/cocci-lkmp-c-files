cocci_test_suite() {
	struct avs_tmon_trip cocci_id/* drivers/thermal/broadcom/brcmstb_thermal.c 78 */[];
	struct avs_tmon_trip {
		u32 enable_offs;
		u32 enable_mask;
		u32 reg_offs;
		u32 reg_msk;
		int reg_shift;
	} cocci_id/* drivers/thermal/broadcom/brcmstb_thermal.c 67 */;
	enum avs_tmon_trip_type{TMON_TRIP_TYPE_LOW=0, TMON_TRIP_TYPE_HIGH, TMON_TRIP_TYPE_RESET, TMON_TRIP_TYPE_MAX,} cocci_id/* drivers/thermal/broadcom/brcmstb_thermal.c 60 */;
	struct platform_driver cocci_id/* drivers/thermal/broadcom/brcmstb_thermal.c 351 */;
	struct resource *cocci_id/* drivers/thermal/broadcom/brcmstb_thermal.c 308 */;
	struct platform_device *cocci_id/* drivers/thermal/broadcom/brcmstb_thermal.c 304 */;
	const struct of_device_id cocci_id/* drivers/thermal/broadcom/brcmstb_thermal.c 298 */[];
	const struct thermal_zone_of_device_ops cocci_id/* drivers/thermal/broadcom/brcmstb_thermal.c 293 */;
	irqreturn_t cocci_id/* drivers/thermal/broadcom/brcmstb_thermal.c 237 */;
	struct brcmstb_thermal_priv *cocci_id/* drivers/thermal/broadcom/brcmstb_thermal.c 229 */;
	struct avs_tmon_trip *cocci_id/* drivers/thermal/broadcom/brcmstb_thermal.c 198 */;
	enum avs_tmon_trip_type cocci_id/* drivers/thermal/broadcom/brcmstb_thermal.c 196 */;
	long cocci_id/* drivers/thermal/broadcom/brcmstb_thermal.c 159 */;
	void *cocci_id/* drivers/thermal/broadcom/brcmstb_thermal.c 155 */;
	bool cocci_id/* drivers/thermal/broadcom/brcmstb_thermal.c 137 */;
	const int cocci_id/* drivers/thermal/broadcom/brcmstb_thermal.c 122 */;
	u32 cocci_id/* drivers/thermal/broadcom/brcmstb_thermal.c 120 */;
	struct thermal_zone_device *cocci_id/* drivers/thermal/broadcom/brcmstb_thermal.c 119 */;
	int cocci_id/* drivers/thermal/broadcom/brcmstb_thermal.c 119 */;
	int *cocci_id/* drivers/thermal/broadcom/brcmstb_thermal.c 111 */;
	void cocci_id/* drivers/thermal/broadcom/brcmstb_thermal.c 111 */;
	struct brcmstb_thermal_priv {
		void __iomem *tmon_base;
		struct device *dev;
		struct thermal_zone_device *thermal;
	} cocci_id/* drivers/thermal/broadcom/brcmstb_thermal.c 105 */;
}
