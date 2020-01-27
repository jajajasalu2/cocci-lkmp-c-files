cocci_test_suite() {
	void *cocci_id/* arch/x86/kernel/acpi/cstate.c 99 */;
	short cocci_id/* arch/x86/kernel/acpi/cstate.c 95 */[ACPI_PROCESSOR_MAX_POWER];
	struct cstate_entry __percpu *cocci_id/* arch/x86/kernel/acpi/cstate.c 93 */;
	struct cstate_entry {
		struct {
			unsigned int eax;
			unsigned int ecx;
		} states[ACPI_PROCESSOR_MAX_POWER];
	} cocci_id/* arch/x86/kernel/acpi/cstate.c 87 */;
	struct acpi_processor_flags *cocci_id/* arch/x86/kernel/acpi/cstate.c 29 */;
	void cocci_id/* arch/x86/kernel/acpi/cstate.c 29 */;
	void __exit cocci_id/* arch/x86/kernel/acpi/cstate.c 206 */;
	struct cstate_entry cocci_id/* arch/x86/kernel/acpi/cstate.c 202 */;
	int __init cocci_id/* arch/x86/kernel/acpi/cstate.c 194 */;
	struct cstate_entry *cocci_id/* arch/x86/kernel/acpi/cstate.c 186 */;
	unsigned int cocci_id/* arch/x86/kernel/acpi/cstate.c 185 */;
	struct acpi_processor_cx *cocci_id/* arch/x86/kernel/acpi/cstate.c 183 */;
	void __cpuidle cocci_id/* arch/x86/kernel/acpi/cstate.c 183 */;
	long cocci_id/* arch/x86/kernel/acpi/cstate.c 150 */;
	struct cpuinfo_x86 *cocci_id/* arch/x86/kernel/acpi/cstate.c 149 */;
	struct acpi_power_register *cocci_id/* arch/x86/kernel/acpi/cstate.c 146 */;
	int cocci_id/* arch/x86/kernel/acpi/cstate.c 145 */;
}
