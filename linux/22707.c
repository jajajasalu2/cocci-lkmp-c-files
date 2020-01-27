cocci_test_suite() {
	struct platform_device *cocci_id/* sound/drivers/mtpav.c 80 */;
	void __exit cocci_id/* sound/drivers/mtpav.c 763 */;
	void cocci_id/* sound/drivers/mtpav.c 763 */;
	int cocci_id/* sound/drivers/mtpav.c 746 */;
	int __init cocci_id/* sound/drivers/mtpav.c 744 */;
	struct platform_driver cocci_id/* sound/drivers/mtpav.c 736 */;
	void *cocci_id/* sound/drivers/mtpav.c 670 */;
	unsigned long cocci_id/* sound/drivers/mtpav.c 663 */;
	struct snd_card *cocci_id/* sound/drivers/mtpav.c 660 */;
	long cocci_id/* sound/drivers/mtpav.c 65 */;
	struct snd_rawmidi_substream cocci_id/* sound/drivers/mtpav.c 641 */;
	char *cocci_id/* sound/drivers/mtpav.c 64 */;
	struct list_head *cocci_id/* sound/drivers/mtpav.c 624 */;
	struct snd_rawmidi_substream *cocci_id/* sound/drivers/mtpav.c 623 */;
	struct snd_rawmidi *cocci_id/* sound/drivers/mtpav.c 622 */;
	const struct snd_rawmidi_ops cocci_id/* sound/drivers/mtpav.c 593 */;
	irqreturn_t cocci_id/* sound/drivers/mtpav.c 555 */;
	struct mtpav_port *cocci_id/* sound/drivers/mtpav.c 488 */;
	struct mtpav *cocci_id/* sound/drivers/mtpav.c 412 */;
	struct timer_list *cocci_id/* sound/drivers/mtpav.c 393 */;
	u8 cocci_id/* sound/drivers/mtpav.c 206 */;
	u16 cocci_id/* sound/drivers/mtpav.c 206 */;
	struct mtpav {
		struct snd_card *card;
		unsigned long port;
		struct resource *res_port;
		int irq;
		spinlock_t spinlock;
		int share_irq;
		int istimer;
		struct timer_list timer;
		struct snd_rawmidi *rmidi;
		int num_ports;
		struct mtpav_port ports[NUMPORTS];
		u32 inmidiport;
		u32 inmidistate;
		u32 outmidihwport;
	} cocci_id/* sound/drivers/mtpav.c 123 */;
	struct mtpav_port {
		u8 number;
		u8 hwport;
		u8 mode;
		u8 running_status;
		struct snd_rawmidi_substream *input;
		struct snd_rawmidi_substream *output;
	} cocci_id/* sound/drivers/mtpav.c 114 */;
}
