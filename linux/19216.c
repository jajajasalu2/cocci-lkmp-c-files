cocci_test_suite() {
	void cocci_id/* arch/m68k/atari/ataints.c 84 */(int cmd);
	void cocci_id/* arch/m68k/atari/ataints.c 77 */(void);
	char cocci_id/* arch/m68k/atari/ataints.c 300 */;
	void __init cocci_id/* arch/m68k/atari/ataints.c 267 */;
	struct irq_chip cocci_id/* arch/m68k/atari/ataints.c 248 */;
	unsigned char *cocci_id/* arch/m68k/atari/ataints.c 234 */;
	int cocci_id/* arch/m68k/atari/ataints.c 229 */;
	struct irq_data *cocci_id/* arch/m68k/atari/ataints.c 227 */;
	void cocci_id/* arch/m68k/atari/ataints.c 227 */;
	unsigned int cocci_id/* arch/m68k/atari/ataints.c 194 */;
	unsigned char cocci_id/* arch/m68k/atari/ataints.c 149 */;
	struct mfptimerbase *cocci_id/* arch/m68k/atari/ataints.c 147 */;
	irqreturn_t cocci_id/* arch/m68k/atari/ataints.c 145 */;
	void *cocci_id/* arch/m68k/atari/ataints.c 145 */;
	struct mfptimerbase {
		volatile struct MFP *mfp;
		unsigned char mfp_mask,mfp_data;
		unsigned short int_mask;
		int handler_irq,mfptimer_irq,server_irq;
		char *name;
	} cocci_id/* arch/m68k/atari/ataints.c 131 */;
}
