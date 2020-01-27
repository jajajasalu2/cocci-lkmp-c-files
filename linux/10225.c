cocci_test_suite() {
	struct vrc4171_socket cocci_id/* drivers/pcmcia/vrc4171_card.c 98 */[CARD_MAX_SLOTS];
	struct vrc4171_socket {
		enum vrc4171_slot slot;
		struct pcmcia_socket pcmcia_socket;
		char name[24];
		int csc_irq;
		int io_irq;
		spinlock_t lock;
	} cocci_id/* drivers/pcmcia/vrc4171_card.c 89 */;
	enum vrc4171_slotb{SLOTB_IS_NONE, SLOTB_IS_PCCARD, SLOTB_IS_CF, SLOTB_IS_FLASHROM,} cocci_id/* drivers/pcmcia/vrc4171_card.c 82 */;
	enum vrc4171_slot{SLOT_PROBE=0, SLOT_NOPROBE_IO, SLOT_NOPROBE_MEM, SLOT_NOPROBE_ALL, SLOT_INITIALIZED,} cocci_id/* drivers/pcmcia/vrc4171_card.c 74 */;
	struct platform_driver cocci_id/* drivers/pcmcia/vrc4171_card.c 696 */;
	char *cocci_id/* drivers/pcmcia/vrc4171_card.c 622 */;
	void cocci_id/* drivers/pcmcia/vrc4171_card.c 542 */;
	irqreturn_t cocci_id/* drivers/pcmcia/vrc4171_card.c 505 */;
	void *cocci_id/* drivers/pcmcia/vrc4171_card.c 505 */;
	unsigned int cocci_id/* drivers/pcmcia/vrc4171_card.c 478 */;
	struct pccard_operations cocci_id/* drivers/pcmcia/vrc4171_card.c 470 */;
	struct pccard_mem_map *cocci_id/* drivers/pcmcia/vrc4171_card.c 409 */;
	u_char cocci_id/* drivers/pcmcia/vrc4171_card.c 371 */;
	struct pccard_io_map *cocci_id/* drivers/pcmcia/vrc4171_card.c 367 */;
	socket_state_t *cocci_id/* drivers/pcmcia/vrc4171_card.c 305 */;
	u_int cocci_id/* drivers/pcmcia/vrc4171_card.c 245 */;
	u_int *cocci_id/* drivers/pcmcia/vrc4171_card.c 241 */;
	struct pcmcia_socket *cocci_id/* drivers/pcmcia/vrc4171_card.c 241 */;
	struct vrc4171_socket *cocci_id/* drivers/pcmcia/vrc4171_card.c 224 */;
	uint16_t cocci_id/* drivers/pcmcia/vrc4171_card.c 167 */;
	uint8_t cocci_id/* drivers/pcmcia/vrc4171_card.c 158 */;
	int cocci_id/* drivers/pcmcia/vrc4171_card.c 158 */;
	enum vrc4171_slotb cocci_id/* drivers/pcmcia/vrc4171_card.c 131 */;
	struct platform_device cocci_id/* drivers/pcmcia/vrc4171_card.c 119 */;
	struct resource cocci_id/* drivers/pcmcia/vrc4171_card.c 104 */[3];
	char cocci_id/* drivers/pcmcia/vrc4171_card.c 100 */[];
}
