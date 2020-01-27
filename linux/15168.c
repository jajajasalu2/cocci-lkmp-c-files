cocci_test_suite() {
	struct superio_struct {
		int io;
		int irq;
		int dma;
	} cocci_id/* drivers/parport/parport_pc.c 98 */[NR_SUPERIOS];
	const char *const cocci_id/* drivers/parport/parport_pc.c 962 */[];
	struct superio_struct *cocci_id/* drivers/parport/parport_pc.c 946 */;
	const struct parport_operations cocci_id/* drivers/parport/parport_pc.c 908 */;
	const void *cocci_id/* drivers/parport/parport_pc.c 710 */;
	size_t cocci_id/* drivers/parport/parport_pc.c 709 */;
	dma_addr_t cocci_id/* drivers/parport/parport_pc.c 577 */;
	const int cocci_id/* drivers/parport/parport_pc.c 478 */;
	const unsigned char *cocci_id/* drivers/parport/parport_pc.c 475 */;
	void *cocci_id/* drivers/parport/parport_pc.c 440 */;
	struct parport_pc_private cocci_id/* drivers/parport/parport_pc.c 3349 */;
	struct device *cocci_id/* drivers/parport/parport_pc.c 3347 */;
	void __exit cocci_id/* drivers/parport/parport_pc.c 3336 */;
	unsigned int cocci_id/* drivers/parport/parport_pc.c 3179 */;
	char *cocci_id/* drivers/parport/parport_pc.c 3171 */;
	char *cocci_id/* drivers/parport/parport_pc.c 3155 */[PARPORT_PC_MAX_PORTS];
	int __init cocci_id/* drivers/parport/parport_pc.c 3134 */;
	int *cocci_id/* drivers/parport/parport_pc.c 3127 */;
	int __initdata cocci_id/* drivers/parport/parport_pc.c 3090 */[PARPORT_PC_MAX_PORTS];
	int __initdata cocci_id/* drivers/parport/parport_pc.c 3084 */[PARPORT_PC_MAX_PORTS + 1];
	void __init cocci_id/* drivers/parport/parport_pc.c 3050 */;
	int __attribute__((unused)) cocci_id/* drivers/parport/parport_pc.c 3025 */;
	struct platform_driver cocci_id/* drivers/parport/parport_pc.c 3017 */;
	struct platform_device *cocci_id/* drivers/parport/parport_pc.c 3010 */;
	struct pnp_driver cocci_id/* drivers/parport/parport_pc.c 2999 */;
	const struct pnp_device_id *cocci_id/* drivers/parport/parport_pc.c 2950 */;
	struct pnp_dev *cocci_id/* drivers/parport/parport_pc.c 2949 */;
	const struct pnp_device_id cocci_id/* drivers/parport/parport_pc.c 2939 */[];
	struct pci_dev *cocci_id/* drivers/parport/parport_pc.c 2912 */;
	const struct pci_device_id *cocci_id/* drivers/parport/parport_pc.c 2911 */;
	struct pci_driver cocci_id/* drivers/parport/parport_pc.c 2902 */;
	long cocci_id/* drivers/parport/parport_pc.c 284 */;
	struct pci_parport_data cocci_id/* drivers/parport/parport_pc.c 2831 */;
	struct pci_parport_data *cocci_id/* drivers/parport/parport_pc.c 2818 */;
	struct pci_parport_data {
		int num;
		struct parport *ports[2];
	} cocci_id/* drivers/parport/parport_pc.c 2809 */;
	const struct pci_device_id cocci_id/* drivers/parport/parport_pc.c 2716 */[];
	struct parport_pc_pci {
		int numports;
		struct {
			int lo;
			int hi;
		} addr[4];
		int (*preinit_hook)(struct pci_dev *pdev, int autoirq,
				    int autodma);
		void (*postinit_hook)(struct pci_dev *pdev, int failed);
	} cocci_id/* drivers/parport/parport_pc.c 2656 */[];
	enum parport_pc_pci_cards{siig_1p_10x=last_sio, siig_2p_10x, siig_1p_20x, siig_2p_20x, lava_parallel, lava_parallel_dual_a, lava_parallel_dual_b, boca_ioppar, plx_9050, timedia_4006a, timedia_4014, timedia_4008a, timedia_4018, timedia_9018a, syba_2p_epp, syba_1p_ecp, titan_010l, avlab_1p, avlab_2p, oxsemi_952, oxsemi_954, oxsemi_840, oxsemi_pcie_pport, aks_0100, mobility_pp, netmos_9705, netmos_9715, netmos_9755, netmos_9805, netmos_9815, netmos_9901, netmos_9865, quatech_sppxp100, wch_ch382l,} cocci_id/* drivers/parport/parport_pc.c 2616 */;
	struct parport_pc_superio {
		int (*probe)(struct pci_dev *pdev, int autoirq, int autodma,
			     const struct parport_pc_via_data *via);
		const struct parport_pc_via_data *via;
	} cocci_id/* drivers/parport/parport_pc.c 2606 */[];
	enum parport_pc_sio_types{sio_via_686a=0, sio_via_8231, sio_ite_8872, last_sio,} cocci_id/* drivers/parport/parport_pc.c 2598 */;
	unsigned cocci_id/* drivers/parport/parport_pc.c 2441 */;
	struct parport_pc_via_data cocci_id/* drivers/parport/parport_pc.c 2416 */;
	struct parport_state *cocci_id/* drivers/parport/parport_pc.c 234 */;
	struct pardevice *cocci_id/* drivers/parport/parport_pc.c 233 */;
	u32 cocci_id/* drivers/parport/parport_pc.c 2310 */;
	short cocci_id/* drivers/parport/parport_pc.c 2309 */[6];
	const struct parport_pc_via_data *cocci_id/* drivers/parport/parport_pc.c 2307 */;
	struct parport_operations cocci_id/* drivers/parport/parport_pc.c 2056 */;
	struct resource *cocci_id/* drivers/parport/parport_pc.c 2034 */;
	struct parport_operations *cocci_id/* drivers/parport/parport_pc.c 2031 */;
	unsigned long int cocci_id/* drivers/parport/parport_pc.c 2024 */;
	const int cocci_id/* drivers/parport/parport_pc.c 1860 */[8];
	struct parport_pc_private *cocci_id/* drivers/parport/parport_pc.c 1800 */;
	unsigned long cocci_id/* drivers/parport/parport_pc.c 161 */;
	const int cocci_id/* drivers/parport/parport_pc.c 1585 */[];
	unsigned char cocci_id/* drivers/parport/parport_pc.c 142 */;
	const struct parport_pc_private *cocci_id/* drivers/parport/parport_pc.c 141 */;
	struct parport *cocci_id/* drivers/parport/parport_pc.c 139 */;
	int cocci_id/* drivers/parport/parport_pc.c 139 */;
	u8 cocci_id/* drivers/parport/parport_pc.c 1345 */;
	u16 cocci_id/* drivers/parport/parport_pc.c 1344 */;
	int cocci_id/* drivers/parport/parport_pc.c 1236 */[3];
	void (*cocci_id/* drivers/parport/parport_pc.c 1165 */)(int io,
								int key);
	const char *cocci_id/* drivers/parport/parport_pc.c 1164 */;
	void cocci_id/* drivers/parport/parport_pc.c 1162 */;
	char *const cocci_id/* drivers/parport/parport_pc.c 1055 */[];
}
