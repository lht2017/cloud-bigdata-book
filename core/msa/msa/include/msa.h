
#ifndef __MSADEF__
#define __MSADEF__


#include <netinet/ether.h>
#include "pubfun.h"

#define get_u32(X,O)  (*(unsigned int *)(X + O))
#define get_u8(X,O)   (*(unsigned char *)(X + O))
#define get_u16(X,O)  (*(unsigned short *)(X + O))

#define _MAX_AUTHHEAD_OUTTIME    90

/*���Ų�μ���*/
#define _MAX_GROUPLEVEL    5
/*ȫ����������*/
#define _MAX_ALLGRPNUM     1000
#define _MAX_ALLPOLICY     128
#define _MAXSNMPNUM        7
#define _MAX_BIGAREANUM    100
#define _MAXNETAREANUM     1000
#define _MAXVPATHNUM       6
#define _MAXDEVNUM         12
#define _MAX_QOSSTATIC_CHANEL    1000
#define NAS_MAXURLLIST_NUM       100000
//#define NAS_MAXURLSORT_NUM       100
#define _MAX_SRVRULE_NUM    64
#define _MAX_USERPOLICY_NUM    64
#define _MAX_CONTENTTYPE_NUM   750
#define NAS_MAXTOPURLSORT_NUM  24

#define MAX_FIREWALL_NUM		64

#define MAX_SRV_SYSDEFINENUM		1024

/*ϵͳ��������*/
#define NAS_MAX_COREFUNNUM    200
#define NAS_MAX_FUNNUM        200
#define NAS_DEFAULT_FUNTIME   200

/*����Ա����*/
#define MAX_ADMIN_SESSION            300
#define MAX_ADMIN_TIMEOUT            7200
#define MAX_ADMIN_TRYTIMEOUT         120
#define MAX_ADMIN_MAXRIGHT           100


/*�Զ����ַ���*/
#define MAX_SYSTEM_MSG               1000
/*�256*/
#define MAX_LANG_LIST_CONSIZE        256

#define MAX_SRVNAME_SIZE    64
#define MAX_TOPSRVNAME_SIZE    64
#define MAX_TOP_SRVNUM      40
#define MAX_SYS_SRVNUM      1000
#define MAX_SYS_SRVNUM_SYS  960
#define MAX_PORTNUM         65536
#define NAS_MAX_HOURMIN     5  

#define MSA_HASH_LOOP  32

#define _pubconfdir   "/etc/msa/msa"
#define _SERVICE   "/etc/msa/msa"
#define _datacenterdir   "/datacenter/msa"
#define _proccessdir   "/datacenter/proccess"
#define _msahtmldir    "/app/msa/msa/htmlplt"
#define _TMPDIR   "/datacenter/tmp"

#define _MSA_MAIL_BOUND   "----MSAMAILFILEBAOCHUANG----"
#define _MSA_FORM_BOUND   "----MSAFORMFILEBAOCHUANG----"

#define NAS_PROTOCOL_TCP 6    /*tcpЭ��*/
#define NAS_PROTOCOL_UDP 17   /*udpЭ��*/ 

#define NAS_NETWORK_NOMAL          0    /* ����  */
#define NAS_NETWORK_IPBASE         1    /* ����IP��ַ����  */
#define NAS_NETWORK_MACBASE        2    /* ����mac��ַ���� */

#define NAS_NETWORK_PPPOEBASE      4    /* ����PPPOE��֤*/


#define NAS_NETWORK_NTAUTH         21    /* AD������֤  */
#define NAS_NETWORK_NTAUTHHEAD     22    /* ��������AD��֤  */

#define NAS_NETWORK_LOCALAUTH      23    /* �û�����web��֤*/
#define NAS_NETWORK_LOCALAUTHHEAD  24    /* ��������web��֤*/
#define NAS_NETWORK_LOCALAUTHCLIENT  25  /* �ͻ��˷�ʽ��֤   ���Ǵ��������Ƶģ�֧��web��ʽ����֤*/


#define NAS_NETWORK_LDAPAUTHBASE        26    /* LDAP������֤*/
#define NAS_NETWORK_LDAPAUTHBASEHEAD    27    /* ��������LDAP������֤  ����LDAP��֤ͬ��web*/
#define NAS_NETWORK_LDAPAUTHBASECLIENT  28    /* �ͻ���LDAP������֤  ��LDAP��֤ͬ��*/

#define NAS_NETWORK_RADUSAUTHBASE       29    /*RADIUS������֤ ����RADUS��֤ͬ��*/
#define NAS_NETWORK_RADUSAUTHBASEHEAD   30    /*��������RADIUS������֤  ����RADUS��֤ͬ��web*/
#define NAS_NETWORK_RADUSAUTHBASECLIENT 31    /*�ͻ���RADIUS������֤   ����RADUS��֤ͬ��client*/


#define NAS_NETWORK_IPCLIENT       41    /* ��������֤ǿ�ƿͻ���  �����ǻ���mac������ */

#define NAS_NETWORK_USBCLIENT      44    /* usbkey������֤  �����ǻ���key�����ݵ� */

#define NAS_NETWORK_OUT            90    /* �ⲿ���������������������*/
#define NAS_NETWORK_NOAUTHSERVER   91    /* �������ⲿ������ */

#define NAS_NETWORK_NOMON          99    /* ��������     */
#define NAS_NETWORK_NOACCESS       100    /* ��ֹ��������  */
#define NAS_NETWORK_NOACCESSIPMAC       101    /* ��ֹ��������,��Ϊip/mac��һ��  */

#define NAS_NETWORK_LOCAL	  		1
#define NAS_NETWORK_EXTERNAL	  2
#define NAS_SYS_ERROR           -1 /*ϵͳ���ֵĴ���*/
#define NAS_GET_USER		        1  /*�õ��û�*/

#define   NAS_CONTENT_HEAD     9
#define   NAS_CONTENT_GET      10
#define   NAS_CONTENT_POST     11
#define   NAS_CONTENT_POSTCHECKFILE     12
#define   NAS_CONTENT_POSTPRE  110
#define   NAS_CONTENT_MSNMSG   12
#define   NAS_CONTENT_QQ       13
#define   NAS_CONTENT_XunLei   14

#define   NAS_CONTENT_HTTPPROXY   15
#define   NAS_CONTENT_SMTP     21
#define   NAS_CONTENT_POP3     23
#define   NAS_CONTENT_UUSEE    24

#define MSA_SERVICE_HTTPMAX   236    
#define MSA_SERVICE_UNKNOWN    0     /* ��������             */
#define MSA_SERVICE_HTTP       120    /* Web����              */
#define MSA_SERVICE_HTTPMUTI   226    /* HTTP���������              */
#define MSA_SERVICE_HTTPERROR  227    /* �Ǳ�׼http���ݷ���              */

#define MSA_SERVICE_HTTPAD    101    /* ������  */
#define MSA_SERVICE_HTTPCOM   115    /* com  */
#define MSA_SERVICE_HTTPCN    116    /* cn   */
#define MSA_SERVICE_HTTPNET   117    /* .net */

#define MSA_SERVICE_HTTPMAIL   73    /* ������վ              */
#define MSA_SERVICE_HTTPCHAT   81    /* ������վ              */
#define MSA_SERVICE_HTTPBBS    82    /* ��̳��������վ��վ              */


#define MSA_SERVICE_CONFLV     190    /* ����FLV����*/
#define MSA_SERVICE_CONMP3     191    /* mp3*/
#define MSA_SERVICE_CONAVI     192    /* HTTP-AVI����*/

#define MSA_SERVICE_CONRM      193    /* rm */
#define MSA_SERVICE_CONMP4     194    /* mp4*/
#define MSA_SERVICE_CON3gp     195    /* 3gp*/

#define MSA_SERVICE_AUDIO     196    /* HTTP��Ƶ�ļ�������*/
#define MSA_SERVICE_VEDIO     197    /* HTTP��Ƶ�ļ�������*/




#define MSA_SERVICE_CONJS      200    /* HTTP-javascript����*/
#define MSA_SERVICE_CONXML     201    /* HTTP-xml*/
#define MSA_SERVICE_octeo      207    /* ����Ӧ��������������*/

#define MSA_SERVICE_CONRAR     208    /* rar*/
#define MSA_SERVICE_CONZIP     209    /* zip����*/
#define MSA_SERVICE_CONTGZ     210    /* TGZѹ����*/
#define MSA_SERVICE_CONPDF     211    /* pdf */
#define MSA_SERVICE_CONO2003   212    /* HTTP-word��office2003�ļ�����*/
#define MSA_SERVICE_CONO2007   213    /* HTTP-word��office2010�ļ�����*/
#define MSA_SERVICE_CONEXE     214    /* exe*/
#define MSA_SERVICE_octe       225    /* HTT����������������*/



#define MSA_SERVICE_CONBMP     230    /* bmp*/
#define MSA_SERVICE_CONGIF     231    /* GIFͼƬ*/
#define MSA_SERVICE_CONJPG     232    /* JPEGͼƬ*/
#define MSA_SERVICE_CONPNG     233    /* PNGͼƬ*/
#define MSA_SERVICE_CONFLASH   234    /* flash*/
#define MSA_SERVICE_CONIMAGE     235    /* ����HTTP-Image��*/

#define MSA_SERVICE_NETBIOS    454    /* NETBIOS            */

#define MSA_SERVICE_SMTP       519    /* SMTP����            */
#define MSA_SERVICE_POP3       520    /* POP����             */
#define MSA_SERVICE_HTTPSRV    442    /* ����Web����      */
#define MSA_SERVICE_SMTPSRV    443    /* ����SMTP����     */
#define MSA_SERVICE_POP3SRV    444    /* ����POP����      */
#define MSA_SERVICE_HTTPSSRV   445    /* ����https����      */

#define MSA_SERVICE_MSN        281    /* msn����          */
#define MSA_SERVICE_MSNFILE    282    /* msn���ļ�        */
#define MSA_SERVICE_MSNYC      283    /* msnԶ��Э��      */
#define MSA_SERVICE_MSNYP      284    /* msn����Ƶ        */

#define MSA_SERVICE_YAHOO      287    /* yahoo����          */
#define MSA_SERVICE_ICQ        302    /* icq����           */

#define MSA_SERVICE_FTP        430    /* ftp����          */
#define MSA_SERVICE_FTPDATA    431    /* ftp����          */
#define MSA_SERVICE_UPDATA     432    /* ftp����          */
#define MSA_SERVICE_DOWNDATA   433    /* ftp����          */

#define MSA_SERVICE_BT         371    /* BT����           */

#define MSA_SERVICE_QQ         273    /* QQ����           */
#define MSA_SERVICE_QQTCP      274    /* QQ-tcp����       */
#define MSA_SERVICE_QQHTTPS    275    /* QQ-https����     */
#define MSA_SERVICE_QQSP       276    /* qq��Ƶ�Ự       */
#define MSA_SERVICE_QQYP       277    /* qq��Ƶ�Ự       */
#define MSA_SERVICE_QQWJ       278    /* qq���ļ�         */
#define MSA_SERVICE_QQYC       279    /* qqԶ��Э��       */
#define MSA_SERVICE_QQDX       300    /* qq������         */

#define MSA_SERVICE_UC         295    /* UC          */
#define MSA_SERVICE_POPO       293    /* popo        */

#define MSA_SERVICE_WWWJCS     290    /* �����ļ����� */

#define MSA_SERVICE_STUN       334    /* stun         */


#define MSA_SERVICE_SMB        456    /* smb            */
#define MSA_SERVICE_EMULE      372    /* EMule����        */
#define MSA_SERVICE_PPLIVE     390    /* pplive����       */
#define MSA_SERVICE_QQLIVE     391    /* qqlive����       */
//

#define MSA_SERVICE_WinMX      376    /* WinMX����       */
#define MSA_SERVICE_XunLei     370    /* Ѹ������         */
#define MSA_SERVICE_HaoFang    744    /* �Ʒ���սƽ̨     */
#define MSA_SERVICE_Socks5     552    /* Socks5����       */
#define MSA_SERVICE_HTTPPROXY  551    /* http����         */
#define MSA_SERVICE_GAMEVS     749    /* VS������Ϸƽ̨      */
//#define MSA_SERVICE_BF5Z       52    /* �߷�5�Ӵ�ս      */
//#define MSA_SERVICE_BFZGXQ     53    /* �߷��й�����     */
//#define MSA_SERVICE_BFXZ       54    /* �߷���Ϸ����     */
#define MSA_SERVICE_BAIDU_XB   382    /* �°�             */
//#define MSA_SERVICE_Ares       56    /* Ares             */
//#define MSA_SERVICE_SoulSeek   57    /* SoulSeek         */
//#define MSA_SERVICE_appleJuice 58    /* appleJuice       */
//#define MSA_SERVICE_DirectConnect 59 /* DirectConnect    */
//#define MSA_SERVICE_xdcc       60    /* xdcc        */
//#define MSA_SERVICE_waste      61    /* waste       */
#define MSA_SERVICE_qqcyclone  374    /* qqcyclone   */
#define MSA_SERVICE_PPStream   392    /* PPStream    */
#define MSA_SERVICE_UUSee      393    /* UUSee       */
#define MSA_SERVICE_FX         393    /* ����       */
#define MSA_SERVICE_QVOD       395    /* QVOD        */
//
#define MSA_SERVICE_PPG        397    /* ƨƨ      */
#define MSA_SERVICE_BFYY       398    /* ����Ӱ��      */

//#define MSA_SERVICE_totolook   69    /* totolook    */
//#define MSA_SERVICE_PPT        70    /* PP���ͨ    */
//
//#define MSA_SERVICE_SINAGAME   79    /* sina��Ϸ    */
//#define MSA_SERVICE_SOHUGAME   80    /* sohu��Ϸ    */
//
#define MSA_SERVICE_HTTPS      270     /* https    */
#define MSA_SERVICE_QQGAME     742    /* qq��Ϸ   */
#define MSA_SERVICE_UUCALL     339    /* uucall   */
#define MSA_SERVICE_SIP        330    /* SIPЭ��  */
#define MSA_SERVICE_RTP        331    /* RTP/RTCP */
#define MSA_SERVICE_RTCP       332    /* RTCP */
#define MSA_SERVICE_RSTP       333    /* RSTP */
//#define MSA_SERVICE_IRC        11    /* IRC */
#define MSA_SERVICE_Telnet     532    /* telnet */
#define MSA_SERVICE_FeiXin     297    /* ����2008 */
//#define MSA_SERVICE_sdo        93    /* ʢ�� */
//#define MSA_SERVICE_BF         15    /* �߷� */
#define MSA_SERVICE_LZ         741    /* ���� */
//#define MSA_SERVICE_Jabber     95    /* JABBER */
//
//
#define MSA_SERVICE_warcraft   778    /* warcraft */
#define MSA_SERVICE_cf         771    /* ��Խ���� */
#define MSA_SERVICE_dnf        772    /* ���³�����ʿ */
#define MSA_SERVICE_tx2        773    /* ����2 */
#define MSA_SERVICE_mir3       770    /* ����3 */
#define MSA_SERVICE_mirs       774    /* �����⴫ */
#define MSA_SERVICE_jx3        775    /* ������Ե3 */
//
#define MSA_SERVICE_popkart    777    /* ���ܿ����� */
#define MSA_SERVICE_bnb        779    /* ������ */
#define MSA_SERVICE_zt         776    /* ��; */
#define MSA_SERVICE_rxjh       780    /* ��Ѫ���� */
//
//#define MSA_SERVICE_MSNPROXY   107   /* MSNPROXY */

#define MSA_SERVICE_POSTRAR       130    /* HTTP-RAR�ļ��ϴ� */
#define MSA_SERVICE_POSTZIP       131    /* HTTP-Zip�ļ��ϴ� */
#define MSA_SERVICE_POSTTGZ       132    /* HTTP-TGZ�ļ��ϴ� */
#define MSA_SERVICE_POSTWORD      133    /* HTTP-WORD�ļ��ϴ� */
#define MSA_SERVICE_POSTExcel     134    /* HTTP-Excel�ļ��ϴ� */
#define MSA_SERVICE_POSTPDF       135    /* HTTP-PDF�ļ��ϴ� */
#define MSA_SERVICE_POSTPPT       136    /* HTTP-PPT�ļ��ϴ� */
#define MSA_SERVICE_POSTTXT       137    /* HTTP-TXT�ļ��ϴ� */
#define MSA_SERVICE_POSTExe       138    /* HTTP-Exe�ļ��ϴ� */
#define MSA_SERVICE_POSTJPG       139    /* HTTP-JPG�ļ��ϴ� */
#define MSA_SERVICE_POSTGif       140    /* HTTP-Gif�ļ��ϴ� */
#define MSA_SERVICE_NOEXTPOSTFILE       148    /* HTTP-����չ�����ļ��ϴ� */
#define MSA_SERVICE_OTHERPOSTFILE       149    /* HTTP�����ļ��ϴ� */

#define MSA_SERVICE_SNMP          452    /* snmp */
#define MSA_SERVICE_SSDP          463    /* ssdp */

#define MSA_SERVICE_PCANY         533    /* pcanywhere */
#define MSA_SERVICE_VNC           534    /* vnc */

#define MSA_SERVICE_HTWTJY       579    /* ��ͨί�н���*/
#define MSA_SERVICE_DZH          570    /* ���ǻ۹�Ʊ���� */
#define MSA_SERVICE_THS          571    /* ͬ��˳��Ʊ���� */

typedef wchar_t unicode_char;

/*ע�ắ����*/
typedef struct corefunList_s{
	char strFunName[64]; /*��������*/
  int (*op)();
} corefunList;



typedef struct funList_s{
	unsigned int lFunCode;  /*����*/
	unsigned int funFlag;   /*0 ֱ�ӵ��� 1 dll��̬���� 2java�� 3Ӧ�ó������*/
	char strNode[32]; /*����˵��*/
	char strFunName[64]; /*��������*/
	char strFunUrl[128]; /*dll���õ�url*/
	unsigned int  maxruntime;    /*�ú��������ʱ��*/
	unsigned int  activeflag;    /*��������� 0�뼤���޹� 1�뼤����� */
	unsigned int  rightflag;    /*Ȩ�������  0��Ȩ���޹� 1��Ȩ�����  */
  int (*op)();
} funList;

corefunList  _ltcorefunList[NAS_MAX_COREFUNNUM];
funList      _ltfunList[NAS_MAX_FUNNUM];
int          _maxfuntonnum;

typedef struct nasAdmSession_s {
	unsigned long  lSip[4];       /* ԴIP��ַ     */
	unsigned long  lSid;       /* session id  4λ����  */
	char           lright[MAX_ADMIN_MAXRIGHT];     /* Ȩ��       */
	char           caname[64];     /* Ȩ��       */
  char           allgroup[_MAX_ALLGRPNUM+1];   /* ��������   */
  unsigned int   trytimes;
	unsigned long  lasttime;   /*���һ�ε�½ʱ�� */
} nasAdmSession;

/*
0:chinese
1:en
*/
typedef struct conListType_s {
    char            conStr[MAX_LANG_LIST_CONSIZE];
} conListType;


typedef struct nasPortInfo_s {
    int		   udpLog;       /* ��udp�˿��Ƿ񱻼�¼  3��������� 2��ز���¼ 9������ 10 ��ֹ���� */
    int		   tcpLog;       /* ��tcp�˿��Ƿ񱻼�¼  3��������� 2��ز���¼ 9������ 10 ��ֹ����   */
    int      isTcplocal;      /* 1 local  0 remote*/
    int      isUdplocal;      /* 1 local  0 remote*/
} nasPortInfo;

typedef struct msaTopSrv_s {
	char          srvname[MAX_TOPSRVNAME_SIZE];
}msaTopSrv;

typedef struct msaService_s {
	  short           srvid;     /*����*/
    char            srvName[MAX_SRVNAME_SIZE];     /*����*/
    char            descName[MAX_TOPSRVNAME_SIZE];     /*����*/
    unsigned char   srvFlag; 	       /*0 ϵͳ��1 �û��Խ�*/
    unsigned char   topSrv;
    unsigned char   denytype;        /*�Ƿ���Ҫϵͳ������� */  
    unsigned char   level;           /*level��ϵͳΣ���ĳ̶�*/  
} msaService;

typedef struct msaSrvDefine_s {
   unsigned char         userFlag;
   unsigned short        srvid;
   unsigned char         tcporudp;
   unsigned char         direct;
   unsigned short        rPortL;
   unsigned short        rPortT;
   unsigned short        httpload;/*0:��ƥ�� 1��ƥ��  2������ƥ��*/
   unsigned short        flagstart;
   unsigned char         flaglen;
   char                  moreflag[100];//�μ�������������
} msaSrvDefine;


typedef struct nasFlowInfo_s {
	  unsigned long long   allflow[2]; 
    unsigned long long   srvflow[MAX_TOP_SRVNUM]; 
}nasFlowInfo;

typedef struct nasFlowHourInfo_s {
	  unsigned long long   allflow[2]; 
    unsigned long long   srvflow[MAX_TOP_SRVNUM]; 
    unsigned long srvtime[MAX_TOP_SRVNUM]; 
    unsigned long srvlasttime[MAX_TOP_SRVNUM]; 
}nasFlowHourInfo;

typedef struct nasFlowDayInfo_s {
	  unsigned long long   allflow[2]; 
	  unsigned int  alltime;
	  unsigned int  alllasttime;
    unsigned long long   srvflow[MAX_TOP_SRVNUM]; 
    unsigned long srvtime[MAX_TOP_SRVNUM]; 
    unsigned long srvlasttime[MAX_TOP_SRVNUM]; 
}nasFlowDayInfo;

typedef struct nasAllInfo_s { 
	  unsigned long   udpconnect; 
    unsigned long   tcpconnect;
    nasFlowInfo     nowFlowInfo;
    nasFlowHourInfo hourFlowInfo;
    nasFlowDayInfo  dayFlowInfo; 
    unsigned int    lastflowcounttime;
}nasAllInfo;

typedef struct nasVPathInfo_s { 
	  char            vPathName[128];
    nasFlowInfo     nowFlowInfo;  
    nasFlowDayInfo  dayFlowInfo; 
    unsigned int    lastflowcounttime;
} nasVPathInfo;


typedef struct nasQosPathInfo_s {   /*   max static qos    */ 
    uint16       sid;
    char         qosname[64];
    uint32       qosrated;
    uint32       qosrateu;
    uint32       qosmixd;
    uint32       qosmixu;
    nasFlowInfo  nowFlowInfo;  
    nasFlowDayInfo  dayFlowInfo; 
    unsigned int    lastflowcounttime;
} nasQosPathInfo;

typedef struct nasGroupInfo_s {  /*   maxgroup 1000    */   
	  unsigned short groupid;  
	  unsigned short pid; 
	  char         name[64];
	  char         mydesc[128]; 
	  unsigned char level;
    nasFlowInfo  nowFlowInfo;  
    nasFlowDayInfo  dayFlowInfo; 
    unsigned int    lastflowcounttime;
} nasGroupInfo;

typedef struct nasPolicyInfo_s {   /*   maxpolicy    */ 
	  unsigned int pid;
	  char         pname[48];
	  char         pdesc[64];
} nasPolicyInfo;

typedef struct _NetArea_s {
	unsigned int ipstart[4];
	unsigned int ipend[4];
	int  netflag;
	int  snmpnum;
	char homeurl[255];
	unsigned int groupid;
	unsigned int policyid;
} _pNetArea;


#define MSA_DBUSER_FLAG_FORMNOMON      0
#define MSA_DBUSER_FLAG_MAILNOMON      1
#define MSA_DBUSER_FLAG_IMNOMON        2
#define MSA_DBUSER_FLAG_BLOCKNOMON     3
#define MSA_DBUSER_FLAG_REPORTNOMON    4
#define MSA_DBUSER_FLAG_SEARCHNOMON    5
#define MSA_DBUSER_FLAG_FILENOMON      6
#define MSA_DBUSER_FLAG_VCNOMON        7

#define MSA_DBUSER_FLAG_ONLYIP         8
#define MSA_DBUSER_FLAG_IPMAC          9
#define MSA_DBUSER_FLAG_ONLEONE        10
#define MSA_DBUSER_FLAG_NOFTPFILE      11
#define MSA_DBUSER_FLAG_NOFORMFILE     12
#define MSA_DBUSER_FLAG_NOMSNFILE      13
#define MSA_DBUSER_FLAG_NOQQFILE       14


typedef struct nasDbUserInfo_s {     /*�û���Ϣ*/
    int32    userid;
    int      onlineindex;
    char     username[32];         /*�ʺ���*/
    char     dispname[32];         /*����*/
    unsigned char  Certificate_type;
    char     Certificate_code[24]; 
    unsigned char  sex;
		char     password[32];        
    uint32   groupid[_MAX_GROUPLEVEL];
    char     bindemail[64];
    uint32   bindip[4]; 
    unsigned char  bindmac[6];     /*MAC��ַ*/
    unsigned char  useflags;
    uint32   ratelimit;  
    unsigned char  ratetype;      /*0����  1����*/
    unsigned char  topSrvNameList[MAX_TOP_SRVNUM]; 
    uint32   addtime; 
    uint32   locktime; 
    uint32   lasttime; 
    uint64   lLimitBytes;                  
    uint32   lLimitTimes; 
    uint64   lAllUpFlow;           /*day�ܵ���������*/
    uint64   lAllDownFlow;         /*day�ܵ���������*/
    uint32   lAllTime;             /*day�ܵ�����ʱ��*/
    uint64   lLimitBytesw;         /*ÿ����������������*/
    uint32   lLimitTimesw;         /*ÿ������������ʱ��*/
    uint64   lAllUpFloww;          /*���ڵ���������*/
    uint64   lAllDownFloww;        /*�����ܵ���������*/       
    uint32   lAllTimew;            /*�����ܵ�����ʱ��*/
    uint64   lLimitBytesm;         /*ÿ��������������*/
    uint32   lLimitTimesm;         /*ÿ����������ʱ��*/           
    uint64   lAllUpFlowm;          /*���ܵ���������*/
    uint64   lAllDownFlowm;        /*���ܵ���������*/   
    uint32   lAllTimem;    	       /*���ܵ�����ʱ��*/    
    char     moreflag[32];        
    char     policyid[_MAX_ALLPOLICY+1];               
    uint32   jftype;
    float    accountnum;
    uint32   maxpackage;
    uint32   maxBytes;
    uint32   maxudp;               /* ���udp���� */ 
    uint32   maxtcp;               /*  ���tcp����*/
    uint32   maxudpp;              /*  ÿ�����udp������*/
    uint32   maxtcpp;              /*  ÿ�����tcp������*/
    uint32   maxupp;               /*  ÿ��up������*/ 
    uint32   maxdownp;             /*  ÿ��down������*/  
    uint32   maxsp;                /*  ÿ��128�ֽ�С������*/ 
    uint32   maxnc;                /*  ÿ������½�������Ŀ*/  
}nasDbUserInfo;

/*
���ֵ�hash����
hash ���ڷ����������ͻ������
freecon ����������취,���һ���ı��Ϊnext=-1
*/
typedef struct _shm_hash_link_dbusernamehead {
    unsigned int       bufptr;  /*��ͷ��ʼ��ƫ����*/
    unsigned int       bufsize;  /*��ͷ��ʼ��ƫ����*/ 
    unsigned int       conbufptr;  /*��ͷ��ʼ��ƫ����*/ 
    unsigned int       bufnum;
    int                freecontenthead;
    int                freecontenttail;
    int                nownum;
} shm_hash_link_dbusernamehead;

/*hash index ����index�ֲ�*/
typedef struct _shm_hash_link_dbusernameindex {
    int           next; /*-1�൱��NULL*/
} shm_hash_link_dbusernameindex;

typedef struct msaDbUserName_s { 
	  int32    userid;
    char     username[32];         /*�ʺ���*/
} msaDbUserName;

/*hash���ݶ���,���ݿ������*/
typedef struct _shm_hash_link_onlineusername {
    int             next;
    msaDbUserName   item;
} shm_hash_link_onlineusername;

/*
IP��hash���� 
hash ���ڷ����������ͻ������
freecon ����������취,���һ���ı��Ϊnext=-1
*/
typedef struct _shm_hash_link_dbuseriphead {
    unsigned int       bufptr;  /*��ͷ��ʼ��ƫ����*/
    unsigned int       bufsize;  /*��ͷ��ʼ��ƫ����*/ 
    unsigned int       conbufptr;  /*��ͷ��ʼ��ƫ����*/ 
    unsigned int       bufnum;
    int                freecontenthead;
    int                freecontenttail;
    int                nownum;
} shm_hash_link_dbuseriphead;

/*hash index ����index�ֲ�*/
typedef struct _shm_hash_link_dbuseripindex {
    int           next; /*-1�൱��NULL*/
} shm_hash_link_dbuseripindex;

typedef struct msaDbUserIp_s { 
	  int32    userid;
    uint32    ipadd[4];         /*ipadd*/
} msaDbUserIp;

/*hash���ݶ���,���ݿ������*/
typedef struct _shm_hash_link_onlineuserip {
    int             next;
    msaDbUserIp    item;
} shm_hash_link_onlineuserip;


/*
mac��hash���� 
hash ���ڷ����������ͻ������
freecon ����������취,���һ���ı��Ϊnext=-1
*/
typedef struct _shm_hash_link_dbusermachead {
    unsigned int       bufptr;  /*��ͷ��ʼ��ƫ����*/
    unsigned int       bufsize;  /*��ͷ��ʼ��ƫ����*/ 
    unsigned int       conbufptr;  /*��ͷ��ʼ��ƫ����*/ 
    unsigned int       bufnum;
    int                freecontenthead;
    int                freecontenttail;
    int                nownum;
} shm_hash_link_dbusermachead;

/*hash index ����index�ֲ�*/
typedef struct _shm_hash_link_dbusermacindex {
    int           next; /*-1�൱��NULL*/
} shm_hash_link_dbusermacindex;

typedef struct msaDbUserMac_s { 
	  int32    userid;
    unsigned char  caMac[6];
} msaDbUserMac;

/*hash���ݶ���,���ݿ������*/
typedef struct _shm_hash_link_onlineusermac {
    int             next;
    msaDbUserMac    item;
} shm_hash_link_onlineusermac;


typedef struct _dbUserInfoHead {
    unsigned int    bufptr;
    unsigned int    bufsize;
    unsigned int    bufnum;
} dbUserInfoHead;

 
typedef struct nasOnlieUserInfo_s {     /*�û���Ϣ*/
    int32    userid;
    uint32   onlineip[4];
    unsigned char  onlinemac[6];
    int    					ratelimit;
    char            ratetype;   
    char            topSrvNameList[MAX_TOP_SRVNUM];
    unsigned long long   lLimitBytes;   
    unsigned int    lLimitTimes;
    unsigned long long   lLimitBytesw;   
    unsigned int    lLimitTimesw;
    unsigned long long   lLimitBytesm;   
    unsigned int    lLimitTimesm;
    char            moreflag[32]; 
//    char            jftype;
//    float    				accountnum;
    unsigned int    maxpackage;
    unsigned long long   maxBytes;
    unsigned int    maxudp;
    unsigned int    maxtcp;
    unsigned int    maxudpp;
    unsigned int    maxtcpp;
    unsigned int    maxupp;
    unsigned int    maxdownp;
    unsigned int    maxsp;
    unsigned int    maxnc;
    uint32   nowmaxpackage;     /*��ǰÿ�����ݰ�*/
    uint64   nowmaxbytes;       /*��ǰÿ������*/
    uint32   nowmaxudpp;        /*��ǰÿ�����udp������*/ 
    uint32   nowmaxtcpp;        /*  ��ǰÿ�����tcp������*/ 
    uint32   nowmaxupp;         /*  ÿ��up������*/ 
    uint32   nowmaxdownp;       /*  ÿ��down������*/ 
    uint32   nowmaxsp;          /*  ÿ��128�ֽ�С������*/ 
    uint32   nowmaxnc;          /*  ÿ������½�������Ŀ*/
    uint32   udpconnect; 
    uint32   tcpconnect; 
    char     nowminute;
	  nasFlowInfo  nowFlowInfo;  
    nasFlowDayInfo  dayFlowInfo; 
    nasFlowDayInfo  dayFlowInfoWork; 
    uint32   lStartTime;     	/* ��������ʱ�俪ʼ   */
    int      natflag;
    unsigned short    ident;
    int      natnums;
    int      natcheckm;
    char     firsthomeurl;
    uint32   lLastUpdateTime; /* �ϴ����ݸ���ʱ��*/
    unsigned long   allconnect; //�����������Ӵ���
    unsigned long   locktotime; //locktotime��������ʱ��
    unsigned int    lastflowcounttime;
}nasOnlineUserInfo;

/*
mac��hash���� 
hash ���ڷ����������ͻ������
freecon ����������취,���һ���ı��Ϊnext=-1
*/
typedef struct _shm_hash_link_onlineuserhead {
    unsigned int       bufptr;  /*��ͷ��ʼ��ƫ����*/
    unsigned int       bufsize;  /*��ͷ��ʼ��ƫ����*/ 
    unsigned int       conbufptr;  /*��ͷ��ʼ��ƫ����*/ 
    unsigned int       bufnum;
    int                freecontenthead;
    int                freecontenttail;
    int                nownum;
} shm_hash_link_onlineuserhead;

/*hash index ����index�ֲ�*/
typedef struct _shm_hash_link_onlineuserindex {
    int           next; /*-1�൱��NULL*/
} shm_hash_link_onlineuserindex;

/*hash���ݶ���,���ݿ������*/
typedef struct _shm_hash_link_onlineuser {
    int             next;
    nasOnlineUserInfo    item;
} shm_hash_link_onlineuser;

typedef struct nasUrlListTmp_s {
	char     url[128];
	unsigned short cService; 
	unsigned char  flag;/*0:һ���  1��ϵͳ�����߸���dipbuffer��  2������dns��̬����dipbuffer��  3������1��2 */
} nasUrlListTmp;

typedef struct nasUrlList_s {
	uint32   urlstart;
	unsigned char  urllen;
	unsigned short cService; 
	unsigned char  flag;/*0:һ���    1������dns��̬����dipbuffer�� 2��ϵͳ�����߸���dipbuffer��  3������1��2 */
} nasUrlList;

/*
mac��hash���� 
hash ���ڷ����������ͻ������
freecon ����������취,���һ���ı��Ϊnext=-1
*/
typedef struct _shm_hash_link_urlhead {
    unsigned int       bufptr;  /*��ͷ��ʼ��ƫ����*/
    unsigned int       bufsize;  /*��ͷ��ʼ��ƫ����*/ 
    unsigned int       conbufptr;  /*��ͷ��ʼ��ƫ����*/ 
    unsigned int       bufnum;
    int                freecontenthead;
    int                freecontenttail;
    uint32             nownum;
    uint32             urlcontentHead;
    uint32             urlcontentSize;
    uint32             urlcontentNowSize;
} shm_hash_link_urlhead;

/*hash index ����index�ֲ�*/
typedef struct _shm_hash_link_urlindex {
    int           next; /*-1�൱��NULL*/
} shm_hash_link_urlindex;

/*hash���ݶ���,���ݿ������*/
typedef struct _shm_hash_link_url {
    int             next;
    nasUrlList      item;
} shm_hash_link_url;

#define MSA_TCPSESSION_TIMEOUT       300   
typedef struct nasTcpBuffer_s {
    uint32         lId;              /* �û�Id  0--û��         */
    int            dipBufIndex;      /* ����dipBufferindex      */
    int            nUrl;             /* ����userhttpBuffer��ָ��    */
    char           cMatchRule;       
    char           vlink;          
    unsigned int   ssnid[2];
    unsigned long  lSip[4];             /* ԴIP��ַ     */
    unsigned long  lDip[4];             /* Ŀ��IP��ַ   */
    unsigned short nSport;           /* Դ�˿ں�     */
    unsigned short nDport;           /* Ŀ��˿ں�   */
    unsigned long  lStartTime;       /* ��ʼʱ��     */
    unsigned long  lLastTime;        /* ����޸�ʱ�� */
    uint64	       lBytes[2];        /* 0-�����ֽ���  1-�����ֽ��� */
    unsigned char  cType;            /* Э��         */
    unsigned short cService;         /* ����         */
    unsigned char  caMac[6];         /* ԴMac��ַ    */
    unsigned long  lCount;           /* ���ݰ������� */
    unsigned char  cFlags;           /* ��ʶ 0--ʵ�����ݻ�û�г��� 1--����ͷ����  2--������������  cFlags=*/
    unsigned char  cDirect;          /* ���䷽��*/
    char           keyword[128];     /* 128keyword */
    int            keywordi;         /* keyword */
    unsigned long  fdindex;        
    unsigned long  seq;
    unsigned short srvqosid;
    unsigned short userqosid;
    unsigned char  ruleaction;
} nasTcpBuffer;

/*
mac��hash���� 
hash ���ڷ����������ͻ������
freecon ����������취,���һ���ı��Ϊnext=-1
*/
typedef struct _shm_hash_link_TcpBufferhead {
    unsigned int       bufptr;  /*��ͷ��ʼ��ƫ����*/
    unsigned int       bufsize;  /*��ͷ��ʼ��ƫ����*/ 
    unsigned int       conbufptr;  /*��ͷ��ʼ��ƫ����*/ 
    unsigned int       bufnum;
    int                freecontenthead;
    int                freecontenttail;
    uint32             nownum;
} shm_hash_link_TcpBufferhead;

/*hash index ����index�ֲ�*/
typedef struct _shm_hash_link_TcpBufferindex {
    int           next; /*-1�൱��NULL*/
} shm_hash_link_TcpBufferindex;

/*hash���ݶ���,���ݿ������*/
typedef struct _shm_hash_link_TcpBuffer {
    int             next;
    nasTcpBuffer    item;
} shm_hash_link_TcpBuffer;


typedef struct nasHttpBuffer_s {
    unsigned long  lStartTime;       /* ��ʼʱ��     */
    unsigned long  lLastTime;        /* ������ʱ��     */
    char           caHost[64];
    unsigned long  lIp[4];              /* ipadd     */
    uint64	       lBytes;           /* ����         */
    unsigned long  lCount;           /* ����         */
    unsigned long  lTime;            /*      */
    uint64	       lBytesWork;       /* ����          */
    unsigned long  lCountWork;       /* ����          */
    unsigned long  lTimeWork;        /*               */
    unsigned short intUrlService;         /*      */
} nasHttpBuffer;
/*
cUrlSort
mac��hash���� 
hash ���ڷ����������ͻ������
freecon ����������취,���һ���ı��Ϊnext=-1
*/
typedef struct _shm_hash_link_HttpBufferhead {
    unsigned int       bufptr;  /*��ͷ��ʼ��ƫ����*/
    unsigned int       bufsize;  /*��ͷ��ʼ��ƫ����*/ 
    unsigned int       conbufptr;  /*��ͷ��ʼ��ƫ����*/ 
    unsigned int       bufnum;
    int                freecontenthead;
    int                freecontenttail;
    uint32             nownum;
} shm_hash_link_HttpBufferhead;

/*hash index ����index�ֲ�*/
typedef struct _shm_hash_link_HttpBufferindex {
    int           next; /*-1�൱��NULL*/
} shm_hash_link_HttpBufferindex;

/*hash���ݶ���,���ݿ������*/
typedef struct _shm_hash_link_HttpBuffer {
    int             next;
    nasHttpBuffer   item;
} shm_hash_link_HttpBuffer;


typedef struct nasUserHttpBuffer_s {
	  unsigned long  userid;           /* userid     */
	  int            nUrl;             /* ����httpBuffer��ָ��   */
    unsigned long  lStartTime;       /* ��ʼʱ��     */
    unsigned long  lLastTime;        /* ������ʱ��     */
    uint64	       lBytes;           /* ����         */
    unsigned long  lCount;           /* ����         */
    unsigned long  lTime;            /*              */
    uint64	       lBytesWork;       /* ����          */
    unsigned long  lCountWork;       /* ����          */
    unsigned long  lTimeWork;        /*               */
} nasUserHttpBuffer;

typedef struct _shm_hash_link_UserHttpBufferhead {
    unsigned int       bufptr;  /*��ͷ��ʼ��ƫ����*/
    unsigned int       bufsize;  /*��ͷ��ʼ��ƫ����*/ 
    unsigned int       conbufptr;  /*��ͷ��ʼ��ƫ����*/ 
    unsigned int       bufnum;
    int                freecontenthead;
    int                freecontenttail;
    uint32             nownum;
} shm_hash_link_UserHttpBufferhead;

/*hash index ����index�ֲ�*/
typedef struct _shm_hash_link_UserHttpBufferindex {
    int           next; /*-1�൱��NULL*/
} shm_hash_link_UserHttpBufferindex;

/*hash���ݶ���,���ݿ������*/
typedef struct _shm_hash_link_UserHttpBuffer {
    int                 next;
    nasUserHttpBuffer   item;
} shm_hash_link_UserHttpBuffer;


typedef struct nasDipBuffer_s {
	  unsigned char  cSys;             /* �Ƿ���ϵͳ���� 1����ϵͳdip�����ܴ��б���ɾ�� */
    unsigned long  lStartTime;       /* ��ʼʱ��    */
    unsigned long  lLastTime;        /* ������ʱ��  */
    uint32         ldip[4];
    uint64	       lBytes;           /* ����          */
    unsigned long  lCount;           /* ����          */
    unsigned long  lTime;            /*               */
    uint64	       lBytesWork;       /* ����          */
    unsigned long  lCountWork;       /* ����          */
    unsigned long  lTimeWork;        /*               */
    unsigned short cService;         /* ����          */
} nasDipBuffer;
/*
mac��hash���� 
hash ���ڷ����������ͻ������
freecon ����������취,���һ���ı��Ϊnext=-1
*/
typedef struct _shm_hash_link_DipBufferhead {
    unsigned int       bufptr;  /*��ͷ��ʼ��ƫ����*/
    unsigned int       bufsize;  /*��ͷ��ʼ��ƫ����*/ 
    unsigned int       conbufptr;  /*��ͷ��ʼ��ƫ����*/ 
    unsigned int       bufnum;
    int                freecontenthead;
    int                freecontenttail;
    uint32             nownum;
} shm_hash_link_DipBufferhead;

/*hash index ����index�ֲ�*/
typedef struct _shm_hash_link_DipBufferindex {
    int           next; /*-1�൱��NULL*/
} shm_hash_link_DipBufferindex;

/*hash���ݶ���,���ݿ������*/
typedef struct _shm_hash_link_DipBuffer {
    int             next;
    nasDipBuffer    item;
} shm_hash_link_DipBuffer;


typedef struct nas2SrvInfo_s {
    unsigned long  lDip[4];             /* Ŀ��IP��ַ   */
    unsigned short nDport;           /* Ŀ��˿ں�   */
    unsigned char  cType;            /* Э��         */
    unsigned long  lLastTime;        /* ����޸�ʱ�� */
    unsigned short cService;         /* ����         */
    unsigned char  cSys;             /* �Ƿ���ϵͳ���� 1����ϵͳ�����ܴ��б���ɾ�� */ 
} nas2SrvInfo;

typedef struct _shm_hash_link_2SrvInfohead {
    unsigned int       bufptr;  /*��ͷ��ʼ��ƫ����*/
    unsigned int       bufsize;  /*��ͷ��ʼ��ƫ����*/ 
    unsigned int       conbufptr;  /*��ͷ��ʼ��ƫ����*/ 
    unsigned int       bufnum;
    int                freecontenthead;
    int                freecontenttail;
    uint32             nownum;
} shm_hash_link_2SrvInfohead;

/*hash index ����index�ֲ�*/
typedef struct _shm_hash_link_2SrvInfoindex {
    int           next; /*-1�൱��NULL*/
} shm_hash_link_2SrvInfoindex;

/*hash���ݶ���,���ݿ������*/
typedef struct _shm_hash_link_2SrvInfo {
    int             next;
    nas2SrvInfo     item;
} shm_hash_link_2SrvInfo;



typedef struct nas2IpPortInfo_s {
    unsigned long  lSip[4];             /* IP��ַ   */
    unsigned short nSport;           /* �˿ں�   */
    unsigned char  cType;            /* Э��         */
    unsigned long  lLastTime;        /* ����޸�ʱ�� */
    unsigned short nDipNum;          /* dip          */
    unsigned short nIpSessionNum;    /* ipsessionnum */
} nas2IpPortInfo;

typedef struct _shm_hash_link_2IpPortInfohead {
    unsigned int       bufptr;  /*��ͷ��ʼ��ƫ����*/
    unsigned int       bufsize;  /*��ͷ��ʼ��ƫ����*/ 
    unsigned int       conbufptr;  /*��ͷ��ʼ��ƫ����*/ 
    unsigned int       bufnum;
    int                freecontenthead;
    int                freecontenttail;
    uint32             nownum;
} shm_hash_link_2IpPortInfohead;

/*hash index ����index�ֲ�*/
typedef struct _shm_hash_link_2IpPortInfoindex {
    int           next; /*-1�൱��NULL*/
} shm_hash_link_2IpPortInfoindex;

/*hash���ݶ���,���ݿ������*/
typedef struct _shm_hash_link_2IpPortInfo {
    int                next;
    nas2IpPortInfo     item;
} shm_hash_link_2IpPortInfo;


//typedef struct nasTopUrlSort_s {
//	int           topsortid;
//	char          topsortname[48];
//	char          topsortdesc[250];
//}nasTopUrlSort;
//
//typedef struct nasUrlSort_s {
//	int           sortid;
//	char          sortname[48];
//	char          sortdesc[250];
//	int           toptype;
//}nasUrlSort;


#define NAS_MAXSCH_NUM       20
typedef struct nasschtime_s {
	int           schid;
	char          schname[25];
  char          schdesc[64];
	char          schtime[400];
}nasschtime;

#define NAS_MAXJJR_NUM       20
typedef struct nasjjrtime_s {
	int           jjrid;
	char          jjrname[25];
  char          jjrdesc[64];
	char          jjrtime[370];
}nasjjrtime;


/*�������ƹ���,���������Ǳ���*/
/*
���ȼ��ǣ�
������ʽ������ҵ�����ͽ���
*/

typedef struct msasrvrulehead_s {
    unsigned int       lMaxServiceRuleDIp;
    unsigned int       srvruledipptr;  /*��ͷ��ʼ��ƫ����*/
    unsigned int       srvruledipsize;  /*��ͷ��ʼ��ƫ����*/
    unsigned int       lMaxRuleIp;
    unsigned int       srvruleipptr;  /*��ͷ��ʼ��ƫ����*/
    unsigned int       srvruleipsize;  /*��ͷ��ʼ��ƫ����*/
    unsigned int       lMaxWebRule;
    unsigned int       webruleptr;  /*��ͷ��ʼ��ƫ����*/
    unsigned int       webrulesize;  /*��ͷ��ʼ��ƫ����*/
//    unsigned int       lMaxWebPostRule;
//    unsigned int       webpostruleptr;  /*��ͷ��ʼ��ƫ����*/
//    unsigned int       webpostrulesize;  /*��ͷ��ʼ��ƫ����*/
//    unsigned int       lMaxWebTypeRule;
//    unsigned int       webtyperuleptr;  /*��ͷ��ʼ��ƫ����*/
//    unsigned int       webtyperulesize;  /*��ͷ��ʼ��ƫ����*/
    unsigned int       userlistptr;     /*��ͷ��ʼ��ƫ����*/
    unsigned int       userlistsize;     /*��ͷ��ʼ��ƫ����*/
}msasrvrulehead;


typedef struct msaUserPolicy_s {
	  unsigned int    useflag;          /* 0 or 1 */
    unsigned int    sid;          /* ������ */
    char            policyname[64];
    float	    			prio;      
    int    					ratelimit;
    char            ratetype;   
    char            topSrvNameList[MAX_TOP_SRVNUM];
    unsigned long long   lLimitBytes;   
    unsigned int    lLimitTimes;
    unsigned long long   lLimitBytesw;   
    unsigned int    lLimitTimesw;
    unsigned long long   lLimitBytesm;   
    unsigned int    lLimitTimesm;
    char            moreflag[32]; 
    char            jftype;
    float    				accountnum;
    unsigned int    maxpackage;
    unsigned long long   maxBytes;
    unsigned int    maxudp;
    unsigned int    maxtcp;
    unsigned int    maxudpp;
    unsigned int    maxtcpp;
    unsigned int    maxupp;
    unsigned int    maxdownp;
    unsigned int    maxsp;
    unsigned int    maxnc;
    char    		    pid[_MAX_ALLPOLICY+1];     /*ϵͳ�Ĳ���id*/
    char   					grouplist[_MAX_ALLGRPNUM+1];  /*�û���array��������ʼλ��*/      
} msaUserPolicy;

#define NAS_MAXRULESRV_NUM       24
typedef struct nasSrvRuleSrv_s {
	  unsigned long   sid; 
    char            sname[32];
    unsigned long   ruleid;          /* ������ */
    char    				srvlist[MAX_SYS_SRVNUM]; /*�����array ������ʼλ��*/
    char	    			ruleaction;      /*0�ܾ�    1������*/
    int    					qosid;      
} nasSrvRuleSrv;

typedef struct nasSrvRule_s {
    unsigned long   ruleid;          /* ������ */
    char            rulename[32];
    unsigned long   ruleschedule;    /*�ù����schedule*/
    unsigned long   rulejrid;        /*�ù����schedule*/
    char            ruleurl[128];    /*url*/
    int    					logaction;
    int    					conaction;
    nasSrvRuleSrv   _nasSrvRuleSrv[NAS_MAXRULESRV_NUM];
    char    		    pid[_MAX_ALLPOLICY+1];     /*ϵͳ�Ĳ���id*/
    unsigned long   userlistptr;             /*�û�array��������ʼλ��*/
    char   					grouplist[_MAX_ALLGRPNUM+1];  /*�û���array��������ʼλ��*/
    long   					ipStart;         /*ip��ַ��array��������ʼλ��*/
    long   					ipEnd;
    unsigned long   urlStart;	       /*url�б� array��������ʼλ��*/
    unsigned long   urlEnd;
    long   					dipStart;	       /*Ŀ��ip��ַ��array��������ʼλ��*/
    long   					dipEnd;   
    nasFlowInfo     nowFlowInfo;  
    nasFlowDayInfo  dayFlowInfo;     
    unsigned int    lastflowcounttime;
} nasSrvRule;


/*������ƹ����Ŀ��ip��ַ�飬����������array ����*/
typedef struct nasSrvRuleDIp_s {
    long   	    ruleid;       /* ������ */
    unsigned long   ipstart[4];      /*ip�ο�ʼ��ַ*/
    unsigned long   ipend[4];        /*ip�ν�����ַ*/
} nasSrvRuleDIp;

/*web���ƹ����ip��ַ�飬����������array ����*/
typedef struct nasRuleUrl_s {
    long   	    ruleid;       /* ������ */
    long   	    ruleflag;     /*0:ƥ��webGET����  1:ƥ��webPOST���� 2:ȫ��*/
    int         action;        /*0:�ܽ�  1:����*/
    char        caUrl[64];    /*url�б�*/
} nasRuleUrl;

///*web���ƹ����ip��ַ�飬����������array ����*/
//typedef struct nasRulePost_s {
//    long   	    ruleid;       /* ������ */
//    char        caUrl[64];      /*url�б�*/
//} nasRulePost;
//
///*web���ƹ����ip��ַ�飬����������array ����*/
//typedef struct nasRuleType_s {
//    long   	    ruleid;       /* ������ */
//    char        caUrl[64];      /*url�б�*/
//} nasRuleType;


/*���ƹ����ip��ַ�飬����������array ����*/
typedef struct nasRuleIp_s {
    long   	    ruleid;       /* ������ */
    unsigned long   ipstart[4];      /*ip�ο�ʼ��ַ*/
    unsigned long   ipend[4];        /*ip�ν�����ַ*/
} nasRuleIp;

#define _MAXSNMPBUF   5000
#define _MAX_SNMP_NUM    6
typedef struct _snmpgroup{
	char snmpcommunity[32];
	char snmpsip[32];
	char snmpoid[128];
	char snmpv[12];
} SNMPGROUP;

typedef struct _snmpinfo{
	char mac[6];
	unsigned int  snmpsip;
} SNMPINFO;

typedef struct _snmpinfohead{
	unsigned int  snmpnum;
	unsigned int  lastsnmptime;
	SNMPINFO      _SNMPINFO[_MAXSNMPBUF];
} SNMPINFOHEAD;

#define _MAXVIDNUM   5000
typedef struct _vidinfohead{
	unsigned int  stringhash;
	unsigned int  vidtype;  //1QQ;2MSN 3FTP 4POP3 5SMTP�ռ��� 
	char          vid[32];
} VIDINFOHEAD;



typedef struct msaOption_s {
////////////////////////////////�������ݲ��� 	
   unsigned int ipmon;
   unsigned int httpmon;
   unsigned int ipreportmon;
   unsigned int httpreportmon;
   unsigned int smtpmon;
   unsigned int formmon;
   unsigned int pop3mon;
   unsigned int blockmon;
   unsigned int immon;
   unsigned int filemon;
   unsigned int searchmon;
   unsigned int usermon; //��������
/////////////////////////////////��¼�������    
   unsigned int nomondisk;
   unsigned int recordkeepday;
   unsigned int mailkeepday;
   unsigned int aimkeepday;
   unsigned int formkeepday;
   unsigned int historykeepday;
   unsigned int vidkeepday;
   unsigned int userkeepday;
   unsigned int loglevel; //��¼����
/////////////////////////////////���ܲ���    
   unsigned int onlineusertype;//�޷�ͬʱ�����߳�ǰһ�û�
   unsigned int noautoadduser;//Ĭ�Ͻ�ֹ�Զ������û�
   unsigned int attprev;//��������Ԥ�������ݼ���
   unsigned int nopicblock;//����ϸ���ͼƬ���߸����ű�
   int          defaultuserflag;//�û�����ʱĬ��״̬Ϊ����99���ֹ����100
/////////////////////////////////ϵͳ����   
   unsigned int maxuseronlietime;//�����û������ʱ��/��
   unsigned int maxusertimeout;//�����û���ʱʱ��/��
   unsigned int userproccesstime;//�����û����̼��ʱ����
   unsigned int maxtcpsessiontimeout;//���ӳ�ʱʱ��/��
   unsigned int tcpproccesstime;//���ӽ��̼��ʱ����
   float    flowrate;//��������
   float    timerate;//ʱ�����
/////////////////////////////////snmp����    
   unsigned int snmpebable;
   unsigned int snmptimeout;//snmp��Сˢ��ʱ����
   SNMPGROUP gnmsnmpgroup[_MAX_SNMP_NUM]; 
/////////////////////////////////��֤����Ϸ������       
   unsigned int authport;//������֤����˿�
   char     strAuthIP[32];//��֤����ip
   char     strAuthUrl[256];//��������֤����url
   char     strAuthOKUrl[256];//��������֤�ɹ���ҳ��
   char     denyUrl[256];   //�������ܾ�����ҳ���ַ
   unsigned int supportTCP;//����tcp��ϰ�
   unsigned int supportUDP;//����udp��ϰ�
   unsigned int authoktype;//��֤�ɹ�������� ��֤�ɹ� 0  �����ʺ���ҳ���ͬʱ���û�ԭ�������URL��ַ 1�����������ʺ���ҳ�� 2�����ض�ҳ�� 3���û�ԭ�������URL��ַ 
////////////////////////////////////
   int     mailloglevel;   
   int     formloglevel; 
   int     p2pmingandu;
} msaOption;


typedef struct msaADOption_s {
////////////////////////////////AD
  char  adhost[128];
  char  adadmin[128];
  char  adpass[64];
  char  domain[64];
  char  basedn[128];
  int   updatechk;
  int   updateoutree;
  int   updategchk;
  int   updatedispchk;
/////////////////////////////////ldap
  char  ldaphost[128];
  char  ldapport[32];
  char  ldapbasedn[128];
  char  ldapadmin[128];
  char  ldappass[64];
  char  dispfield[64];
  char  accountfield[64];
  char  policyfield[64];
  char  ouobjectclass[128];
  char  opobjectclass[128];
} msaAdOption;

typedef struct msaSec_s {
////////////////////////////////�������ݲ��� 	
   unsigned int noping;
   unsigned int adminpasssec;  //1ǿ������
   unsigned int userpasssec;   //1ǿ���û�����
   unsigned int authserver;
   unsigned int sshserver;
} msaSec;

typedef struct nasPPOESession_s {
	  char            ppoename[32];
    unsigned char   mac[6];         /* MAC��ַ */
    unsigned long   ip; 
    unsigned long   sTime; 
} nasPPOESession;

/* �ʼ���ع��˹���  */
typedef struct nasMailFilter_s {
    char   caRname[64];
    char   caFrom[64];
    char   caTo[64];
    char   caSub[64];
    char   caCont[64];
    char   caAtt[64];
    int    lSize;
    int    lAsize;
    short  nFlags;      /* ��� 0:SMTP  1:POP3 2 web*/
    short  nSflags;     /* ֪ͨ��ʽ 0--��֪ͨ  1--֪ͨ  2--ת��  */
    char   caSmail[64]; /* ת������ */
    int    lRnum;
    int    lMaction;
} nasMailFilter;

/* �ʼ���ع��˹���  */
typedef struct nasFormFilter_s {
    char   caRname[64];
    char   caFrom[64];
    char   caHost[64];
    char   caURL[64];
    char   caCon[64];
    char   caAtt[64];
    int    lSize;
    int    lAsize;
    short  nFlags;      /* ��� 0:����  1:���� 2 web*/
    short  nSflags;     /* ֪ͨ��ʽ 0--��֪ͨ  1--֪ͨ  2--ת��  */
    char   caSmail[64]; /* ת������        */
    int    lMaction;    /*��ض���1�����  0�������*/
} nasFormFilter;


/* �ʼ���ع��˹���  */
typedef struct nasFormFilterOne_s {
    char   caRname[64];
    char   caFrom[64];
    char   caHost[64];
    char   caURL[64];
    int    lMaction;
} nasFormFilterOne;

#define _MAX_MAILFILTER_NUM    64
#define _MAX_FORMFILTER_NUM    64
#define _MAX_SYSMAILFILTER_NUM    64
#define _MAX_SYSFORMFILTER_NUM    64
#define _MAX_FORMNOMON_NUM     64

typedef struct FilterListHead_s {
    nasMailFilter _ltMailFilter[_MAX_MAILFILTER_NUM];
    int            nowMailFilterNum;
    nasMailFilter _ltSysMailFilter[_MAX_SYSMAILFILTER_NUM];
    int            nowSysMailFilterNum;
    nasFormFilter _ltFormFilter[_MAX_FORMFILTER_NUM];
    int            nowFormFilterNum;
    nasFormFilter _ltSysFormFilter[_MAX_SYSFORMFILTER_NUM];
    int            nowSysFormFilterNum;
    nasFormFilterOne _ltFormNoMon[_MAX_FORMNOMON_NUM];
    int            nowFormNoMonNum;
} FilterListHead;


#define _MAX_VIDRULE_NUM    1024
typedef struct _nasrulevid {
    int    lIndex;
    char   ruelvid[32];
    int    ruletype;
} nasrulevid;

//  eth0/10     ��������y/n	�������� ---     ������   ip��ַ   promisc ѡ��������·
//				����ת��-      
//                  		���ݾ���-
//				nat������--ip
//                                nat������--ip
//                                һ��ͨ�ſ�--ip

typedef struct msaLinkInfo_s {
	unsigned int useflag;
	char  devname[32];
	unsigned int issniffer;
	unsigned int ispromisc;
	unsigned int devtype;
	char     outdevname[32];
	unsigned int devIp;
	unsigned int vlink;
} msaLinkInfo;


//typedef struct msaContentType_s {
//	unsigned int intins;
//	char  strcontenttype[64];
//	unsigned char  toptype;
//	unsigned short inttype;
//} msaContentType;

//toptype 
//0:δ֪  1:application 2:text 3:video 4:audio 5:image 
//inttype:����
//

typedef struct msapkbufhead_s {
	  unsigned int       allheadlen;
    unsigned int       lpkheadNum;
    unsigned int       pkheadptr;   /*��ͷ��ʼ��ƫ����*/
    unsigned int       pkheadsize;  /*��ͷ��ʼ��ƫ����*/
    uint32             writeindexhead;
    uint32             writeindextail;
    unsigned int       lpkNum;
    unsigned int       pkbufptr;    /*��ͷ��ʼ��ƫ����*/
    unsigned int       pkbufsize;    /*��ͷ��ʼ��ƫ����*/
    uint32             freebufhead;
    uint32             freebuftail;
    unsigned int       lCmdBufNum;
    unsigned int       cmdheadptr;   /*��ͷ��ʼ��ƫ����*/
    unsigned int       cmdheadsize;  /*��ͷ��ʼ��ƫ����*/
    uint32             cmdwriteindexhead;
    uint32             cmdwriteindextail;
} msapkbufhead;

#define PKTYPE_SMTP    1
#define PKTYPE_POP3    2
#define PKTYPE_UPLOAD  3
#define PKTYPE_MSN  4
#define PKTYPE_YAHOO  5
#define PKTYPE_FEIXIN 6
#define PKTYPE_TELNET 7

typedef struct _BufferHeadIndex {
	  unsigned long  userid;           /* userid     */
	  unsigned long  lSip[4];             /* ԴIP��ַ     */
    unsigned long  lDip[4];             /* Ŀ��IP��ַ   */
    unsigned short nSport;           /* Դ�˿ں�     */
    unsigned short nDport;           /* Ŀ��˿ں�   */
    unsigned char  cType;            /* Э��         */
    unsigned char  buftype;          /* Э��         */
    unsigned long  lStartTime;       /* ��ʼʱ��     */
    unsigned long  lLastTime;        /* ����޸�ʱ�� */
    int            next; /*-1�൱��NULL*/
    int            freenext; /*-1�൱��NULL*/
    unsigned long  pknum;    /*���ݰ���Ŀ  */
} BufferHeadIndex;

/*hash���ݶ���,���ݿ������*/
#define _MAX_PK_MTU    1500
typedef struct _PkBufferIndex {
    int             next;
    unsigned int    pkseq;
    unsigned int    pklen;
    char            pkbuf[_MAX_PK_MTU];
} PkBufferIndex;

#define _MAX_CMD_BUFLEN64     64
#define _MAX_CMD_BUFLEN128    128

//1smtp 2pop3 3qq 4msn 5ftp 6webmail  7���� 8web�˺� 9:SMTP�ռ���
#define CMDTYPE_SMTP      1
#define CMDTYPE_MAILTO    2
#define CMDTYPE_POPUSER   3
#define CMDTYPE_QQLONON   4
#define CMDTYPE_QQLONOFF  5
#define CMDTYPE_TELNETLONON  6
#define CMDTYPE_FTPLONON  7
#define CMDTYPE_FTPLONOFF 8
#define CMDTYPE_HTTPURL   9


#define CMDTYPE_FTPPUT  10
#define CMDTYPE_FTPGET  11


typedef struct _CMDHttpInfo {
	  int            nUrl;
	  char           cMatchRule;
	  unsigned short srvqosid;
    unsigned char  ruleaction;
	  char           vlink;
    uint64	       lBytes[2];        /* 0-�����ֽ���  1-�����ֽ��� */  
    unsigned short cService;         /* ����         */
    unsigned long  lCount;           /* ���ݰ������� */
    unsigned char  cDirect;          /* ���䷽��*/
} CMDHttpInfo;

typedef struct _CMDHeadIndex {
	  unsigned long  userid;           /* userid     */
	  unsigned char  mac[6];           /* mac     */
	  unsigned long  lSip[4];             /* ԴIP��ַ     */
    unsigned long  lDip[4];             /* Ŀ��IP��ַ   */
    unsigned short nSport;           /* Դ�˿ں�     */
    unsigned short nDport;           /* Ŀ��˿ں�   */
    unsigned char  cType;            /* Э��         */
    unsigned char  buftype;          /* Э��         */
    unsigned long  lStartTime;       /* ��ʼʱ��     */
    unsigned long  lLastTime;        /* ����޸�ʱ�� */
    char           pkbufkey1[_MAX_CMD_BUFLEN64];
    char           pkbufkey2[_MAX_CMD_BUFLEN64];
    char           pkbufkey3[_MAX_CMD_BUFLEN128];
    int            pkbufkey4;
    int            freenext; /*-1�൱��NULL*/
} CMDHeadIndex;

//�������ݹ켣�б� pop3
//vctype     int,               /*������������ 1smtp 2pop3 3qq 4msn 5ftp 6webmail  7���� 8web�˺š�*/
//vccon  pkbufkey1    varchar(48),        /*����������������*
//vcaction pkbufkey2   int,               /*�������ݶ��� 1logon 2logoff 3sendmsg 4sendfile 5��Ƶ 6��Ƶ 7Ӧ�� ��*/
//vcatt pkbufkey3    varchar(128)       /*�������ݸ�������*


typedef struct nasMylAdd_s {
	unsigned long myIp;
	int useFlag;
} nasMylAdd;

typedef struct msaAuthInfo_s {
   char         addomain[64];
   unsigned int httpmon;
   unsigned int ipreportmon;
   unsigned int httpreportmon;
} msaAuthInfo;

typedef struct msaPubInfo_s {
	  unsigned int  lRunning;
	  unsigned int  localIp[24][4]; //24�鱾��ip
	  int           timearea;
	  char          updateflag[32];     /*����λ��־ */
	  char          _dbname[128];
	  char          _dbuser[128];
	  char          _dbpass[128];
	  int           sysActive;
	  int           qosenable;
	  int           maxfuntonnum;
	  int           msaGeneralMin;
	  int           msaGeneralHour;
	  int           msaGeneralDay;
	  int           msaScheduleTime;
	  int           msaJJRTime;
	  unsigned int  maxdiskpnow;
	  unsigned int  maxdiskp;
	  msaOption     _msaOptionHead;
	  msaAdOption   _msaAdOption;
	  msaSec        _msaSecHead;
	  nasrulevid    _nasrulevidhead[_MAX_VIDRULE_NUM];
	  msaLinkInfo   _msaLinkInfo[_MAXDEVNUM];
	  nasPPOESession     ltPPOESession[66000];
	  nasAdmSession      admSession[MAX_ADMIN_SESSION];
	  conListType        pubMsgStr[MAX_SYSTEM_MSG];
	  int                defaultLan;    /*Ĭ������*/
	  FilterListHead     _FilterListHead;
	  msaTopSrv          topSrvName[MAX_TOP_SRVNUM]; 
	  unsigned int       lServiceNum;
	  msaService         ltService[MAX_SYS_SRVNUM]; 
	  msaSrvDefine       _msaSrvDefine[MAX_SRV_SYSDEFINENUM];//�������б�,ǰ�ڽ��������û�������񣬺���ȫ��ת��
	  nasschtime         _schtimelist[NAS_MAXSCH_NUM];
	  char               worktimesch[400];//ͳ�����ݵĹ���ʱ��
	  unsigned int       lastdipbufferresetTime;
	  unsigned int       lastuserhttpbufferresetTime;
	  unsigned int       lasthttpbufferresetTime;
	  nasjjrtime         _jjrtimelist[NAS_MAXJJR_NUM];
	  nasPortInfo        ltPortInfo[MAX_PORTNUM];
	  _pNetArea          ltNetArea[_MAXNETAREANUM];  /*ipv4������� */
	  _pNetArea          NetAreaCkeck[_MAXNETAREANUM];   /*ipv6���������  */ 
	  nasMylAdd          myAdd[20];        /*����������ip��ַ*/
	  nasAllInfo         _AllInfo;
	  nasVPathInfo			 _VPathList[_MAXVPATHNUM];
	  nasQosPathInfo		 _QosList[_MAX_QOSSTATIC_CHANEL];
	  nasGroupInfo	     _GroupList[_MAX_ALLGRPNUM];
	  nasPolicyInfo	     _PolicyList[_MAX_ALLPOLICY];
	  int                _Srvrulehead[_MAX_SRVRULE_NUM];
	  nasSrvRule         _Srvrulelist[_MAX_SRVRULE_NUM];
	  msaUserPolicy      _userPolicylist[_MAX_USERPOLICY_NUM];
    dbUserInfoHead     _dbUserInfoHead;
    shm_hash_link_dbusernamehead  _dbusernamehead; 
    shm_hash_link_dbuseriphead    _dbuseriphead; 
    shm_hash_link_dbusermachead   _dbusermachead; 
    shm_hash_link_onlineuserhead  _onlineuserhead;
    shm_hash_link_urlhead         _urlhashhead;
    shm_hash_link_TcpBufferhead   _tcpsessionhead;
    shm_hash_link_UserHttpBufferhead _userhttpbufferhead;
    shm_hash_link_HttpBufferhead  _httpbufferhead;
    shm_hash_link_DipBufferhead   _dipbufferhead;
    shm_hash_link_2SrvInfohead    _2SrvInfohead; 
    shm_hash_link_2IpPortInfohead _2IpPortInfohead; 
    msapkbufhead                  _msapkbufhead;
    msasrvrulehead                _srvrulehead;
}msaPubInfo;

#define _MAXPKLEN          1550
typedef struct msaBufferEntry_s {
	unsigned char userflag;
	unsigned int  vlink;
	char          dev[6];
	unsigned int  length;
	unsigned int  ssnid;
	char          pkbuf[_MAXPKLEN];
} msaBufferEntry;

typedef struct msaSSNControl_s {
    unsigned long  lSip[4];             /* ��ʼIP    */
    unsigned short nSport;           /* ��ʼport   */
    unsigned long  lDip[4];            
    unsigned short nDport;
    unsigned short cProt;             /* Э��*/           
    unsigned char  cFlag;             /* ������ĺ�*/
    unsigned char  cAction;           /* ������ĺ�*/
    unsigned short qoschanel0;
    unsigned short qoschanel1;        /* Э��*/  
    unsigned long  lLastTime;         /* ��ʼʱ�� */
    int            direct;            /* ���� */
} msaSSNControl;

typedef struct _shm_hash_link_Controlhead {
    unsigned int       bufptr;  /*��ͷ��ʼ��ƫ����*/
    unsigned int       bufsize;  /*��ͷ��ʼ��ƫ����*/ 
    unsigned int       conbufptr;  /*��ͷ��ʼ��ƫ����*/ 
    unsigned int       bufnum;
    int                freecontenthead;
    int                freecontenttail;           
    uint32             nownum;
} shm_hash_link_Controlhead;

/*hash index ����index�ֲ�*/
typedef struct _shm_hash_link_Controlindex {
    int           next; /*-1�൱��NULL*/
} shm_hash_link_Controlindex;

/*hash���ݶ���,���ݿ������*/
typedef struct _shm_hash_link_Control {
    int                next;
    msaSSNControl      item;
} shm_hash_link_Control;

#define _MAXPKBUFFERNUM    512
typedef struct msaKernelHead_s {
	unsigned long      running;
  unsigned long      banduplink;
  unsigned long      banddownlink;
  int                banddowndef;
  int                bandupdef;
  unsigned int       upbyteleft ; /*max qos chanels */
  unsigned int       downbyteleft ; /*max qos chanels */
  int                baozhengflagUp ; 
  int                baozhengflagDown;
  int                fragjinzhi; 
  int                fragtongdao;  
	msaBufferEntry     _BufferEntry[_MAXPKBUFFERNUM];
	shm_hash_link_Controlhead  _msaControlhead;
} msaKernelHead;


typedef struct nasIpHead_s {
	unsigned int  lSip[4];       /* ԴIP��ַ     */
	char     caSmac[6];        /* ԴMAC��ַ    */
	unsigned short nSport;     /* Դ�˿�       */
	unsigned int  lDip[4];       /* Ŀ��IP��ַ   */
	char     caDmac[6];        /* Ŀ��MAC��ַ  */
	unsigned short nDport;     /* Ŀ��˿�     */
	unsigned short    cTran;            /* ���ͷ��� 0--���� 1--����    */
	unsigned short    cProp;            /* Э��  6 UDP      17 TCP     */
	unsigned short    pppoesid;
	unsigned short    ident;
	unsigned int      ssnid[2];
	char         *defhomeurl;
	unsigned int defgroupid;
	unsigned int defpolicyid;
	unsigned int snmpindex;
	int          inetflag;
	unsigned int lTime;
	int          vlink;
} nasIpHead;

/*
*/
msaPubInfo  *_ltPubInfo;
ltDbConn     *G_DbCon; /*�������������̵����ݿ�����*/
msaKernelHead  *_bcKernelHead;
int      controlSocketFd;
int      udpcontrolSocketFd;
char     *G_DevName;
nasPortInfo    *_ltPortInfo;
nasDbUserInfo  *_ltDbUserInfoList;
shm_hash_link_HttpBuffer          *_ltHttpBuffer;
shm_hash_link_UserHttpBuffer      *_ltUserHttpBuffer;
SNMPINFOHEAD       *PubSnmpGroup;//ÿһ��ץ������һ��������Ӱ��

#define MAXSEMNUMS    13
#define MSASEMKEY     770123

#define SYSSEMID    0
#define USERSEMID   1
#define URLSEMID      2
#define TCPBUFSEMID   3
#define HTTPBUFSEMID  4
#define USERHTTPBUFSEMID  5
#define DIPBUFSEMID   6
#define SRVBUFSEMID  7
#define SSNSEMID      8
#define PKHEADSEMID   9
#define PKBUFSEMID    10
#define CMDBUFSEMID   11
#define IPPORTBUFSEMID   12

int  _Gsemid[MAXSEMNUMS];

typedef struct msasDir_s {
    char   caDirName[128];
    char   caDirPath[256];
    int    dirTime;    
} msasDir;

typedef struct jiffy_counts_t {
	unsigned long long usr,nic,sys,idle,iowait,irq,softirq,steal;
	unsigned long long total;
	unsigned long long busy;
} jiffy_counts_t;


typedef struct nasPostFileList_s {
    char     pOriginFile[128];   /* Դ�ļ�    */
    char     pType[64];          /* �ļ�����  */
    char     pOutFile[64];
    unsigned long lSize; 
    struct nasPostFileList_s *psNext;   
} nasPosFileList;

typedef struct nasPostDataHead_s {
    char           caBound[128];     /* caBound    */
    char           caHost[64];    /* ������    */
    char           caUrl[128];     /* ����URL   */
    char           caUser[64];     /* ����URL   */
    unsigned long  lTime;          /* ʱ��      */
} nasPostDataHead;

typedef struct nasPostDataContent_s {
    unsigned long  lBytes;         /* ���ֽ���  */
//    char           *pValue;        /* ��������  */
    int            iSum;           /* ��������  */
    nasPosFileList  *psFileList;    /* �ļ��б�  */
} nasPostDataContent;


typedef struct DbMsgHead_s{
	  uint32   lMaxBytes;
    uint32   lBytes;      /*  Message Bytes include the head      */
    char     character[24];
    uint32   lSendTime;   /*  Send Time                           */
    uint8    nVersion;    /*  Message Version                     */
    uint8    cCrypt;      /*  0-- No Crypt 1--DES  0-- baochuang  */
    char     strFile[128];//�洢������λ��
    uint8    lAttNum;   
    uint32   lMsgSize;  
} DbMsgHead;

typedef struct DbMsgAtt_s{
    char           attFileName[64];     //�洢����������
    char           attDispName[64];     //�洢��������ʾ����
    uint32         lAttSize;   /*  Send Time   */
} DbMsgAtt;

#define DB_MSG_VERSION    1


lt_shmHead *msacreateShmMem(unsigned int intShmKey,unsigned int intMaxShmSize);
lt_shmHead *msaopenShmMem(unsigned int intShmKey,unsigned int intMaxShmSize);
int msacloseShmMem(lt_shmHead *lt_MMHead);

/*nasPubUtil.c*/
unsigned int getUserUrlHash(unsigned int userid,unsigned int userip, unsigned int  urlhash);
unsigned int get3wordsHash(unsigned int a, unsigned int b, unsigned int c);
unsigned int getMacHash(unsigned char *caMac);
unsigned int  msa_ssn_hash(unsigned int sip, unsigned int  dip,unsigned short  sport,unsigned short dport,int  protocol);
unsigned int getStringHash(unsigned char *caStr,unsigned int strLen);
int msaInitPubInfo(lt_shmHead *lt_MMHead);
int msaInitPubVar(lt_shmHead *lt_MMHead,lt_shmHead *kernel_MMHead);
int ltWebMsgErr(char *errorMsg,int confd,ltMsgHead *ltMsgPk);
int logWrite(ltMsgHead *ltMsgPk,char *msg,int msgtype);
int nasTimeFormat(char *pFormat,long lTime);
int checkRight(int confd,ltMsgHead *ltMsgPk,int right);
int strgb2utf8(char *cpInput,char *cpOut,int iInputLen);
int strutf82gb(char *cpInput,char *cpOut,int iInputLen);
int pubGetName(char *caKey,int start,int end,char *caGetName);
int dirtimecmp(msasDir* a,msasDir* b);
msasDir* mydirlist(char* dir,int* len);
int nasTimeGetDate(char *cDate,long lTime);
unsigned long nasCvtLongTime(char *caSdate,char *caTime);
int nasTimeLongFormat(char *pFormat,long lTime);
int nasCvtStime(unsigned long lTime,char *caDate,char *caTime);
char *nasCvtMac(unsigned char *caMac,char *caMacStr);
int nasCvtMacI(unsigned char *caMacStr,unsigned char *caMac);
int msaReportList(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int msaDataCenetrDownLoad(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int sysHasBeenActive();
int  ReadCpu(char *cpuName);
int readDisk(char * DiskInfo);
int ReadEth0Mac(char *strHadd);
void striptrailingwhitespace(stralloc *sa);
lt_shmHead *msaopenBigBootMem(unsigned int intMaxShmSize);
int msacloseBigBootMem(lt_shmHead *lt_MMHead);
int msaCreatSemLock(lt_shmHead *lt_MMHead);
char nasPostX2C(char *what);
int nasTimeGetTime(char *cTime,long lTime);
char *time2str(int itime);
int msaShowIpMap(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);	
int myFastMemmem(unsigned char * a, int alen, unsigned char * b, int blen);
int activesys(char *strCodeInput,char *errmsg);
int nasTimeLongFormatDay(char *pFormat,long lTime);

DbMsgHead *dbMsgInit(unsigned long  lMaxBytes);
int dbMsgAdd_s(DbMsgHead **psMsgHead0,char *pVarName,char *pVarValue);
int dbMsgAdd_v(DbMsgHead **psMsgHead0,char *pVarName,char *pVarValue, unsigned long lLen);
int dbMsgAdd_Att(DbMsgHead **psMsgHead,DbMsgAtt *pAtt,unsigned int attindex);
char *dbMsgGetVar_s(DbMsgHead *psMsgHead,char *pVarName);
char *dbMsgGetVar_v(DbMsgHead *psMsgHead,char *pVarName,unsigned long *lBytes);
DbMsgAtt *dbMsgGet_Att(DbMsgHead *psMsgHead,unsigned int attindex);
void dbMsgFree(DbMsgHead *psMsgHead);
int dbMsgAllRecordPrint(char *dbdatafile,int startp);
char  *dbMsgAllRecordSearch(char *dbdatafile,unsigned char *searchCon,int conlen,int *allnum,int *searchnum);
char  *dbMsgPrintMail(char *dbdatafile,int startp,char *strSet);
char  *dbMsgPrintForm(char *dbdatafile,int startp,char *strSet);

int nasMailCtlMailSend(char *pFrom,char *pTo,char *pSub,char *pCon);
int nasMailCtlStrStr(char *pCont,char *pSub);

char *FormSearchJson(char *sDate,char *searchSaveFile,int startline,int limitline,int allcount);
char *MailSearchJson(char *sDate,char *searchSaveFile,int startline,int limitline,int allcount);
int dbMsgDaySearchForm(char *sDate,char *searchSaveDir,unsigned char *searchCon,int conlen,int *allnum,int *searchnum);
int dbMsgDaySearchMail(char *sDate,char *searchSaveDir,unsigned char *searchCon,int conlen,int *allnum,int *searchnum);


int msaregist(char *xkey,int registday,char *strCodeOut);
int msaactivesys(char *strCodeInput,char *errmsg);
int sysHasBeenActive();

int msaOpenSemLock();
int msaDelSemLock();
int ltPassIsOk(char *InStr);
int utf8_getsome(const char *cp, int somelen);
int msaSetLocalIp(char *strIp);
unsigned char* urldecode(unsigned char* encd,unsigned char* decd);
unsigned char* strstrdecode(unsigned char* strin);
unsigned char* strstrencode(unsigned char* strin,char *strout);
/*vid*/
int FindVid(VIDINFOHEAD *_vidinfohead,char *strVid);
int nasInitVidList(msaPubInfo *ltPubInfo);

/*msahttputil.c*/
int nasGetHttpHead(char *pIn,int iLen,char *pHost,char *pUrl,int *intRange,char **pCon);
int msaGetConTypeIndex(char *strContype,int intlen);
int nasGetHttpHead1(char *pIn,int iLen,char *strconType,char **pCon);
int nasStrGetVar(char *pIn,int inLen,char *pVar,char *pValue,int outLen);
int nasStrGetUrl(char *pIn,int iLen,char *caUrl,int outlen);
int nasHttpUrlLogFilter(char *pUrl,int loglevel);
int nasHttpHtml(char *pUrl);
int nasGetHttpHeadS(char *pIn,int iLen,char *pHost,char *pUrl);

/*msaService.c*/

int updateTmpDipBuffer(msaPubInfo  *ltPubInfo,unsigned int ldip[4],unsigned int lService);
	
int msaInitPortInfo(msaPubInfo  *ltPubInfo);
int nasInitTopService(msaPubInfo  *ltPubInfo);
int msaInitServiceArray(msaPubInfo  *ltPubInfo);
int  msaGet2Srv(unsigned int  lDip[4], unsigned short nDport,int  cType,unsigned int lTime);
int msaGetServiceFrom0(unsigned long cProt, unsigned short nPort,unsigned short nLPort,unsigned short nDirect,char *pBuffer,unsigned long lBytes,unsigned int lDip[4],unsigned int lTime,nasTcpBuffer  *psTcpBuffer);

int msaGetServiceFromHttp(int oldnType,unsigned long cProt, unsigned short nPort,
unsigned short nLPort,unsigned short nDirect,char *pBuffer,unsigned long lBytes,char *caHost,char *caUrl,
int *intRange,char *strConType,int *iContentFlag,unsigned int *urlHashZhi,char **ppCon);

int nasCheckPostFile(int oldtype,nasTcpBuffer *psTcpBuffer,char  *pBuffer,unsigned long lAck,unsigned long lBytes);

int nasIsLimitSrv(
		nasOnlineUserInfo  *psUserInfo,
		nasDbUserInfo *tmpDbUserInfo,
		nasIpHead    *psIpHead,
		nasTcpBuffer  *psTcpBuffer,
		char           *caHost,
    char           *caUrl,
    unsigned int   iContentFlag);

/*msaIpHost.c*/
int nasInitIpHostInfo(msaPubInfo *ltPubInfo);

/*msaIpArea.c*/
nasOnlineUserInfo *nasCheckNetArea(msaPubInfo *ltPubInfo,nasIpHead *psIpHead,int *iFlag0);
nasOnlineUserInfo  *nasGetBaseUser(nasIpHead *psIpHead,int *iFlag,int getflag,char *caName);
int ltFindHostInfo(unsigned long lip[4],int *netflag,unsigned int *snmpindex,char **homeurl,unsigned int *groupid,unsigned int *policyid);
int  nasSetMoreFlag(nasOnlineUserInfo  *psUserInfo,nasDbUserInfo *tmpDbUserInfoList);
int ReadIpMacSNMP(char *strHadd,unsigned int lip,unsigned int snmpindex);
int  initIpMacSnmp(int snmpindex,char *snmpoid,char *snmpver,char *snmpip,char *snmpc);
int  nasSetMoreFlagS(nasDbUserInfo *tmpDbUserInfoList,int *ipmacflag);

/*msacontrol.c*/
int Open_Raw_Socket();
void nasAlertRedirect(const unsigned char *pBuffer,int capLen,char *myurl);
void nasAutRedirect(const unsigned char *pBuffer,int capLen,char *caHost,char *caUrl,nasIpHead *sIpHead,int caType);
int send_udppacket(char*packet_buf,int packet_buf_size);
void nasAlertRedirectURL(const unsigned char *pBuffer,int capLen,char *myurl);

/*dbUserLib.c*/
int msaInitDbUserList(msaPubInfo  *ltPubInfo);
int msaInitDbUserListMem(msaPubInfo  *ltPubInfo);
int msaHashInsertDbUser(msaPubInfo  *ltPubInfo, nasDbUserInfo *item);
int msaHashDelDbUser(msaPubInfo  *ltPubInfo, nasDbUserInfo *item);
nasDbUserInfo *msaLookUpDbUserById(msaPubInfo  *ltPubInfo,unsigned int userid );
nasDbUserInfo *msaLookUpDbUserByIp(msaPubInfo  *ltPubInfo,unsigned int ipadd[4] );
nasDbUserInfo *msaLookUpDbUserByName(msaPubInfo  *ltPubInfo,char *username );
nasDbUserInfo *msaLookUpDbUserByMac(msaPubInfo  *ltPubInfo,char *caMac );
unsigned int msaGetFreeUserid(msaPubInfo  *ltPubInfo);
int msaHashDelDbUserById(msaPubInfo  *ltPubInfo,unsigned int userid);
nasDbUserInfo *msaNewInsertDbUser(msaPubInfo  *ltPubInfo, nasDbUserInfo *item);

int msaDeleteDbUserName(msaPubInfo  *ltPubInfo,unsigned char *username);
msaDbUserName * msaHashInsertDbUserName(msaPubInfo  *ltPubInfo, msaDbUserName *item);
msaDbUserIp * msaHashInsertDbUserIp(msaPubInfo  *ltPubInfo, msaDbUserIp *item);
int msaDeleteDbUserIp(msaPubInfo  *ltPubInfo,unsigned int ipadd[4],unsigned int userid);
msaDbUserMac * msaHashInsertDbUserMac(msaPubInfo  *ltPubInfo, msaDbUserMac *item);
int msaDeleteDbUserMac(msaPubInfo  *ltPubInfo,unsigned char *caMac,unsigned int userid);
int msaKeepDbUser(msaPubInfo  *ltPubInfo);
int msaResoreDBUser(msaPubInfo  *ltPubInfo);

/*OlineUserLib.c*/
int msaInitOnlineUserHash(msaPubInfo  *ltPubInfo);
nasOnlineUserInfo *msaHashInsertOnlineUser(msaPubInfo  *ltPubInfo, nasOnlineUserInfo *item);
nasOnlineUserInfo *msaHashLookUpOnlineUser(msaPubInfo  *ltPubInfo,unsigned int ipadd[4]);
int msaDeleteOnlineUser(msaPubInfo  *ltPubInfo,unsigned int ipadd[4]);
int msaDeleteOnlineUserById(msaPubInfo  *ltPubInfo,unsigned int userid);
int msaUserOffLine(nasOnlineUserInfo *msaOnlineUser,nasDbUserInfo *tmpDbUserInfo,FILE *fp,char *sDate);
int msaResoreUser(msaPubInfo  *ltPubInfo);
int KeepOnlineUserDate(msaPubInfo  *ltPubInfo);
nasOnlineUserInfo *msaHashLookUpOnlineUserByID(msaPubInfo  *ltPubInfo,unsigned int userid);

/*msaUrllist.c*/
nasUrlList *msaHashLookUpUrlIndex(msaPubInfo  *ltPubInfo,char *strurl,int urlHashIndex);
int nasInitUrlList(lt_shmHead *lt_MMHead);
nasUrlList *msaCheckInsertUrl(msaPubInfo  *ltPubInfo, nasUrlListTmp *item);
int msaReInitUrlHash(msaPubInfo  *ltPubInfo);
nasUrlList *msaCheckInsertUrlLater(msaPubInfo  *ltPubInfo, nasUrlListTmp *item);

/*msaTcpSession.c*/
int msaInitTcpBufferHash(msaPubInfo  *ltPubInfo);
nasTcpBuffer *msaHashInsertTcpBuffer(msaPubInfo  *ltPubInfo,unsigned int ssnhash, nasTcpBuffer *item);
nasTcpBuffer *msaHashLookUpTcpSession(msaPubInfo  *ltPubInfo,unsigned int ssnhash, nasTcpBuffer *item);

/*msaHttpBuffer.c*/
int msaInitUserHttpBufferHash(msaPubInfo  *ltPubInfo);
nasUserHttpBuffer *msaHashInsertUserHttpBuffer(msaPubInfo  *ltPubInfo,nasUserHttpBuffer *item);
nasUserHttpBuffer *msaHashLookUpUserHttpBuffer(msaPubInfo  *ltPubInfo,char *caHost);

int msaInitHttpBufferHash(msaPubInfo  *ltPubInfo);
nasHttpBuffer *msaHashInsertHttpBuffer(msaPubInfo  *ltPubInfo,nasHttpBuffer *item);
nasHttpBuffer *msaHashLookUpHttpBuffer(msaPubInfo  *ltPubInfo,char *caHost);
int msaHashLookUpHttpBufferIndex(msaPubInfo  *ltPubInfo,char *caHost,int urlHash);
int msaHashInsertHttpBufferIndex(msaPubInfo  *ltPubInfo,nasHttpBuffer *item,int urlHash);
int msaHashLookUpUserHttpBufferIndex(msaPubInfo  *ltPubInfo,int hostIndex,int userid,int urlHash);
int msaHashInsertUserHttpBufferIndex(msaPubInfo  *ltPubInfo,nasUserHttpBuffer *item,int urlHash);

/*msaDipBuffer.c*/
int msaInitDipBufferHash(msaPubInfo  *ltPubInfo);
nasDipBuffer *msaHashInsertDipBuffer(msaPubInfo  *ltPubInfo,nasDipBuffer *item);
nasDipBuffer *msaHashLookUpDipBuffer(msaPubInfo  *ltPubInfo,unsigned int ldip[4]);
//int msaDeleteDipBuffer(msaPubInfo  *ltPubInfo, unsigned int ldip);
int updateDipBuffer(msaPubInfo  *ltPubInfo,unsigned int ldip[4],unsigned int lTime,unsigned int sLen,unsigned int lCount,int *newDipFlag);
int nasInitIpSrvList(msaPubInfo  *ltPubInfo);

/*msa2SrvInfo.c*/
int msaInit2SrvInfoHash(msaPubInfo  *ltPubInfo);
//nas2SrvInfo *msaHashInsert2SrvInfo(msaPubInfo  *ltPubInfo,nas2SrvInfo *item);
nas2SrvInfo *msaHashLookUp2SrvInfo(msaPubInfo  *ltPubInfo,unsigned int lDip[4],unsigned int nDport,unsigned int cType);
//int msaDelete2SrvInfo(msaPubInfo  *ltPubInfo, unsigned int lDip,unsigned int nDport,unsigned int cType);
int msaHashInsert2SrvInfoI(msaPubInfo  *ltPubInfo,nas2SrvInfo *item);

int msaInit2IpPortInfoHash(msaPubInfo  *ltPubInfo);
nas2IpPortInfo *msaHashInsert2IpPortInfo(msaPubInfo  *ltPubInfo,nas2IpPortInfo *item);
nas2IpPortInfo *msaHashLookUp2IpPortInfo(msaPubInfo  *ltPubInfo,unsigned int lSip[4],unsigned int nSport,unsigned int cType);


/*msaInitRule.c*/
int nasInitRule(msaPubInfo *ltPubInfo);
int srvRuleDIpFind(nasSrvRuleDIp  *ltSrvRuleDIp,unsigned long  lDip[4],unsigned long left, unsigned long right);
int ruleIpFind(nasRuleIp  *ltRuleIp,unsigned long  lSip[4],unsigned long left, unsigned long right);
//int ruleUrlFindSMTP(nasRuleUrl  *ltWebRuleUrl,char *caHost,unsigned long left, unsigned long right);
//int ruleUrlFind(nasRuleUrl  *ltWebRuleUrl,char *caHost,char *caUrl,unsigned long left, unsigned long right,int contentflag,int *ruleaction);
//int rulePostFind(nasRulePost  *ltWebRuleUrl,char *caUrl,unsigned long left, unsigned long right);
//int ruleUrlFindType(nasRuleType  *ltWebRuleUrl,char *caUrl,unsigned long left, unsigned long right);
//int ruleUrlFindConType(nasRuleType  *ltWebRuleUrl,char *caConType,unsigned long left, unsigned long right);
int nasHttpImgFilter(char *pUrl);
int nasInitUserPolicy(msaPubInfo *ltPubInfo);

/*msafilter.c*/
int nasMailFilterInit(msaPubInfo * ltPubInfo);

/*msaPkBuffer.c*/
int msaInitPkBuf(msaPubInfo  *ltPubInfo);
int  msaInsertCMDBuf(msaPubInfo  *ltPubInfo,  unsigned char  *mac,
unsigned long  lSip[4],unsigned long  lDip[4],unsigned short nSport,
unsigned short nDport,unsigned char  cType,unsigned char  buftype,
char *pkbufkey1,unsigned int keyLen1,
char *pkbufkey2,unsigned int keyLen2,
char *pkbufkey3,unsigned int keyLen3,
int  pkbufkey4,
unsigned int lTime,
unsigned int userid,
unsigned int lStartTime);
int  msaInsertPkBuf(msaPubInfo  *ltPubInfo, 
unsigned long  lSip[4],unsigned long  lDip[4],unsigned short nSport,
unsigned short nDport,unsigned char  cType,unsigned char  buftype,unsigned int seq,
char *pkbuf,unsigned int pLen,unsigned int lTime,unsigned int userid);
int  msaUpdatePkBuf(msaPubInfo  *ltPubInfo,unsigned int writeindex,char *pkbuf,unsigned int pLen, unsigned int seq,unsigned int lTime);
int  msaUpdatePkBufHead(msaPubInfo  *ltPubInfo,unsigned int writeindex,char *pkbuf,unsigned int pLen, unsigned int seq,unsigned int lTime);
/*uplodproclib.c*/
nasPostDataContent *nasReadPostData(char *caFile,char *pOutFile,int *mailflag,nasPostDataContent *psValue,nasPostDataHead *psUploadHead,int *mycharset,DbMsgHead **psMsgHead,int *varnums);
nasPostDataContent *nasReadPostDataMem(char *msgCon,int msglen,char *pOutFile,int *mailflag,nasPostDataContent *psValue,nasPostDataHead *psUploadHead,int *mycharset,DbMsgHead **psMsgHead,int *varnums);
int nasPostDataFree(nasPostDataContent *psValue);

/*msaqos.c*/
int msaInitBandList(msaPubInfo  *ltPubInfo,msaKernelHead *bcKernelHead);
int msaSetBand(nasOnlineUserInfo  *ltUserInfo,int action);

/*msapkprocutil.c*/
int nasUtlDoSmtp(nasOnlineUserInfo *psUserInfo,
                nasTcpBuffer *psTcpBuffer,
                unsigned long lAck,
                unsigned long lBytes,
                char     *pBuffer,
                unsigned char  *sp,unsigned int sLen,
                unsigned int lTime);
int nasUtlDoPop3(nasOnlineUserInfo *psUserInfo,
                nasTcpBuffer *psTcpBuffer,
                unsigned long lAck,
                unsigned long lBytes,
                char     *pBuffer,unsigned int lTime);                
int nasUtlDoUpload(nasOnlineUserInfo *psUserInfo,
                nasDbUserInfo *dbUserInfo,
                nasTcpBuffer *psTcpBuffer,
                unsigned long lAck,
                unsigned long lBytes,
                char     *pBuffer,
                char     *pHost,
                char     *pUrl,
                unsigned char  *sp,unsigned int   sLen,unsigned int lTime);
                
int nasUtlDoYahoo(nasOnlineUserInfo *psUserInfo,
                nasTcpBuffer *psTcpBuffer,
                unsigned long lAck,
                unsigned long lBytes,
                char     *pBuffer,
                unsigned char  *sp,unsigned int   sLen,unsigned int lTime);

int nasUtlDoFeiXin(nasOnlineUserInfo *psUserInfo,
                nasTcpBuffer *psTcpBuffer,
                unsigned long lAck,
                unsigned long lBytes,
                char     *pBuffer,
                unsigned char  *sp,unsigned int   sLen,unsigned int lTime);
                
int nasUtlDoFtp(nasOnlineUserInfo *psUserInfo,
                nasTcpBuffer *psTcpBuffer,
                unsigned long lAck,
                unsigned long lBytes,
                char     *pBuffer,
                unsigned char  *sp,unsigned int   sLen,unsigned int lTime);        
                
int nasUtlDoFtp226(nasOnlineUserInfo *psUserInfo,
                nasTcpBuffer *psTcpBuffer,
                unsigned long lAck,
                unsigned long lBytes,
                char     *pBuffer,
                unsigned char  *sp,unsigned int   sLen);
                
int nasUtlDoFtpPASV(nasOnlineUserInfo *psUserInfo,
                nasTcpBuffer *psTcpBuffer,
                unsigned long lAck,
                unsigned long lBytes,
                char     *pBuffer,
                unsigned char  *sp,unsigned int   sLen);  
                     
int nasUtlDoMsn(nasOnlineUserInfo *psUserInfo,
                nasTcpBuffer *psTcpBuffer,
                unsigned long lAck,
                unsigned long lBytes,
                char     *pBuffer,
                unsigned char  *sp,unsigned int   sLen,unsigned int lTime);     
                                                    
int nasUtlDoQQUdp(nasOnlineUserInfo *psUserInfo,
                nasTcpBuffer *psTcpBuffer,
                unsigned long lAck,
                unsigned long lBytes,
                char     *pBuffer,
                unsigned char  *sp,unsigned int   sLen,unsigned int lTime); 
                
int nasUtlDoQQTCP(nasOnlineUserInfo *psUserInfo,
                nasTcpBuffer *psTcpBuffer,
                unsigned long lAck,
                unsigned long lBytes,
                char     *pBuffer,
                unsigned char  *sp,unsigned int   sLen,unsigned int lTime);  
                                
int nasUtlDoDNS(unsigned long lBytes,char     *pBuffer);            
     
int nasUtlDoQVOD(nasOnlineUserInfo *psUserInfo,
                nasTcpBuffer *psTcpBuffer,
                unsigned long lAck,
                unsigned long lBytes,
                char     *pBuffer,
                unsigned char  *sp,unsigned int   sLen,unsigned int lTime); 
                               
/**/
int msaControlBuffer(msaKernelHead  *kernelPubInfo, msaSSNControl *item,unsigned int ssnindex);
int msaInitSSNBufferHash(msaKernelHead  *kernelPubInfo);
int nasInitUrlDipSrvList(msaPubInfo  *ltPubInfo);

/*srv-admin.c*/
int msaShowAdminLogon(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int msaAdminLogon(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int msaAdminLogout(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int msaShowTopview(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int checkoutShowpage(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);


int groupmanager(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int torolemanager(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int roleedit(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int roleupdate(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int toroleadd(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int roleadd(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int checkTimeOut(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int toadminadd(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int adminadd(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int ltadminlist(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int adminlist(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int adminedit(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int adminupdate(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int sysconfshow(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int sysconfset(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
/*srv-manager.c*/
int msaAdminUserList(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int msaAdminAction(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int msaAdmuserList(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int msaCheckOutAdmin(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int msaAdmlog(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int msaSysReset(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int msaSysShutdown(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);

int ltnetareaaction(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int ltnetarealist(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int ltapplynetArea(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);

int ltportinfolist(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int ltportinfoaction(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int ltapplyportinfo(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);

int ltappFunctionok(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int ltappFunction(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int msamailGroup(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int ltmailfilteraction(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int ltmailfilterlist(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int msaShowMail(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int msaformGroup(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int ltformfilteraction(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int ltformfilterlist(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int msaShowForm(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);


int ltschinfolist(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int ltaddsch(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int ltupdatesch(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int ltdelsch(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int ltjjrinfolist(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int ltaddjjr(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int ltupdatejjr(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int ltdeljjr(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int lttimesetting(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int lttimeok(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int lttimeset(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int msaRout(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int ltformlevelok(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int ltformlevel(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int ltmaillevelok(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int ltmaillevel(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
//int msaUrlSortList(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
//int msaUrlSortOK(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
////int msasrvlist(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
////int ltSrvlist(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
////int ltSrvaction(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
////int msaShowSrv(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);

int msaformOneGroup(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int ltformOnefilteraction(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int ltformOnefilterlist(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int msaShowFormOne(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int creatMsakey(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);


int addsysconf(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int policytemplateJsonStore(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);

int ltonlinecheck(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int setsysconf(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int viewsysconf(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int defaultfile(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int alertWrite(ltMsgHead *ltMsgPk,char *msg,int msgtype);
/*srv-group.c*/

int msaGroupAction(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int msaPolicyTree(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int msaPolicyAction(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int msaShowClientList(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int msaClientList(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int msaGroupTree(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);

/*srv-userexport.c*/
int msaAccoutShowPage(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int msaAccountExport(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int msaGroupExportShowPage(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int msaGroupSearchList(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int msaGroupDataExport(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);

/*srv-userimport.c*/
int userimport(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int groupimport(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);

/*srv-aduser.c*/
int ltadvarconfig(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int ltadvarconfigok(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int ltadtree(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int  nasinportaduser(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int  nasinportldapuser(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int ltldaptree(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int ltldapvarconfigok(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int ltldapvarconfig(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);

int msaSetRadius(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int msaUDRadius(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);

/*srv-url.c*/
int lturlsortlist(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int lturlsort(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int ltupdateurlsort(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int ltsaveurlsort(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int msaUpdateType(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int msaUpdateIP(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int msaUpdateArea(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int msaUpdateDNS(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int ltupdateurlType(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int ltreseturlsort(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);

/*srv-bushu.c*/
int packagelist(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int naspackageok(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int ltupsysok(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int msaEquipment(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int msaVLanListAction(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int msaAddVlanAction(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int msaApplyAction(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int vserver(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);//�������������ҳ��
int ltVPSok(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);//�������������
int ddnsset(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);//����DDNS����ҳ��
int ltDDNSok(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);//����DDNS����
int ltappPage(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int ltsysnet3conf(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int ltsysnet5conf(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int ltsysnet6conf(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int ltsysnetconfok(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);

int ltnetconnecttype(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int ltdisposition(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);	
int msaLoginDdns(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
/*����*/
int netconnecttype(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int disposition(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int sysnet3conf(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int sysnet6conf(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int sysnetconfok(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
//srv-ruleSimp.c
int showServiceSimp(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int showRuleSrvSimp(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int showEditServiceSimp(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int showUserPolicy(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int showPolicyTemplate(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
//srv-vpn.c
int tovpnsetting(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int vpnsetting(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int tovpnonlineuser(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int vpnonlineuser(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);



//srv-rule.c
int showEditRuleSrv(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int msaEditRuleSrv(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int addRuleSrv(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int showRuleSrv(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int msaSrvRulesrvList(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);

int showService(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int addService(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);//���ӹ���
int showEditService(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);//���ӹ���ҳ��
int msaEditSrvRule(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);

int msaSrvRuleList(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int msaEditWebpost(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int msaEditWeburl(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int msaEditip(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);

int ShowSelectUserTree(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int ruleGroupUserlist(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int serviceUserlist(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int addruleuser(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);

int ShowUrlSort(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int ShowAddress(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int editkeyword(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int msaltServiceTree(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int showServicePolicy(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);

int nasAppRule(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int msaRuleSrvTree(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);

int msaDownPrio(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int msaUpPrio(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);

/*srv-nowview.c*/
int msaNowSrvList(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);

int msashowxtzy(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int msaNowGroupList(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int msaAsyncTree(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);

int msaMDip(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int msaWebListInfo(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int msaAsyncTree(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);


int msaNowSrvruleList(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int msaToSrvRule(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int msaRuleHtml(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);

int msaNowQosList(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int msaQosDetailList(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int msaQosDetail(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);

int msaNowPathList(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int msaPathDetail(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int msaPathDetailList(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);

int msaGroupTreeView(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int msa24qushi(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);

int msaGroupDetail(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int msaGroupDetailList(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);




/*srv-nowconnect.c*/
int ltconquery(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int msaNowConectInfo(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);

/*srv-nowviwuser.c*/
int msaShowOnlineUser(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int msaonlineuser(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int msaUsersrvPage(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int msaUserSrvList(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int msaSetOnineUserLock(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);

/*srv-userpolicy.c*/
int msaListUserPolicy(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int msaUpdatePrio(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int msaAddPrio(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int msaEditPrio(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int showPolicyApply(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);

int msaGroupToPageTreeView(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int msaPiLiangAppPolicy(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int msaPolicyToPageTree(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int msaServiceToPageTree(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);

/*srv-user.c*/
int msaTermInfoView(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int msaShowAddClient(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int msaTerminfoAdd(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int msaTerminfoUp(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int msaUpdatePwd(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int msaUpdateGroup(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int msaGroupInport(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int msaServiceTree(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);

/*srv-auth.c*/
int msashowlogonpage(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int msauserlogonnormal(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int msauserchpass(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int msauserlogout(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int msagetsetuser(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int nasmsauth(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int msasuperlogon(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int msauserlogouthtml(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);

/*srv-qos.c*/
int ltqosdownlink(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int ltupdateqos(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int lteditqos(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int ltbandlink(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int ltbandlinkok(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int ltqoslist(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int ltqosupdate(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);

/*srv-sysclean.c*/
int sysclean(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int msaCleanAction(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int msaStatusAction(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);

/*srv-firewall.c*/
int showFWrulepg(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int addFWrule(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int msaFWruleList(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int editPWpage(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int appFireWallRule(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);

/*srv-route.c*/
int msaroutsetinglink(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int msaroutseting(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);

/*srv-keyword.c*/
int videntityFilter(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int msasecurityset(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int msasecurityLink(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int Apprules(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);

//srv-exportpackage.c
int ltmsamailExport(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int ltMailExportRunCheck(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int ltmsamailIndex(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int ltmsamailHTML(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int ltmsaformExport(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int ltmsaformIndex(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int ltmsaformHTML(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int ltmsamailExcelIndex(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int msaformExcelExport(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int ltFormExportRunCheck(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);


//srv-exportpackage.c
int msaImDownLoad(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int msaVcDownLoad(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int msaFileDownLoad(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int msaSearchKeyDownLoad(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
char *mailNodeJson(char *sDate,char *searchSaveFile,char *tmpdir,int *index);
int msaMailDownLoad(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
char *FormNodeJson(char *sDate,char *searchSaveFile,char *tmpdir,int *formindex);
int msaFormDownLoad(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int msaReadProccess(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int msaDataCenetrDownLoadMore(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);

//srv-exportpackage.c
int ltsysregist(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int ltsysregistok(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int nasUploadUrl(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int updatereportlist(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);

/*srv-report-pageoption.c*/
/*
MSA:��������
				����ģ��
						�½�����ģ��
����:���ӵ�����ģ��ҳ����ú���
*/
int msareporttemplate(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
//�½�����ģ��ȷ���ύ����
int reporttemplate(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
//���Ѷ��屨��ģ��
int toreporttemplatelist(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
//�鿴ģ�庯��
int reporttempledit(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
//�����ģ�屨��
int templatereportlista(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
//�Զ����ɵı����б�
int toautoreportlist(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);

//�Ѷ��屨��ģ�� �������ɱ���
int reportcreate(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
//ģ���޸ĵ��ú���
int reporttemplateupdate(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
//�������ɱ��� �����б�����������ú���
int templatereportlist(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int dayreportcreate();
int weekreportcreate();
int msaSummaryReport(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);


/*srv-report-sortreport.c*/
/*���򱨸�ҳ�����Ӻ���*/
int msasortreportlink(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
/*���򱨸����ɺ���*/
int msasortreport(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);

/*srv-report-comparereport.c*/
/*���򱨸�ҳ�����Ӻ���*/
int msacomparereportlink(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int msacompareFlowAjaxSubmit(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);

/*srv-report-userline.c*/
/*
MSA:��������
				�û�����
����:���߱��洴�����ú���
*/
int msaReportUserLineAjaxSubmit(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);


/*srv-report-webline.c*/
/*
MSA:��������
				WEB����
����:web���߱��洴�����ú���
*/
int msaReportWebLineAjaxSubmit(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);


/*srv-report-srvline.c*/
/*
MSA:��������
				��������
����:�������߷������洴�����ú���
*/
int msaReportSrvLineAjaxSubmit(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
/*
MSA:��������
���ܣ����ɵı����б���ʾ
*/
int msaReportRecordJson(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
/*
MSA:��������
���ܣ����ɵı����б�JSONstore���캯��
*/
int msaReportJsonStore(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int msaReportShowPage(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);


/*srv-report-flowline.c*/
/*
MSA:��������
				��������
����:�������߷������洴�����ú���
*/
int msaReportFlowLineAjaxSubmit(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);

/*srv-report-linereport.c*/
/*
MSA:��������
				ϵͳ����
����:ʵ�ֱ��洴���ĺ������� sysstep1->sysstep5*/
int msaReportSysLineAjaxSubmit(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
/*
MSA:�������� �������
����:ʵ��������ձ��洴���ĺ������� riskstep1->riskstep5
*/
int msaReportRsikLineAjaxSubmit(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
/*
MSA:�Ʒѱ���
*/
int jfreport(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);

int msaupdateProgress(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);

//�������ƱȽϱ���
int msacompareFlowAjaxSubmit(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);



/*srv-data-data.c*/

int msaAlertList(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int ltwblogshowwebquery(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int ltwblogquery(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);

int msaIfCreatXlsOK(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);//�ж�xls�ļ��Ƿ�����
/*
 MSA:��������
     		 ������ʼ�¼����
 ����:��������ѯ����������|ֱ�ӵ�������ʱ����������
 */
int msaipbacksearch(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
/*
MSA:��������
    ��ϸ���ʼ�¼
        ������ϼ�¼����
����:��¼�������������룬�Լ�gird�����¼ɾ������
*/
int msaNewSearchList(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
/*
 MSA:��������
     ��ϸ���ʼ�¼
         ������ʼ�¼
         ��Ϸ��ʼ�¼
         HTTP���ʼ�¼
 ���ܣ�ҳ�����ӵ��ú���
 */
int msaShowAccessList(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
/*
 MSA:��������
     ������ʼ�¼����
     ������ϼ�¼����
     http���ʼ�¼����
 ����:ҳ�����ӵ��ú���
 */
int msaShowAccessSearch(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
/*
 MSA:��������
     ��ϸ���ʼ�¼
     		 ������ʼ�
 ����:�б���ʾ����ʱ����ʼ�¼���ú���
 */
int msaAccessList(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
/*
MSA:��������
    ��ϸ���ʼ�¼
        ������ʼ�¼
����:���ر�ʱ���ļ�
*/
int msaBackListDownLoadCSV(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
/*
MSA:��������
				��ϸ���ʼ�¼
				    HTTP���ʼ�¼
����:�б���ʾ��ʱ�η��ʼ�¼���ú���
*/
int HttpmsaAccessList(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);

/*
MSA:��������
				�����ؼ���
����:�ؼ����б���ѯ,����,ɾ��
*/
int ltmsasearchkeyhttpa(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
/*
MSA:��������
				�����ؼ���
����:�ؼ��б�ҳ�����Ӻ���
*/
int ltmsasearchkeyquery(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
/*
MSA:��������
		��ʱͨ�ż�¼
				MSN,Yahoo,QQ,�Ա�,����,skype
����:ҳ�����ӵ��ú���
*/
int ltimshowwebquery(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
/*
MSA:��������
				��ʱͨ�ż�¼
				    MSN,Yahoo,�Ա�,����,qq,skype
����:��¼���ݲ�ѯ ���� ɾ��
*/
int ltwebqueryima(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
/*
MSA:��������
				�ļ������¼
����:�ļ������¼���ڵ�����ҳ����ú���
*/
int ltmsafiletranquery(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
/*
MSA:��������
				�ļ������¼
����:�ļ������¼��ѯ��������ɾ��
*/
int ltmsafilequery(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
/*
MSA:��������
����:�û�combox��json���� 
*/
int msalocalStore(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);

/*
MSA:��������
				ÿ����ʻ��ܼ�¼
						������ܼ�¼
���ܣ�������ܼ�¼��̬����ҳ����ú���
*/
int ltshowservicequery(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
/*
MSA:��������
        ÿ����ʻ��ܼ�¼
        		HTTP���ܼ�¼
����:HTTP���ܼ�¼��̬����ҳ����ú���
*/
int ltwebshowwebsitequery(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
/*
MSA:��������
    ÿ����ʻ��ܼ�¼
    		������ܼ�¼
����:������ܼ�¼������ѯ,����,ɾ������ ���ú���
*/
int ltservicequeryhttpa(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
/*
MSA:��������
				ÿ����ʻ��ܼ�¼
						HTTP���ܼ�¼
����:HTTP����������������ѯ��ɾ��
*/
int ltwebsitequeryhttpa(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);

/*srv-data-form.c*/
/*
MSA:��������
        �����ύ����
����:���ձ�����¼��ѯ
*/
int msaformList(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
/*
MSA:��������
����:�������ݼ�¼ҳ������
*/
int ltmsavcloglink(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
/*
MSA:��������
			�������ݼ�¼
����:��¼���ݲ�ѯ ���� ɾ��
*/
int ltmsavclogquery(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
/*
MSA:��������
				����
����:����ҳ�����Ӻ���				
*/
int ltmsaform(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
/*
MSA:��������
				POP3,SMTP�ʼ�
����:�ʼ�ȫ�ļ���				
*/
int ltmsamail(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
/*
MSA:��������
			�ʼ�
����:pop3/smtp�ʼ���¼��ѯ/ɾ��/����
*/
int ltmsamailquery(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
/*
MSA:��������
�ʼ��ͱ���������ʾ����
*/
int msaShowContent(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);

/*srv-data-people.c*/
int msaShowPeopleRecord(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
/*
MSA:��������
        ��Ա����
����:�û������캯��
*/
int msaUserTree(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);

/*srv-data-time.c*/
/*
MSA:��������
				��������
����:����������
*/
int msaDateTree(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
/*
MSA:��������
        ��������
����:�����������ҳ�溯��
*/
int msaShowTimeRecord(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);

/*srv-data-conkeysech.c*/
/*
MSA:��������
        ���ݹؼ�������
����:������������ͼҳ��
*/

int msaSearchKeyWord(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
/*
MSA:��������
		���ݹؼ��ּ���
����:��������ͼҳ��:��������������
*/
int msaSearchkeyDateTree(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
/*
MSA:��������
    ���ùؼ���
����:�������ùؼ���ͼҳ�沢ʵ�ֹؼ��ֵ���ɾ
*/

int msaiplogCv(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int msaMainSearch(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int searchshowPG(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int mailJson(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int formJson(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int historySearch(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int msaHistoryView(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int msaNowDayData(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);


/*srv-service-tree.c*/
/*
MSA:��������
    ����ѡ����
    һ��������
*/
int msaOneServiceTree(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
/*
MSA:��������
    ����ѡ����
    ����������
*/
int msaTwoServiceTree(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);

//srv-conFun.c
int nasqqsave(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);

//srv-bypass.c
int msaSoftBypass(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int msaSysApplication(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int ltwatchdog(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int ltwatchdogok(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int msaMemReset(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);

//srv-regist.c
int msaRegister(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int ltRegister(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int msaActiveSys(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int ltShowRegister(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);

//srv-setworktime.c
int msaSetWorkTime(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int msaSetUserinfo(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int msaUDworkTime(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int msaUDtongzhi(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int msachangeLOG(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int msaSetDefaultLOG(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);

int msaStartDayLongProc(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int msaIsPidRuning(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);

//srv-mailexport.c
int msabackemaillist(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int ltappbackMail(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int ltappMailbackok(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int processingMailBack(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int msaupdatemailProgress(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);

//srv-msapacksecurityset.c
int msapacksecurityLink(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int msapacksecurityset(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);


int msaAccountList(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int msaalertLink(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
int msaalertset(int confd,ltMsgHead *ltMsgPk,lt_shmHead *lt_MMHead);
char *msaSMSsend(char *telstr,char *msgstr,char *resultstr);
#endif