cocci_test_suite() {
	socket_state_t *cocci_id/* drivers/pcmcia/i82365.c 922 */;
	u_int *cocci_id/* drivers/pcmcia/i82365.c 887 */;
	struct timer_list *cocci_id/* drivers/pcmcia/i82365.c 878 */;
	int cocci_id/* drivers/pcmcia/i82365.c 84 */[16];
	u_long cocci_id/* drivers/pcmcia/i82365.c 835 */;
	unsigned long cocci_id/* drivers/pcmcia/i82365.c 77 */;
	struct isapnp_device_id *cocci_id/* drivers/pcmcia/i82365.c 758 */;
	struct pnp_dev *cocci_id/* drivers/pcmcia/i82365.c 750 */;
	struct isapnp_device_id cocci_id/* drivers/pcmcia/i82365.c 739 */[]__initdata;
	struct i82365_socket *cocci_id/* drivers/pcmcia/i82365.c 677 */;
	u_int cocci_id/* drivers/pcmcia/i82365.c 675 */;
	void __init cocci_id/* drivers/pcmcia/i82365.c 673 */;
	unsigned int cocci_id/* drivers/pcmcia/i82365.c 662 */;
	int cocci_id/* drivers/pcmcia/i82365.c 64 */;
	irqreturn_t cocci_id/* drivers/pcmcia/i82365.c 63 */(int, void *);
	int __init cocci_id/* drivers/pcmcia/i82365.c 572 */;
	irqreturn_t cocci_id/* drivers/pcmcia/i82365.c 481 */;
	void *cocci_id/* drivers/pcmcia/i82365.c 481 */;
	volatile u_int cocci_id/* drivers/pcmcia/i82365.c 478 */;
	char cocci_id/* drivers/pcmcia/i82365.c 452 */[128];
	struct vg46x_state *cocci_id/* drivers/pcmcia/i82365.c 380 */;
	u_int __init cocci_id/* drivers/pcmcia/i82365.c 321 */;
	char *cocci_id/* drivers/pcmcia/i82365.c 321 */;
	u_char cocci_id/* drivers/pcmcia/i82365.c 308 */;
	struct cirrus_state *cocci_id/* drivers/pcmcia/i82365.c 297 */;
	u_short cocci_id/* drivers/pcmcia/i82365.c 294 */;
	void cocci_id/* drivers/pcmcia/i82365.c 294 */;
	struct pcic cocci_id/* drivers/pcmcia/i82365.c 197 */[];
	struct pcic {
		char *name;
		u_short flags;
	} cocci_id/* drivers/pcmcia/i82365.c 192 */;
	enum pcic_id{IS_I82365A, IS_I82365B, IS_I82365DF, IS_IBM, IS_RF5Cx96, IS_VLSI, IS_VG468, IS_VG469, IS_PD6710, IS_PD672X, IS_VT83C469,} cocci_id/* drivers/pcmcia/i82365.c 176 */;
	struct timer_list cocci_id/* drivers/pcmcia/i82365.c 171 */;
	struct i82365_socket cocci_id/* drivers/pcmcia/i82365.c 159 */[8];
	struct i82365_socket {
		u_short type,flags;
		struct pcmcia_socket socket;
		unsigned int number;
		unsigned int ioaddr;
		u_short psock;
		u_char cs_irq,intr;
		union {
			struct cirrus_state cirrus;
			struct vg46x_state vg46x;
		} state;
	} cocci_id/* drivers/pcmcia/i82365.c 144 */;
	struct vg46x_state {
		u_char ctl,ema;
	} cocci_id/* drivers/pcmcia/i82365.c 140 */;
	struct cirrus_state {
		u_char misc1,misc2;
		u_char timer[6];
	} cocci_id/* drivers/pcmcia/i82365.c 135 */;
	void __exit cocci_id/* drivers/pcmcia/i82365.c 1317 */;
	struct platform_device *cocci_id/* drivers/pcmcia/i82365.c 1239 */;
	struct platform_driver cocci_id/* drivers/pcmcia/i82365.c 1233 */;
	struct pccard_operations cocci_id/* drivers/pcmcia/i82365.c 1223 */;
	pccard_mem_map cocci_id/* drivers/pcmcia/i82365.c 1209 */;
	pccard_io_map cocci_id/* drivers/pcmcia/i82365.c 1208 */;
	struct resource cocci_id/* drivers/pcmcia/i82365.c 1207 */;
	struct i82365_socket cocci_id/* drivers/pcmcia/i82365.c 1166 */;
	struct pcmcia_socket *cocci_id/* drivers/pcmcia/i82365.c 1164 */;
	struct pccard_mem_map *cocci_id/* drivers/pcmcia/i82365.c 1061 */;
	unsigned long long cocci_id/* drivers/pcmcia/i82365.c 1038 */;
	struct pccard_io_map *cocci_id/* drivers/pcmcia/i82365.c 1032 */;
}
