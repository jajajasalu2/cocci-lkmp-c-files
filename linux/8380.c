cocci_test_suite() {
	u32 __iomem *cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp6000_pcie.c 993 */;
	const u32 *cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp6000_pcie.c 991 */;
	u64 __iomem __maybe_unused *cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp6000_pcie.c 990 */;
	const u64 __maybe_unused *cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp6000_pcie.c 989 */;
	const u32 __iomem *cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp6000_pcie.c 930 */;
	const u64 __iomem __maybe_unused *cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp6000_pcie.c 927 */;
	u64 __maybe_unused *cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp6000_pcie.c 926 */;
	unsigned int cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp6000_pcie.c 924 */;
	void *cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp6000_pcie.c 923 */;
	void __iomem *cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp6000_pcie.c 905 */;
	phys_addr_t cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp6000_pcie.c 898 */;
	struct nfp6000_area_priv *cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp6000_pcie.c 814 */;
	struct nfp_cpp_area *cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp6000_pcie.c 811 */;
	unsigned long long cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp6000_pcie.c 752 */;
	struct nfp6000_area_priv {
		atomic_t refcnt;
		struct nfp_bar *bar;
		u32 bar_offset;
		u32 target;
		u32 action;
		u32 token;
		u64 offset;
		struct {
			int read;
			int write;
			int bar;
		} width;
		size_t size;
		void __iomem *iomem;
		phys_addr_t phys;
		struct resource resource;
	} cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp6000_pcie.c 729 */;
	struct nfp_bar *cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp6000_pcie.c 714 */;
	struct nfp6000_pcie *cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp6000_pcie.c 712 */;
	void cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp6000_pcie.c 712 */;
	struct resource *cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp6000_pcie.c 574 */;
	char *cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp6000_pcie.c 566 */;
	char cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp6000_pcie.c 562 */[196];
	const u32 cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp6000_pcie.c 552 */[4];
	const u32 cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp6000_pcie.c 542 */;
	u16 cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp6000_pcie.c 540 */;
	const struct nfp_bar *cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp6000_pcie.c 516 */;
	const void *cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp6000_pcie.c 514 */;
	int cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp6000_pcie.c 514 */;
	void cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp6000_pcie.c 512 */(struct nfp6000_pcie *nfp);
	int *cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp6000_pcie.c 452 */;
	unsigned long cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp6000_pcie.c 426 */;
	u32 cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp6000_pcie.c 201 */;
	u64 cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp6000_pcie.c 198 */;
	size_t cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp6000_pcie.c 198 */;
	u64 *cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp6000_pcie.c 197 */;
	u32 *cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp6000_pcie.c 197 */;
	const struct nfp6000_pcie *cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp6000_pcie.c 196 */;
	resource_size_t cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp6000_pcie.c 181 */;
	struct nfp6000_pcie {
		struct pci_dev *pdev;
		struct device *dev;
		spinlock_t bar_lock;
		int bars;
		struct nfp_bar bar[NFP_PCI_BAR_MAX];
		wait_queue_head_t bar_waiters;
		struct {
			void __iomem *csr;
			void __iomem *em;
			void __iomem *expl[4];
		} iomem;
		struct {
			struct mutex mutex;
			u8 master_id;
			u8 signal_ref;
			void __iomem *data;
			struct {
				void __iomem *addr;
				int bitsize;
				int free[4];
			} group[4];
		} expl;
	} cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp6000_pcie.c 145 */;
	struct nfp6000_explicit_priv cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp6000_pcie.c 1304 */;
	struct nfp_bar {
		struct nfp6000_pcie *nfp;
		u32 barcfg;
		u64 base;
		u64 mask;
		u32 bitsize;
		int index;
		atomic_t refcnt;
		void __iomem *iomem;
		struct resource *resource;
	} cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp6000_pcie.c 130 */;
	struct nfp6000_area_priv cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp6000_pcie.c 1293 */;
	const struct nfp_cpp_operations cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp6000_pcie.c 1284 */;
	struct pci_dev *cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp6000_pcie.c 1269 */;
	struct device *cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp6000_pcie.c 1267 */;
	u8 *cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp6000_pcie.c 1247 */;
	struct nfp_cpp *cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp6000_pcie.c 1239 */;
	struct nfp6000_pcie cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp6000_pcie.c 115 */;
	u32 cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp6000_pcie.c 1132 */[3];
	u8 cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp6000_pcie.c 1128 */;
	const struct nfp_cpp_explicit_command *cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp6000_pcie.c 1125 */;
	struct nfp6000_explicit_priv *cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp6000_pcie.c 1065 */;
	struct nfp_cpp_explicit *cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp6000_pcie.c 1062 */;
	struct nfp6000_explicit_priv {
		struct nfp6000_pcie *nfp;
		struct {
			int group;
			int area;
		} bar;
		int bitsize;
		void __iomem *data;
		void __iomem *addr;
	} cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp6000_pcie.c 1051 */;
}
