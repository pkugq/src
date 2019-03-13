/* Public Domain */

/*
 * i.MX6Q clocks.
 */

#define IMX6_CLK_IPG		0x3e
#define IMX6_CLK_IPG_PER	0x3f
#define IMX6_CLK_ECSPI_ROOT	0x47
#define IMX6_CLK_ARM		0x68
#define IMX6_CLK_AHB		0x69
#define IMX6_CLK_ECSPI2		0x71
#define IMX6_CLK_ENET		0x75
#define IMX6_CLK_I2C1		0x7d
#define IMX6_CLK_I2C2		0x7e
#define IMX6_CLK_I2C3		0x7f
#define IMX6_CLK_SATA		0x9a
#define IMX6_CLK_UART_IPG	0xa0
#define IMX6_CLK_UART_SERIAL	0xa1
#define IMX6_CLK_USBOH3		0xa2
#define IMX6_CLK_USDHC1		0xa3
#define IMX6_CLK_USDHC2		0xa4
#define IMX6_CLK_USDHC3		0xa5
#define IMX6_CLK_USDHC4		0xa6
#define IMX6_CLK_PLL3_USB_OTG	0xac
#define IMX6_CLK_PLL7_USB_HOST	0xb0
#define IMX6_CLK_PLL6_ENET	0xb1
#define IMX6_CLK_USBPHY1	0xb6
#define IMX6_CLK_USBPHY2	0xb7
#define IMX6_CLK_SATA_REF	0xba
#define IMX6_CLK_SATA_REF_100	0xbb
#define IMX6_CLK_ENET_REF	0xbe
#define IMX6_CLK_PLL3		0xe1
#define IMX6_CLK_PLL6		0xe4
#define IMX6_CLK_PLL7		0xe5

struct imxccm_gate imx6_gates[] = {
	[IMX6_CLK_ECSPI2] = { CCM_CCGR1, 1, IMX6_CLK_ECSPI_ROOT },
	[IMX6_CLK_ENET] = { CCM_CCGR1, 5, IMX6_CLK_IPG },
	[IMX6_CLK_I2C1] = { CCM_CCGR2, 3, IMX6_CLK_IPG_PER },
	[IMX6_CLK_I2C2] = { CCM_CCGR2, 4, IMX6_CLK_IPG_PER },
	[IMX6_CLK_I2C3] = { CCM_CCGR2, 5, IMX6_CLK_IPG_PER },
	[IMX6_CLK_SATA] = { CCM_CCGR5, 2 },
	[IMX6_CLK_UART_IPG] = { CCM_CCGR5, 12, IMX6_CLK_IPG },
	[IMX6_CLK_UART_SERIAL] = { CCM_CCGR5, 13 },
	[IMX6_CLK_USBOH3] = { CCM_CCGR6, 0 },
	[IMX6_CLK_USDHC1] = { CCM_CCGR6, 1 },
	[IMX6_CLK_USDHC2] = { CCM_CCGR6, 2 },
	[IMX6_CLK_USDHC3] = { CCM_CCGR6, 3 },
	[IMX6_CLK_USDHC4] = { CCM_CCGR6, 4 },
};

/*
 * i.MX6UL clocks.
 */

#define IMX6UL_CLK_ARM		0x5d
#define IMX6UL_CLK_PERCLK	0x63
#define IMX6UL_CLK_IPG		0x64
#define IMX6UL_CLK_GPT1_BUS	0x98
#define IMX6UL_CLK_GPT1_SERIAL	0x99
#define IMX6UL_CLK_I2C1		0x9c
#define IMX6UL_CLK_I2C2		0x9d
#define IMX6UL_CLK_I2C3		0x9e
#define IMX6UL_CLK_I2C4		0x9f
#define IMX6UL_CLK_UART1_IPG	0xbd
#define IMX6UL_CLK_UART1_SERIAL	0xbe
#define IMX6UL_CLK_USBOH3	0xcd
#define IMX6UL_CLK_USDHC1	0xce
#define IMX6UL_CLK_USDHC2	0xcf

struct imxccm_gate imx6ul_gates[] = {
	[IMX6UL_CLK_GPT1_BUS] = { CCM_CCGR1, 10, IMX6UL_CLK_PERCLK },
	[IMX6UL_CLK_GPT1_SERIAL] = { CCM_CCGR1, 11, IMX6UL_CLK_PERCLK },
	[IMX6UL_CLK_I2C1] = { CCM_CCGR2, 3, IMX6UL_CLK_PERCLK },
	[IMX6UL_CLK_I2C2] = { CCM_CCGR2, 4, IMX6UL_CLK_PERCLK },
	[IMX6UL_CLK_I2C3] = { CCM_CCGR2, 5, IMX6UL_CLK_PERCLK },
	[IMX6UL_CLK_I2C4] = { CCM_CCGR6, 12, IMX6UL_CLK_PERCLK },
	[IMX6UL_CLK_UART1_IPG] = { CCM_CCGR5, 12, IMX6UL_CLK_IPG },
	[IMX6UL_CLK_UART1_SERIAL] = { CCM_CCGR5, 12 },
	[IMX6UL_CLK_USBOH3] = { CCM_CCGR6, 0 },
	[IMX6UL_CLK_USDHC1] = { CCM_CCGR6, 1 },
	[IMX6UL_CLK_USDHC2] = { CCM_CCGR6, 2 },
};

/*
 * i.MX7D clocks.
 */

#define IMX7D_PLL_ENET_MAIN_125M_CLK	0x2a
#define IMX7D_ENET_AXI_ROOT_CLK		0x52
#define IMX7D_ENET_AXI_ROOT_SRC		0x53
#define IMX7D_ENET_AXI_ROOT_CG		0x54
#define IMX7D_ENET_AXI_ROOT_DIV		0x55
#define IMX7D_ENET1_IPG_ROOT_CLK	0x9e
#define IMX7D_ENET1_TIME_ROOT_CLK	0xa2
#define IMX7D_ENET1_TIME_ROOT_SRC	0xa3
#define IMX7D_ENET1_TIME_ROOT_CG	0xa4
#define IMX7D_ENET1_TIME_ROOT_DIV	0xa5
#define IMX7D_ENET2_IPG_ROOT_CLK	0xa6
#define IMX7D_ENET2_TIME_ROOT_CLK	0xaa
#define IMX7D_ENET2_TIME_ROOT_SRC	0xab
#define IMX7D_ENET2_TIME_ROOT_CG	0xac
#define IMX7D_ENET2_TIME_ROOT_DIV	0xad
#define IMX7D_ENET_PHY_REF_ROOT_CLK	0xae
#define IMX7D_ENET_PHY_REF_ROOT_SRC	0xaf
#define IMX7D_ENET_PHY_REF_ROOT_CG	0xb0
#define IMX7D_ENET_PHY_REF_ROOT_DIV	0xb1
#define IMX7D_USDHC1_ROOT_CLK		0xbe
#define IMX7D_USDHC1_ROOT_SRC		0xbf
#define IMX7D_USDHC1_ROOT_CG		0xc0
#define IMX7D_USDHC1_ROOT_DIV		0xc1
#define IMX7D_USDHC2_ROOT_CLK		0xc2
#define IMX7D_USDHC2_ROOT_SRC		0xc3
#define IMX7D_USDHC2_ROOT_CG		0xc4
#define IMX7D_USDHC2_ROOT_DIV		0xc5
#define IMX7D_USDHC3_ROOT_CLK		0xc6
#define IMX7D_USDHC3_ROOT_SRC		0xc7
#define IMX7D_USDHC3_ROOT_CG		0xc8
#define IMX7D_USDHC3_ROOT_DIV		0xc9
#define IMX7D_I2C1_ROOT_CLK		0xd2
#define IMX7D_I2C1_ROOT_SRC		0xd3
#define IMX7D_I2C1_ROOT_CG		0xd4
#define IMX7D_I2C1_ROOT_DIV		0xd5
#define IMX7D_I2C2_ROOT_CLK		0xd6
#define IMX7D_I2C2_ROOT_SRC		0xd7
#define IMX7D_I2C2_ROOT_CG		0xd8
#define IMX7D_I2C2_ROOT_DIV		0xd9
#define IMX7D_I2C3_ROOT_CLK		0xda
#define IMX7D_I2C3_ROOT_SRC		0xdb
#define IMX7D_I2C3_ROOT_CG		0xdc
#define IMX7D_I2C3_ROOT_DIV		0xdd
#define IMX7D_I2C4_ROOT_CLK		0xde
#define IMX7D_I2C4_ROOT_SRC		0xdf
#define IMX7D_I2C4_ROOT_CG		0xe0
#define IMX7D_I2C4_ROOT_DIV		0xe1
#define IMX7D_UART1_ROOT_CLK		0xe2
#define IMX7D_UART1_ROOT_SRC		0xe3
#define IMX7D_UART1_ROOT_CG		0xe4
#define IMX7D_UART1_ROOT_DIV		0xe5
#define IMX7D_UART2_ROOT_CLK		0xe6
#define IMX7D_UART2_ROOT_SRC		0xe7
#define IMX7D_UART2_ROOT_CG		0xe8
#define IMX7D_UART2_ROOT_DIV		0xe9
#define IMX7D_UART3_ROOT_CLK		0xea
#define IMX7D_UART3_ROOT_SRC		0xeb
#define IMX7D_UART3_ROOT_CG		0xec
#define IMX7D_UART3_ROOT_DIV		0xed
#define IMX7D_UART4_ROOT_CLK		0xee
#define IMX7D_UART4_ROOT_SRC		0xef
#define IMX7D_UART4_ROOT_CG		0xf0
#define IMX7D_UART4_ROOT_DIV		0xf1
#define IMX7D_UART5_ROOT_CLK		0xf2
#define IMX7D_UART5_ROOT_SRC		0xf3
#define IMX7D_UART5_ROOT_CG		0xf4
#define IMX7D_UART5_ROOT_DIV		0xf5
#define IMX7D_UART6_ROOT_CLK		0xf6
#define IMX7D_UART6_ROOT_SRC		0xf7
#define IMX7D_UART6_ROOT_CG		0xf8
#define IMX7D_UART6_ROOT_DIV		0xf9
#define IMX7D_UART7_ROOT_CLK		0xfa
#define IMX7D_UART7_ROOT_SRC		0xfb
#define IMX7D_UART7_ROOT_CG		0xfc
#define IMX7D_UART7_ROOT_DIV		0xfd
#define IMX7D_ENET_AXI_ROOT_PRE_DIV	0x15a
#define IMX7D_ENET1_TIME_ROOT_PRE_DIV	0x16a
#define IMX7D_ENET2_TIME_ROOT_PRE_DIV	0x16c
#define IMX7D_ENET_PHY_REF_ROOT_PRE_DIV	0x16d
#define IMX7D_USDHC1_ROOT_PRE_DIV	0x171
#define IMX7D_USDHC2_ROOT_PRE_DIV	0x172
#define IMX7D_USDHC3_ROOT_PRE_DIV	0x173
#define IMX7D_I2C1_ROOT_PRE_DIV		0x176
#define IMX7D_I2C2_ROOT_PRE_DIV		0x177
#define IMX7D_I2C3_ROOT_PRE_DIV		0x178
#define IMX7D_I2C4_ROOT_PRE_DIV		0x179
#define IMX7D_UART1_ROOT_PRE_DIV	0x17a
#define IMX7D_UART2_ROOT_PRE_DIV	0x17b
#define IMX7D_UART3_ROOT_PRE_DIV	0x17c
#define IMX7D_UART4_ROOT_PRE_DIV	0x17d
#define IMX7D_UART5_ROOT_PRE_DIV	0x17e
#define IMX7D_UART6_ROOT_PRE_DIV	0x17f
#define IMX7D_UART7_ROOT_PRE_DIV	0x180
#define IMX7D_USB_CTRL_CLK		0x1a6
#define IMX7D_USB_PHY1_CLK		0x1a7
#define IMX7D_USB_PHY2_CLK		0x1a8

struct imxccm_gate imx7d_gates[] = {
	[IMX7D_ENET_AXI_ROOT_CG] = { 0x8900, 28, IMX7D_ENET_AXI_ROOT_SRC },
	[IMX7D_ENET1_TIME_ROOT_CG] = { 0xa780, 28, IMX7D_ENET1_TIME_ROOT_SRC },
	[IMX7D_ENET2_TIME_ROOT_CG] = { 0xa880, 28, IMX7D_ENET2_TIME_ROOT_SRC },
	[IMX7D_ENET_PHY_REF_ROOT_CG] = { 0xa900, 28, IMX7D_ENET_PHY_REF_ROOT_SRC },
	[IMX7D_USDHC1_ROOT_CG] = { 0xab00, 28, IMX7D_USDHC1_ROOT_SRC },
	[IMX7D_USDHC2_ROOT_CG] = { 0xab80, 28, IMX7D_USDHC2_ROOT_SRC },
	[IMX7D_USDHC3_ROOT_CG] = { 0xabc0, 28, IMX7D_USDHC3_ROOT_SRC },
	[IMX7D_I2C1_ROOT_CG] = { 0xad80, 28, IMX7D_I2C1_ROOT_SRC },
	[IMX7D_I2C2_ROOT_CG] = { 0xae00, 28, IMX7D_I2C2_ROOT_SRC },
	[IMX7D_I2C3_ROOT_CG] = { 0xae80, 28, IMX7D_I2C3_ROOT_SRC },
	[IMX7D_I2C4_ROOT_CG] = { 0xaf00, 28, IMX7D_I2C4_ROOT_SRC },
	[IMX7D_UART1_ROOT_CG] = { 0xaf80, 28, IMX7D_UART1_ROOT_SRC },
	[IMX7D_UART2_ROOT_CG] = { 0xb000, 28, IMX7D_UART2_ROOT_SRC },
	[IMX7D_UART3_ROOT_CG] = { 0xb080, 28, IMX7D_UART3_ROOT_SRC },
	[IMX7D_UART4_ROOT_CG] = { 0xb100, 28, IMX7D_UART4_ROOT_SRC },
	[IMX7D_UART5_ROOT_CG] = { 0xb180, 28, IMX7D_UART5_ROOT_SRC },
	[IMX7D_UART6_ROOT_CG] = { 0xb200, 28, IMX7D_UART6_ROOT_SRC },
	[IMX7D_UART7_ROOT_CG] = { 0xb280, 28, IMX7D_UART7_ROOT_SRC },
	[IMX7D_ENET_AXI_ROOT_CLK] = { 0x4060, 0, IMX7D_ENET_AXI_ROOT_DIV },
	[IMX7D_USB_CTRL_CLK] = { 0x4680, 0 },
	[IMX7D_USB_PHY1_CLK] = { 0x46a0, 0 },
	[IMX7D_USB_PHY2_CLK] = { 0x46b0, 0 },
	[IMX7D_USDHC1_ROOT_CLK] = { 0x46c0, 0, IMX7D_USDHC1_ROOT_DIV },
	[IMX7D_USDHC2_ROOT_CLK] = { 0x46d0, 0, IMX7D_USDHC2_ROOT_DIV },
	[IMX7D_USDHC3_ROOT_CLK] = { 0x46e0, 0, IMX7D_USDHC3_ROOT_DIV },
	[IMX7D_ENET1_IPG_ROOT_CLK] = { 0x4700, 0, IMX7D_ENET_AXI_ROOT_DIV },
	[IMX7D_ENET1_TIME_ROOT_CLK] = { 0x4700, 0, IMX7D_ENET1_TIME_ROOT_DIV },
	[IMX7D_ENET2_IPG_ROOT_CLK] = { 0x4710, 0, IMX7D_ENET_AXI_ROOT_DIV },
	[IMX7D_ENET2_TIME_ROOT_CLK] = { 0x4710, 0, IMX7D_ENET1_TIME_ROOT_DIV },
	[IMX7D_I2C1_ROOT_CLK] = { 0x4880, 0, IMX7D_I2C1_ROOT_DIV },
	[IMX7D_I2C2_ROOT_CLK] = { 0x4890, 0, IMX7D_I2C2_ROOT_DIV },
	[IMX7D_I2C3_ROOT_CLK] = { 0x48a0, 0, IMX7D_I2C3_ROOT_DIV },
	[IMX7D_I2C4_ROOT_CLK] = { 0x48b0, 0, IMX7D_I2C4_ROOT_DIV },
	[IMX7D_UART1_ROOT_CLK] = { 0x4940, 0, IMX7D_UART1_ROOT_DIV },
	[IMX7D_UART2_ROOT_CLK] = { 0x4950, 0, IMX7D_UART2_ROOT_DIV },
	[IMX7D_UART3_ROOT_CLK] = { 0x4960, 0, IMX7D_UART3_ROOT_DIV },
	[IMX7D_UART4_ROOT_CLK] = { 0x4970, 0, IMX7D_UART4_ROOT_DIV },
	[IMX7D_UART5_ROOT_CLK] = { 0x4980, 0, IMX7D_UART5_ROOT_DIV },
	[IMX7D_UART6_ROOT_CLK] = { 0x4990, 0, IMX7D_UART6_ROOT_DIV },
	[IMX7D_UART7_ROOT_CLK] = { 0x49a0, 0, IMX7D_UART7_ROOT_DIV },
};

struct imxccm_divider imx7d_divs[] = {
	[IMX7D_ENET_AXI_ROOT_PRE_DIV] = { 0x8900, 16, 0x7, IMX7D_ENET_AXI_ROOT_CG },
	[IMX7D_ENET1_TIME_ROOT_PRE_DIV] = { 0xa780, 16, 0x7, IMX7D_ENET1_TIME_ROOT_CG },
	[IMX7D_ENET2_TIME_ROOT_PRE_DIV] = { 0xa880, 16, 0x7, IMX7D_ENET2_TIME_ROOT_CG },
	[IMX7D_ENET_PHY_REF_ROOT_PRE_DIV] = { 0xa900, 16, 0x7, IMX7D_ENET_PHY_REF_ROOT_CG },
	[IMX7D_USDHC1_ROOT_PRE_DIV] = { 0xab00, 16, 0x7, IMX7D_USDHC1_ROOT_CG },
	[IMX7D_USDHC2_ROOT_PRE_DIV] = { 0xab80, 16, 0x7, IMX7D_USDHC2_ROOT_CG },
	[IMX7D_USDHC3_ROOT_PRE_DIV] = { 0xac00, 16, 0x7, IMX7D_USDHC3_ROOT_CG },
	[IMX7D_I2C1_ROOT_PRE_DIV] = { 0xad80, 16, 0x7, IMX7D_I2C1_ROOT_CG },
	[IMX7D_I2C2_ROOT_PRE_DIV] = { 0xae00, 16, 0x7, IMX7D_I2C2_ROOT_CG },
	[IMX7D_I2C3_ROOT_PRE_DIV] = { 0xae80, 16, 0x7, IMX7D_I2C3_ROOT_CG },
	[IMX7D_I2C4_ROOT_PRE_DIV] = { 0xaf00, 16, 0x7, IMX7D_I2C4_ROOT_CG },
	[IMX7D_UART1_ROOT_PRE_DIV] = { 0xaf80, 16, 0x7, IMX7D_UART1_ROOT_CG },
	[IMX7D_UART2_ROOT_PRE_DIV] = { 0xb000, 16, 0x7, IMX7D_UART2_ROOT_CG },
	[IMX7D_UART3_ROOT_PRE_DIV] = { 0xb080, 16, 0x7, IMX7D_UART3_ROOT_CG },
	[IMX7D_UART4_ROOT_PRE_DIV] = { 0xb100, 16, 0x7, IMX7D_UART4_ROOT_CG },
	[IMX7D_UART5_ROOT_PRE_DIV] = { 0xb180, 16, 0x7, IMX7D_UART5_ROOT_CG },
	[IMX7D_UART6_ROOT_PRE_DIV] = { 0xb200, 16, 0x7, IMX7D_UART6_ROOT_CG },
	[IMX7D_UART7_ROOT_PRE_DIV] = { 0xb280, 16, 0x7, IMX7D_UART7_ROOT_CG },
	[IMX7D_ENET_AXI_ROOT_DIV] = { 0x8900, 0, 0x3f, IMX7D_ENET_AXI_ROOT_PRE_DIV },
	[IMX7D_ENET1_TIME_ROOT_DIV] = { 0xa780, 0, 0x3f, IMX7D_ENET1_TIME_ROOT_PRE_DIV },
	[IMX7D_ENET2_TIME_ROOT_DIV] = { 0xa880, 0, 0x3f, IMX7D_ENET2_TIME_ROOT_PRE_DIV },
	[IMX7D_ENET_PHY_REF_ROOT_CLK] = { 0xa900, 0, 0x3f, IMX7D_ENET_PHY_REF_ROOT_PRE_DIV },
	[IMX7D_USDHC1_ROOT_DIV] = { 0xab00, 0, 0x3f, IMX7D_USDHC1_ROOT_PRE_DIV },
	[IMX7D_USDHC2_ROOT_DIV] = { 0xab80, 0, 0x3f, IMX7D_USDHC2_ROOT_PRE_DIV },
	[IMX7D_USDHC3_ROOT_DIV] = { 0xac00, 0, 0x3f, IMX7D_USDHC3_ROOT_PRE_DIV },
	[IMX7D_I2C1_ROOT_DIV] = { 0xad80, 0, 0x3f, IMX7D_I2C1_ROOT_PRE_DIV },
	[IMX7D_I2C2_ROOT_DIV] = { 0xae00, 0, 0x3f, IMX7D_I2C2_ROOT_PRE_DIV },
	[IMX7D_I2C3_ROOT_DIV] = { 0xae80, 0, 0x3f, IMX7D_I2C3_ROOT_PRE_DIV },
	[IMX7D_I2C4_ROOT_DIV] = { 0xaf00, 0, 0x3f, IMX7D_I2C4_ROOT_PRE_DIV },
	[IMX7D_UART1_ROOT_DIV] = { 0xaf80, 0, 0x3f, IMX7D_UART1_ROOT_PRE_DIV },
	[IMX7D_UART2_ROOT_DIV] = { 0xb000, 0, 0x3f, IMX7D_UART2_ROOT_PRE_DIV },
	[IMX7D_UART3_ROOT_DIV] = { 0xb080, 0, 0x3f, IMX7D_UART3_ROOT_PRE_DIV },
	[IMX7D_UART4_ROOT_DIV] = { 0xb100, 0, 0x3f, IMX7D_UART4_ROOT_PRE_DIV },
	[IMX7D_UART5_ROOT_DIV] = { 0xb180, 0, 0x3f, IMX7D_UART5_ROOT_PRE_DIV },
	[IMX7D_UART6_ROOT_DIV] = { 0xb200, 0, 0x3f, IMX7D_UART6_ROOT_PRE_DIV },
	[IMX7D_UART7_ROOT_DIV] = { 0xb280, 0, 0x3f, IMX7D_UART7_ROOT_PRE_DIV },
};

struct imxccm_mux imx7d_muxs[] = {
	[IMX7D_ENET_AXI_ROOT_SRC] = { 0x8900, 24, 0x7 },
	[IMX7D_ENET1_TIME_ROOT_SRC] = { 0xa780, 24, 0x7 },
	[IMX7D_ENET2_TIME_ROOT_SRC] = { 0xa880, 24, 0x7 },
	[IMX7D_ENET_PHY_REF_ROOT_SRC] = { 0xa900, 24, 0x7 },
	[IMX7D_USDHC1_ROOT_SRC] = { 0xab00, 24, 0x7 },
	[IMX7D_USDHC2_ROOT_SRC] = { 0xab80, 24, 0x7 },
	[IMX7D_USDHC3_ROOT_SRC] = { 0xac00, 24, 0x7 },
	[IMX7D_I2C1_ROOT_SRC] = { 0xad80, 24, 0x7 },
	[IMX7D_I2C2_ROOT_SRC] = { 0xae00, 24, 0x7 },
	[IMX7D_I2C3_ROOT_SRC] = { 0xae80, 24, 0x7 },
	[IMX7D_I2C4_ROOT_SRC] = { 0xaf00, 24, 0x7 },
	[IMX7D_UART1_ROOT_SRC] = { 0xaf80, 24, 0x7 },
	[IMX7D_UART2_ROOT_SRC] = { 0xb000, 24, 0x7 },
	[IMX7D_UART3_ROOT_SRC] = { 0xb080, 24, 0x7 },
	[IMX7D_UART4_ROOT_SRC] = { 0xb100, 24, 0x7 },
	[IMX7D_UART5_ROOT_SRC] = { 0xb180, 24, 0x7 },
	[IMX7D_UART6_ROOT_SRC] = { 0xb200, 24, 0x7 },
	[IMX7D_UART7_ROOT_SRC] = { 0xb280, 24, 0x7 },
};

/*
 * i.MX8MQ clocks.
 */

#define IMX8MQ_ARM_PLL			0x0a
#define IMX8MQ_ARM_PLL_OUT		0x0c
#define IMX8MQ_SYS1_PLL_100M		0x48
#define IMX8MQ_SYS1_PLL_266M		0x4c
#define IMX8MQ_SYS1_PLL_400M		0x4d
#define IMX8MQ_SYS1_PLL_800M		0x4e
#define IMX8MQ_SYS2_PLL_100M		0x50
#define IMX8MQ_SYS2_PLL_250M		0x54
#define IMX8MQ_SYS2_PLL_500M		0x56
#define IMX8MQ_CLK_A53_SRC		0x58
#define IMX8MQ_CLK_A53_CG		0x59
#define IMX8MQ_CLK_A53_DIV		0x5a
#define IMX8MQ_CLK_ENET_AXI_SRC		0x6b
#define IMX8MQ_CLK_ENET_AXI_CG		0x6c
#define IMX8MQ_CLK_ENET_AXI_PRE_DIV	0x6d
#define IMX8MQ_CLK_ENET_AXI_DIV		0x6e
#define IMX8MQ_CLK_USB_BUS_SRC		0x83
#define IMX8MQ_CLK_USB_BUS_CG		0x84
#define IMX8MQ_CLK_USB_BUS_PRE_DIV	0x85
#define IMX8MQ_CLK_PCIE1_CTRL_SRC	0xb7
#define IMX8MQ_CLK_PCIE1_CTRL_CG	0xb8
#define IMX8MQ_CLK_PCIE1_CTRL_PRE_DIV	0xb9
#define IMX8MQ_CLK_PCIE1_CTRL_DIV	0xba
#define IMX8MQ_CLK_PCIE1_PHY_SRC	0xbb
#define IMX8MQ_CLK_PCIE1_PHY_CG		0xbc
#define IMX8MQ_CLK_PCIE1_PHY_PRE_DIV	0xbd
#define IMX8MQ_CLK_PCIE1_PHY_DIV	0xbe
#define IMX8MQ_CLK_PCIE1_AUX_SRC	0xbf
#define IMX8MQ_CLK_PCIE1_AUX_CG		0xc0
#define IMX8MQ_CLK_PCIE1_AUX_PRE_DIV	0xc1
#define IMX8MQ_CLK_PCIE1_AUX_DIV	0xc2
#define IMX8MQ_CLK_USB_BUS_DIV		0x86
#define IMX8MQ_CLK_ENET_REF_SRC		0xeb
#define IMX8MQ_CLK_ENET_REF_CG		0xec
#define IMX8MQ_CLK_ENET_REF_PRE_DIV	0xed
#define IMX8MQ_CLK_ENET_REF_DIV		0xee
#define IMX8MQ_CLK_ENET_TIMER_SRC	0xef
#define IMX8MQ_CLK_ENET_TIMER_CG	0xf0
#define IMX8MQ_CLK_ENET_TIMER_PRE_DIV	0xf1
#define IMX8MQ_CLK_ENET_TIMER_DIV	0xf2
#define IMX8MQ_CLK_ENET_PHY_REF_SRC	0xf3
#define IMX8MQ_CLK_ENET_PHY_REF_CG	0xf4
#define IMX8MQ_CLK_ENET_PHY_REF_PRE_DIV	0xf5
#define IMX8MQ_CLK_ENET_PHY_REF_DIV	0xf6
#define IMX8MQ_CLK_USDHC1_SRC		0xff
#define IMX8MQ_CLK_USDHC1_CG		0x100
#define IMX8MQ_CLK_USDHC1_PRE_DIV	0x101
#define IMX8MQ_CLK_USDHC1_DIV		0x102
#define IMX8MQ_CLK_USDHC2_SRC		0x103
#define IMX8MQ_CLK_USDHC2_CG		0x104
#define IMX8MQ_CLK_USDHC2_PRE_DIV	0x105
#define IMX8MQ_CLK_USDHC2_DIV		0x106
#define IMX8MQ_CLK_I2C1_SRC		0x107
#define IMX8MQ_CLK_I2C1_CG		0x108
#define IMX8MQ_CLK_I2C1_PRE_DIV		0x109
#define IMX8MQ_CLK_I2C1_DIV		0x10a
#define IMX8MQ_CLK_I2C2_SRC		0x10b
#define IMX8MQ_CLK_I2C2_CG		0x10c
#define IMX8MQ_CLK_I2C2_PRE_DIV		0x10d
#define IMX8MQ_CLK_I2C2_DIV		0x10e
#define IMX8MQ_CLK_I2C3_SRC		0x10f
#define IMX8MQ_CLK_I2C3_CG		0x110
#define IMX8MQ_CLK_I2C3_PRE_DIV		0x111
#define IMX8MQ_CLK_I2C3_DIV		0x112
#define IMX8MQ_CLK_I2C4_SRC		0x113
#define IMX8MQ_CLK_I2C4_CG		0x114
#define IMX8MQ_CLK_I2C4_PRE_DIV		0x115
#define IMX8MQ_CLK_I2C4_DIV		0x116
#define IMX8MQ_CLK_UART1_SRC		0x117
#define IMX8MQ_CLK_UART1_CG		0x118
#define IMX8MQ_CLK_UART1_PRE_DIV	0x119
#define IMX8MQ_CLK_UART1_DIV		0x11a
#define IMX8MQ_CLK_UART2_SRC		0x11b
#define IMX8MQ_CLK_UART2_CG		0x11c
#define IMX8MQ_CLK_UART2_PRE_DIV	0x11d
#define IMX8MQ_CLK_UART2_DIV		0x11e
#define IMX8MQ_CLK_UART3_SRC		0x11f
#define IMX8MQ_CLK_UART3_CG		0x120
#define IMX8MQ_CLK_UART3_PRE_DIV	0x121
#define IMX8MQ_CLK_UART3_DIV		0x122
#define IMX8MQ_CLK_UART4_SRC		0x123
#define IMX8MQ_CLK_UART4_CG		0x124
#define IMX8MQ_CLK_UART4_PRE_DIV	0x125
#define IMX8MQ_CLK_UART4_DIV		0x126
#define IMX8MQ_CLK_USB_CORE_REF_SRC	0x127
#define IMX8MQ_CLK_USB_CORE_REF_CG	0x128
#define IMX8MQ_CLK_USB_CORE_REF_PRE_DIV	0x129
#define IMX8MQ_CLK_USB_CORE_REF_DIV	0x12a
#define IMX8MQ_CLK_USB_PHY_REF_SRC	0x12b
#define IMX8MQ_CLK_USB_PHY_REF_CG	0x12c
#define IMX8MQ_CLK_USB_PHY_REF_PRE_DIV	0x12d
#define IMX8MQ_CLK_USB_PHY_REF_DIV	0x12e
#define IMX8MQ_CLK_ECSPI1_SRC		0x12f
#define IMX8MQ_CLK_ECSPI1_CG		0x130
#define IMX8MQ_CLK_ECSPI1_PRE_DIV	0x131
#define IMX8MQ_CLK_ECSPI1_DIV		0x132
#define IMX8MQ_CLK_ECSPI2_SRC		0x133
#define IMX8MQ_CLK_ECSPI2_CG		0x134
#define IMX8MQ_CLK_ECSPI2_PRE_DIV	0x135
#define IMX8MQ_CLK_ECSPI2_DIV		0x136
#define IMX8MQ_CLK_PWM1_SRC		0x137
#define IMX8MQ_CLK_PWM1_CG		0x138
#define IMX8MQ_CLK_PWM1_PRE_DIV		0x139
#define IMX8MQ_CLK_PWM1_DIV		0x13a
#define IMX8MQ_CLK_PWM2_SRC		0x13b
#define IMX8MQ_CLK_PWM2_CG		0x13c
#define IMX8MQ_CLK_PWM2_PRE_DIV		0x13d
#define IMX8MQ_CLK_PWM2_DIV		0x13e
#define IMX8MQ_CLK_PWM3_SRC		0x13f
#define IMX8MQ_CLK_PWM3_CG		0x140
#define IMX8MQ_CLK_PWM3_PRE_DIV		0x141
#define IMX8MQ_CLK_PWM3_DIV		0x142
#define IMX8MQ_CLK_PWM4_SRC		0x143
#define IMX8MQ_CLK_PWM4_CG		0x144
#define IMX8MQ_CLK_PWM4_PRE_DIV		0x145
#define IMX8MQ_CLK_PWM4_DIV		0x146
#define IMX8MQ_CLK_PCIE2_CTRL_SRC	0x17b
#define IMX8MQ_CLK_PCIE2_CTRL_CG	0x17c
#define IMX8MQ_CLK_PCIE2_CTRL_PRE_DIV	0x17d
#define IMX8MQ_CLK_PCIE2_CTRL_DIV	0x17e
#define IMX8MQ_CLK_PCIE2_PHY_SRC	0x17f
#define IMX8MQ_CLK_PCIE2_PHY_CG		0x180
#define IMX8MQ_CLK_PCIE2_PHY_PRE_DIV	0x181
#define IMX8MQ_CLK_PCIE2_PHY_DIV	0x182
#define IMX8MQ_CLK_PCIE2_AUX_SRC	0x183
#define IMX8MQ_CLK_PCIE2_AUX_CG		0x184
#define IMX8MQ_CLK_PCIE2_AUX_PRE_DIV	0x185
#define IMX8MQ_CLK_PCIE2_AUX_DIV	0x186
#define IMX8MQ_CLK_ECSPI3_SRC		0x187
#define IMX8MQ_CLK_ECSPI3_CG		0x188
#define IMX8MQ_CLK_ECSPI3_PRE_DIV	0x189
#define IMX8MQ_CLK_ECSPI3_DIV		0x18a
#define IMX8MQ_CLK_ECSPI1_ROOT		0x18d
#define IMX8MQ_CLK_ECSPI2_ROOT		0x18e
#define IMX8MQ_CLK_ECSPI3_ROOT		0x18f
#define IMX8MQ_CLK_ENET1_ROOT		0x190
#define IMX8MQ_CLK_I2C1_ROOT		0x192
#define IMX8MQ_CLK_I2C2_ROOT		0x193
#define IMX8MQ_CLK_I2C3_ROOT		0x194
#define IMX8MQ_CLK_I2C4_ROOT		0x195
#define IMX8MQ_CLK_PCIE1_ROOT		0x197
#define IMX8MQ_CLK_PCIE2_ROOT		0x198
#define IMX8MQ_CLK_PWM1_ROOT		0x199
#define IMX8MQ_CLK_PWM2_ROOT		0x19a
#define IMX8MQ_CLK_PWM3_ROOT		0x19b
#define IMX8MQ_CLK_PWM4_ROOT		0x19c
#define IMX8MQ_CLK_UART1_ROOT		0x1a4
#define IMX8MQ_CLK_UART2_ROOT		0x1a5
#define IMX8MQ_CLK_UART3_ROOT		0x1a6
#define IMX8MQ_CLK_UART4_ROOT		0x1a7
#define IMX8MQ_CLK_USB1_CTRL_ROOT	0x1a8
#define IMX8MQ_CLK_USB2_CTRL_ROOT	0x1a9
#define IMX8MQ_CLK_USB1_PHY_ROOT	0x1aa
#define IMX8MQ_CLK_USB2_PHY_ROOT	0x1ab
#define IMX8MQ_CLK_USDHC1_ROOT		0x1ac
#define IMX8MQ_CLK_USDHC2_ROOT		0x1ad

struct imxccm_gate imx8mq_gates[] = {
	[IMX8MQ_CLK_A53_CG] = { 0x8000, 14, IMX8MQ_CLK_A53_SRC },
	[IMX8MQ_CLK_ENET_AXI_CG] = { 0x8880, 14, IMX8MQ_CLK_ENET_AXI_SRC },
	[IMX8MQ_CLK_USB_BUS_CG] = { 0x8b80, 14, IMX8MQ_CLK_USB_BUS_SRC },
	[IMX8MQ_CLK_PCIE1_CTRL_CG] = { 0xa300, 14, IMX8MQ_CLK_PCIE1_CTRL_SRC },
	[IMX8MQ_CLK_PCIE1_PHY_CG] = { 0xa380, 14, IMX8MQ_CLK_PCIE1_PHY_SRC },
	[IMX8MQ_CLK_PCIE1_AUX_CG] = { 0xa400, 14, IMX8MQ_CLK_PCIE1_AUX_SRC },
	[IMX8MQ_CLK_ENET_REF_CG] = { 0xa980, 14, IMX8MQ_CLK_ENET_REF_SRC },
	[IMX8MQ_CLK_ENET_TIMER_CG] = { 0xaa00, 14, IMX8MQ_CLK_ENET_TIMER_SRC },
	[IMX8MQ_CLK_ENET_PHY_REF_CG] = { 0xaa80, 14, IMX8MQ_CLK_ENET_PHY_REF_SRC },
	[IMX8MQ_CLK_USDHC1_CG] = { 0xac00, 14, IMX8MQ_CLK_USDHC1_SRC },
	[IMX8MQ_CLK_USDHC2_CG] = { 0xac80, 14, IMX8MQ_CLK_USDHC2_SRC },
	[IMX8MQ_CLK_I2C1_CG] = { 0xad00, 14, IMX8MQ_CLK_I2C1_SRC },
	[IMX8MQ_CLK_I2C2_CG] = { 0xad80, 14, IMX8MQ_CLK_I2C2_SRC },
	[IMX8MQ_CLK_I2C3_CG] = { 0xae00, 14, IMX8MQ_CLK_I2C3_SRC },
	[IMX8MQ_CLK_I2C4_CG] = { 0xae80, 14, IMX8MQ_CLK_I2C4_SRC },
	[IMX8MQ_CLK_UART1_CG] = { 0xaf00, 14, IMX8MQ_CLK_UART1_SRC },
	[IMX8MQ_CLK_UART2_CG] = { 0xaf80, 14, IMX8MQ_CLK_UART2_SRC },
	[IMX8MQ_CLK_UART3_CG] = { 0xb000, 14, IMX8MQ_CLK_UART3_SRC },
	[IMX8MQ_CLK_UART4_CG] = { 0xb080, 14, IMX8MQ_CLK_UART4_SRC },
	[IMX8MQ_CLK_USB_CORE_REF_CG] = { 0xb100, 14, IMX8MQ_CLK_USB_CORE_REF_SRC },
	[IMX8MQ_CLK_USB_PHY_REF_CG] = { 0xb180, 14, IMX8MQ_CLK_USB_PHY_REF_SRC },
	[IMX8MQ_CLK_ECSPI1_CG] = { 0xb280, 14, IMX8MQ_CLK_ECSPI1_SRC },
	[IMX8MQ_CLK_ECSPI2_CG] = { 0xb300, 14, IMX8MQ_CLK_ECSPI2_SRC },
	[IMX8MQ_CLK_PWM1_CG] = { 0xb380, 14, IMX8MQ_CLK_PWM1_SRC },
	[IMX8MQ_CLK_PWM2_CG] = { 0xb400, 14, IMX8MQ_CLK_PWM2_SRC },
	[IMX8MQ_CLK_PWM3_CG] = { 0xb480, 14, IMX8MQ_CLK_PWM3_SRC },
	[IMX8MQ_CLK_PWM4_CG] = { 0xb500, 14, IMX8MQ_CLK_PWM4_SRC },
	[IMX8MQ_CLK_PCIE2_CTRL_CG] = { 0xc000, 14, IMX8MQ_CLK_PCIE2_CTRL_SRC },
	[IMX8MQ_CLK_PCIE2_PHY_CG] = { 0xc080, 14, IMX8MQ_CLK_PCIE2_PHY_SRC },
	[IMX8MQ_CLK_PCIE2_AUX_CG] = { 0xc100, 14, IMX8MQ_CLK_PCIE2_AUX_SRC },
	[IMX8MQ_CLK_ECSPI3_CG] = { 0xc180, 14, IMX8MQ_CLK_ECSPI3_SRC },
	[IMX8MQ_CLK_ECSPI1_ROOT] = { 0x4070, 0, IMX8MQ_CLK_ECSPI1_DIV },
	[IMX8MQ_CLK_ECSPI2_ROOT] = { 0x4080, 0, IMX8MQ_CLK_ECSPI2_DIV },
	[IMX8MQ_CLK_ECSPI3_ROOT] = { 0x4090, 0, IMX8MQ_CLK_ECSPI3_DIV },
	[IMX8MQ_CLK_ENET1_ROOT] = { 0x40a0, 0, IMX8MQ_CLK_ENET_AXI_DIV },
	[IMX8MQ_CLK_I2C1_ROOT] = { 0x4170, 0, IMX8MQ_CLK_I2C1_DIV },
	[IMX8MQ_CLK_I2C2_ROOT] = { 0x4180, 0, IMX8MQ_CLK_I2C2_DIV },
	[IMX8MQ_CLK_I2C3_ROOT] = { 0x4190, 0, IMX8MQ_CLK_I2C3_DIV },
	[IMX8MQ_CLK_I2C4_ROOT] = { 0x41a0, 0, IMX8MQ_CLK_I2C4_DIV },
	[IMX8MQ_CLK_PCIE1_ROOT] = { 0x4250, 0, IMX8MQ_CLK_PCIE1_CTRL_DIV },
	[IMX8MQ_CLK_PCIE2_ROOT] = { 0x4640, 0, IMX8MQ_CLK_PCIE2_CTRL_DIV },
	[IMX8MQ_CLK_PWM1_ROOT] = { 0x4280, 0, IMX8MQ_CLK_PWM1_DIV },
	[IMX8MQ_CLK_PWM2_ROOT] = { 0x4290, 0, IMX8MQ_CLK_PWM2_DIV },
	[IMX8MQ_CLK_PWM3_ROOT] = { 0x42a0, 0, IMX8MQ_CLK_PWM3_DIV },
	[IMX8MQ_CLK_PWM4_ROOT] = { 0x42b0, 0, IMX8MQ_CLK_PWM4_DIV },
	[IMX8MQ_CLK_UART1_ROOT] = { 0x4490, 0, IMX8MQ_CLK_UART1_DIV },
	[IMX8MQ_CLK_UART2_ROOT] = { 0x44a0, 0, IMX8MQ_CLK_UART2_DIV },
	[IMX8MQ_CLK_UART3_ROOT] = { 0x44b0, 0, IMX8MQ_CLK_UART3_DIV },
	[IMX8MQ_CLK_UART4_ROOT] = { 0x44c0, 0, IMX8MQ_CLK_UART4_DIV },
	[IMX8MQ_CLK_USB1_CTRL_ROOT] = { 0x44d0, 0, IMX8MQ_CLK_USB_CORE_REF_DIV },
	[IMX8MQ_CLK_USB2_CTRL_ROOT] = { 0x44e0, 0, IMX8MQ_CLK_USB_CORE_REF_DIV },
	[IMX8MQ_CLK_USB1_PHY_ROOT] = { 0x44f0, 0, IMX8MQ_CLK_USB_PHY_REF_DIV },
	[IMX8MQ_CLK_USB2_PHY_ROOT] = { 0x4500, 0, IMX8MQ_CLK_USB_PHY_REF_DIV },
	[IMX8MQ_CLK_USDHC1_ROOT] = { 0x4510, 0, IMX8MQ_CLK_USDHC1_DIV },
	[IMX8MQ_CLK_USDHC2_ROOT] = { 0x4520, 0, IMX8MQ_CLK_USDHC2_DIV },
};

struct imxccm_divider imx8mq_divs[] = {
	[IMX8MQ_CLK_A53_DIV] = { 0x8000, 0, 0x7, IMX8MQ_CLK_A53_CG },
	[IMX8MQ_CLK_ENET_AXI_PRE_DIV] = { 0x8880, 16, 0x7, IMX8MQ_CLK_ENET_AXI_CG },
	[IMX8MQ_CLK_ENET_AXI_DIV] = { 0x8880, 0, 0x3f, IMX8MQ_CLK_ENET_AXI_PRE_DIV },
	[IMX8MQ_CLK_USB_BUS_PRE_DIV] = { 0x8b80, 16, 0x7, IMX8MQ_CLK_USB_BUS_CG },
	[IMX8MQ_CLK_USB_BUS_DIV] = { 0x8b80, 0, 0x3f, IMX8MQ_CLK_USB_BUS_PRE_DIV },
	[IMX8MQ_CLK_PCIE1_CTRL_PRE_DIV] = { 0xa300, 16, 0x7, IMX8MQ_CLK_PCIE1_CTRL_CG },
	[IMX8MQ_CLK_PCIE1_CTRL_DIV] = { 0xa300, 0, 0x3f, IMX8MQ_CLK_PCIE1_CTRL_PRE_DIV },
	[IMX8MQ_CLK_PCIE1_PHY_PRE_DIV] = { 0xa380, 16, 0x7, IMX8MQ_CLK_PCIE1_PHY_CG },
	[IMX8MQ_CLK_PCIE1_PHY_DIV] = { 0xa380, 0, 0x3f, IMX8MQ_CLK_PCIE1_PHY_PRE_DIV },
	[IMX8MQ_CLK_PCIE1_AUX_PRE_DIV] = { 0xa400, 16, 0x7, IMX8MQ_CLK_PCIE1_AUX_CG },
	[IMX8MQ_CLK_PCIE1_AUX_DIV] = { 0xa400, 0, 0x3f, IMX8MQ_CLK_PCIE1_AUX_PRE_DIV },
	[IMX8MQ_CLK_ENET_REF_PRE_DIV] = { 0xa980, 16, 0x7, IMX8MQ_CLK_ENET_REF_CG },
	[IMX8MQ_CLK_ENET_REF_DIV] = { 0xa980, 0, 0x3f, IMX8MQ_CLK_ENET_REF_PRE_DIV },
	[IMX8MQ_CLK_ENET_TIMER_PRE_DIV] = { 0xaa00, 16, 0x7, IMX8MQ_CLK_ENET_TIMER_CG },
	[IMX8MQ_CLK_ENET_TIMER_DIV] = { 0xaa00, 0, 0x3f, IMX8MQ_CLK_ENET_TIMER_PRE_DIV },
	[IMX8MQ_CLK_ENET_PHY_REF_PRE_DIV] = { 0xaa80, 16, 0x7, IMX8MQ_CLK_ENET_PHY_REF_CG },
	[IMX8MQ_CLK_ENET_PHY_REF_DIV] = { 0xaa80, 0, 0x3f, IMX8MQ_CLK_ENET_PHY_REF_PRE_DIV },
	[IMX8MQ_CLK_USDHC1_PRE_DIV] = { 0xac00, 16, 0x7, IMX8MQ_CLK_USDHC1_CG },
	[IMX8MQ_CLK_USDHC1_DIV] = { 0xac00, 0, 0x3f, IMX8MQ_CLK_USDHC1_PRE_DIV },
	[IMX8MQ_CLK_USDHC2_PRE_DIV] = { 0xac80, 16, 0x7, IMX8MQ_CLK_USDHC2_CG },
	[IMX8MQ_CLK_USDHC2_DIV] = { 0xac80, 0, 0x3f, IMX8MQ_CLK_USDHC2_PRE_DIV },
	[IMX8MQ_CLK_I2C1_PRE_DIV] = { 0xad00, 16, 0x7, IMX8MQ_CLK_I2C1_CG },
	[IMX8MQ_CLK_I2C1_DIV] = { 0xad00, 0, 0x3f, IMX8MQ_CLK_I2C1_PRE_DIV },
	[IMX8MQ_CLK_I2C2_PRE_DIV] = { 0xad80, 16, 0x7, IMX8MQ_CLK_I2C2_CG },
	[IMX8MQ_CLK_I2C2_DIV] = { 0xad80, 0, 0x3f, IMX8MQ_CLK_I2C2_PRE_DIV },
	[IMX8MQ_CLK_I2C3_PRE_DIV] = { 0xae00, 16, 0x7, IMX8MQ_CLK_I2C3_CG },
	[IMX8MQ_CLK_I2C3_DIV] = { 0xae00, 0, 0x3f, IMX8MQ_CLK_I2C3_PRE_DIV },
	[IMX8MQ_CLK_I2C4_PRE_DIV] = { 0xae80, 16, 0x7, IMX8MQ_CLK_I2C4_CG },
	[IMX8MQ_CLK_I2C4_DIV] = { 0xae80, 0, 0x3f, IMX8MQ_CLK_I2C4_PRE_DIV },
	[IMX8MQ_CLK_UART1_PRE_DIV] = { 0xaf00, 16, 0x7, IMX8MQ_CLK_UART1_CG },
	[IMX8MQ_CLK_UART1_DIV] = { 0xaf00, 0, 0x3f, IMX8MQ_CLK_UART1_PRE_DIV },
	[IMX8MQ_CLK_UART2_PRE_DIV] = { 0xaf80, 16, 0x7, IMX8MQ_CLK_UART2_CG },
	[IMX8MQ_CLK_UART2_DIV] = { 0xaf80, 0, 0x3f, IMX8MQ_CLK_UART2_PRE_DIV },
	[IMX8MQ_CLK_UART3_PRE_DIV] = { 0xb000, 16, 0x7, IMX8MQ_CLK_UART3_CG },
	[IMX8MQ_CLK_UART3_DIV] = { 0xb000, 0, 0x3f, IMX8MQ_CLK_UART3_PRE_DIV },
	[IMX8MQ_CLK_UART4_PRE_DIV] = { 0xb080, 16, 0x7, IMX8MQ_CLK_UART4_CG },
	[IMX8MQ_CLK_UART4_DIV] = { 0xb080, 0, 0x3f, IMX8MQ_CLK_UART4_PRE_DIV },
	[IMX8MQ_CLK_USB_CORE_REF_PRE_DIV] = { 0xb100, 16, 0x7, IMX8MQ_CLK_USB_CORE_REF_CG },
	[IMX8MQ_CLK_USB_CORE_REF_DIV] = { 0xb100, 0, 0x3f, IMX8MQ_CLK_USB_CORE_REF_PRE_DIV },
	[IMX8MQ_CLK_USB_PHY_REF_PRE_DIV] = { 0xb180, 16, 0x7, IMX8MQ_CLK_USB_PHY_REF_CG },
	[IMX8MQ_CLK_USB_PHY_REF_DIV] = { 0xb180, 0, 0x3f, IMX8MQ_CLK_USB_PHY_REF_PRE_DIV },
	[IMX8MQ_CLK_ECSPI1_PRE_DIV] = { 0xb280, 16, 0x7, IMX8MQ_CLK_ECSPI1_CG },
	[IMX8MQ_CLK_ECSPI1_DIV] = { 0xb280, 0, 0x3f, IMX8MQ_CLK_ECSPI1_PRE_DIV },
	[IMX8MQ_CLK_ECSPI2_PRE_DIV] = { 0xb300, 16, 0x7, IMX8MQ_CLK_ECSPI2_CG },
	[IMX8MQ_CLK_ECSPI2_DIV] = { 0xb300, 0, 0x3f, IMX8MQ_CLK_ECSPI2_PRE_DIV },
	[IMX8MQ_CLK_PWM1_PRE_DIV] = { 0xb380, 16, 0x7, IMX8MQ_CLK_PWM1_CG },
	[IMX8MQ_CLK_PWM1_DIV] = { 0xb380, 0, 0x3f, IMX8MQ_CLK_PWM1_PRE_DIV },
	[IMX8MQ_CLK_PWM2_PRE_DIV] = { 0xb400, 16, 0x7, IMX8MQ_CLK_PWM2_CG },
	[IMX8MQ_CLK_PWM2_DIV] = { 0xb400, 0, 0x3f, IMX8MQ_CLK_PWM2_PRE_DIV },
	[IMX8MQ_CLK_PWM3_PRE_DIV] = { 0xb480, 16, 0x7, IMX8MQ_CLK_PWM3_CG },
	[IMX8MQ_CLK_PWM3_DIV] = { 0xb480, 0, 0x3f, IMX8MQ_CLK_PWM3_PRE_DIV },
	[IMX8MQ_CLK_PWM4_PRE_DIV] = { 0xb500, 16, 0x7, IMX8MQ_CLK_PWM4_CG },
	[IMX8MQ_CLK_PWM4_DIV] = { 0xb500, 0, 0x3f, IMX8MQ_CLK_PWM4_PRE_DIV },
	[IMX8MQ_CLK_PCIE2_CTRL_PRE_DIV] = { 0xc000, 16, 0x7, IMX8MQ_CLK_PCIE2_CTRL_CG },
	[IMX8MQ_CLK_PCIE2_CTRL_DIV] = { 0xc000, 0, 0x3f, IMX8MQ_CLK_PCIE2_CTRL_PRE_DIV },
	[IMX8MQ_CLK_PCIE2_PHY_PRE_DIV] = { 0xc080, 16, 0x7, IMX8MQ_CLK_PCIE2_PHY_CG },
	[IMX8MQ_CLK_PCIE2_PHY_DIV] = { 0xc080, 0, 0x3f, IMX8MQ_CLK_PCIE2_PHY_PRE_DIV },
	[IMX8MQ_CLK_PCIE2_AUX_PRE_DIV] = { 0xc100, 16, 0x7, IMX8MQ_CLK_PCIE2_AUX_CG },
	[IMX8MQ_CLK_PCIE2_AUX_DIV] = { 0xc100, 0, 0x3f, IMX8MQ_CLK_PCIE2_AUX_PRE_DIV },
	[IMX8MQ_CLK_ECSPI3_PRE_DIV] = { 0xc180, 16, 0x7, IMX8MQ_CLK_ECSPI3_CG },
	[IMX8MQ_CLK_ECSPI3_DIV] = { 0xc180, 0, 0x3f, IMX8MQ_CLK_ECSPI3_PRE_DIV },
};

struct imxccm_mux imx8mq_muxs[] = {
	[IMX8MQ_CLK_A53_SRC] = { 0x8000, 24, 0x7 },
	[IMX8MQ_CLK_ENET_AXI_SRC] = { 0x8880, 24, 0x7 },
	[IMX8MQ_CLK_USB_BUS_SRC] = { 0x8b80, 24, 0x7 },
	[IMX8MQ_CLK_PCIE1_CTRL_SRC] = { 0xa300, 24, 0x7 },
	[IMX8MQ_CLK_PCIE1_PHY_SRC] = { 0xa380, 24, 0x7 },
	[IMX8MQ_CLK_PCIE1_AUX_SRC] = { 0xa400, 24, 0x7 },
	[IMX8MQ_CLK_ENET_REF_SRC] = { 0xa980, 24, 0x7 },
	[IMX8MQ_CLK_ENET_TIMER_SRC] = { 0xaa00, 24, 0x7 },
	[IMX8MQ_CLK_ENET_PHY_REF_SRC] = { 0xaa80, 24, 0x7 },
	[IMX8MQ_CLK_USDHC1_SRC] = { 0xac00, 24, 0x7 },
	[IMX8MQ_CLK_USDHC2_SRC] = { 0xac80, 24, 0x7 },
	[IMX8MQ_CLK_I2C1_SRC] = { 0xad00, 24, 0x7 },
	[IMX8MQ_CLK_I2C2_SRC] = { 0xad80, 24, 0x7 },
	[IMX8MQ_CLK_I2C3_SRC] = { 0xae00, 24, 0x7 },
	[IMX8MQ_CLK_I2C4_SRC] = { 0xae80, 24, 0x7 },
	[IMX8MQ_CLK_UART1_SRC] = { 0xaf00, 24, 0x7 },
	[IMX8MQ_CLK_UART2_SRC] = { 0xaf80, 24, 0x7 },
	[IMX8MQ_CLK_UART3_SRC] = { 0xb000, 24, 0x7 },
	[IMX8MQ_CLK_UART4_SRC] = { 0xb080, 24, 0x7 },
	[IMX8MQ_CLK_USB_CORE_REF_SRC] = { 0xb100, 24, 0x7 },
	[IMX8MQ_CLK_USB_PHY_REF_SRC] = { 0xb180, 24, 0x7 },
	[IMX8MQ_CLK_ECSPI1_SRC] = { 0xb280, 24, 0x7 },
	[IMX8MQ_CLK_ECSPI2_SRC] = { 0xb300, 24, 0x7 },
	[IMX8MQ_CLK_PWM1_SRC] = { 0xb380, 24, 0x7 },
	[IMX8MQ_CLK_PWM2_SRC] = { 0xb400, 24, 0x7 },
	[IMX8MQ_CLK_PWM3_SRC] = { 0xb480, 24, 0x7 },
	[IMX8MQ_CLK_PWM4_SRC] = { 0xb500, 24, 0x7 },
	[IMX8MQ_CLK_PCIE2_CTRL_SRC] = { 0xc000, 24, 0x7 },
	[IMX8MQ_CLK_PCIE2_PHY_SRC] = { 0xc080, 24, 0x7 },
	[IMX8MQ_CLK_PCIE2_AUX_SRC] = { 0xc100, 24, 0x7 },
	[IMX8MQ_CLK_ECSPI3_SRC] = { 0xc180, 24, 0x7 },
};
