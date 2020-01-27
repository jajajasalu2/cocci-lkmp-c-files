cocci_test_suite() {
	u32 __iomem *cocci_id/* arch/mips/kernel/irq_txx9.c 85 */;
	unsigned int cocci_id/* arch/mips/kernel/irq_txx9.c 84 */;
	struct irq_data *cocci_id/* arch/mips/kernel/irq_txx9.c 82 */;
	struct {
		unsigned char level;
		unsigned char mode;
	} cocci_id/* arch/mips/kernel/irq_txx9.c 61 */[TXx9_MAX_IR]__read_mostly;
	struct txx9_irc_reg __iomem *cocci_id/* arch/mips/kernel/irq_txx9.c 59 */;
	struct txx9_irc_reg {
		u32 cer;
		u32 cr[2];
		u32 unused0;
		u32 ilr[8];
		u32 unused1[4];
		u32 imr;
		u32 unused2[7];
		u32 scr;
		u32 unused3[7];
		u32 ssr;
		u32 unused4[7];
		u32 csr;
	} cocci_id/* arch/mips/kernel/irq_txx9.c 22 */;
	u32 cocci_id/* arch/mips/kernel/irq_txx9.c 186 */;
	int cocci_id/* arch/mips/kernel/irq_txx9.c 184 */;
	void cocci_id/* arch/mips/kernel/irq_txx9.c 184 */;
	int __init cocci_id/* arch/mips/kernel/irq_txx9.c 173 */;
	struct txx9_irc_reg cocci_id/* arch/mips/kernel/irq_txx9.c 153 */;
	unsigned long cocci_id/* arch/mips/kernel/irq_txx9.c 149 */;
	void __init cocci_id/* arch/mips/kernel/irq_txx9.c 149 */;
	struct irq_chip cocci_id/* arch/mips/kernel/irq_txx9.c 140 */;
}
