cocci_test_suite() {
	u64 cocci_id/* arch/x86/kernel/hpet.c 786 */;
	bool __init cocci_id/* arch/x86/kernel/hpet.c 771 */;
	struct clocksource cocci_id/* arch/x86/kernel/hpet.c 747 */;
	struct hpet_channel cocci_id/* arch/x86/kernel/hpet.c 72 */;
	struct hpet_channel *cocci_id/* arch/x86/kernel/hpet.c 70 */;
	struct clock_event_device *cocci_id/* arch/x86/kernel/hpet.c 70 */;
	union hpet_lock cocci_id/* arch/x86/kernel/hpet.c 679 */;
	union hpet_lock {
		struct {
			arch_spinlock_t lock;
			u32 value;
		};
		u64 lockval;
	} cocci_id/* arch/x86/kernel/hpet.c 671 */;
	bool cocci_id/* arch/x86/kernel/hpet.c 65 */;
	struct hpet_base cocci_id/* arch/x86/kernel/hpet.c 60 */;
	void __iomem *cocci_id/* arch/x86/kernel/hpet.c 58 */;
	struct irq_domain *cocci_id/* arch/x86/kernel/hpet.c 55 */;
	irqreturn_t cocci_id/* arch/x86/kernel/hpet.c 511 */;
	void *cocci_id/* arch/x86/kernel/hpet.c 511 */;
	struct msi_msg cocci_id/* arch/x86/kernel/hpet.c 502 */;
	struct irq_data *cocci_id/* arch/x86/kernel/hpet.c 501 */;
	u8 cocci_id/* arch/x86/kernel/hpet.c 50 */;
	struct msi_msg *cocci_id/* arch/x86/kernel/hpet.c 492 */;
	unsigned long cocci_id/* arch/x86/kernel/hpet.c 49 */;
	void __init cocci_id/* arch/x86/kernel/hpet.c 415 */;
	s32 cocci_id/* arch/x86/kernel/hpet.c 363 */;
	unsigned int cocci_id/* arch/x86/kernel/hpet.c 361 */;
	struct hpet_base {
		unsigned int nr_channels;
		unsigned int nr_clockevents;
		unsigned int boot_cfg;
		struct hpet_channel *channels;
	} cocci_id/* arch/x86/kernel/hpet.c 34 */;
	uint64_t cocci_id/* arch/x86/kernel/hpet.c 299 */;
	struct clocksource *cocci_id/* arch/x86/kernel/hpet.c 280 */;
	struct hpet_channel {
		struct clock_event_device evt;
		unsigned int num;
		unsigned int cpu;
		unsigned int irq;
		unsigned int in_use;
		enum hpet_mode mode;
		unsigned int boot_cfg;
		char name[10];
	} cocci_id/* arch/x86/kernel/hpet.c 23 */;
	struct hpet_data cocci_id/* arch/x86/kernel/hpet.c 188 */;
	enum hpet_mode{HPET_MODE_UNUSED, HPET_MODE_LEGACY, HPET_MODE_CLOCKEVT, HPET_MODE_DEVICE,} cocci_id/* arch/x86/kernel/hpet.c 16 */;
	u32 cocci_id/* arch/x86/kernel/hpet.c 141 */;
	const char *cocci_id/* arch/x86/kernel/hpet.c 139 */;
	int cocci_id/* arch/x86/kernel/hpet.c 139 */;
	void cocci_id/* arch/x86/kernel/hpet.c 139 */;
	char *cocci_id/* arch/x86/kernel/hpet.c 118 */;
	int __init cocci_id/* arch/x86/kernel/hpet.c 118 */;
	unsigned char cocci_id/* arch/x86/kernel/hpet.c 1166 */;
	rtc_irq_handler cocci_id/* arch/x86/kernel/hpet.c 1049 */;
	struct rtc_time cocci_id/* arch/x86/kernel/hpet.c 1029 */;
	__typeof__(struct hpet_channel *) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
}
