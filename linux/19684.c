cocci_test_suite() {
	int *cocci_id/* arch/mips/ar7/clock.c 98 */;
	int cocci_id/* arch/mips/ar7/clock.c 98 */;
	void cocci_id/* arch/mips/ar7/clock.c 98 */;
	struct clk cocci_id/* arch/mips/ar7/clock.c 87 */;
	struct tnetd7200_clocks {
		struct tnetd7200_clock cpu;
		struct tnetd7200_clock dsp;
		struct tnetd7200_clock usb;
	} cocci_id/* arch/mips/ar7/clock.c 81 */;
	struct tnetd7200_clock {
		u32 ctrl;
		u32 unused1[3];
#define DIVISOR_ENABLE_MASK 0x00008000
		u32 mul;
		u32 prediv;
		u32 postdiv;
		u32 postdiv2;
		u32 unused2[6];
		u32 cmd;
		u32 status;
		u32 cmden;
		u32 padding[15];
	} cocci_id/* arch/mips/ar7/clock.c 66 */;
	struct tnetd7300_clocks {
		struct tnetd7300_clock bus;
		struct tnetd7300_clock cpu;
		struct tnetd7300_clock usb;
		struct tnetd7300_clock dsp;
	} cocci_id/* arch/mips/ar7/clock.c 59 */;
	long cocci_id/* arch/mips/ar7/clock.c 468 */;
	void __init cocci_id/* arch/mips/ar7/clock.c 449 */;
	struct tnetd7300_clock {
		u32 ctrl;
#define PREDIV_MASK 0x001f0000
#define PREDIV_SHIFT 16
#define POSTDIV_MASK 0x0000001f
		u32 unused1[3];
		u32 pll;
#define MUL_MASK 0x0000f000
#define MUL_SHIFT 12
#define PLL_MODE_MASK 0x00000001
#define PLL_NDIV 0x00000800
#define PLL_DIV 0x00000002
#define PLL_STATUS 0x00000001
		u32 unused2[3];
	} cocci_id/* arch/mips/ar7/clock.c 43 */;
	const char *cocci_id/* arch/mips/ar7/clock.c 427 */;
	struct device *cocci_id/* arch/mips/ar7/clock.c 427 */;
	unsigned long cocci_id/* arch/mips/ar7/clock.c 418 */;
	struct clk *cocci_id/* arch/mips/ar7/clock.c 413 */;
	struct tnetd7200_clocks cocci_id/* arch/mips/ar7/clock.c 326 */;
	struct tnetd7200_clocks *cocci_id/* arch/mips/ar7/clock.c 324 */;
	u32 *cocci_id/* arch/mips/ar7/clock.c 295 */;
	u32 cocci_id/* arch/mips/ar7/clock.c 262 */;
	struct tnetd7200_clock *cocci_id/* arch/mips/ar7/clock.c 261 */;
	struct tnetd7300_clocks cocci_id/* arch/mips/ar7/clock.c 242 */;
	struct tnetd7300_clocks *cocci_id/* arch/mips/ar7/clock.c 240 */;
	struct tnetd7300_clock *cocci_id/* arch/mips/ar7/clock.c 159 */;
	void *cocci_id/* arch/mips/ar7/clock.c 147 */;
	u8 cocci_id/* arch/mips/ar7/clock.c 146 */;
}
