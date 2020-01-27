cocci_test_suite() {
	struct fb_var_screeninfo *cocci_id/* drivers/video/fbdev/sis/initextlfb.c 82 */;
	int cocci_id/* drivers/video/fbdev/sis/initextlfb.c 35 */;
	void cocci_id/* drivers/video/fbdev/sis/initextlfb.c 32 */(struct SiS_Private *SiS_Pr,
								   unsigned char *crdata,
								   int xres,
								   int yres,
								   struct fb_var_screeninfo *var,
								   bool writeres);
	bool cocci_id/* drivers/video/fbdev/sis/initextlfb.c 30 */(struct SiS_Private *SiS_Pr,
								   unsigned short *ModeNo,
								   unsigned short *ModeIdIndex);
	bool cocci_id/* drivers/video/fbdev/sis/initextlfb.c 29 */(struct SiS_Private *SiS_Pr);
	bool cocci_id/* drivers/video/fbdev/sis/initextlfb.c 26 */(struct SiS_Private *SiS_Pr,
								   unsigned char modeno,
								   int *htotal,
								   int *vtotal,
								   unsigned char rateindex);
	int cocci_id/* drivers/video/fbdev/sis/initextlfb.c 24 */(struct SiS_Private *SiS_Pr,
								  unsigned char modeno,
								  unsigned char rateindex,
								  struct fb_var_screeninfo *var);
	int cocci_id/* drivers/video/fbdev/sis/initextlfb.c 22 */(struct SiS_Private *SiS_Pr,
								  unsigned char modeno,
								  unsigned char rateindex);
	unsigned short cocci_id/* drivers/video/fbdev/sis/initextlfb.c 167 */;
	struct SiS_Private *cocci_id/* drivers/video/fbdev/sis/initextlfb.c 164 */;
	int *cocci_id/* drivers/video/fbdev/sis/initextlfb.c 164 */;
	unsigned char cocci_id/* drivers/video/fbdev/sis/initextlfb.c 164 */;
	bool cocci_id/* drivers/video/fbdev/sis/initextlfb.c 163 */;
	unsigned char *cocci_id/* drivers/video/fbdev/sis/initextlfb.c 116 */;
}
