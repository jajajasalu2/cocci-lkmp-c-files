cocci_test_suite() {
	struct pci_dev *cocci_id/* drivers/parport/parport_serial.c 92 */;
	struct parport_pc_pci *cocci_id/* drivers/parport/parport_serial.c 92 */;
	int cocci_id/* drivers/parport/parport_serial.c 92 */;
	struct parport_pc_pci {
		int numports;
		struct {
			int lo;
			int hi;
		} addr[4];
		int (*preinit_hook)(struct pci_dev *pdev,
				    struct parport_pc_pci *card, int autoirq,
				    int autodma);
		void (*postinit_hook)(struct pci_dev *pdev,
				      struct parport_pc_pci *card, int failed);
	} cocci_id/* drivers/parport/parport_serial.c 71 */;
	struct pci_driver cocci_id/* drivers/parport/parport_serial.c 706 */;
	struct device *cocci_id/* drivers/parport/parport_serial.c 692 */;
	int __maybe_unused cocci_id/* drivers/parport/parport_serial.c 692 */;
	void cocci_id/* drivers/parport/parport_serial.c 665 */;
	unsigned long cocci_id/* drivers/parport/parport_serial.c 590 */;
	struct parport *cocci_id/* drivers/parport/parport_serial.c 587 */;
	struct parport_serial_private *cocci_id/* drivers/parport/parport_serial.c 577 */;
	const struct pci_device_id *cocci_id/* drivers/parport/parport_serial.c 574 */;
	struct serial_private *cocci_id/* drivers/parport/parport_serial.c 559 */;
	struct pciserial_board *cocci_id/* drivers/parport/parport_serial.c 558 */;
	struct parport_serial_private {
		struct serial_private *serial;
		int num_par;
		struct parport *port[PARPORT_MAX];
		struct parport_pc_pci par;
	} cocci_id/* drivers/parport/parport_serial.c 547 */;
	struct pciserial_board cocci_id/* drivers/parport/parport_serial.c 291 */[];
	enum parport_pc_pci_cards{titan_110l=0, titan_210l, netmos_9xx5_combo, netmos_9855, netmos_9855_2p, netmos_9900, netmos_9900_2p, netmos_99xx_1p, avlab_1s1p, avlab_1s2p, avlab_2s1p, siig_1s1p_10x, siig_2s1p_10x, siig_2p1s_20x, siig_1s1p_20x, siig_2s1p_20x, timedia_4078a, timedia_4079h, timedia_4085h, timedia_4088a, timedia_4089a, timedia_4095a, timedia_4096a, timedia_4078u, timedia_4079a, timedia_4085u, timedia_4079r, timedia_4079s, timedia_4079d, timedia_4079e, timedia_4079f, timedia_9079a, timedia_9079b, timedia_9079c, wch_ch353_1s1p, wch_ch353_2s1p, wch_ch382_0s1p, wch_ch382_2s1p, brainboxes_5s1p, sunix_4008a, sunix_5069a, sunix_5079a, sunix_5099a,} cocci_id/* drivers/parport/parport_serial.c 24 */;
	struct pci_device_id cocci_id/* drivers/parport/parport_serial.c 163 */[];
	struct parport_pc_pci cocci_id/* drivers/parport/parport_serial.c 117 */[];
}
