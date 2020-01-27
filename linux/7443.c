cocci_test_suite() {
	const struct fb_fillrect *cocci_id/* drivers/video/fbdev/imsttfb.c 988 */;
	struct fb_info *cocci_id/* drivers/video/fbdev/imsttfb.c 934 */;
	struct fb_var_screeninfo *cocci_id/* drivers/video/fbdev/imsttfb.c 780 */;
	__u8 cocci_id/* drivers/video/fbdev/imsttfb.c 564 */;
	u_int cocci_id/* drivers/video/fbdev/imsttfb.c 552 */;
	struct imstt_par *cocci_id/* drivers/video/fbdev/imsttfb.c 552 */;
	struct imstt_regvals *cocci_id/* drivers/video/fbdev/imsttfb.c 551 */;
	__u32 cocci_id/* drivers/video/fbdev/imsttfb.c 470 */;
	int cocci_id/* drivers/video/fbdev/imsttfb.c 467 */;
	enum{S1SA=0, S2SA=1, SP=2, DSA=3, CNT=4, DP_OCTL=5, CLR=6, BI=8, MBC=9, BLTCTL=10, HES=12, HEB=13, HSB=14, HT=15, VES=16, VEB=17, VSB=18, VT=19, HCIV=20, VCIV=21, TCDR=22, VIL=23, STGCTL=24, SSR=25, HRIR=26, SPR=27, CMR=28, SRGCTL=29, RRCIV=30, RRSC=31, RRCR=34, GIOE=32, GIO=33, SCR=35, SSTATUS=36, PRC=37,

#if 0	

	
	
DVID

=

0x00000000L

,

	
SC

=

0x00000004L

,

	
CCR

=

0x00000008L

,

	
OG

=

0x0000000CL

,

	
BARM

=

0x00000010L

,

	
BARER

=

0x00000030L

,


#endif
} cocci_id/* drivers/video/fbdev/imsttfb.c 43 */;
	u32 cocci_id/* drivers/video/fbdev/imsttfb.c 404 */;
	volatile u32 __iomem *cocci_id/* drivers/video/fbdev/imsttfb.c 404 */;
	void cocci_id/* drivers/video/fbdev/imsttfb.c 399 */(struct pci_dev *pdev);
	int cocci_id/* drivers/video/fbdev/imsttfb.c 398 */(struct pci_dev *pdev,
							    const struct pci_device_id *ent);
	struct imstt_regvals cocci_id/* drivers/video/fbdev/imsttfb.c 353 */;
	signed char cocci_id/* drivers/video/fbdev/imsttfb.c 336 */;
	char cocci_id/* drivers/video/fbdev/imsttfb.c 334 */[40]__initdata;
	enum{IBM=0, TVP=1,} cocci_id/* drivers/video/fbdev/imsttfb.c 324 */;
	struct imstt_par {
		struct imstt_regvals init;
		__u32 __iomem *dc_regs;
		unsigned long cmap_regs_phys;
		__u8 *cmap_regs;
		__u32 ramdac;
		__u32 palette[16];
	} cocci_id/* drivers/video/fbdev/imsttfb.c 315 */;
	struct imstt_regvals {
		__u32 pitch;
		__u16 hes,heb,hsb,ht,ves,veb,vsb,vt,vil;
		__u8 pclk_m,pclk_n,pclk_p;
		__u8 mlc[3];
		__u8 lckl_p[3];
	} cocci_id/* drivers/video/fbdev/imsttfb.c 306 */;
	struct initvalues cocci_id/* drivers/video/fbdev/imsttfb.c 226 */[];
	struct initvalues {
		__u8 addr,value;
	} cocci_id/* drivers/video/fbdev/imsttfb.c 222 */;
	enum{TVPIRREV=0x01, TVPIRICC=0x06, TVPIRBRC=0x07, TVPIRLAC=0x0f, TVPIRTCC=0x18, TVPIRMXC=0x19, TVPIRCLS=0x1a, TVPIRPPG=0x1c, TVPIRGEC=0x1d, TVPIRMIC=0x1e, TVPIRPLA=0x2c, TVPIRPPD=0x2d, TVPIRMPD=0x2e, TVPIRLPD=0x2f, TVPIRCKL=0x30, TVPIRCKH=0x31, TVPIRCRL=0x32, TVPIRCRH=0x33, TVPIRCGL=0x34, TVPIRCGH=0x35, TVPIRCBL=0x36, TVPIRCBH=0x37, TVPIRCKC=0x38, TVPIRMLC=0x39, TVPIRSEN=0x3a, TVPIRTMD=0x3b, TVPIRRML=0x3c, TVPIRRMM=0x3d, TVPIRRMS=0x3e, TVPIRDID=0x3f, TVPIRRES=0xff,} cocci_id/* drivers/video/fbdev/imsttfb.c 188 */;
	enum{TVPADDRW=0x00, TVPPDATA=0x04, TVPPMASK=0x08, TVPPADRR=0x0c, TVPCADRW=0x10, TVPCDATA=0x14, TVPCADRR=0x1c, TVPDCCTL=0x24, TVPIDATA=0x28, TVPCRDAT=0x2c, TVPCXPOL=0x30, TVPCXPOH=0x34, TVPCYPOL=0x38, TVPCYPOH=0x3c,} cocci_id/* drivers/video/fbdev/imsttfb.c 168 */;
	void __exit cocci_id/* drivers/video/fbdev/imsttfb.c 1613 */;
	char *cocci_id/* drivers/video/fbdev/imsttfb.c 1603 */;
	int __init cocci_id/* drivers/video/fbdev/imsttfb.c 1600 */;
	int __init cocci_id/* drivers/video/fbdev/imsttfb.c 1546 */;
	__u8 *cocci_id/* drivers/video/fbdev/imsttfb.c 1513 */;
	struct imstt_par cocci_id/* drivers/video/fbdev/imsttfb.c 1479 */;
	struct device_node *cocci_id/* drivers/video/fbdev/imsttfb.c 1471 */;
	unsigned long cocci_id/* drivers/video/fbdev/imsttfb.c 1468 */;
	const struct pci_device_id *cocci_id/* drivers/video/fbdev/imsttfb.c 1466 */;
	struct pci_dev *cocci_id/* drivers/video/fbdev/imsttfb.c 1466 */;
	__u32 *cocci_id/* drivers/video/fbdev/imsttfb.c 1360 */;
	struct fb_ops cocci_id/* drivers/video/fbdev/imsttfb.c 1336 */;
	struct pci_driver cocci_id/* drivers/video/fbdev/imsttfb.c 1329 */;
	const struct pci_device_id cocci_id/* drivers/video/fbdev/imsttfb.c 1319 */[];
	u_int __iomem *cocci_id/* drivers/video/fbdev/imsttfb.c 1289 */;
	__u8 cocci_id/* drivers/video/fbdev/imsttfb.c 1271 */[2];
	__u32 cocci_id/* drivers/video/fbdev/imsttfb.c 1270 */[2];
	void __user *cocci_id/* drivers/video/fbdev/imsttfb.c 1269 */;
	u_long cocci_id/* drivers/video/fbdev/imsttfb.c 1266 */;
	enum{CLKCTL=0x02, SYNCCTL=0x03, HSYNCPOS=0x04, PWRMNGMT=0x05, DACOP=0x06, PALETCTL=0x07, SYSCLKCTL=0x08, PIXFMT=0x0a, BPP8=0x0b, BPP16=0x0c, BPP24=0x0d, BPP32=0x0e, PIXCTL1=0x10, PIXCTL2=0x11, SYSCLKN=0x15, SYSCLKM=0x16, SYSCLKP=0x17, SYSCLKC=0x18, PIXM0=0x20, PIXN0=0x21, PIXP0=0x22, PIXC0=0x23, CURSCTL=0x30, CURSXLO=0x31, CURSXHI=0x32, CURSYLO=0x33, CURSYHI=0x34, CURSHOTX=0x35, CURSHOTY=0x36, CURSACCTL=0x37, CURSACATTR=0x38, CURS1R=0x40, CURS1G=0x41, CURS1B=0x42, CURS2R=0x43, CURS2G=0x44, CURS2B=0x45, CURS3R=0x46, CURS3G=0x47, CURS3B=0x48, BORDR=0x60, BORDG=0x61, BORDB=0x62, MISCTL1=0x70, MISCTL2=0x71, MISCTL3=0x72, KEYCTL=0x78,} cocci_id/* drivers/video/fbdev/imsttfb.c 113 */;
	const struct fb_copyarea *cocci_id/* drivers/video/fbdev/imsttfb.c 1032 */;
	void cocci_id/* drivers/video/fbdev/imsttfb.c 1031 */;
	enum{PADDRW=0x00, PDATA=0x04, PPMASK=0x08, PADDRR=0x0c, PIDXLO=0x10, PIDXHI=0x14, PIDXDATA=0x18, PIDXCTL=0x1c,} cocci_id/* drivers/video/fbdev/imsttfb.c 101 */;
}
