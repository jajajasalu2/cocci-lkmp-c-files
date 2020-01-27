cocci_test_suite() {
	const char *const cocci_id/* drivers/net/ethernet/sfc/mcdi_mon.c 95 */[];
	u16 cocci_id/* drivers/net/ethernet/sfc/mcdi_mon.c 369 */;
	unsigned cocci_id/* drivers/net/ethernet/sfc/mcdi_mon.c 368 */;
	enum efx_hwmon_type cocci_id/* drivers/net/ethernet/sfc/mcdi_mon.c 366 */;
	struct attribute *cocci_id/* drivers/net/ethernet/sfc/mcdi_mon.c 358 */;
	const struct {
		const char *label;
		enum efx_hwmon_type hwmon_type;
		int port;
	} cocci_id/* drivers/net/ethernet/sfc/mcdi_mon.c 35 */[];
	u32 cocci_id/* drivers/net/ethernet/sfc/mcdi_mon.c 312 */;
	char cocci_id/* drivers/net/ethernet/sfc/mcdi_mon.c 311 */[12];
	size_t cocci_id/* drivers/net/ethernet/sfc/mcdi_mon.c 310 */;
	struct efx_mcdi_mon_attribute *cocci_id/* drivers/net/ethernet/sfc/mcdi_mon.c 286 */;
	struct efx_mcdi_mon *cocci_id/* drivers/net/ethernet/sfc/mcdi_mon.c 285 */;
	unsigned int cocci_id/* drivers/net/ethernet/sfc/mcdi_mon.c 282 */;
	ssize_t (*cocci_id/* drivers/net/ethernet/sfc/mcdi_mon.c 280 */)(struct device *,
									 struct device_attribute *,
									 char *);
	const char *cocci_id/* drivers/net/ethernet/sfc/mcdi_mon.c 279 */;
	struct efx_nic *cocci_id/* drivers/net/ethernet/sfc/mcdi_mon.c 279 */;
	void cocci_id/* drivers/net/ethernet/sfc/mcdi_mon.c 278 */;
	const char *const cocci_id/* drivers/net/ethernet/sfc/mcdi_mon.c 27 */[EFX_HWMON_TYPES_COUNT];
	efx_dword_t cocci_id/* drivers/net/ethernet/sfc/mcdi_mon.c 256 */;
	struct efx_mcdi_mon_attribute cocci_id/* drivers/net/ethernet/sfc/mcdi_mon.c 255 */;
	char *cocci_id/* drivers/net/ethernet/sfc/mcdi_mon.c 252 */;
	struct device_attribute *cocci_id/* drivers/net/ethernet/sfc/mcdi_mon.c 251 */;
	ssize_t cocci_id/* drivers/net/ethernet/sfc/mcdi_mon.c 250 */;
	enum efx_hwmon_type{EFX_HWMON_UNKNOWN, EFX_HWMON_TEMP, EFX_HWMON_COOL, EFX_HWMON_IN, EFX_HWMON_CURR, EFX_HWMON_POWER, EFX_HWMON_TYPES_COUNT,} cocci_id/* drivers/net/ethernet/sfc/mcdi_mon.c 17 */;
	efx_dword_t *cocci_id/* drivers/net/ethernet/sfc/mcdi_mon.c 162 */;
	struct device *cocci_id/* drivers/net/ethernet/sfc/mcdi_mon.c 161 */;
	int cocci_id/* drivers/net/ethernet/sfc/mcdi_mon.c 161 */;
	struct efx_mcdi_mon_attribute {
		struct device_attribute dev_attr;
		unsigned int index;
		unsigned int type;
		enum efx_hwmon_type hwmon_type;
		unsigned int limit_value;
		char name[12];
	} cocci_id/* drivers/net/ethernet/sfc/mcdi_mon.c 135 */;
	efx_qword_t *cocci_id/* drivers/net/ethernet/sfc/mcdi_mon.c 103 */;
}
