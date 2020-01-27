cocci_test_suite() {
	void __exit cocci_id/* drivers/video/fbdev/cg6.c 874 */;
	int __init cocci_id/* drivers/video/fbdev/cg6.c 866 */;
	struct platform_driver cocci_id/* drivers/video/fbdev/cg6.c 857 */;
	const struct of_device_id cocci_id/* drivers/video/fbdev/cg6.c 846 */[];
	struct bt_regs cocci_id/* drivers/video/fbdev/cg6.c 781 */;
	struct cg6_thc cocci_id/* drivers/video/fbdev/cg6.c 779 */;
	struct cg6_tec cocci_id/* drivers/video/fbdev/cg6.c 777 */;
	struct cg6_par cocci_id/* drivers/video/fbdev/cg6.c 749 */;
	struct device_node *cocci_id/* drivers/video/fbdev/cg6.c 743 */;
	struct platform_device *cocci_id/* drivers/video/fbdev/cg6.c 741 */;
	struct cg6_fbc __iomem *cocci_id/* drivers/video/fbdev/cg6.c 671 */;
	struct cg6_tec __iomem *cocci_id/* drivers/video/fbdev/cg6.c 670 */;
	struct bt_regs __iomem *cocci_id/* drivers/video/fbdev/cg6.c 655 */;
	void cocci_id/* drivers/video/fbdev/cg6.c 653 */;
	const char *cocci_id/* drivers/video/fbdev/cg6.c 614 */;
	unsigned int cocci_id/* drivers/video/fbdev/cg6.c 601 */;
	struct vm_area_struct *cocci_id/* drivers/video/fbdev/cg6.c 592 */;
	struct sbus_mmap_map cocci_id/* drivers/video/fbdev/cg6.c 548 */[];
	u32 cocci_id/* drivers/video/fbdev/cg6.c 522 */;
	unsigned long cocci_id/* drivers/video/fbdev/cg6.c 521 */;
	struct cg6_thc __iomem *cocci_id/* drivers/video/fbdev/cg6.c 520 */;
	struct cg6_par *cocci_id/* drivers/video/fbdev/cg6.c 519 */;
	struct fb_info *cocci_id/* drivers/video/fbdev/cg6.c 517 */;
	int cocci_id/* drivers/video/fbdev/cg6.c 517 */;
	unsigned cocci_id/* drivers/video/fbdev/cg6.c 484 */;
	struct fb_ops cocci_id/* drivers/video/fbdev/cg6.c 47 */;
	int cocci_id/* drivers/video/fbdev/cg6.c 41 */(struct fb_var_screeninfo *,
						       struct fb_info *);
	int cocci_id/* drivers/video/fbdev/cg6.c 40 */(struct fb_info *,
						       unsigned int,
						       unsigned long);
	const u8 *cocci_id/* drivers/video/fbdev/cg6.c 398 */;
	const struct fb_image *cocci_id/* drivers/video/fbdev/cg6.c 394 */;
	int cocci_id/* drivers/video/fbdev/cg6.c 39 */(struct fb_info *,
						       struct vm_area_struct *);
	int cocci_id/* drivers/video/fbdev/cg6.c 38 */(struct fb_info *);
	void cocci_id/* drivers/video/fbdev/cg6.c 37 */(struct fb_info *info,
							const struct fb_copyarea *area);
	void cocci_id/* drivers/video/fbdev/cg6.c 36 */(struct fb_info *,
							const struct fb_fillrect *);
	const struct fb_copyarea *cocci_id/* drivers/video/fbdev/cg6.c 356 */;
	void cocci_id/* drivers/video/fbdev/cg6.c 35 */(struct fb_info *,
							const struct fb_image *);
	int cocci_id/* drivers/video/fbdev/cg6.c 33 */(int, struct fb_info *);
	s32 cocci_id/* drivers/video/fbdev/cg6.c 322 */;
	const struct fb_fillrect *cocci_id/* drivers/video/fbdev/cg6.c 317 */;
	int cocci_id/* drivers/video/fbdev/cg6.c 31 */(unsigned, unsigned,
						       unsigned, unsigned,
						       unsigned,
						       struct fb_info *);
	struct fb_var_screeninfo *cocci_id/* drivers/video/fbdev/cg6.c 297 */;
	struct cg6_par {
		spinlock_t lock;
		struct bt_regs __iomem *bt;
		struct cg6_fbc __iomem *fbc;
		struct cg6_thc __iomem *thc;
		struct cg6_tec __iomem *tec;
		u32 __iomem *fhc;
		u32 flags;
#define CG6_FLAG_BLANKED 0x00000001
		unsigned long which_io;
	} cocci_id/* drivers/video/fbdev/cg6.c 255 */;
	struct bt_regs {
		u32 addr;
		u32 color_map;
		u32 control;
		u32 cursor;
	} cocci_id/* drivers/video/fbdev/cg6.c 248 */;
	struct cg6_fbc {
		u32 xxx0[1];
		u32 mode;
		u32 clip;
		u32 xxx1[1];
		u32 s;
		u32 draw;
		u32 blit;
		u32 font;
		u32 xxx2[24];
		u32 x0,y0,z0,color0;
		u32 x1,y1,z1,color1;
		u32 x2,y2,z2,color2;
		u32 x3,y3,z3,color3;
		u32 offx,offy;
		u32 xxx3[2];
		u32 incx,incy;
		u32 xxx4[2];
		u32 clipminx,clipminy;
		u32 xxx5[2];
		u32 clipmaxx,clipmaxy;
		u32 xxx6[2];
		u32 fg;
		u32 bg;
		u32 alu;
		u32 pm;
		u32 pixelm;
		u32 xxx7[2];
		u32 patalign;
		u32 pattern[8];
		u32 xxx8[432];
		u32 apointx,apointy,apointz;
		u32 xxx9[1];
		u32 rpointx,rpointy,rpointz;
		u32 xxx10[5];
		u32 pointr,pointg,pointb,pointa;
		u32 alinex,aliney,alinez;
		u32 xxx11[1];
		u32 rlinex,rliney,rlinez;
		u32 xxx12[5];
		u32 liner,lineg,lineb,linea;
		u32 atrix,atriy,atriz;
		u32 xxx13[1];
		u32 rtrix,rtriy,rtriz;
		u32 xxx14[5];
		u32 trir,trig,trib,tria;
		u32 aquadx,aquady,aquadz;
		u32 xxx15[1];
		u32 rquadx,rquady,rquadz;
		u32 xxx16[5];
		u32 quadr,quadg,quadb,quada;
		u32 arectx,arecty,arectz;
		u32 xxx17[1];
		u32 rrectx,rrecty,rrectz;
		u32 xxx18[5];
		u32 rectr,rectg,rectb,recta;
	} cocci_id/* drivers/video/fbdev/cg6.c 190 */;
	struct cg6_thc {
		u32 thc_pad0[512];
		u32 thc_hs;
		u32 thc_hsdvs;
		u32 thc_hd;
		u32 thc_vs;
		u32 thc_vd;
		u32 thc_refresh;
		u32 thc_misc;
		u32 thc_pad1[56];
		u32 thc_cursxy;
		u32 thc_cursmask[32];
		u32 thc_cursbits[32];
	} cocci_id/* drivers/video/fbdev/cg6.c 175 */;
	struct cg6_tec {
		int tec_matrix;
		int tec_clip;
		int tec_vdc;
	} cocci_id/* drivers/video/fbdev/cg6.c 169 */;
}
