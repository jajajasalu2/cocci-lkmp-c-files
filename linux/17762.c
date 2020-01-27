cocci_test_suite() {
	struct fsl_mpic_info cocci_id/* arch/powerpc/kvm/mpic.c 70 */;
	uint64_t cocci_id/* arch/powerpc/kvm/mpic.c 678 */;
	struct fsl_mpic_info {
		int max_ext;
	} cocci_id/* arch/powerpc/kvm/mpic.c 66 */;
	struct irq_queue cocci_id/* arch/powerpc/kvm/mpic.c 548 */;
	struct irq_source *cocci_id/* arch/powerpc/kvm/mpic.c 328 */;
	struct irq_dest *cocci_id/* arch/powerpc/kvm/mpic.c 327 */;
	bool cocci_id/* arch/powerpc/kvm/mpic.c 325 */;
	int cocci_id/* arch/powerpc/kvm/mpic.c 294 */;
	struct openpic *cocci_id/* arch/powerpc/kvm/mpic.c 292 */;
	struct irq_queue *cocci_id/* arch/powerpc/kvm/mpic.c 292 */;
	void cocci_id/* arch/powerpc/kvm/mpic.c 292 */;
	struct kvm_interrupt cocci_id/* arch/powerpc/kvm/mpic.c 245 */;
	struct openpic {
		struct kvm *kvm;
		struct kvm_device *dev;
		struct kvm_io_device mmio;
		const struct mem_reg *mmio_regions[MAX_MMIO_REGIONS];
		int num_mmio_regions;
		gpa_t reg_base;
		spinlock_t lock;
		struct fsl_mpic_info *fsl;
		uint32_t model;
		uint32_t flags;
		uint32_t nb_irqs;
		uint32_t vid;
		uint32_t vir;
		uint32_t vector_mask;
		uint32_t tfrr_reset;
		uint32_t ivpr_reset;
		uint32_t idr_reset;
		uint32_t brr1;
		uint32_t mpic_mode_mask;
		uint32_t frr;
		uint32_t gcr;
		uint32_t pir;
		uint32_t spve;
		uint32_t tfrr;
		struct irq_source src[MAX_IRQ];
		struct irq_dest dst[MAX_CPU];
		uint32_t nb_cpus;
		struct {
			uint32_t tccr;
			uint32_t tbcr;
		} timers[MAX_TMR];
		struct {
			uint32_t msir;
		} msi[MAX_MSI];
		uint32_t max_irq;
		uint32_t irq_ipi0;
		uint32_t irq_tim0;
		uint32_t irq_msi;
	} cocci_id/* arch/powerpc/kvm/mpic.c 191 */;
	const struct kvm_irq_routing_entry *cocci_id/* arch/powerpc/kvm/mpic.c 1828 */;
	unsigned long cocci_id/* arch/powerpc/kvm/mpic.c 1811 */;
	struct kvm *cocci_id/* arch/powerpc/kvm/mpic.c 1808 */;
	struct kvm_kernel_irq_routing_entry *cocci_id/* arch/powerpc/kvm/mpic.c 1807 */;
	struct irq_dest {
		struct kvm_vcpu *vcpu;
		int32_t ctpr;
		struct irq_queue raised;
		struct irq_queue servicing;
		uint32_t outputs_active[NUM_OUTPUTS];
	} cocci_id/* arch/powerpc/kvm/mpic.c 178 */;
	struct kvm_device *cocci_id/* arch/powerpc/kvm/mpic.c 1733 */;
	struct kvm_device_ops cocci_id/* arch/powerpc/kvm/mpic.c 1724 */;
	struct kvm_irq_routing_entry *cocci_id/* arch/powerpc/kvm/mpic.c 1643 */;
	u32 __user *cocci_id/* arch/powerpc/kvm/mpic.c 1586 */;
	u64 __user *cocci_id/* arch/powerpc/kvm/mpic.c 1572 */;
	long cocci_id/* arch/powerpc/kvm/mpic.c 1572 */;
	u64 cocci_id/* arch/powerpc/kvm/mpic.c 1560 */;
	struct kvm_device_attr *cocci_id/* arch/powerpc/kvm/mpic.c 1557 */;
	gpa_t cocci_id/* arch/powerpc/kvm/mpic.c 1497 */;
	u32 *cocci_id/* arch/powerpc/kvm/mpic.c 1497 */;
	struct irq_source {
		uint32_t ivpr;
		uint32_t idr;
		uint32_t destmask;
		int last_cpu;
		int output;
		int pending;
		enum irq_type type;
		bool level:1;
		bool nomask:1;
	} cocci_id/* arch/powerpc/kvm/mpic.c 147 */;
	const struct kvm_io_device_ops cocci_id/* arch/powerpc/kvm/mpic.c 1441 */;
	const u32 *cocci_id/* arch/powerpc/kvm/mpic.c 1432 */;
	const void *cocci_id/* arch/powerpc/kvm/mpic.c 1416 */;
	u8 *cocci_id/* arch/powerpc/kvm/mpic.c 1403 */;
	struct irq_queue {
		unsigned long queue[BITS_TO_LONGS((MAX_IRQ + 63) & ~63)];
		int next;
		int priority;
	} cocci_id/* arch/powerpc/kvm/mpic.c 138 */;
	union {
		u32 val;
		u8 bytes[4];
	} cocci_id/* arch/powerpc/kvm/mpic.c 1378 */;
	struct openpic cocci_id/* arch/powerpc/kvm/mpic.c 1376 */;
	void *cocci_id/* arch/powerpc/kvm/mpic.c 1374 */;
	struct kvm_io_device *cocci_id/* arch/powerpc/kvm/mpic.c 1373 */;
	u32 cocci_id/* arch/powerpc/kvm/mpic.c 1356 */;
	enum irq_type{IRQ_TYPE_NORMAL=0, IRQ_TYPE_FSLINT, IRQ_TYPE_FSLSPECIAL,} cocci_id/* arch/powerpc/kvm/mpic.c 132 */;
	void cocci_id/* arch/powerpc/kvm/mpic.c 129 */(struct openpic *opp,
						       int n_IRQ,
						       uint32_t val);
	const struct mem_reg *cocci_id/* arch/powerpc/kvm/mpic.c 1289 */;
	int cocci_id/* arch/powerpc/kvm/mpic.c 127 */(void *opaque,
						      gpa_t addr, u32 *ptr,
						      int idx);
	const struct mem_reg cocci_id/* arch/powerpc/kvm/mpic.c 1261 */;
	int cocci_id/* arch/powerpc/kvm/mpic.c 125 */(void *opaque,
						      gpa_t addr, u32 val,
						      int idx);
	struct mem_reg {
		int (*read)(void *opaque, gpa_t addr, u32 *ptr);
		int (*write)(void *opaque, gpa_t addr, u32 val);
		gpa_t start_addr;
		int size;
	} cocci_id/* arch/powerpc/kvm/mpic.c 1240 */;
	uint32_t cocci_id/* arch/powerpc/kvm/mpic.c 1196 */;
	struct kvm_vcpu *cocci_id/* arch/powerpc/kvm/mpic.c 117 */;
}
