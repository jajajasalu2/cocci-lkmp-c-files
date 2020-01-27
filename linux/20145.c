cocci_test_suite() {
	struct hwbutton_interrupt cocci_id/* arch/mips/pmcs-msp71xx/msp_hwbutton.c 92 */;
	void cocci_id/* arch/mips/pmcs-msp71xx/msp_hwbutton.c 54 */(char *);
	struct hwbutton_interrupt {
		char *name;
		int irq;
		int eirq;
		int initial_state;
		void (*handle_hi)(void *);
		void (*handle_lo)(void *);
		void *data;
	} cocci_id/* arch/mips/pmcs-msp71xx/msp_hwbutton.c 43 */;
	int __init cocci_id/* arch/mips/pmcs-msp71xx/msp_hwbutton.c 156 */;
	void cocci_id/* arch/mips/pmcs-msp71xx/msp_hwbutton.c 156 */;
	unsigned long cocci_id/* arch/mips/pmcs-msp71xx/msp_hwbutton.c 116 */;
	struct hwbutton_interrupt *cocci_id/* arch/mips/pmcs-msp71xx/msp_hwbutton.c 115 */;
	irqreturn_t cocci_id/* arch/mips/pmcs-msp71xx/msp_hwbutton.c 113 */;
	void *cocci_id/* arch/mips/pmcs-msp71xx/msp_hwbutton.c 113 */;
	int cocci_id/* arch/mips/pmcs-msp71xx/msp_hwbutton.c 113 */;
}
