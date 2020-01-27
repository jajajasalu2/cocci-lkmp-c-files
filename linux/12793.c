cocci_test_suite() {
	void *cocci_id/* drivers/hwtracing/stm/p_sys-t.c 98 */;
	int cocci_id/* drivers/hwtracing/stm/p_sys-t.c 98 */;
	struct sys_t_output {
		struct sys_t_policy_node node;
		unsigned long ts_jiffies;
		unsigned long clocksync_jiffies;
	} cocci_id/* drivers/hwtracing/stm/p_sys-t.c 85 */;
	struct sys_t_policy_node {
		uuid_t uuid;
		bool do_len;
		unsigned long ts_interval;
		unsigned long clocksync_interval;
	} cocci_id/* drivers/hwtracing/stm/p_sys-t.c 78 */;
	enum sys_t_message_string_subtype{MIPI_SYST_STRING_GENERIC=1, MIPI_SYST_STRING_FUNCTIONENTER, MIPI_SYST_STRING_FUNCTIONEXIT, MIPI_SYST_STRING_INVALIDPARAM=5, MIPI_SYST_STRING_ASSERT=7, MIPI_SYST_STRING_PRINTF_32=11, MIPI_SYST_STRING_PRINTF_64=12,} cocci_id/* drivers/hwtracing/stm/p_sys-t.c 46 */;
	enum sys_t_message_clock_subtype{MIPI_SYST_CLOCK_TRANSPORT_SYNC=1,} cocci_id/* drivers/hwtracing/stm/p_sys-t.c 42 */;
	enum sys_t_message_build_subtype{MIPI_SYST_BUILD_ID_COMPACT32=0, MIPI_SYST_BUILD_ID_COMPACT64, MIPI_SYST_BUILD_ID_LONG,} cocci_id/* drivers/hwtracing/stm/p_sys-t.c 36 */;
	struct sys_t_policy_node cocci_id/* drivers/hwtracing/stm/p_sys-t.c 359 */;
	const struct stm_protocol_driver cocci_id/* drivers/hwtracing/stm/p_sys-t.c 356 */;
	u64 cocci_id/* drivers/hwtracing/stm/p_sys-t.c 341 */;
	u16 cocci_id/* drivers/hwtracing/stm/p_sys-t.c 331 */;
	u8 *cocci_id/* drivers/hwtracing/stm/p_sys-t.c 272 */;
	u64 cocci_id/* drivers/hwtracing/stm/p_sys-t.c 268 */[2];
	const unsigned char cocci_id/* drivers/hwtracing/stm/p_sys-t.c 267 */;
	u32 cocci_id/* drivers/hwtracing/stm/p_sys-t.c 266 */;
	struct stm_data *cocci_id/* drivers/hwtracing/stm/p_sys-t.c 264 */;
	unsigned int cocci_id/* drivers/hwtracing/stm/p_sys-t.c 264 */;
	ssize_t cocci_id/* drivers/hwtracing/stm/p_sys-t.c 263 */;
	bool cocci_id/* drivers/hwtracing/stm/p_sys-t.c 250 */;
	struct sys_t_output *cocci_id/* drivers/hwtracing/stm/p_sys-t.c 250 */;
	enum sys_t_message_severity{MIPI_SYST_SEVERITY_MAX=0, MIPI_SYST_SEVERITY_FATAL, MIPI_SYST_SEVERITY_ERROR, MIPI_SYST_SEVERITY_WARNING, MIPI_SYST_SEVERITY_INFO, MIPI_SYST_SEVERITY_USER1, MIPI_SYST_SEVERITY_USER2, MIPI_SYST_SEVERITY_DEBUG,} cocci_id/* drivers/hwtracing/stm/p_sys-t.c 25 */;
	struct configfs_attribute *cocci_id/* drivers/hwtracing/stm/p_sys-t.c 230 */[];
	struct mutex *cocci_id/* drivers/hwtracing/stm/p_sys-t.c 211 */;
	const char *cocci_id/* drivers/hwtracing/stm/p_sys-t.c 209 */;
	size_t cocci_id/* drivers/hwtracing/stm/p_sys-t.c 209 */;
	char *cocci_id/* drivers/hwtracing/stm/p_sys-t.c 200 */;
	struct config_item *cocci_id/* drivers/hwtracing/stm/p_sys-t.c 199 */;
	enum sys_t_message_type{MIPI_SYST_TYPE_BUILD=0, MIPI_SYST_TYPE_SHORT32, MIPI_SYST_TYPE_STRING, MIPI_SYST_TYPE_CATALOG, MIPI_SYST_TYPE_RAW=6, MIPI_SYST_TYPE_SHORT64, MIPI_SYST_TYPE_CLOCK,} cocci_id/* drivers/hwtracing/stm/p_sys-t.c 15 */;
	struct stm_output *cocci_id/* drivers/hwtracing/stm/p_sys-t.c 113 */;
	void cocci_id/* drivers/hwtracing/stm/p_sys-t.c 113 */;
	struct sys_t_policy_node *cocci_id/* drivers/hwtracing/stm/p_sys-t.c 100 */;
}
