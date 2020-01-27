cocci_test_suite() {
	int __init cocci_id/* drivers/bus/arm-cci.c 86 */;
	struct platform_driver cocci_id/* drivers/bus/arm-cci.c 78 */;
	struct platform_device *cocci_id/* drivers/bus/arm-cci.c 69 */;
	const struct of_dev_auxdata cocci_id/* drivers/bus/arm-cci.c 58 */[];
	struct resource cocci_id/* drivers/bus/arm-cci.c 538 */;
	const char *cocci_id/* drivers/bus/arm-cci.c 444 */;
	const struct cci_nb_ports *cocci_id/* drivers/bus/arm-cci.c 440 */;
	const struct of_device_id cocci_id/* drivers/bus/arm-cci.c 433 */[];
	u32 cocci_id/* drivers/bus/arm-cci.c 415 */;
	int notrace cocci_id/* drivers/bus/arm-cci.c 388 */;
	const struct cci_nb_ports cocci_id/* drivers/bus/arm-cci.c 37 */;
	struct cci_nb_ports {
		unsigned int nb_ace;
		unsigned int nb_ace_lite;
	} cocci_id/* drivers/bus/arm-cci.c 32 */;
	unsigned long cocci_id/* drivers/bus/arm-cci.c 29 */;
	void __iomem *cocci_id/* drivers/bus/arm-cci.c 28 */;
	u64 cocci_id/* drivers/bus/arm-cci.c 265 */;
	unsigned int cocci_id/* drivers/bus/arm-cci.c 233 */;
	void notrace cocci_id/* drivers/bus/arm-cci.c 233 */;
	void cocci_id/* drivers/bus/arm-cci.c 182 */;
	bool cocci_id/* drivers/bus/arm-cci.c 164 */;
	struct device_node *cocci_id/* drivers/bus/arm-cci.c 161 */;
	int cocci_id/* drivers/bus/arm-cci.c 161 */;
	struct cpu_port cocci_id/* drivers/bus/arm-cci.c 148 */[NR_CPUS];
	struct cpu_port *cocci_id/* drivers/bus/arm-cci.c 138 */;
	struct cpu_port {
		u64 mpidr;
		u32 port;
	} cocci_id/* drivers/bus/arm-cci.c 116 */;
	struct cci_ace_port *cocci_id/* drivers/bus/arm-cci.c 113 */;
	struct cci_ace_port {
		void __iomem *base;
		unsigned long phys;
		enum cci_ace_port_type type;
		struct device_node *dn;
	} cocci_id/* drivers/bus/arm-cci.c 106 */;
	enum cci_ace_port_type{ACE_INVALID_PORT=0x0, ACE_PORT, ACE_LITE_PORT,} cocci_id/* drivers/bus/arm-cci.c 100 */;
}
