cocci_test_suite() {
	const struct pci_device_id *cocci_id/* drivers/tty/moxa.c 932 */;
	struct pci_dev *cocci_id/* drivers/tty/moxa.c 931 */;
	struct moxa_board_conf *cocci_id/* drivers/tty/moxa.c 892 */;
	const struct pci_device_id cocci_id/* drivers/tty/moxa.c 87 */[];
	const char *cocci_id/* drivers/tty/moxa.c 823 */;
	const struct firmware *cocci_id/* drivers/tty/moxa.c 822 */;
	struct device *cocci_id/* drivers/tty/moxa.c 820 */;
	u32 cocci_id/* drivers/tty/moxa.c 774 */;
	char *cocci_id/* drivers/tty/moxa.c 77 */[];
	const struct {
		__le32 magic;
		u8 reserved1[2];
		u8 type;
		u8 model;
		u8 reserved2[8];
		__le16 len[5];
	} *cocci_id/* drivers/tty/moxa.c 739 */;
	u16 cocci_id/* drivers/tty/moxa.c 735 */[5];
	char cocci_id/* drivers/tty/moxa.c 734 */[64];
	enum{MOXA_BOARD_C218_PCI=1, MOXA_BOARD_C218_ISA, MOXA_BOARD_C320_PCI, MOXA_BOARD_C320_ISA, MOXA_BOARD_CP204J,} cocci_id/* drivers/tty/moxa.c 69 */;
	size_t cocci_id/* drivers/tty/moxa.c 503 */;
	const u8 *cocci_id/* drivers/tty/moxa.c 502 */;
	const __le16 *cocci_id/* drivers/tty/moxa.c 449 */;
	const void *cocci_id/* drivers/tty/moxa.c 447 */;
	struct tty_driver *cocci_id/* drivers/tty/moxa.c 418 */;
	const struct tty_port_operations cocci_id/* drivers/tty/moxa.c 412 */;
	const struct tty_operations cocci_id/* drivers/tty/moxa.c 393 */;
	struct mxser_mstatus cocci_id/* drivers/tty/moxa.c 340 */;
	struct mxser_mstatus __user *cocci_id/* drivers/tty/moxa.c 339 */;
	unsigned long __user *cocci_id/* drivers/tty/moxa.c 332 */;
	struct moxaq_str cocci_id/* drivers/tty/moxa.c 311 */;
	struct moxaq_str __user *cocci_id/* drivers/tty/moxa.c 310 */;
	void __user *cocci_id/* drivers/tty/moxa.c 290 */;
	unsigned long cocci_id/* drivers/tty/moxa.c 287 */;
	void cocci_id/* drivers/tty/moxa.c 226 */(struct moxa_port *port,
						  int enable);
	int cocci_id/* drivers/tty/moxa.c 224 */(struct tty_struct *,
						 struct serial_struct *);
	int cocci_id/* drivers/tty/moxa.c 217 */(struct tty_struct *,
						 const unsigned char *, int);
	void cocci_id/* drivers/tty/moxa.c 216 */(struct moxa_port *, int);
	int cocci_id/* drivers/tty/moxa.c 215 */(struct moxa_port *);
	void cocci_id/* drivers/tty/moxa.c 214 */(struct moxa_port *, int,
						  int, int, int, int);
	void cocci_id/* drivers/tty/moxa.c 213 */(struct moxa_port *, int,
						  int);
	int cocci_id/* drivers/tty/moxa.c 212 */(struct moxa_port *, int *,
						 int *);
	int cocci_id/* drivers/tty/moxa.c 211 */(struct moxa_port *,
						 struct ktermios *, speed_t);
	void cocci_id/* drivers/tty/moxa.c 210 */(struct moxa_port *);
	void cocci_id/* drivers/tty/moxa.c 205 */(struct tty_port *, int);
	int cocci_id/* drivers/tty/moxa.c 204 */(struct tty_port *);
	struct serial_struct *cocci_id/* drivers/tty/moxa.c 2030 */;
	void cocci_id/* drivers/tty/moxa.c 203 */(struct tty_port *);
	void cocci_id/* drivers/tty/moxa.c 201 */(struct timer_list *);
	int cocci_id/* drivers/tty/moxa.c 199 */(struct tty_struct *tty,
						 unsigned int set,
						 unsigned int clear);
	int cocci_id/* drivers/tty/moxa.c 198 */(struct tty_struct *tty);
	void cocci_id/* drivers/tty/moxa.c 194 */(struct tty_struct *,
						  struct ktermios *);
	unsigned int cocci_id/* drivers/tty/moxa.c 1930 */;
	int cocci_id/* drivers/tty/moxa.c 193 */(struct tty_struct *);
	unsigned char *cocci_id/* drivers/tty/moxa.c 1928 */;
	struct tty_struct *cocci_id/* drivers/tty/moxa.c 1927 */;
	void cocci_id/* drivers/tty/moxa.c 192 */(struct tty_struct *);
	void cocci_id/* drivers/tty/moxa.c 189 */(struct tty_struct *,
						  struct file *);
	int cocci_id/* drivers/tty/moxa.c 188 */(struct tty_struct *,
						 struct file *);
	const unsigned char *cocci_id/* drivers/tty/moxa.c 1867 */;
	int cocci_id/* drivers/tty/moxa.c 1830 */;
	u8 cocci_id/* drivers/tty/moxa.c 1820 */;
	int *cocci_id/* drivers/tty/moxa.c 1807 */;
	tcflag_t cocci_id/* drivers/tty/moxa.c 1751 */;
	struct ktermios *cocci_id/* drivers/tty/moxa.c 1747 */;
	speed_t cocci_id/* drivers/tty/moxa.c 1729 */;
	void __iomem *cocci_id/* drivers/tty/moxa.c 1721 */;
	struct moxa_port *cocci_id/* drivers/tty/moxa.c 1719 */;
	void cocci_id/* drivers/tty/moxa.c 1719 */;
	u16 cocci_id/* drivers/tty/moxa.c 1702 */;
	struct tty_port cocci_id/* drivers/tty/moxa.c 167 */;
	unsigned int cocci_id/* drivers/tty/moxa.c 166 */[MAX_BOARDS];
	unsigned long cocci_id/* drivers/tty/moxa.c 164 */[MAX_BOARDS];
	struct mon_str cocci_id/* drivers/tty/moxa.c 158 */;
	struct mon_str {
		int tick;
		int rxcnt[MAX_PORTS];
		int txcnt[MAX_PORTS];
	} cocci_id/* drivers/tty/moxa.c 143 */;
	u16 __iomem *cocci_id/* drivers/tty/moxa.c 1427 */;
	struct timer_list *cocci_id/* drivers/tty/moxa.c 1424 */;
	struct moxa_port {
		struct tty_port port;
		struct moxa_board_conf *board;
		void __iomem *tableAddr;
		int type;
		int cflag;
		unsigned long statusflags;
		u8 DCDState;
		u8 lineCtrl;
		u8 lowChkFlag;
	} cocci_id/* drivers/tty/moxa.c 129 */;
	struct moxaq_str {
		int inq;
		int outq;
	} cocci_id/* drivers/tty/moxa.c 124 */;
	struct file *cocci_id/* drivers/tty/moxa.c 1197 */;
	struct mxser_mstatus {
		tcflag_t cflag;
		int cts;
		int dsr;
		int ri;
		int dcd;
	} cocci_id/* drivers/tty/moxa.c 116 */;
	struct moxa_port cocci_id/* drivers/tty/moxa.c 1139 */;
	struct tty_port *cocci_id/* drivers/tty/moxa.c 1137 */;
	void __exit cocci_id/* drivers/tty/moxa.c 1107 */;
	int __init cocci_id/* drivers/tty/moxa.c 1023 */;
	struct pci_driver cocci_id/* drivers/tty/moxa.c 1015 */;
	struct moxa_board_conf {
		int boardType;
		int numPorts;
		int busType;
		unsigned int ready;
		struct moxa_port *ports;
		void __iomem *basemem;
		void __iomem *intNdx;
		void __iomem *intPend;
		void __iomem *intTable;
	} cocci_id/* drivers/tty/moxa.c 101 */[MAX_BOARDS];
}
