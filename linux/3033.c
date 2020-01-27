cocci_test_suite() {
	long (*cocci_id/* drivers/acpi/processor_throttling.c 900 */)(void *);
	struct acpi_processor *cocci_id/* drivers/acpi/processor_throttling.c 895 */;
	void *cocci_id/* drivers/acpi/processor_throttling.c 893 */;
	long cocci_id/* drivers/acpi/processor_throttling.c 893 */;
	u64 *cocci_id/* drivers/acpi/processor_throttling.c 846 */;
	struct acpi_processor_tx_tss *cocci_id/* drivers/acpi/processor_throttling.c 836 */;
	u64 cocci_id/* drivers/acpi/processor_throttling.c 831 */;
	acpi_io_address cocci_id/* drivers/acpi/processor_throttling.c 780 */;
	u32 *cocci_id/* drivers/acpi/processor_throttling.c 724 */;
	u32 cocci_id/* drivers/acpi/processor_throttling.c 657 */;
	struct acpi_tsd_package cocci_id/* drivers/acpi/processor_throttling.c 607 */;
	cpumask_var_t cocci_id/* drivers/acpi/processor_throttling.c 60 */;
	struct acpi_tsd_package *cocci_id/* drivers/acpi/processor_throttling.c 578 */;
	struct acpi_processor_tx_tss cocci_id/* drivers/acpi/processor_throttling.c 525 */;
	int cocci_id/* drivers/acpi/processor_throttling.c 52 */(struct acpi_processor *pr,
								 int state,
								 bool force,
								 bool direct);
	int cocci_id/* drivers/acpi/processor_throttling.c 51 */(struct acpi_processor *pr);
	struct acpi_ptc_register cocci_id/* drivers/acpi/processor_throttling.c 442 */;
	struct acpi_processor_throttling_arg {
		struct acpi_processor *pr;
		int target_state;
		bool force;
	} cocci_id/* drivers/acpi/processor_throttling.c 42 */;
	union acpi_object cocci_id/* drivers/acpi/processor_throttling.c 416 */;
	union acpi_object *cocci_id/* drivers/acpi/processor_throttling.c 415 */;
	struct acpi_buffer cocci_id/* drivers/acpi/processor_throttling.c 414 */;
	struct throttling_tstate {
		unsigned int cpu;
		int target_state;
	} cocci_id/* drivers/acpi/processor_throttling.c 37 */;
	void cocci_id/* drivers/acpi/processor_throttling.c 364 */;
	unsigned long long cocci_id/* drivers/acpi/processor_throttling.c 278 */;
	acpi_status cocci_id/* drivers/acpi/processor_throttling.c 277 */;
	struct acpi_processor_limit *cocci_id/* drivers/acpi/processor_throttling.c 214 */;
	struct throttling_tstate *cocci_id/* drivers/acpi/processor_throttling.c 210 */;
	unsigned long cocci_id/* drivers/acpi/processor_throttling.c 208 */;
	struct throttling_tstate cocci_id/* drivers/acpi/processor_throttling.c 1082 */;
	struct acpi_processor_throttling_arg cocci_id/* drivers/acpi/processor_throttling.c 1081 */;
	struct acpi_processor_throttling *cocci_id/* drivers/acpi/processor_throttling.c 1080 */;
	unsigned int cocci_id/* drivers/acpi/processor_throttling.c 1078 */;
	bool cocci_id/* drivers/acpi/processor_throttling.c 1075 */;
	int cocci_id/* drivers/acpi/processor_throttling.c 1074 */;
	struct acpi_processor_throttling_arg *cocci_id/* drivers/acpi/processor_throttling.c 1067 */;
}
