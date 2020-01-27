cocci_test_suite() {
	struct telemetry_evtmap *cocci_id/* drivers/platform/x86/intel_telemetry_pltdrv.c 933 */;
	struct telem_ssram_region cocci_id/* drivers/platform/x86/intel_telemetry_pltdrv.c 932 */;
	struct telemetry_evtlog *cocci_id/* drivers/platform/x86/intel_telemetry_pltdrv.c 928 */;
	struct telemetry_evtmap cocci_id/* drivers/platform/x86/intel_telemetry_pltdrv.c 92 */[TELEM_MAX_OS_ALLOCATED_EVENTS];
	u64 cocci_id/* drivers/platform/x86/intel_telemetry_pltdrv.c 883 */;
	struct telemetry_unit_config *cocci_id/* drivers/platform/x86/intel_telemetry_pltdrv.c 882 */;
	u8 cocci_id/* drivers/platform/x86/intel_telemetry_pltdrv.c 880 */;
	struct telem_ssram_region *cocci_id/* drivers/platform/x86/intel_telemetry_pltdrv.c 880 */;
	enum telemetry_unit cocci_id/* drivers/platform/x86/intel_telemetry_pltdrv.c 879 */;
	int cocci_id/* drivers/platform/x86/intel_telemetry_pltdrv.c 879 */;
	struct telemetry_evtconfig cocci_id/* drivers/platform/x86/intel_telemetry_pltdrv.c 860 */;
	struct telemetry_evtconfig *cocci_id/* drivers/platform/x86/intel_telemetry_pltdrv.c 817 */;
	struct telem_ssram_region {
		u64 timestamp;
		u64 start_time;
		u64 events[TELEM_MAX_EVENTS_SRAM];
	} cocci_id/* drivers/platform/x86/intel_telemetry_pltdrv.c 80 */;
	enum telemetry_action{TELEM_UPDATE=0, TELEM_ADD, TELEM_RESET, TELEM_ACTION_NONE,} cocci_id/* drivers/platform/x86/intel_telemetry_pltdrv.c 73 */;
	unsigned long cocci_id/* drivers/platform/x86/intel_telemetry_pltdrv.c 71 */;
	u8 *cocci_id/* drivers/platform/x86/intel_telemetry_pltdrv.c 263 */;
	u32 cocci_id/* drivers/platform/x86/intel_telemetry_pltdrv.c 253 */;
	enum telemetry_action cocci_id/* drivers/platform/x86/intel_telemetry_pltdrv.c 209 */;
	u32 *cocci_id/* drivers/platform/x86/intel_telemetry_pltdrv.c 208 */;
	struct telemetry_unit_config **cocci_id/* drivers/platform/x86/intel_telemetry_pltdrv.c 194 */;
	const struct x86_cpu_id cocci_id/* drivers/platform/x86/intel_telemetry_pltdrv.c 185 */[];
	struct telemetry_plt_config cocci_id/* drivers/platform/x86/intel_telemetry_pltdrv.c 166 */;
	void __exit cocci_id/* drivers/platform/x86/intel_telemetry_pltdrv.c 1226 */;
	void cocci_id/* drivers/platform/x86/intel_telemetry_pltdrv.c 1226 */;
	int __init cocci_id/* drivers/platform/x86/intel_telemetry_pltdrv.c 1221 */;
	struct platform_driver cocci_id/* drivers/platform/x86/intel_telemetry_pltdrv.c 1213 */;
	struct telemetry_plt_config *cocci_id/* drivers/platform/x86/intel_telemetry_pltdrv.c 1128 */;
	const struct x86_cpu_id *cocci_id/* drivers/platform/x86/intel_telemetry_pltdrv.c 1121 */;
	struct resource *cocci_id/* drivers/platform/x86/intel_telemetry_pltdrv.c 1120 */;
	struct platform_device *cocci_id/* drivers/platform/x86/intel_telemetry_pltdrv.c 1118 */;
	const struct telemetry_core_ops cocci_id/* drivers/platform/x86/intel_telemetry_pltdrv.c 1105 */;
}
