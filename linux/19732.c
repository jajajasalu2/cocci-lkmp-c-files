cocci_test_suite() {
	irq_flow_handler_t cocci_id/* arch/mips/cavium-octeon/octeon-irq.c 99 */;
	struct octeon_core_chip_data cocci_id/* arch/mips/cavium-octeon/octeon-irq.c 95 */[MIPS_CORE_IRQ_LINES];
	struct irq_data *cocci_id/* arch/mips/cavium-octeon/octeon-irq.c 916 */;
	unsigned int cocci_id/* arch/mips/cavium-octeon/octeon-irq.c 916 */;
	struct octeon_core_chip_data {
		struct mutex core_irq_mutex;
		bool current_en;
		bool desired_en;
		u8 bit;
	} cocci_id/* arch/mips/cavium-octeon/octeon-irq.c 86 */;
	cpumask_t cocci_id/* arch/mips/cavium-octeon/octeon-irq.c 760 */;
	struct octeon_ciu_chip_data {
		union {
			struct {
				u64 ciu3_addr;
				unsigned int intsn;
			};
			struct {
				u8 line;
				u8 bit;
			};
		};
		int gpio_line;
		int current_cpu;
		int ciu_node;
	} cocci_id/* arch/mips/cavium-octeon/octeon-irq.c 70 */;
	union cvmx_gpio_bit_cfgx cocci_id/* arch/mips/cavium-octeon/octeon-irq.c 681 */;
	int cocci_id/* arch/mips/cavium-octeon/octeon-irq.c 68 */[8][64];
	struct octeon_irq_ciu_domain_data {
		int num_sum;
	} cocci_id/* arch/mips/cavium-octeon/octeon-irq.c 53 */;
	struct octeon_ciu3_info *cocci_id/* arch/mips/cavium-octeon/octeon-irq.c 51 */[4];
	struct octeon_ciu3_info {
		u64 ciu3_addr;
		int node;
		struct irq_domain *domain[MAX_CIU3_DOMAINS];
		octeon_ciu3_intsn2hw_t intsn2hw[MAX_CIU3_DOMAINS];
	} cocci_id/* arch/mips/cavium-octeon/octeon-irq.c 43 */;
	irq_hw_number_t (*cocci_id/* arch/mips/cavium-octeon/octeon-irq.c 40 */)(struct irq_domain *,
										 unsigned int);
	raw_spinlock_t *cocci_id/* arch/mips/cavium-octeon/octeon-irq.c 397 */;
	uint8_t cocci_id/* arch/mips/cavium-octeon/octeon-irq.c 2969 */;
	void __init cocci_id/* arch/mips/cavium-octeon/octeon-irq.c 2926 */;
	void cocci_id/* arch/mips/cavium-octeon/octeon-irq.c 2926 */;
	struct of_device_id cocci_id/* arch/mips/cavium-octeon/octeon-irq.c 2917 */[]__initdata;
	union cvmx_ciu3_const cocci_id/* arch/mips/cavium-octeon/octeon-irq.c 2852 */;
	struct octeon_ciu_chip_data *cocci_id/* arch/mips/cavium-octeon/octeon-irq.c 268 */;
	u64 cocci_id/* arch/mips/cavium-octeon/octeon-irq.c 2670 */;
	union cvmx_ciu3_iscx_w1s cocci_id/* arch/mips/cavium-octeon/octeon-irq.c 2669 */;
	struct octeon_ciu3_info *cocci_id/* arch/mips/cavium-octeon/octeon-irq.c 2667 */;
	struct cpumask *cocci_id/* arch/mips/cavium-octeon/octeon-irq.c 266 */;
	int cocci_id/* arch/mips/cavium-octeon/octeon-irq.c 261 */;
	union cvmx_ciu3_destx_pp_int cocci_id/* arch/mips/cavium-octeon/octeon-irq.c 2571 */;
	struct irq_domain_ops cocci_id/* arch/mips/cavium-octeon/octeon-irq.c 2563 */;
	struct irq_chip *cocci_id/* arch/mips/cavium-octeon/octeon-irq.c 2540 */;
	u32 cocci_id/* arch/mips/cavium-octeon/octeon-irq.c 2426 */;
	union cvmx_ciu3_iscx_w1c cocci_id/* arch/mips/cavium-octeon/octeon-irq.c 2424 */;
	union cvmx_ciu3_iscx_ctl cocci_id/* arch/mips/cavium-octeon/octeon-irq.c 2381 */;
	const __be32 *cocci_id/* arch/mips/cavium-octeon/octeon-irq.c 2265 */;
	int __init cocci_id/* arch/mips/cavium-octeon/octeon-irq.c 2262 */;
	struct irq_desc *cocci_id/* arch/mips/cavium-octeon/octeon-irq.c 2249 */;
	struct irq_domain *cocci_id/* arch/mips/cavium-octeon/octeon-irq.c 2225 */;
	irqreturn_t cocci_id/* arch/mips/cavium-octeon/octeon-irq.c 2218 */;
	void *cocci_id/* arch/mips/cavium-octeon/octeon-irq.c 2218 */;
	unsigned cocci_id/* arch/mips/cavium-octeon/octeon-irq.c 2197 */;
	irq_hw_number_t cocci_id/* arch/mips/cavium-octeon/octeon-irq.c 2190 */;
	unsigned int *cocci_id/* arch/mips/cavium-octeon/octeon-irq.c 2165 */;
	unsigned long *cocci_id/* arch/mips/cavium-octeon/octeon-irq.c 2164 */;
	const u32 *cocci_id/* arch/mips/cavium-octeon/octeon-irq.c 2162 */;
	struct device_node *cocci_id/* arch/mips/cavium-octeon/octeon-irq.c 2161 */;
	struct irq_chip cocci_id/* arch/mips/cavium-octeon/octeon-irq.c 2151 */;
	struct octeon_irq_cib_host_data *cocci_id/* arch/mips/cavium-octeon/octeon-irq.c 2136 */;
	struct octeon_irq_cib_chip_data *cocci_id/* arch/mips/cavium-octeon/octeon-irq.c 2135 */;
	unsigned long cocci_id/* arch/mips/cavium-octeon/octeon-irq.c 2133 */;
	struct octeon_irq_cib_chip_data {
		struct octeon_irq_cib_host_data *host_data;
		int bit;
	} cocci_id/* arch/mips/cavium-octeon/octeon-irq.c 2112 */;
	struct octeon_irq_cib_host_data {
		raw_spinlock_t lock;
		u64 raw_reg;
		u64 en_reg;
		int max_bits;
	} cocci_id/* arch/mips/cavium-octeon/octeon-irq.c 2105 */;
	const unsigned long cocci_id/* arch/mips/cavium-octeon/octeon-irq.c 1974 */;
	bool cocci_id/* arch/mips/cavium-octeon/octeon-irq.c 1908 */;
	const struct cpumask *cocci_id/* arch/mips/cavium-octeon/octeon-irq.c 1781 */;
	struct octeon_core_chip_data *cocci_id/* arch/mips/cavium-octeon/octeon-irq.c 153 */;
	octeon_irq_ip4_handler_t cocci_id/* arch/mips/cavium-octeon/octeon-irq.c 1363 */;
	void (*cocci_id/* arch/mips/cavium-octeon/octeon-irq.c 1357 */)(void);
	struct octeon_irq_gpio_domain_data *cocci_id/* arch/mips/cavium-octeon/octeon-irq.c 1257 */;
	struct octeon_irq_ciu_domain_data *cocci_id/* arch/mips/cavium-octeon/octeon-irq.c 1227 */;
	struct octeon_irq_gpio_domain_data {
		unsigned int base_hwirq;
	} cocci_id/* arch/mips/cavium-octeon/octeon-irq.c 1142 */;
	__typeof__(struct octeon_ciu3_info *) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
	__typeof__(unsigned long) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
	__typeof__(unsigned int) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
	__typeof__(raw_spinlock_t) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
}
