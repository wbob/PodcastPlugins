
//------------------------------------------------------------------------------
// This file was generated using the Faust compiler (https://faust.grame.fr),
// and the Faust post-processor (https://github.com/jpcima/faustpp).
//
// Source: PodcastPluginTrack.dsp
// Name: PodcastPlugins TRACK
// Description: 
// Author: Klaus Scheuermann
// Copyright: 
// License: GPLv3+
// Version: 0.1
//------------------------------------------------------------------------------


#include "DistrhoPlugin.hpp"
#include "extra/ScopedPointer.hpp"

// --------------------------------------------------------------------------------------------------------------------

// inline code when possible
#define FAUSTPP_VIRTUAL inline

// make everything available directly
#define FAUSTPP_PRIVATE public
#define FAUSTPP_PROTECTED public

// match distrho namespace
#define FAUSTPP_BEGIN_NAMESPACE START_NAMESPACE_DISTRHO
#define FAUSTPP_END_NAMESPACE END_NAMESPACE_DISTRHO

// --------------------------------------------------------------------------------------------------------------------

START_NAMESPACE_DISTRHO

template <class T> inline T min(T a, T b) { return (a < b) ? a : b; }
template <class T> inline T max(T a, T b) { return (a > b) ? a : b; }

class dsp {
public:
    virtual ~dsp() {}
};

class Meta {
public:
    // dummy
    void declare(...) {}
};

class UI {
public:
    // dummy
    void openHorizontalBox(...) {}
    void openVerticalBox(...) {}
    void openTabBox(...) {}
    void closeBox(...) {}
    void declare(...) {}
    void addButton(...) {}
    void addCheckButton(...) {}
    void addVerticalSlider(...) {}
    void addHorizontalSlider(...) {}
    void addVerticalBargraph(...) {}
    void addHorizontalBargraph(...) {}
};

END_NAMESPACE_DISTRHO

// --------------------------------------------------------------------------------------------------------------------


#if defined(__GNUC__)
#   pragma GCC diagnostic push
#   pragma GCC diagnostic ignored "-Wunused-parameter"
#endif

#ifndef FAUSTPP_PRIVATE
#   define FAUSTPP_PRIVATE private
#endif
#ifndef FAUSTPP_PROTECTED
#   define FAUSTPP_PROTECTED protected
#endif
#ifndef FAUSTPP_VIRTUAL
#   define FAUSTPP_VIRTUAL virtual
#endif

#ifndef FAUSTPP_BEGIN_NAMESPACE
#   define FAUSTPP_BEGIN_NAMESPACE
#endif
#ifndef FAUSTPP_END_NAMESPACE
#   define FAUSTPP_END_NAMESPACE
#endif

FAUSTPP_BEGIN_NAMESPACE

#ifndef FAUSTFLOAT
#define FAUSTFLOAT float
#endif 

FAUSTPP_END_NAMESPACE
#include <algorithm>
#include <cmath>
#include <cstdint>
#include <math.h>
FAUSTPP_BEGIN_NAMESPACE

#ifndef FAUSTCLASS 
#define FAUSTCLASS mydsp
#endif

#ifdef __APPLE__ 
#define exp10f __exp10f
#define exp10 __exp10
#endif

#if defined(_WIN32)
#define RESTRICT __restrict
#else
#define RESTRICT __restrict__
#endif

static float mydsp_faustpower2_f(float value) {
	return value * value;
}

class mydsp : public dsp {
	
 FAUSTPP_PRIVATE:
	
	int fSampleRate;
	float fConst1;
	FAUSTFLOAT fVslider0;
	float fConst7;
	float fConst9;
	float fConst10;
	float fConst12;
	FAUSTFLOAT fVslider1;
	float fConst13;
	float fConst15;
	float fConst16;
	float fConst18;
	float fConst19;
	float fConst20;
	float fConst21;
	float fConst22;
	float fConst23;
	float fConst26;
	float fConst28;
	float fConst30;
	float fConst31;
	float fConst32;
	FAUSTFLOAT fVslider2;
	float fRec9[2];
	int IOTA0;
	float fVec0[32768];
	float fRec8[2];
	FAUSTFLOAT fVbargraph0;
	float fVec1[32768];
	float fRec10[2];
	FAUSTFLOAT fVbargraph1;
	float fRec11[2];
	float fConst34;
	float fConst36;
	float fConst37;
	float fConst40;
	float fConst41;
	float fConst43;
	float fConst44;
	float fRec13[3];
	float fConst45;
	float fRec12[3];
	float fRec15[3];
	float fRec14[3];
	float fVec2[2];
	float fRec7[3];
	float fConst46;
	float fConst47;
	float fVec3[32768];
	float fConst48;
	int iConst49;
	int iConst51;
	float fConst55;
	float fConst56;
	float fConst57;
	float fConst58;
	float fConst59;
	float fConst60;
	float fConst62;
	float fConst63;
	float fConst64;
	float fVec4[2];
	float fConst65;
	float fRec19[2];
	float fRec18[2];
	float fConst68;
	float fConst70;
	float fVec5[2];
	float fConst72;
	float fConst73;
	float fRec17[2];
	float fRec16[2];
	float fVec6[2];
	float fVec7[3];
	int iConst74;
	int iConst75;
	float fVec8[7];
	int iConst76;
	int iConst77;
	float fVec9[15];
	int iConst78;
	int iConst79;
	float fVec10[32];
	int iConst80;
	int iConst81;
	float fVec11[64];
	int iConst82;
	int iConst83;
	float fVec12[128];
	int iConst84;
	int iConst85;
	float fVec13[256];
	int iConst86;
	int iConst87;
	float fVec14[512];
	int iConst88;
	int iConst89;
	float fVec15[1024];
	int iConst90;
	int iConst91;
	float fVec16[2048];
	int iConst92;
	int iConst93;
	float fVec17[4096];
	int iConst94;
	int iConst95;
	float fVec18[8192];
	int iConst96;
	int iConst97;
	float fVec19[16384];
	int iConst98;
	int iConst99;
	float fVec20[32768];
	int iConst100;
	int iConst101;
	float fVec21[65536];
	int iConst102;
	int iConst103;
	float fVec22[131072];
	int iConst104;
	int iConst105;
	float fVec23[262144];
	int iConst106;
	float fConst107;
	float fConst108;
	float fConst109;
	float fVec24[2];
	float fRec23[2];
	float fRec22[2];
	float fVec25[2];
	float fRec21[2];
	float fRec20[2];
	float fVec26[2];
	float fVec27[3];
	float fVec28[7];
	float fVec29[15];
	float fVec30[32];
	float fVec31[64];
	float fVec32[128];
	float fVec33[256];
	float fVec34[512];
	float fVec35[1024];
	float fVec36[2048];
	float fVec37[4096];
	float fVec38[8192];
	float fVec39[16384];
	float fVec40[32768];
	float fVec41[65536];
	float fVec42[131072];
	float fVec43[262144];
	FAUSTFLOAT fVslider3;
	int iConst110;
	float fVec44[2];
	int iConst111;
	float fVec45[3];
	int iConst112;
	float fVec46[7];
	int iConst113;
	int iConst114;
	float fVec47[15];
	int iConst115;
	int iConst116;
	float fVec48[32];
	int iConst117;
	int iConst118;
	float fVec49[64];
	int iConst119;
	int iConst120;
	float fVec50[128];
	int iConst121;
	int iConst122;
	float fVec51[256];
	int iConst123;
	float fConst124;
	float fConst125;
	float fRec24[2];
	FAUSTFLOAT fVslider4;
	FAUSTFLOAT fVbargraph2;
	float fConst127;
	float fConst129;
	float fConst131;
	float fRec25[3];
	float fConst132;
	float fConst133;
	float fVec52[32768];
	float fVec53[2];
	float fRec29[2];
	float fRec28[2];
	float fVec54[2];
	float fRec27[2];
	float fRec26[2];
	float fVec55[2];
	float fVec56[3];
	float fVec57[7];
	float fVec58[15];
	float fVec59[32];
	float fVec60[64];
	float fVec61[128];
	float fVec62[256];
	float fVec63[512];
	float fVec64[1024];
	float fVec65[2048];
	float fVec66[4096];
	float fVec67[8192];
	float fVec68[16384];
	float fVec69[32768];
	float fVec70[65536];
	float fVec71[131072];
	float fVec72[262144];
	FAUSTFLOAT fVbargraph3;
	float fConst135;
	float fConst137;
	float fConst139;
	float fRec30[3];
	float fConst140;
	float fConst141;
	float fVec73[32768];
	float fVec74[2];
	float fRec34[2];
	float fRec33[2];
	float fVec75[2];
	float fRec32[2];
	float fRec31[2];
	float fVec76[2];
	float fVec77[3];
	float fVec78[7];
	float fVec79[15];
	float fVec80[32];
	float fVec81[64];
	float fVec82[128];
	float fVec83[256];
	float fVec84[512];
	float fVec85[1024];
	float fVec86[2048];
	float fVec87[4096];
	float fVec88[8192];
	float fVec89[16384];
	float fVec90[32768];
	float fVec91[65536];
	float fVec92[131072];
	float fVec93[262144];
	FAUSTFLOAT fVbargraph4;
	float fConst143;
	float fConst145;
	float fConst147;
	float fRec35[3];
	float fConst148;
	float fConst149;
	float fVec94[32768];
	float fVec95[2];
	float fRec39[2];
	float fRec38[2];
	float fVec96[2];
	float fRec37[2];
	float fRec36[2];
	float fVec97[2];
	float fVec98[3];
	float fVec99[7];
	float fVec100[15];
	float fVec101[32];
	float fVec102[64];
	float fVec103[128];
	float fVec104[256];
	float fVec105[512];
	float fVec106[1024];
	float fVec107[2048];
	float fVec108[4096];
	float fVec109[8192];
	float fVec110[16384];
	float fVec111[32768];
	float fVec112[65536];
	float fVec113[131072];
	float fVec114[262144];
	FAUSTFLOAT fVbargraph5;
	float fConst151;
	float fConst153;
	float fConst155;
	float fRec40[3];
	float fConst156;
	float fConst157;
	float fVec115[32768];
	float fVec116[2];
	float fRec44[2];
	float fRec43[2];
	float fVec117[2];
	float fRec42[2];
	float fRec41[2];
	float fVec118[2];
	float fVec119[3];
	float fVec120[7];
	float fVec121[15];
	float fVec122[32];
	float fVec123[64];
	float fVec124[128];
	float fVec125[256];
	float fVec126[512];
	float fVec127[1024];
	float fVec128[2048];
	float fVec129[4096];
	float fVec130[8192];
	float fVec131[16384];
	float fVec132[32768];
	float fVec133[65536];
	float fVec134[131072];
	float fVec135[262144];
	FAUSTFLOAT fVbargraph6;
	float fConst159;
	float fConst161;
	float fConst163;
	float fRec45[3];
	float fConst164;
	float fConst165;
	float fVec136[32768];
	float fVec137[2];
	float fRec49[2];
	float fRec48[2];
	float fVec138[2];
	float fRec47[2];
	float fRec46[2];
	float fVec139[2];
	float fVec140[3];
	float fVec141[7];
	float fVec142[15];
	float fVec143[32];
	float fVec144[64];
	float fVec145[128];
	float fVec146[256];
	float fVec147[512];
	float fVec148[1024];
	float fVec149[2048];
	float fVec150[4096];
	float fVec151[8192];
	float fVec152[16384];
	float fVec153[32768];
	float fVec154[65536];
	float fVec155[131072];
	float fVec156[262144];
	FAUSTFLOAT fVbargraph7;
	float fConst167;
	float fConst169;
	float fConst171;
	float fRec50[3];
	float fConst172;
	float fConst173;
	float fVec157[32768];
	float fVec158[2];
	float fRec54[2];
	float fRec53[2];
	float fVec159[2];
	float fRec52[2];
	float fRec51[2];
	float fVec160[2];
	float fVec161[3];
	float fVec162[7];
	float fVec163[15];
	float fVec164[32];
	float fVec165[64];
	float fVec166[128];
	float fVec167[256];
	float fVec168[512];
	float fVec169[1024];
	float fVec170[2048];
	float fVec171[4096];
	float fVec172[8192];
	float fVec173[16384];
	float fVec174[32768];
	float fVec175[65536];
	float fVec176[131072];
	float fVec177[262144];
	FAUSTFLOAT fVbargraph8;
	float fConst175;
	float fConst177;
	float fConst179;
	float fRec55[3];
	float fConst180;
	float fConst181;
	float fVec178[32768];
	float fVec179[2];
	float fRec59[2];
	float fRec58[2];
	float fVec180[2];
	float fRec57[2];
	float fRec56[2];
	float fVec181[2];
	float fVec182[3];
	float fVec183[7];
	float fVec184[15];
	float fVec185[32];
	float fVec186[64];
	float fVec187[128];
	float fVec188[256];
	float fVec189[512];
	float fVec190[1024];
	float fVec191[2048];
	float fVec192[4096];
	float fVec193[8192];
	float fVec194[16384];
	float fVec195[32768];
	float fVec196[65536];
	float fVec197[131072];
	float fVec198[262144];
	FAUSTFLOAT fVbargraph9;
	float fConst183;
	float fConst185;
	float fConst187;
	float fRec60[3];
	float fConst188;
	float fConst189;
	float fVec199[32768];
	float fVec200[2];
	float fRec64[2];
	float fRec63[2];
	float fVec201[2];
	float fRec62[2];
	float fRec61[2];
	float fVec202[2];
	float fVec203[3];
	float fVec204[7];
	float fVec205[15];
	float fVec206[32];
	float fVec207[64];
	float fVec208[128];
	float fVec209[256];
	float fVec210[512];
	float fVec211[1024];
	float fVec212[2048];
	float fVec213[4096];
	float fVec214[8192];
	float fVec215[16384];
	float fVec216[32768];
	float fVec217[65536];
	float fVec218[131072];
	float fVec219[262144];
	FAUSTFLOAT fVbargraph10;
	float fConst191;
	float fConst193;
	float fConst195;
	float fRec65[3];
	float fConst196;
	float fConst197;
	float fVec220[32768];
	float fVec221[2];
	float fRec69[2];
	float fRec68[2];
	float fVec222[2];
	float fRec67[2];
	float fRec66[2];
	float fVec223[2];
	float fVec224[3];
	float fVec225[7];
	float fVec226[15];
	float fVec227[32];
	float fVec228[64];
	float fVec229[128];
	float fVec230[256];
	float fVec231[512];
	float fVec232[1024];
	float fVec233[2048];
	float fVec234[4096];
	float fVec235[8192];
	float fVec236[16384];
	float fVec237[32768];
	float fVec238[65536];
	float fVec239[131072];
	float fVec240[262144];
	FAUSTFLOAT fVbargraph11;
	float fConst199;
	float fConst201;
	float fConst203;
	float fRec70[3];
	float fConst204;
	float fConst205;
	float fVec241[32768];
	float fVec242[2];
	float fRec74[2];
	float fRec73[2];
	float fVec243[2];
	float fRec72[2];
	float fRec71[2];
	float fVec244[2];
	float fVec245[3];
	float fVec246[7];
	float fVec247[15];
	float fVec248[32];
	float fVec249[64];
	float fVec250[128];
	float fVec251[256];
	float fVec252[512];
	float fVec253[1024];
	float fVec254[2048];
	float fVec255[4096];
	float fVec256[8192];
	float fVec257[16384];
	float fVec258[32768];
	float fVec259[65536];
	float fVec260[131072];
	float fVec261[262144];
	FAUSTFLOAT fVbargraph12;
	float fConst207;
	float fConst209;
	float fConst211;
	float fRec75[3];
	float fConst212;
	float fConst213;
	float fVec262[32768];
	float fVec263[2];
	float fRec79[2];
	float fRec78[2];
	float fVec264[2];
	float fRec77[2];
	float fRec76[2];
	float fVec265[2];
	float fVec266[3];
	float fVec267[7];
	float fVec268[15];
	float fVec269[32];
	float fVec270[64];
	float fVec271[128];
	float fVec272[256];
	float fVec273[512];
	float fVec274[1024];
	float fVec275[2048];
	float fVec276[4096];
	float fVec277[8192];
	float fVec278[16384];
	float fVec279[32768];
	float fVec280[65536];
	float fVec281[131072];
	float fVec282[262144];
	FAUSTFLOAT fVbargraph13;
	float fConst215;
	float fConst217;
	float fConst219;
	float fRec80[3];
	float fConst220;
	float fConst221;
	float fVec283[32768];
	float fVec284[2];
	float fRec84[2];
	float fRec83[2];
	float fVec285[2];
	float fRec82[2];
	float fRec81[2];
	float fVec286[2];
	float fVec287[3];
	float fVec288[7];
	float fVec289[15];
	float fVec290[32];
	float fVec291[64];
	float fVec292[128];
	float fVec293[256];
	float fVec294[512];
	float fVec295[1024];
	float fVec296[2048];
	float fVec297[4096];
	float fVec298[8192];
	float fVec299[16384];
	float fVec300[32768];
	float fVec301[65536];
	float fVec302[131072];
	float fVec303[262144];
	FAUSTFLOAT fVbargraph14;
	float fConst223;
	float fConst225;
	float fConst227;
	float fRec85[3];
	float fConst228;
	float fConst229;
	float fVec304[32768];
	float fVec305[2];
	float fRec89[2];
	float fRec88[2];
	float fVec306[2];
	float fRec87[2];
	float fRec86[2];
	float fVec307[2];
	float fVec308[3];
	float fVec309[7];
	float fVec310[15];
	float fVec311[32];
	float fVec312[64];
	float fVec313[128];
	float fVec314[256];
	float fVec315[512];
	float fVec316[1024];
	float fVec317[2048];
	float fVec318[4096];
	float fVec319[8192];
	float fVec320[16384];
	float fVec321[32768];
	float fVec322[65536];
	float fVec323[131072];
	float fVec324[262144];
	FAUSTFLOAT fVbargraph15;
	float fConst231;
	float fConst233;
	float fConst235;
	float fRec90[3];
	float fConst236;
	float fConst237;
	float fVec325[32768];
	float fVec326[2];
	float fRec94[2];
	float fRec93[2];
	float fVec327[2];
	float fRec92[2];
	float fRec91[2];
	float fVec328[2];
	float fVec329[3];
	float fVec330[7];
	float fVec331[15];
	float fVec332[32];
	float fVec333[64];
	float fVec334[128];
	float fVec335[256];
	float fVec336[512];
	float fVec337[1024];
	float fVec338[2048];
	float fVec339[4096];
	float fVec340[8192];
	float fVec341[16384];
	float fVec342[32768];
	float fVec343[65536];
	float fVec344[131072];
	float fVec345[262144];
	FAUSTFLOAT fVbargraph16;
	float fConst239;
	float fConst241;
	float fConst243;
	float fRec95[3];
	float fConst244;
	float fConst245;
	float fVec346[32768];
	float fVec347[2];
	float fRec99[2];
	float fRec98[2];
	float fVec348[2];
	float fRec97[2];
	float fRec96[2];
	float fVec349[2];
	float fVec350[3];
	float fVec351[7];
	float fVec352[15];
	float fVec353[32];
	float fVec354[64];
	float fVec355[128];
	float fVec356[256];
	float fVec357[512];
	float fVec358[1024];
	float fVec359[2048];
	float fVec360[4096];
	float fVec361[8192];
	float fVec362[16384];
	float fVec363[32768];
	float fVec364[65536];
	float fVec365[131072];
	float fVec366[262144];
	FAUSTFLOAT fVbargraph17;
	float fConst247;
	float fConst249;
	float fConst251;
	float fRec100[3];
	float fConst252;
	float fConst253;
	float fVec367[32768];
	float fVec368[2];
	float fRec104[2];
	float fRec103[2];
	float fVec369[2];
	float fRec102[2];
	float fRec101[2];
	float fVec370[2];
	float fVec371[3];
	float fVec372[7];
	float fVec373[15];
	float fVec374[32];
	float fVec375[64];
	float fVec376[128];
	float fVec377[256];
	float fVec378[512];
	float fVec379[1024];
	float fVec380[2048];
	float fVec381[4096];
	float fVec382[8192];
	float fVec383[16384];
	float fVec384[32768];
	float fVec385[65536];
	float fVec386[131072];
	float fVec387[262144];
	FAUSTFLOAT fVbargraph18;
	float fConst255;
	float fConst257;
	float fConst259;
	float fRec105[3];
	float fConst260;
	float fConst261;
	float fVec388[32768];
	float fVec389[2];
	float fRec109[2];
	float fRec108[2];
	float fVec390[2];
	float fRec107[2];
	float fRec106[2];
	float fVec391[2];
	float fVec392[3];
	float fVec393[7];
	float fVec394[15];
	float fVec395[32];
	float fVec396[64];
	float fVec397[128];
	float fVec398[256];
	float fVec399[512];
	float fVec400[1024];
	float fVec401[2048];
	float fVec402[4096];
	float fVec403[8192];
	float fVec404[16384];
	float fVec405[32768];
	float fVec406[65536];
	float fVec407[131072];
	float fVec408[262144];
	FAUSTFLOAT fVbargraph19;
	float fConst263;
	float fConst265;
	float fConst267;
	float fRec110[3];
	float fConst268;
	float fConst269;
	float fVec409[32768];
	float fVec410[2];
	float fRec114[2];
	float fRec113[2];
	float fVec411[2];
	float fRec112[2];
	float fRec111[2];
	float fVec412[2];
	float fVec413[3];
	float fVec414[7];
	float fVec415[15];
	float fVec416[32];
	float fVec417[64];
	float fVec418[128];
	float fVec419[256];
	float fVec420[512];
	float fVec421[1024];
	float fVec422[2048];
	float fVec423[4096];
	float fVec424[8192];
	float fVec425[16384];
	float fVec426[32768];
	float fVec427[65536];
	float fVec428[131072];
	float fVec429[262144];
	FAUSTFLOAT fVbargraph20;
	float fConst270;
	float fConst272;
	float fRec115[3];
	float fConst273;
	float fConst274;
	float fVec430[32768];
	float fVec431[2];
	float fRec119[2];
	float fRec118[2];
	float fVec432[2];
	float fRec117[2];
	float fRec116[2];
	float fVec433[2];
	float fVec434[3];
	float fVec435[7];
	float fVec436[15];
	float fVec437[32];
	float fVec438[64];
	float fVec439[128];
	float fVec440[256];
	float fVec441[512];
	float fVec442[1024];
	float fVec443[2048];
	float fVec444[4096];
	float fVec445[8192];
	float fVec446[16384];
	float fVec447[32768];
	float fVec448[65536];
	float fVec449[131072];
	float fVec450[262144];
	FAUSTFLOAT fVbargraph21;
	FAUSTFLOAT fCheckbox0;
	float fRec120[2];
	float fVec451[32768];
	FAUSTFLOAT fCheckbox1;
	float fRec121[2];
	float fConst275;
	float fConst276;
	int iConst277;
	float fVec452[2];
	int iConst278;
	float fVec453[3];
	int iConst279;
	float fVec454[7];
	int iConst280;
	int iConst281;
	float fVec455[15];
	int iConst282;
	int iConst283;
	float fVec456[32];
	int iConst284;
	float fConst285;
	float fRec132[2];
	float fConst286;
	int iConst289;
	float fVec457[2];
	float fRec136[2];
	float fRec135[2];
	float fVec458[2];
	float fRec134[2];
	float fRec133[2];
	float fVec459[2];
	float fVec460[3];
	int iConst290;
	int iConst291;
	float fVec461[7];
	int iConst292;
	int iConst293;
	float fVec462[15];
	int iConst294;
	int iConst295;
	float fVec463[32];
	int iConst296;
	int iConst297;
	float fVec464[64];
	int iConst298;
	int iConst299;
	float fVec465[128];
	int iConst300;
	int iConst301;
	float fVec466[256];
	int iConst302;
	int iConst303;
	float fVec467[512];
	int iConst304;
	int iConst305;
	float fVec468[1024];
	int iConst306;
	int iConst307;
	float fVec469[2048];
	int iConst308;
	float fVec470[2];
	float fRec140[2];
	float fRec139[2];
	float fVec471[2];
	float fRec138[2];
	float fRec137[2];
	float fVec472[2];
	float fVec473[3];
	float fVec474[7];
	float fVec475[15];
	float fVec476[32];
	float fVec477[64];
	float fVec478[128];
	float fVec479[256];
	float fVec480[512];
	float fVec481[1024];
	float fVec482[2048];
	float fConst309;
	float fRec127[2];
	float fRec128[2];
	float fRec125[2];
	FAUSTFLOAT fVbargraph22;
	float fRec124[2];
	float fRec122[3];
	float fVec483[32768];
	float fRec123[3];
	float fRec6[3];
	float fConst310;
	float fRec5[3];
	float fRec4[3];
	float fVec484[2];
	float fConst311;
	float fRec3[2];
	float fRec144[3];
	float fRec143[3];
	float fRec142[3];
	float fVec485[2];
	float fRec141[2];
	int iConst312;
	int iConst313;
	float fVec486[3];
	int iConst314;
	float fVec487[7];
	int iConst315;
	int iConst316;
	float fVec488[15];
	int iConst317;
	int iConst318;
	float fVec489[32];
	int iConst319;
	int iConst320;
	float fVec490[64];
	int iConst321;
	int iConst322;
	float fVec491[128];
	int iConst323;
	int iConst324;
	float fVec492[256];
	int iConst325;
	int iConst326;
	float fVec493[512];
	int iConst327;
	int iConst328;
	float fVec494[1024];
	int iConst329;
	int iConst330;
	float fVec495[2048];
	int iConst331;
	int iConst332;
	float fVec496[4096];
	int iConst333;
	float fRec145[2];
	float fVec497[3];
	float fVec498[7];
	float fVec499[15];
	float fVec500[32];
	float fVec501[64];
	float fVec502[128];
	float fVec503[256];
	float fVec504[512];
	float fVec505[1024];
	float fVec506[2048];
	float fVec507[4096];
	float fRec146[2];
	FAUSTFLOAT fVbargraph23;
	float fConst334;
	float fConst336;
	float fConst337;
	float fConst339;
	float fConst340;
	float fConst341;
	float fConst342;
	float fConst343;
	float fConst344;
	float fRec156[3];
	float fRec155[3];
	float fRec154[3];
	float fConst345;
	float fRec153[3];
	float fRec152[3];
	float fVec508[2];
	float fRec151[2];
	float fRec162[3];
	float fRec161[3];
	float fRec160[3];
	float fRec159[3];
	float fRec158[3];
	float fVec509[2];
	float fRec157[2];
	float fVec510[3];
	float fVec511[7];
	float fVec512[15];
	float fVec513[32];
	float fVec514[64];
	float fVec515[128];
	float fVec516[256];
	float fVec517[512];
	float fVec518[1024];
	float fVec519[2048];
	float fVec520[4096];
	float fRec163[2];
	float fVec521[3];
	float fVec522[7];
	float fVec523[15];
	float fVec524[32];
	float fVec525[64];
	float fVec526[128];
	float fVec527[256];
	float fVec528[512];
	float fVec529[1024];
	float fVec530[2048];
	float fVec531[4096];
	float fRec164[2];
	FAUSTFLOAT fVbargraph24;
	float fConst346;
	float fConst348;
	float fConst349;
	float fConst351;
	float fConst352;
	float fConst353;
	float fConst354;
	float fConst355;
	float fConst356;
	float fRec178[3];
	float fRec177[3];
	float fRec176[3];
	float fConst357;
	float fRec175[3];
	float fRec174[3];
	float fVec532[2];
	float fRec173[2];
	float fRec184[3];
	float fRec183[3];
	float fRec182[3];
	float fRec181[3];
	float fRec180[3];
	float fVec533[2];
	float fRec179[2];
	float fVec534[3];
	float fVec535[7];
	float fVec536[15];
	float fVec537[32];
	float fVec538[64];
	float fVec539[128];
	float fVec540[256];
	float fVec541[512];
	float fVec542[1024];
	float fVec543[2048];
	float fVec544[4096];
	float fRec185[2];
	float fVec545[3];
	float fVec546[7];
	float fVec547[15];
	float fVec548[32];
	float fVec549[64];
	float fVec550[128];
	float fVec551[256];
	float fVec552[512];
	float fVec553[1024];
	float fVec554[2048];
	float fVec555[4096];
	float fRec186[2];
	FAUSTFLOAT fVbargraph25;
	float fConst358;
	float fConst360;
	float fConst361;
	float fConst363;
	float fConst364;
	float fConst365;
	float fConst366;
	float fConst367;
	float fConst368;
	float fRec200[3];
	float fRec199[3];
	float fRec198[3];
	float fConst369;
	float fRec197[3];
	float fRec196[3];
	float fVec556[2];
	float fRec195[2];
	float fRec206[3];
	float fRec205[3];
	float fRec204[3];
	float fRec203[3];
	float fRec202[3];
	float fVec557[2];
	float fRec201[2];
	float fVec558[3];
	float fVec559[7];
	float fVec560[15];
	float fVec561[32];
	float fVec562[64];
	float fVec563[128];
	float fVec564[256];
	float fVec565[512];
	float fVec566[1024];
	float fVec567[2048];
	float fVec568[4096];
	float fRec207[2];
	float fVec569[3];
	float fVec570[7];
	float fVec571[15];
	float fVec572[32];
	float fVec573[64];
	float fVec574[128];
	float fVec575[256];
	float fVec576[512];
	float fVec577[1024];
	float fVec578[2048];
	float fVec579[4096];
	float fRec208[2];
	FAUSTFLOAT fVbargraph26;
	float fRec219[3];
	float fRec218[3];
	float fVec580[2];
	float fRec217[2];
	float fRec222[3];
	float fRec221[3];
	float fVec581[2];
	float fRec220[2];
	float fVec582[3];
	float fVec583[7];
	float fVec584[15];
	float fVec585[32];
	float fVec586[64];
	float fVec587[128];
	float fVec588[256];
	float fVec589[512];
	float fVec590[1024];
	float fVec591[2048];
	float fVec592[4096];
	float fRec223[2];
	float fVec593[3];
	float fVec594[7];
	float fVec595[15];
	float fVec596[32];
	float fVec597[64];
	float fVec598[128];
	float fVec599[256];
	float fVec600[512];
	float fVec601[1024];
	float fVec602[2048];
	float fVec603[4096];
	float fRec224[2];
	FAUSTFLOAT fVbargraph27;
	float fRec225[2];
	float fRec226[2];
	float fRec213[2];
	float fRec214[2];
	float fRec209[2];
	float fRec210[2];
	float fRec191[2];
	float fRec192[2];
	float fRec187[2];
	float fRec188[2];
	float fRec169[2];
	float fRec170[2];
	float fRec165[2];
	float fRec166[2];
	float fRec147[2];
	float fRec148[2];
	FAUSTFLOAT fCheckbox2;
	float fRec229[2];
	float fRec2[3];
	float fConst370;
	float fConst371;
	float fConst372;
	float fRec1[2];
	float fRec260[2];
	float fRec261[2];
	float fRec256[2];
	float fRec257[2];
	float fRec252[2];
	float fRec253[2];
	float fRec248[2];
	float fRec249[2];
	float fRec244[2];
	float fRec245[2];
	float fRec240[2];
	float fRec241[2];
	float fRec236[2];
	float fRec237[2];
	float fRec232[2];
	float fRec233[2];
	float fRec231[3];
	float fRec230[2];
	float fConst373;
	float fConst375;
	float fConst376;
	float fRec264[3];
	float fVec604[2048];
	FAUSTFLOAT fVbargraph28;
	int iConst378;
	float fConst379;
	float fRec269[3];
	float fVec605[2048];
	int iRec267[2];
	float fRec268[2];
	float fConst380;
	float fRec266[2];
	float fConst381;
	float fConst382;
	float fRec265[2];
	FAUSTFLOAT fVbargraph29;
	FAUSTFLOAT fCheckbox3;
	float fRec270[2];
	int iConst383;
	float fRec0[2];
	FAUSTFLOAT fVbargraph30;
	float fVec606[2];
	int iConst385;
	float fRec275[2];
	FAUSTFLOAT fVbargraph31;
	float fVec607[2];
	float fVec608[2];
	float fRec274[2];
	float fRec273[2];
	float fVec609[2];
	float fRec272[2];
	float fRec271[2];
	float fVec610[2];
	float fVec611[3];
	int iConst386;
	int iConst387;
	float fVec612[7];
	int iConst388;
	int iConst389;
	float fVec613[15];
	int iConst390;
	int iConst391;
	float fVec614[32];
	int iConst392;
	int iConst393;
	float fVec615[64];
	int iConst394;
	int iConst395;
	float fVec616[128];
	int iConst396;
	int iConst397;
	float fVec617[256];
	int iConst398;
	int iConst399;
	float fVec618[512];
	int iConst400;
	int iConst401;
	float fVec619[1024];
	int iConst402;
	int iConst403;
	float fVec620[2048];
	int iConst404;
	int iConst405;
	float fVec621[4096];
	int iConst406;
	int iConst407;
	float fVec622[8192];
	int iConst408;
	int iConst409;
	float fVec623[16384];
	int iConst410;
	int iConst411;
	float fVec624[32768];
	int iConst412;
	int iConst413;
	float fVec625[65536];
	int iConst414;
	int iConst415;
	float fVec626[131072];
	int iConst416;
	int iConst417;
	float fVec627[262144];
	int iConst418;
	int iConst419;
	float fVec628[524288];
	int iConst420;
	int iConst421;
	float fVec629[1048576];
	int iConst422;
	float fVec630[2];
	float fRec279[2];
	float fRec278[2];
	float fVec631[2];
	float fRec277[2];
	float fRec276[2];
	float fVec632[2];
	float fVec633[3];
	float fVec634[7];
	float fVec635[15];
	float fVec636[32];
	float fVec637[64];
	float fVec638[128];
	float fVec639[256];
	float fVec640[512];
	float fVec641[1024];
	float fVec642[2048];
	float fVec643[4096];
	float fVec644[8192];
	float fVec645[16384];
	float fVec646[32768];
	float fVec647[65536];
	float fVec648[131072];
	float fVec649[262144];
	float fVec650[524288];
	float fVec651[1048576];
	float fConst423;
	FAUSTFLOAT fVbargraph32;
	
 public:
	
	void metadata(Meta* m) { 
		m->declare("analyzers.lib/name", "Faust Analyzer Library");
		m->declare("analyzers.lib/version", "0.2");
		m->declare("author", "Klaus Scheuermann");
		m->declare("basics.lib/bypass1:author", "Julius Smith");
		m->declare("basics.lib/name", "Faust Basic Element Library");
		m->declare("basics.lib/parallelMax:author", "Bart Brouns");
		m->declare("basics.lib/parallelMax:copyright", "Copyright (c) 2020 Bart Brouns <bart@magnetophon.nl>");
		m->declare("basics.lib/parallelMax:licence", "GPL-3.0");
		m->declare("basics.lib/parallelMin:author", "Bart Brouns");
		m->declare("basics.lib/parallelMin:copyright", "Copyright (c) 2020 Bart Brouns <bart@magnetophon.nl>");
		m->declare("basics.lib/parallelMin:licence", "GPL-3.0");
		m->declare("basics.lib/parallelOp:author", "Bart Brouns");
		m->declare("basics.lib/parallelOp:copyright", "Copyright (c) 2020 Bart Brouns <bart@magnetophon.nl>");
		m->declare("basics.lib/parallelOp:licence", "GPL-3.0");
		m->declare("basics.lib/peakholder:author", "Dario Sanfilippo");
		m->declare("basics.lib/peakholder:copyright", "Copyright (C) 2022 Dario Sanfilippo <sanfilippo.dario@gmail.com>");
		m->declare("basics.lib/peakholder:license", "MIT-style STK-4.3 license");
		m->declare("basics.lib/version", "0.9");
		m->declare("compile_options", "-a /tmp/tmpv0x0wuk7.cpp -lang cpp -es 1 -mcd 16 -single -ftz 0");
		m->declare("compressors.lib/name", "Faust Compressor Effect Library");
		m->declare("compressors.lib/peak_compression_gain_N_chan_db:author", "Bart Brouns");
		m->declare("compressors.lib/peak_compression_gain_N_chan_db:license", "GPLv3");
		m->declare("compressors.lib/peak_compression_gain_mono_db:author", "Bart Brouns");
		m->declare("compressors.lib/peak_compression_gain_mono_db:license", "GPLv3");
		m->declare("compressors.lib/peak_expansion_gain_N_chan_db:author", "Bart Brouns");
		m->declare("compressors.lib/peak_expansion_gain_N_chan_db:license", "GPLv3");
		m->declare("compressors.lib/version", "0.4");
		m->declare("delays.lib/name", "Faust Delay Library");
		m->declare("delays.lib/version", "0.1");
		m->declare("dynamicsmoothing.lib/author", "Dario Sanfilippo");
		m->declare("dynamicsmoothing.lib/copyright", "2024, Dario Sanfilippo");
		m->declare("dynamicsmoothing.lib/license", "MIT");
		m->declare("dynamicsmoothing.lib/name", "dynamicSmoothing");
		m->declare("dynamicsmoothing.lib/version", "0.1");
		m->declare("ebur128.lib/author", "Jakob Dübel");
		m->declare("ebur128.lib/license", "ISC");
		m->declare("ebur128.lib/name", "ITU-R BS.1770-4 prefilter");
		m->declare("ebur128.lib/version", "1.0");
		m->declare("filename", "PodcastPluginTrack.dsp");
		m->declare("filters.lib/bandpass0_bandstop1:author", "Julius O. Smith III");
		m->declare("filters.lib/bandpass0_bandstop1:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/bandpass0_bandstop1:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/bandpass:author", "Julius O. Smith III");
		m->declare("filters.lib/bandpass:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/bandpass:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/fir:author", "Julius O. Smith III");
		m->declare("filters.lib/fir:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/fir:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/highpass:author", "Julius O. Smith III");
		m->declare("filters.lib/highpass:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/iir:author", "Julius O. Smith III");
		m->declare("filters.lib/iir:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/iir:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/lowpass0_highpass1", "MIT-style STK-4.3 license");
		m->declare("filters.lib/lowpass0_highpass1:author", "Julius O. Smith III");
		m->declare("filters.lib/lowpass:author", "Julius O. Smith III");
		m->declare("filters.lib/lowpass:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/lowpass:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/name", "Faust Filters Library");
		m->declare("filters.lib/peak_eq:author", "Julius O. Smith III");
		m->declare("filters.lib/peak_eq:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/peak_eq:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/peak_eq_cq:author", "Julius O. Smith III");
		m->declare("filters.lib/peak_eq_cq:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/peak_eq_cq:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/resonbp:author", "Julius O. Smith III");
		m->declare("filters.lib/resonbp:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/resonbp:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/svf:author", "Oleg Nesterov");
		m->declare("filters.lib/svf:copyright", "Copyright (C) 2020 Oleg Nesterov <oleg@redhat.com>");
		m->declare("filters.lib/svf:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/tf1sb:author", "Julius O. Smith III");
		m->declare("filters.lib/tf1sb:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/tf1sb:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/tf22t:author", "Julius O. Smith III");
		m->declare("filters.lib/tf22t:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/tf22t:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/tf2:author", "Julius O. Smith III");
		m->declare("filters.lib/tf2:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/tf2:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/tf2s:author", "Julius O. Smith III");
		m->declare("filters.lib/tf2s:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/tf2s:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/version", "0.3");
		m->declare("interpolators.lib/interpolate_linear:author", "Stéphane Letz");
		m->declare("interpolators.lib/interpolate_linear:licence", "MIT");
		m->declare("interpolators.lib/name", "Faust Interpolator Library");
		m->declare("interpolators.lib/version", "0.3");
		m->declare("license", "GPLv3");
		m->declare("maths.lib/author", "GRAME");
		m->declare("maths.lib/copyright", "GRAME");
		m->declare("maths.lib/license", "LGPL with exception");
		m->declare("maths.lib/name", "Faust Math Library");
		m->declare("maths.lib/version", "2.5");
		m->declare("name", "PodcastPlugins TRACK");
		m->declare("platform.lib/name", "Generic Platform Library");
		m->declare("platform.lib/version", "0.3");
		m->declare("routes.lib/name", "Faust Signal Routing Library");
		m->declare("routes.lib/version", "0.2");
		m->declare("signals.lib/name", "Faust Signal Routing Library");
		m->declare("signals.lib/onePoleSwitching:author", "Jonatan Liljedahl, revised by Dario Sanfilippo");
		m->declare("signals.lib/onePoleSwitching:licence", "STK-4.3");
		m->declare("signals.lib/version", "0.3");
		m->declare("version", "0.1");
	}

	FAUSTPP_VIRTUAL int getNumInputs() {
		return 2;
	}
	FAUSTPP_VIRTUAL int getNumOutputs() {
		return 2;
	}
	
	static void classInit(int sample_rate) {
	}
	
	FAUSTPP_VIRTUAL void instanceConstants(int sample_rate) {
		fSampleRate = sample_rate;
		float fConst0 = std::min<float>(1.92e+05f, std::max<float>(1.0f, float(fSampleRate)));
		fConst1 = 2e+01f / fConst0;
		float fConst2 = std::tan(25132.742f / fConst0);
		float fConst3 = fConst0 * fConst2;
		float fConst4 = mydsp_faustpower2_f(std::sqrt(4.0f * mydsp_faustpower2_f(fConst0) * std::tan(12566.371f / fConst0) * fConst2));
		float fConst5 = 2.0f * fConst3 - 0.5f * (fConst4 / fConst3);
		float fConst6 = 2.0f * (fConst5 / fConst0);
		fConst7 = 1.0f / fConst0;
		float fConst8 = mydsp_faustpower2_f(fConst7) * fConst4;
		fConst9 = fConst8 + (4.0f - fConst6);
		fConst10 = 2.0f * fConst8 + -8.0f;
		float fConst11 = fConst8 + fConst6 + 4.0f;
		fConst12 = 1.0f / fConst11;
		fConst13 = std::tan(18849.557f / fConst0);
		float fConst14 = mydsp_faustpower2_f(fConst13);
		fConst15 = 1.0f / fConst14;
		fConst16 = 2.0f * (1.0f - fConst15);
		float fConst17 = 1.0f / fConst13;
		fConst18 = (fConst17 + -0.5176381f) / fConst13 + 1.0f;
		fConst19 = 1.0f / ((fConst17 + 0.5176381f) / fConst13 + 1.0f);
		fConst20 = (fConst17 + -1.4142135f) / fConst13 + 1.0f;
		fConst21 = 1.0f / ((fConst17 + 1.4142135f) / fConst13 + 1.0f);
		fConst22 = (fConst17 + -1.9318516f) / fConst13 + 1.0f;
		fConst23 = 1.0f / ((fConst17 + 1.9318516f) / fConst13 + 1.0f);
		float fConst24 = 37699.113f / fConst0;
		float fConst25 = std::tan(fConst24);
		fConst26 = 2.0f * (1.0f - 1.0f / mydsp_faustpower2_f(fConst25));
		float fConst27 = 1.0f / fConst25;
		fConst28 = (fConst27 + -0.33333334f) / fConst25 + 1.0f;
		float fConst29 = (fConst27 + 0.33333334f) / fConst25 + 1.0f;
		fConst30 = 1.0f / fConst29;
		fConst31 = 44.1f / fConst0;
		fConst32 = 1.0f - fConst31;
		float fConst33 = std::tan(56548.668f / fConst0);
		fConst34 = 2.0f * (1.0f - 1.0f / mydsp_faustpower2_f(fConst33));
		float fConst35 = 1.0f / fConst33;
		fConst36 = (fConst35 + -1.4142135f) / fConst33 + 1.0f;
		fConst37 = 1.0f / ((fConst35 + 1.4142135f) / fConst33 + 1.0f);
		float fConst38 = std::tan(188.49556f / fConst0);
		float fConst39 = mydsp_faustpower2_f(fConst38);
		fConst40 = 1.0f / fConst39;
		fConst41 = 2.0f * (1.0f - fConst40);
		float fConst42 = 1.0f / fConst38;
		fConst43 = (fConst42 + -1.4142135f) / fConst38 + 1.0f;
		fConst44 = 1.0f / ((fConst42 + 1.4142135f) / fConst38 + 1.0f);
		fConst45 = 0.0f - 2.0f / fConst39;
		fConst46 = 1.0f / (fConst25 * fConst29);
		fConst47 = 0.0f - fConst46;
		fConst48 = 0.1f * fConst0;
		iConst49 = int(std::min<float>(4.8e+04f, std::max<float>(0.0f, fConst48)));
		float fConst50 = std::rint(0.8f * fConst0);
		iConst51 = int(std::floor(0.5f * fConst50)) % 2;
		float fConst52 = std::tan(5283.415f / fConst0);
		float fConst53 = 1.7803667f * fConst52;
		float fConst54 = mydsp_faustpower2_f(fConst52);
		fConst55 = fConst54 + fConst53 + 1.5848527f;
		fConst56 = 0.2236068f * fConst55;
		fConst57 = fConst54 + -1.5848527f;
		fConst58 = 0.4472136f * fConst57;
		fConst59 = fConst54 + -1.0f;
		fConst60 = 2.0f * fConst59;
		float fConst61 = 1.4142135f * fConst52;
		fConst62 = fConst54 + (1.0f - fConst61);
		fConst63 = fConst54 + (1.5848527f - fConst53);
		fConst64 = 0.2236068f * fConst63;
		fConst65 = 1.0f / (fConst54 + fConst61 + 1.0f);
		float fConst66 = std::tan(119.806114f / fConst0);
		float fConst67 = mydsp_faustpower2_f(fConst66);
		fConst68 = 1.0006541f * (fConst67 + -1.0f);
		float fConst69 = 0.50032705f * (fConst67 + 1.0f);
		fConst70 = fConst69 - fConst66;
		float fConst71 = fConst66 + fConst69;
		fConst72 = 1.0f / fConst71;
		fConst73 = 0.0f - 1.0006541f / fConst71;
		iConst74 = int(std::floor(fConst50)) % 2;
		iConst75 = int(std::floor(0.25f * fConst50)) % 2;
		iConst76 = iConst74 + 2 * iConst51;
		iConst77 = int(std::floor(0.125f * fConst50)) % 2;
		iConst78 = iConst76 + 4 * iConst75;
		iConst79 = int(std::floor(0.0625f * fConst50)) % 2;
		iConst80 = iConst78 + 8 * iConst77;
		iConst81 = int(std::floor(0.03125f * fConst50)) % 2;
		iConst82 = iConst80 + 16 * iConst79;
		iConst83 = int(std::floor(0.015625f * fConst50)) % 2;
		iConst84 = iConst82 + 32 * iConst81;
		iConst85 = int(std::floor(0.0078125f * fConst50)) % 2;
		iConst86 = iConst84 + 64 * iConst83;
		iConst87 = int(std::floor(0.00390625f * fConst50)) % 2;
		iConst88 = iConst86 + 128 * iConst85;
		iConst89 = int(std::floor(0.001953125f * fConst50)) % 2;
		iConst90 = iConst88 + 256 * iConst87;
		iConst91 = int(std::floor(0.0009765625f * fConst50)) % 2;
		iConst92 = iConst90 + 512 * iConst89;
		iConst93 = int(std::floor(0.00048828125f * fConst50)) % 2;
		iConst94 = iConst92 + 1024 * iConst91;
		iConst95 = int(std::floor(0.00024414062f * fConst50)) % 2;
		iConst96 = iConst94 + 2048 * iConst93;
		iConst97 = int(std::floor(0.00012207031f * fConst50)) % 2;
		iConst98 = iConst96 + 4096 * iConst95;
		iConst99 = int(std::floor(6.1035156e-05f * fConst50)) % 2;
		iConst100 = iConst98 + 8192 * iConst97;
		iConst101 = int(std::floor(3.0517578e-05f * fConst50)) % 2;
		iConst102 = iConst100 + 16384 * iConst99;
		iConst103 = int(std::floor(1.5258789e-05f * fConst50)) % 2;
		iConst104 = iConst102 + 32768 * iConst101;
		iConst105 = int(std::floor(7.6293945e-06f * fConst50)) % 2;
		iConst106 = iConst104 + 65536 * iConst103;
		fConst107 = 1.0f / std::max<float>(fConst50, 1.1920929e-07f);
		fConst108 = 0.5f * fConst55;
		fConst109 = 0.5f * fConst63;
		iConst110 = int(std::floor(0.001f * fConst0)) % 2;
		iConst111 = int(std::floor(0.0005f * fConst0)) % 2;
		iConst112 = int(std::floor(0.00025f * fConst0)) % 2;
		iConst113 = iConst110 + 2 * iConst111;
		iConst114 = int(std::floor(0.000125f * fConst0)) % 2;
		iConst115 = iConst113 + 4 * iConst112;
		iConst116 = int(std::floor(6.25e-05f * fConst0)) % 2;
		iConst117 = iConst115 + 8 * iConst114;
		iConst118 = int(std::floor(3.125e-05f * fConst0)) % 2;
		iConst119 = iConst117 + 16 * iConst116;
		iConst120 = int(std::floor(1.5625e-05f * fConst0)) % 2;
		iConst121 = iConst119 + 32 * iConst118;
		iConst122 = int(std::floor(7.8125e-06f * fConst0)) % 2;
		iConst123 = iConst121 + 64 * iConst120;
		fConst124 = std::exp(0.0f - 2.0f / fConst0);
		fConst125 = std::exp(0.0f - 1e+02f / fConst0);
		float fConst126 = std::tan(28524.91f / fConst0);
		fConst127 = 2.0f * (1.0f - 1.0f / mydsp_faustpower2_f(fConst126));
		float fConst128 = 1.0f / fConst126;
		fConst129 = (fConst128 + -0.33333334f) / fConst126 + 1.0f;
		float fConst130 = (fConst128 + 0.33333334f) / fConst126 + 1.0f;
		fConst131 = 1.0f / fConst130;
		fConst132 = 1.0f / (fConst126 * fConst130);
		fConst133 = 0.0f - fConst132;
		float fConst134 = std::tan(21583.28f / fConst0);
		fConst135 = 2.0f * (1.0f - 1.0f / mydsp_faustpower2_f(fConst134));
		float fConst136 = 1.0f / fConst134;
		fConst137 = (fConst136 + -0.33333334f) / fConst134 + 1.0f;
		float fConst138 = (fConst136 + 0.33333334f) / fConst134 + 1.0f;
		fConst139 = 1.0f / fConst138;
		fConst140 = 1.0f / (fConst134 * fConst138);
		fConst141 = 0.0f - fConst140;
		float fConst142 = std::tan(16330.918f / fConst0);
		fConst143 = 2.0f * (1.0f - 1.0f / mydsp_faustpower2_f(fConst142));
		float fConst144 = 1.0f / fConst142;
		fConst145 = (fConst144 + -0.33333334f) / fConst142 + 1.0f;
		float fConst146 = (fConst144 + 0.33333334f) / fConst142 + 1.0f;
		fConst147 = 1.0f / fConst146;
		fConst148 = 1.0f / (fConst142 * fConst146);
		fConst149 = 0.0f - fConst148;
		float fConst150 = std::tan(12356.735f / fConst0);
		fConst151 = 2.0f * (1.0f - 1.0f / mydsp_faustpower2_f(fConst150));
		float fConst152 = 1.0f / fConst150;
		fConst153 = (fConst152 + -0.33333334f) / fConst150 + 1.0f;
		float fConst154 = (fConst152 + 0.33333334f) / fConst150 + 1.0f;
		fConst155 = 1.0f / fConst154;
		fConst156 = 1.0f / (fConst150 * fConst154);
		fConst157 = 0.0f - fConst156;
		float fConst158 = std::tan(9349.684f / fConst0);
		fConst159 = 2.0f * (1.0f - 1.0f / mydsp_faustpower2_f(fConst158));
		float fConst160 = 1.0f / fConst158;
		fConst161 = (fConst160 + -0.33333334f) / fConst158 + 1.0f;
		float fConst162 = (fConst160 + 0.33333334f) / fConst158 + 1.0f;
		fConst163 = 1.0f / fConst162;
		fConst164 = 1.0f / (fConst158 * fConst162);
		fConst165 = 0.0f - fConst164;
		float fConst166 = std::tan(7074.407f / fConst0);
		fConst167 = 2.0f * (1.0f - 1.0f / mydsp_faustpower2_f(fConst166));
		float fConst168 = 1.0f / fConst166;
		fConst169 = (fConst168 + -0.33333334f) / fConst166 + 1.0f;
		float fConst170 = (fConst168 + 0.33333334f) / fConst166 + 1.0f;
		fConst171 = 1.0f / fConst170;
		fConst172 = 1.0f / (fConst166 * fConst170);
		fConst173 = 0.0f - fConst172;
		float fConst174 = std::tan(5352.827f / fConst0);
		fConst175 = 2.0f * (1.0f - 1.0f / mydsp_faustpower2_f(fConst174));
		float fConst176 = 1.0f / fConst174;
		fConst177 = (fConst176 + -0.33333334f) / fConst174 + 1.0f;
		float fConst178 = (fConst176 + 0.33333334f) / fConst174 + 1.0f;
		fConst179 = 1.0f / fConst178;
		fConst180 = 1.0f / (fConst174 * fConst178);
		fConst181 = 0.0f - fConst180;
		float fConst182 = std::tan(4050.1992f / fConst0);
		fConst183 = 2.0f * (1.0f - 1.0f / mydsp_faustpower2_f(fConst182));
		float fConst184 = 1.0f / fConst182;
		fConst185 = (fConst184 + -0.33333334f) / fConst182 + 1.0f;
		float fConst186 = (fConst184 + 0.33333334f) / fConst182 + 1.0f;
		fConst187 = 1.0f / fConst186;
		fConst188 = 1.0f / (fConst182 * fConst186);
		fConst189 = 0.0f - fConst188;
		float fConst190 = std::tan(3064.57f / fConst0);
		fConst191 = 2.0f * (1.0f - 1.0f / mydsp_faustpower2_f(fConst190));
		float fConst192 = 1.0f / fConst190;
		fConst193 = (fConst192 + -0.33333334f) / fConst190 + 1.0f;
		float fConst194 = (fConst192 + 0.33333334f) / fConst190 + 1.0f;
		fConst195 = 1.0f / fConst194;
		fConst196 = 1.0f / (fConst190 * fConst194);
		fConst197 = 0.0f - fConst196;
		float fConst198 = std::tan(2318.7969f / fConst0);
		fConst199 = 2.0f * (1.0f - 1.0f / mydsp_faustpower2_f(fConst198));
		float fConst200 = 1.0f / fConst198;
		fConst201 = (fConst200 + -0.33333334f) / fConst198 + 1.0f;
		float fConst202 = (fConst200 + 0.33333334f) / fConst198 + 1.0f;
		fConst203 = 1.0f / fConst202;
		fConst204 = 1.0f / (fConst198 * fConst202);
		fConst205 = 0.0f - fConst204;
		float fConst206 = std::tan(1754.51f / fConst0);
		fConst207 = 2.0f * (1.0f - 1.0f / mydsp_faustpower2_f(fConst206));
		float fConst208 = 1.0f / fConst206;
		fConst209 = (fConst208 + -0.33333334f) / fConst206 + 1.0f;
		float fConst210 = (fConst208 + 0.33333334f) / fConst206 + 1.0f;
		fConst211 = 1.0f / fConst210;
		fConst212 = 1.0f / (fConst206 * fConst210);
		fConst213 = 0.0f - fConst212;
		float fConst214 = std::tan(1327.5443f / fConst0);
		fConst215 = 2.0f * (1.0f - 1.0f / mydsp_faustpower2_f(fConst214));
		float fConst216 = 1.0f / fConst214;
		fConst217 = (fConst216 + -0.33333334f) / fConst214 + 1.0f;
		float fConst218 = (fConst216 + 0.33333334f) / fConst214 + 1.0f;
		fConst219 = 1.0f / fConst218;
		fConst220 = 1.0f / (fConst214 * fConst218);
		fConst221 = 0.0f - fConst220;
		float fConst222 = std::tan(1004.48206f / fConst0);
		fConst223 = 2.0f * (1.0f - 1.0f / mydsp_faustpower2_f(fConst222));
		float fConst224 = 1.0f / fConst222;
		fConst225 = (fConst224 + -0.33333334f) / fConst222 + 1.0f;
		float fConst226 = (fConst224 + 0.33333334f) / fConst222 + 1.0f;
		fConst227 = 1.0f / fConst226;
		fConst228 = 1.0f / (fConst222 * fConst226);
		fConst229 = 0.0f - fConst228;
		float fConst230 = std::tan(760.038f / fConst0);
		fConst231 = 2.0f * (1.0f - 1.0f / mydsp_faustpower2_f(fConst230));
		float fConst232 = 1.0f / fConst230;
		fConst233 = (fConst232 + -0.33333334f) / fConst230 + 1.0f;
		float fConst234 = (fConst232 + 0.33333334f) / fConst230 + 1.0f;
		fConst235 = 1.0f / fConst234;
		fConst236 = 1.0f / (fConst230 * fConst234);
		fConst237 = 0.0f - fConst236;
		float fConst238 = std::tan(575.0803f / fConst0);
		fConst239 = 2.0f * (1.0f - 1.0f / mydsp_faustpower2_f(fConst238));
		float fConst240 = 1.0f / fConst238;
		fConst241 = (fConst240 + -0.33333334f) / fConst238 + 1.0f;
		float fConst242 = (fConst240 + 0.33333334f) / fConst238 + 1.0f;
		fConst243 = 1.0f / fConst242;
		fConst244 = 1.0f / (fConst238 * fConst242);
		fConst245 = 0.0f - fConst244;
		float fConst246 = std::tan(435.13263f / fConst0);
		fConst247 = 2.0f * (1.0f - 1.0f / mydsp_faustpower2_f(fConst246));
		float fConst248 = 1.0f / fConst246;
		fConst249 = (fConst248 + -0.33333334f) / fConst246 + 1.0f;
		float fConst250 = (fConst248 + 0.33333334f) / fConst246 + 1.0f;
		fConst251 = 1.0f / fConst250;
		fConst252 = 1.0f / (fConst246 * fConst250);
		fConst253 = 0.0f - fConst252;
		float fConst254 = std::tan(329.24167f / fConst0);
		fConst255 = 2.0f * (1.0f - 1.0f / mydsp_faustpower2_f(fConst254));
		float fConst256 = 1.0f / fConst254;
		fConst257 = (fConst256 + -0.33333334f) / fConst254 + 1.0f;
		float fConst258 = (fConst256 + 0.33333334f) / fConst254 + 1.0f;
		fConst259 = 1.0f / fConst258;
		fConst260 = 1.0f / (fConst254 * fConst258);
		fConst261 = 0.0f - fConst260;
		float fConst262 = std::tan(249.11964f / fConst0);
		fConst263 = 2.0f * (1.0f - 1.0f / mydsp_faustpower2_f(fConst262));
		float fConst264 = 1.0f / fConst262;
		fConst265 = (fConst264 + -0.33333334f) / fConst262 + 1.0f;
		float fConst266 = (fConst264 + 0.33333334f) / fConst262 + 1.0f;
		fConst267 = 1.0f / fConst266;
		fConst268 = 1.0f / (fConst262 * fConst266);
		fConst269 = 0.0f - fConst268;
		fConst270 = (fConst42 + -0.33333334f) / fConst38 + 1.0f;
		float fConst271 = (fConst42 + 0.33333334f) / fConst38 + 1.0f;
		fConst272 = 1.0f / fConst271;
		fConst273 = 1.0f / (fConst38 * fConst271);
		fConst274 = 0.0f - fConst273;
		fConst275 = 0.125f * fConst0;
		fConst276 = 1.1312305e-06f * fConst0;
		iConst277 = int(std::floor(0.0001f * fConst0)) % 2;
		iConst278 = int(std::floor(5e-05f * fConst0)) % 2;
		iConst279 = int(std::floor(2.5e-05f * fConst0)) % 2;
		iConst280 = iConst277 + 2 * iConst278;
		iConst281 = int(std::floor(1.25e-05f * fConst0)) % 2;
		iConst282 = iConst280 + 4 * iConst279;
		iConst283 = int(std::floor(6.25e-06f * fConst0)) % 2;
		iConst284 = iConst282 + 8 * iConst281;
		fConst285 = std::exp(0.0f - 1e+01f / fConst0);
		fConst286 = 3.1415927f / fConst0;
		float fConst287 = 0.01f * fConst0;
		float fConst288 = std::rint(fConst287);
		iConst289 = int(std::floor(0.5f * fConst288)) % 2;
		iConst290 = int(std::floor(fConst288)) % 2;
		iConst291 = int(std::floor(0.25f * fConst288)) % 2;
		iConst292 = iConst290 + 2 * iConst289;
		iConst293 = int(std::floor(0.125f * fConst288)) % 2;
		iConst294 = iConst292 + 4 * iConst291;
		iConst295 = int(std::floor(0.0625f * fConst288)) % 2;
		iConst296 = iConst294 + 8 * iConst293;
		iConst297 = int(std::floor(0.03125f * fConst288)) % 2;
		iConst298 = iConst296 + 16 * iConst295;
		iConst299 = int(std::floor(0.015625f * fConst288)) % 2;
		iConst300 = iConst298 + 32 * iConst297;
		iConst301 = int(std::floor(0.0078125f * fConst288)) % 2;
		iConst302 = iConst300 + 64 * iConst299;
		iConst303 = int(std::floor(0.00390625f * fConst288)) % 2;
		iConst304 = iConst302 + 128 * iConst301;
		iConst305 = int(std::floor(0.001953125f * fConst288)) % 2;
		iConst306 = iConst304 + 256 * iConst303;
		iConst307 = int(std::floor(0.0009765625f * fConst288)) % 2;
		iConst308 = iConst306 + 512 * iConst305;
		fConst309 = 1.0f / std::max<float>(fConst288, 1.1920929e-07f);
		fConst310 = 0.0f - 2.0f / fConst14;
		fConst311 = std::exp(0.0f - 25.0f / fConst0);
		iConst312 = int(std::floor(fConst287)) % 2;
		iConst313 = int(std::floor(0.005f * fConst0)) % 2;
		iConst314 = int(std::floor(0.0025f * fConst0)) % 2;
		iConst315 = iConst312 + 2 * iConst313;
		iConst316 = int(std::floor(0.00125f * fConst0)) % 2;
		iConst317 = iConst315 + 4 * iConst314;
		iConst318 = int(std::floor(0.000625f * fConst0)) % 2;
		iConst319 = iConst317 + 8 * iConst316;
		iConst320 = int(std::floor(0.0003125f * fConst0)) % 2;
		iConst321 = iConst319 + 16 * iConst318;
		iConst322 = int(std::floor(0.00015625f * fConst0)) % 2;
		iConst323 = iConst321 + 32 * iConst320;
		iConst324 = int(std::floor(7.8125e-05f * fConst0)) % 2;
		iConst325 = iConst323 + 64 * iConst322;
		iConst326 = int(std::floor(3.90625e-05f * fConst0)) % 2;
		iConst327 = iConst325 + 128 * iConst324;
		iConst328 = int(std::floor(1.953125e-05f * fConst0)) % 2;
		iConst329 = iConst327 + 256 * iConst326;
		iConst330 = int(std::floor(9.765625e-06f * fConst0)) % 2;
		iConst331 = iConst329 + 512 * iConst328;
		iConst332 = int(std::floor(4.8828124e-06f * fConst0)) % 2;
		iConst333 = iConst331 + 1024 * iConst330;
		fConst334 = std::tan(5116.5566f / fConst0);
		float fConst335 = mydsp_faustpower2_f(fConst334);
		fConst336 = 1.0f / fConst335;
		fConst337 = 2.0f * (1.0f - fConst336);
		float fConst338 = 1.0f / fConst334;
		fConst339 = (fConst338 + -0.5176381f) / fConst334 + 1.0f;
		fConst340 = 1.0f / ((fConst338 + 0.5176381f) / fConst334 + 1.0f);
		fConst341 = (fConst338 + -1.4142135f) / fConst334 + 1.0f;
		fConst342 = 1.0f / ((fConst338 + 1.4142135f) / fConst334 + 1.0f);
		fConst343 = (fConst338 + -1.9318516f) / fConst334 + 1.0f;
		fConst344 = 1.0f / ((fConst338 + 1.9318516f) / fConst334 + 1.0f);
		fConst345 = 0.0f - 2.0f / fConst335;
		fConst346 = std::tan(1388.8472f / fConst0);
		float fConst347 = mydsp_faustpower2_f(fConst346);
		fConst348 = 1.0f / fConst347;
		fConst349 = 2.0f * (1.0f - fConst348);
		float fConst350 = 1.0f / fConst346;
		fConst351 = (fConst350 + -0.5176381f) / fConst346 + 1.0f;
		fConst352 = 1.0f / ((fConst350 + 0.5176381f) / fConst346 + 1.0f);
		fConst353 = (fConst350 + -1.4142135f) / fConst346 + 1.0f;
		fConst354 = 1.0f / ((fConst350 + 1.4142135f) / fConst346 + 1.0f);
		fConst355 = (fConst350 + -1.9318516f) / fConst346 + 1.0f;
		fConst356 = 1.0f / ((fConst350 + 1.9318516f) / fConst346 + 1.0f);
		fConst357 = 0.0f - 2.0f / fConst347;
		fConst358 = std::tan(376.99112f / fConst0);
		float fConst359 = mydsp_faustpower2_f(fConst358);
		fConst360 = 1.0f / fConst359;
		fConst361 = 2.0f * (1.0f - fConst360);
		float fConst362 = 1.0f / fConst358;
		fConst363 = (fConst362 + -0.5176381f) / fConst358 + 1.0f;
		fConst364 = 1.0f / ((fConst362 + 0.5176381f) / fConst358 + 1.0f);
		fConst365 = (fConst362 + -1.4142135f) / fConst358 + 1.0f;
		fConst366 = 1.0f / ((fConst362 + 1.4142135f) / fConst358 + 1.0f);
		fConst367 = (fConst362 + -1.9318516f) / fConst358 + 1.0f;
		fConst368 = 1.0f / ((fConst362 + 1.9318516f) / fConst358 + 1.0f);
		fConst369 = 0.0f - 2.0f / fConst359;
		fConst370 = 2.0f * (fConst5 / (fConst0 * fConst11));
		fConst371 = 0.0f - fConst370;
		fConst372 = std::exp(0.0f - 1e+03f / fConst0);
		fConst373 = 9424.778f / (fConst0 * std::sin(fConst24));
		float fConst374 = std::tan(18849.557f / fConst0);
		fConst375 = 1.0f / fConst374;
		fConst376 = 2.0f * (1.0f - 1.0f / mydsp_faustpower2_f(fConst374));
		float fConst377 = 0.11f;
		iConst378 = int((fConst377 + -0.1f) * fConst0);
		fConst379 = std::exp(0.0f - 628.31854f / fConst0);
		fConst380 = 1.0f - fConst379;
		fConst381 = std::exp(0.0f - 6.2831855f / fConst0);
		fConst382 = 1.0f - fConst381;
		iConst383 = int(std::min<float>(4.8e+04f, std::max<float>(0.0f, fConst377 * fConst0)));
		float fConst384 = std::rint(3.0f * fConst0);
		iConst385 = int(std::floor(0.5f * fConst384)) % 2;
		iConst386 = int(std::floor(fConst384)) % 2;
		iConst387 = int(std::floor(0.25f * fConst384)) % 2;
		iConst388 = iConst386 + 2 * iConst385;
		iConst389 = int(std::floor(0.125f * fConst384)) % 2;
		iConst390 = iConst388 + 4 * iConst387;
		iConst391 = int(std::floor(0.0625f * fConst384)) % 2;
		iConst392 = iConst390 + 8 * iConst389;
		iConst393 = int(std::floor(0.03125f * fConst384)) % 2;
		iConst394 = iConst392 + 16 * iConst391;
		iConst395 = int(std::floor(0.015625f * fConst384)) % 2;
		iConst396 = iConst394 + 32 * iConst393;
		iConst397 = int(std::floor(0.0078125f * fConst384)) % 2;
		iConst398 = iConst396 + 64 * iConst395;
		iConst399 = int(std::floor(0.00390625f * fConst384)) % 2;
		iConst400 = iConst398 + 128 * iConst397;
		iConst401 = int(std::floor(0.001953125f * fConst384)) % 2;
		iConst402 = iConst400 + 256 * iConst399;
		iConst403 = int(std::floor(0.0009765625f * fConst384)) % 2;
		iConst404 = iConst402 + 512 * iConst401;
		iConst405 = int(std::floor(0.00048828125f * fConst384)) % 2;
		iConst406 = iConst404 + 1024 * iConst403;
		iConst407 = int(std::floor(0.00024414062f * fConst384)) % 2;
		iConst408 = iConst406 + 2048 * iConst405;
		iConst409 = int(std::floor(0.00012207031f * fConst384)) % 2;
		iConst410 = iConst408 + 4096 * iConst407;
		iConst411 = int(std::floor(6.1035156e-05f * fConst384)) % 2;
		iConst412 = iConst410 + 8192 * iConst409;
		iConst413 = int(std::floor(3.0517578e-05f * fConst384)) % 2;
		iConst414 = iConst412 + 16384 * iConst411;
		iConst415 = int(std::floor(1.5258789e-05f * fConst384)) % 2;
		iConst416 = iConst414 + 32768 * iConst413;
		iConst417 = int(std::floor(7.6293945e-06f * fConst384)) % 2;
		iConst418 = iConst416 + 65536 * iConst415;
		iConst419 = int(std::floor(3.8146973e-06f * fConst384)) % 2;
		iConst420 = iConst418 + 131072 * iConst417;
		iConst421 = int(std::floor(1.9073486e-06f * fConst384)) % 2;
		iConst422 = iConst420 + 262144 * iConst419;
		fConst423 = 1.0f / std::max<float>(fConst384, 1.1920929e-07f);
	}
	
	FAUSTPP_VIRTUAL void instanceResetUserInterface() {
		fVslider0 = FAUSTFLOAT(-16.0f);
		fVslider1 = FAUSTFLOAT(0.0f);
		fVslider2 = FAUSTFLOAT(0.0f);
		fVslider3 = FAUSTFLOAT(0.0f);
		fVslider4 = FAUSTFLOAT(8e+01f);
		fCheckbox0 = FAUSTFLOAT(0.0f);
		fCheckbox1 = FAUSTFLOAT(0.0f);
		fCheckbox2 = FAUSTFLOAT(0.0f);
		fCheckbox3 = FAUSTFLOAT(0.0f);
	}
	
	FAUSTPP_VIRTUAL void instanceClear() {
		for (int l0 = 0; l0 < 2; l0 = l0 + 1) {
			fRec9[l0] = 0.0f;
		}
		IOTA0 = 0;
		for (int l1 = 0; l1 < 32768; l1 = l1 + 1) {
			fVec0[l1] = 0.0f;
		}
		for (int l2 = 0; l2 < 2; l2 = l2 + 1) {
			fRec8[l2] = 0.0f;
		}
		for (int l3 = 0; l3 < 32768; l3 = l3 + 1) {
			fVec1[l3] = 0.0f;
		}
		for (int l4 = 0; l4 < 2; l4 = l4 + 1) {
			fRec10[l4] = 0.0f;
		}
		for (int l5 = 0; l5 < 2; l5 = l5 + 1) {
			fRec11[l5] = 0.0f;
		}
		for (int l6 = 0; l6 < 3; l6 = l6 + 1) {
			fRec13[l6] = 0.0f;
		}
		for (int l7 = 0; l7 < 3; l7 = l7 + 1) {
			fRec12[l7] = 0.0f;
		}
		for (int l8 = 0; l8 < 3; l8 = l8 + 1) {
			fRec15[l8] = 0.0f;
		}
		for (int l9 = 0; l9 < 3; l9 = l9 + 1) {
			fRec14[l9] = 0.0f;
		}
		for (int l10 = 0; l10 < 2; l10 = l10 + 1) {
			fVec2[l10] = 0.0f;
		}
		for (int l11 = 0; l11 < 3; l11 = l11 + 1) {
			fRec7[l11] = 0.0f;
		}
		for (int l12 = 0; l12 < 32768; l12 = l12 + 1) {
			fVec3[l12] = 0.0f;
		}
		for (int l13 = 0; l13 < 2; l13 = l13 + 1) {
			fVec4[l13] = 0.0f;
		}
		for (int l14 = 0; l14 < 2; l14 = l14 + 1) {
			fRec19[l14] = 0.0f;
		}
		for (int l15 = 0; l15 < 2; l15 = l15 + 1) {
			fRec18[l15] = 0.0f;
		}
		for (int l16 = 0; l16 < 2; l16 = l16 + 1) {
			fVec5[l16] = 0.0f;
		}
		for (int l17 = 0; l17 < 2; l17 = l17 + 1) {
			fRec17[l17] = 0.0f;
		}
		for (int l18 = 0; l18 < 2; l18 = l18 + 1) {
			fRec16[l18] = 0.0f;
		}
		for (int l19 = 0; l19 < 2; l19 = l19 + 1) {
			fVec6[l19] = 0.0f;
		}
		for (int l20 = 0; l20 < 3; l20 = l20 + 1) {
			fVec7[l20] = 0.0f;
		}
		for (int l21 = 0; l21 < 7; l21 = l21 + 1) {
			fVec8[l21] = 0.0f;
		}
		for (int l22 = 0; l22 < 15; l22 = l22 + 1) {
			fVec9[l22] = 0.0f;
		}
		for (int l23 = 0; l23 < 32; l23 = l23 + 1) {
			fVec10[l23] = 0.0f;
		}
		for (int l24 = 0; l24 < 64; l24 = l24 + 1) {
			fVec11[l24] = 0.0f;
		}
		for (int l25 = 0; l25 < 128; l25 = l25 + 1) {
			fVec12[l25] = 0.0f;
		}
		for (int l26 = 0; l26 < 256; l26 = l26 + 1) {
			fVec13[l26] = 0.0f;
		}
		for (int l27 = 0; l27 < 512; l27 = l27 + 1) {
			fVec14[l27] = 0.0f;
		}
		for (int l28 = 0; l28 < 1024; l28 = l28 + 1) {
			fVec15[l28] = 0.0f;
		}
		for (int l29 = 0; l29 < 2048; l29 = l29 + 1) {
			fVec16[l29] = 0.0f;
		}
		for (int l30 = 0; l30 < 4096; l30 = l30 + 1) {
			fVec17[l30] = 0.0f;
		}
		for (int l31 = 0; l31 < 8192; l31 = l31 + 1) {
			fVec18[l31] = 0.0f;
		}
		for (int l32 = 0; l32 < 16384; l32 = l32 + 1) {
			fVec19[l32] = 0.0f;
		}
		for (int l33 = 0; l33 < 32768; l33 = l33 + 1) {
			fVec20[l33] = 0.0f;
		}
		for (int l34 = 0; l34 < 65536; l34 = l34 + 1) {
			fVec21[l34] = 0.0f;
		}
		for (int l35 = 0; l35 < 131072; l35 = l35 + 1) {
			fVec22[l35] = 0.0f;
		}
		for (int l36 = 0; l36 < 262144; l36 = l36 + 1) {
			fVec23[l36] = 0.0f;
		}
		for (int l37 = 0; l37 < 2; l37 = l37 + 1) {
			fVec24[l37] = 0.0f;
		}
		for (int l38 = 0; l38 < 2; l38 = l38 + 1) {
			fRec23[l38] = 0.0f;
		}
		for (int l39 = 0; l39 < 2; l39 = l39 + 1) {
			fRec22[l39] = 0.0f;
		}
		for (int l40 = 0; l40 < 2; l40 = l40 + 1) {
			fVec25[l40] = 0.0f;
		}
		for (int l41 = 0; l41 < 2; l41 = l41 + 1) {
			fRec21[l41] = 0.0f;
		}
		for (int l42 = 0; l42 < 2; l42 = l42 + 1) {
			fRec20[l42] = 0.0f;
		}
		for (int l43 = 0; l43 < 2; l43 = l43 + 1) {
			fVec26[l43] = 0.0f;
		}
		for (int l44 = 0; l44 < 3; l44 = l44 + 1) {
			fVec27[l44] = 0.0f;
		}
		for (int l45 = 0; l45 < 7; l45 = l45 + 1) {
			fVec28[l45] = 0.0f;
		}
		for (int l46 = 0; l46 < 15; l46 = l46 + 1) {
			fVec29[l46] = 0.0f;
		}
		for (int l47 = 0; l47 < 32; l47 = l47 + 1) {
			fVec30[l47] = 0.0f;
		}
		for (int l48 = 0; l48 < 64; l48 = l48 + 1) {
			fVec31[l48] = 0.0f;
		}
		for (int l49 = 0; l49 < 128; l49 = l49 + 1) {
			fVec32[l49] = 0.0f;
		}
		for (int l50 = 0; l50 < 256; l50 = l50 + 1) {
			fVec33[l50] = 0.0f;
		}
		for (int l51 = 0; l51 < 512; l51 = l51 + 1) {
			fVec34[l51] = 0.0f;
		}
		for (int l52 = 0; l52 < 1024; l52 = l52 + 1) {
			fVec35[l52] = 0.0f;
		}
		for (int l53 = 0; l53 < 2048; l53 = l53 + 1) {
			fVec36[l53] = 0.0f;
		}
		for (int l54 = 0; l54 < 4096; l54 = l54 + 1) {
			fVec37[l54] = 0.0f;
		}
		for (int l55 = 0; l55 < 8192; l55 = l55 + 1) {
			fVec38[l55] = 0.0f;
		}
		for (int l56 = 0; l56 < 16384; l56 = l56 + 1) {
			fVec39[l56] = 0.0f;
		}
		for (int l57 = 0; l57 < 32768; l57 = l57 + 1) {
			fVec40[l57] = 0.0f;
		}
		for (int l58 = 0; l58 < 65536; l58 = l58 + 1) {
			fVec41[l58] = 0.0f;
		}
		for (int l59 = 0; l59 < 131072; l59 = l59 + 1) {
			fVec42[l59] = 0.0f;
		}
		for (int l60 = 0; l60 < 262144; l60 = l60 + 1) {
			fVec43[l60] = 0.0f;
		}
		for (int l61 = 0; l61 < 2; l61 = l61 + 1) {
			fVec44[l61] = 0.0f;
		}
		for (int l62 = 0; l62 < 3; l62 = l62 + 1) {
			fVec45[l62] = 0.0f;
		}
		for (int l63 = 0; l63 < 7; l63 = l63 + 1) {
			fVec46[l63] = 0.0f;
		}
		for (int l64 = 0; l64 < 15; l64 = l64 + 1) {
			fVec47[l64] = 0.0f;
		}
		for (int l65 = 0; l65 < 32; l65 = l65 + 1) {
			fVec48[l65] = 0.0f;
		}
		for (int l66 = 0; l66 < 64; l66 = l66 + 1) {
			fVec49[l66] = 0.0f;
		}
		for (int l67 = 0; l67 < 128; l67 = l67 + 1) {
			fVec50[l67] = 0.0f;
		}
		for (int l68 = 0; l68 < 256; l68 = l68 + 1) {
			fVec51[l68] = 0.0f;
		}
		for (int l69 = 0; l69 < 2; l69 = l69 + 1) {
			fRec24[l69] = 0.0f;
		}
		for (int l70 = 0; l70 < 3; l70 = l70 + 1) {
			fRec25[l70] = 0.0f;
		}
		for (int l71 = 0; l71 < 32768; l71 = l71 + 1) {
			fVec52[l71] = 0.0f;
		}
		for (int l72 = 0; l72 < 2; l72 = l72 + 1) {
			fVec53[l72] = 0.0f;
		}
		for (int l73 = 0; l73 < 2; l73 = l73 + 1) {
			fRec29[l73] = 0.0f;
		}
		for (int l74 = 0; l74 < 2; l74 = l74 + 1) {
			fRec28[l74] = 0.0f;
		}
		for (int l75 = 0; l75 < 2; l75 = l75 + 1) {
			fVec54[l75] = 0.0f;
		}
		for (int l76 = 0; l76 < 2; l76 = l76 + 1) {
			fRec27[l76] = 0.0f;
		}
		for (int l77 = 0; l77 < 2; l77 = l77 + 1) {
			fRec26[l77] = 0.0f;
		}
		for (int l78 = 0; l78 < 2; l78 = l78 + 1) {
			fVec55[l78] = 0.0f;
		}
		for (int l79 = 0; l79 < 3; l79 = l79 + 1) {
			fVec56[l79] = 0.0f;
		}
		for (int l80 = 0; l80 < 7; l80 = l80 + 1) {
			fVec57[l80] = 0.0f;
		}
		for (int l81 = 0; l81 < 15; l81 = l81 + 1) {
			fVec58[l81] = 0.0f;
		}
		for (int l82 = 0; l82 < 32; l82 = l82 + 1) {
			fVec59[l82] = 0.0f;
		}
		for (int l83 = 0; l83 < 64; l83 = l83 + 1) {
			fVec60[l83] = 0.0f;
		}
		for (int l84 = 0; l84 < 128; l84 = l84 + 1) {
			fVec61[l84] = 0.0f;
		}
		for (int l85 = 0; l85 < 256; l85 = l85 + 1) {
			fVec62[l85] = 0.0f;
		}
		for (int l86 = 0; l86 < 512; l86 = l86 + 1) {
			fVec63[l86] = 0.0f;
		}
		for (int l87 = 0; l87 < 1024; l87 = l87 + 1) {
			fVec64[l87] = 0.0f;
		}
		for (int l88 = 0; l88 < 2048; l88 = l88 + 1) {
			fVec65[l88] = 0.0f;
		}
		for (int l89 = 0; l89 < 4096; l89 = l89 + 1) {
			fVec66[l89] = 0.0f;
		}
		for (int l90 = 0; l90 < 8192; l90 = l90 + 1) {
			fVec67[l90] = 0.0f;
		}
		for (int l91 = 0; l91 < 16384; l91 = l91 + 1) {
			fVec68[l91] = 0.0f;
		}
		for (int l92 = 0; l92 < 32768; l92 = l92 + 1) {
			fVec69[l92] = 0.0f;
		}
		for (int l93 = 0; l93 < 65536; l93 = l93 + 1) {
			fVec70[l93] = 0.0f;
		}
		for (int l94 = 0; l94 < 131072; l94 = l94 + 1) {
			fVec71[l94] = 0.0f;
		}
		for (int l95 = 0; l95 < 262144; l95 = l95 + 1) {
			fVec72[l95] = 0.0f;
		}
		for (int l96 = 0; l96 < 3; l96 = l96 + 1) {
			fRec30[l96] = 0.0f;
		}
		for (int l97 = 0; l97 < 32768; l97 = l97 + 1) {
			fVec73[l97] = 0.0f;
		}
		for (int l98 = 0; l98 < 2; l98 = l98 + 1) {
			fVec74[l98] = 0.0f;
		}
		for (int l99 = 0; l99 < 2; l99 = l99 + 1) {
			fRec34[l99] = 0.0f;
		}
		for (int l100 = 0; l100 < 2; l100 = l100 + 1) {
			fRec33[l100] = 0.0f;
		}
		for (int l101 = 0; l101 < 2; l101 = l101 + 1) {
			fVec75[l101] = 0.0f;
		}
		for (int l102 = 0; l102 < 2; l102 = l102 + 1) {
			fRec32[l102] = 0.0f;
		}
		for (int l103 = 0; l103 < 2; l103 = l103 + 1) {
			fRec31[l103] = 0.0f;
		}
		for (int l104 = 0; l104 < 2; l104 = l104 + 1) {
			fVec76[l104] = 0.0f;
		}
		for (int l105 = 0; l105 < 3; l105 = l105 + 1) {
			fVec77[l105] = 0.0f;
		}
		for (int l106 = 0; l106 < 7; l106 = l106 + 1) {
			fVec78[l106] = 0.0f;
		}
		for (int l107 = 0; l107 < 15; l107 = l107 + 1) {
			fVec79[l107] = 0.0f;
		}
		for (int l108 = 0; l108 < 32; l108 = l108 + 1) {
			fVec80[l108] = 0.0f;
		}
		for (int l109 = 0; l109 < 64; l109 = l109 + 1) {
			fVec81[l109] = 0.0f;
		}
		for (int l110 = 0; l110 < 128; l110 = l110 + 1) {
			fVec82[l110] = 0.0f;
		}
		for (int l111 = 0; l111 < 256; l111 = l111 + 1) {
			fVec83[l111] = 0.0f;
		}
		for (int l112 = 0; l112 < 512; l112 = l112 + 1) {
			fVec84[l112] = 0.0f;
		}
		for (int l113 = 0; l113 < 1024; l113 = l113 + 1) {
			fVec85[l113] = 0.0f;
		}
		for (int l114 = 0; l114 < 2048; l114 = l114 + 1) {
			fVec86[l114] = 0.0f;
		}
		for (int l115 = 0; l115 < 4096; l115 = l115 + 1) {
			fVec87[l115] = 0.0f;
		}
		for (int l116 = 0; l116 < 8192; l116 = l116 + 1) {
			fVec88[l116] = 0.0f;
		}
		for (int l117 = 0; l117 < 16384; l117 = l117 + 1) {
			fVec89[l117] = 0.0f;
		}
		for (int l118 = 0; l118 < 32768; l118 = l118 + 1) {
			fVec90[l118] = 0.0f;
		}
		for (int l119 = 0; l119 < 65536; l119 = l119 + 1) {
			fVec91[l119] = 0.0f;
		}
		for (int l120 = 0; l120 < 131072; l120 = l120 + 1) {
			fVec92[l120] = 0.0f;
		}
		for (int l121 = 0; l121 < 262144; l121 = l121 + 1) {
			fVec93[l121] = 0.0f;
		}
		for (int l122 = 0; l122 < 3; l122 = l122 + 1) {
			fRec35[l122] = 0.0f;
		}
		for (int l123 = 0; l123 < 32768; l123 = l123 + 1) {
			fVec94[l123] = 0.0f;
		}
		for (int l124 = 0; l124 < 2; l124 = l124 + 1) {
			fVec95[l124] = 0.0f;
		}
		for (int l125 = 0; l125 < 2; l125 = l125 + 1) {
			fRec39[l125] = 0.0f;
		}
		for (int l126 = 0; l126 < 2; l126 = l126 + 1) {
			fRec38[l126] = 0.0f;
		}
		for (int l127 = 0; l127 < 2; l127 = l127 + 1) {
			fVec96[l127] = 0.0f;
		}
		for (int l128 = 0; l128 < 2; l128 = l128 + 1) {
			fRec37[l128] = 0.0f;
		}
		for (int l129 = 0; l129 < 2; l129 = l129 + 1) {
			fRec36[l129] = 0.0f;
		}
		for (int l130 = 0; l130 < 2; l130 = l130 + 1) {
			fVec97[l130] = 0.0f;
		}
		for (int l131 = 0; l131 < 3; l131 = l131 + 1) {
			fVec98[l131] = 0.0f;
		}
		for (int l132 = 0; l132 < 7; l132 = l132 + 1) {
			fVec99[l132] = 0.0f;
		}
		for (int l133 = 0; l133 < 15; l133 = l133 + 1) {
			fVec100[l133] = 0.0f;
		}
		for (int l134 = 0; l134 < 32; l134 = l134 + 1) {
			fVec101[l134] = 0.0f;
		}
		for (int l135 = 0; l135 < 64; l135 = l135 + 1) {
			fVec102[l135] = 0.0f;
		}
		for (int l136 = 0; l136 < 128; l136 = l136 + 1) {
			fVec103[l136] = 0.0f;
		}
		for (int l137 = 0; l137 < 256; l137 = l137 + 1) {
			fVec104[l137] = 0.0f;
		}
		for (int l138 = 0; l138 < 512; l138 = l138 + 1) {
			fVec105[l138] = 0.0f;
		}
		for (int l139 = 0; l139 < 1024; l139 = l139 + 1) {
			fVec106[l139] = 0.0f;
		}
		for (int l140 = 0; l140 < 2048; l140 = l140 + 1) {
			fVec107[l140] = 0.0f;
		}
		for (int l141 = 0; l141 < 4096; l141 = l141 + 1) {
			fVec108[l141] = 0.0f;
		}
		for (int l142 = 0; l142 < 8192; l142 = l142 + 1) {
			fVec109[l142] = 0.0f;
		}
		for (int l143 = 0; l143 < 16384; l143 = l143 + 1) {
			fVec110[l143] = 0.0f;
		}
		for (int l144 = 0; l144 < 32768; l144 = l144 + 1) {
			fVec111[l144] = 0.0f;
		}
		for (int l145 = 0; l145 < 65536; l145 = l145 + 1) {
			fVec112[l145] = 0.0f;
		}
		for (int l146 = 0; l146 < 131072; l146 = l146 + 1) {
			fVec113[l146] = 0.0f;
		}
		for (int l147 = 0; l147 < 262144; l147 = l147 + 1) {
			fVec114[l147] = 0.0f;
		}
		for (int l148 = 0; l148 < 3; l148 = l148 + 1) {
			fRec40[l148] = 0.0f;
		}
		for (int l149 = 0; l149 < 32768; l149 = l149 + 1) {
			fVec115[l149] = 0.0f;
		}
		for (int l150 = 0; l150 < 2; l150 = l150 + 1) {
			fVec116[l150] = 0.0f;
		}
		for (int l151 = 0; l151 < 2; l151 = l151 + 1) {
			fRec44[l151] = 0.0f;
		}
		for (int l152 = 0; l152 < 2; l152 = l152 + 1) {
			fRec43[l152] = 0.0f;
		}
		for (int l153 = 0; l153 < 2; l153 = l153 + 1) {
			fVec117[l153] = 0.0f;
		}
		for (int l154 = 0; l154 < 2; l154 = l154 + 1) {
			fRec42[l154] = 0.0f;
		}
		for (int l155 = 0; l155 < 2; l155 = l155 + 1) {
			fRec41[l155] = 0.0f;
		}
		for (int l156 = 0; l156 < 2; l156 = l156 + 1) {
			fVec118[l156] = 0.0f;
		}
		for (int l157 = 0; l157 < 3; l157 = l157 + 1) {
			fVec119[l157] = 0.0f;
		}
		for (int l158 = 0; l158 < 7; l158 = l158 + 1) {
			fVec120[l158] = 0.0f;
		}
		for (int l159 = 0; l159 < 15; l159 = l159 + 1) {
			fVec121[l159] = 0.0f;
		}
		for (int l160 = 0; l160 < 32; l160 = l160 + 1) {
			fVec122[l160] = 0.0f;
		}
		for (int l161 = 0; l161 < 64; l161 = l161 + 1) {
			fVec123[l161] = 0.0f;
		}
		for (int l162 = 0; l162 < 128; l162 = l162 + 1) {
			fVec124[l162] = 0.0f;
		}
		for (int l163 = 0; l163 < 256; l163 = l163 + 1) {
			fVec125[l163] = 0.0f;
		}
		for (int l164 = 0; l164 < 512; l164 = l164 + 1) {
			fVec126[l164] = 0.0f;
		}
		for (int l165 = 0; l165 < 1024; l165 = l165 + 1) {
			fVec127[l165] = 0.0f;
		}
		for (int l166 = 0; l166 < 2048; l166 = l166 + 1) {
			fVec128[l166] = 0.0f;
		}
		for (int l167 = 0; l167 < 4096; l167 = l167 + 1) {
			fVec129[l167] = 0.0f;
		}
		for (int l168 = 0; l168 < 8192; l168 = l168 + 1) {
			fVec130[l168] = 0.0f;
		}
		for (int l169 = 0; l169 < 16384; l169 = l169 + 1) {
			fVec131[l169] = 0.0f;
		}
		for (int l170 = 0; l170 < 32768; l170 = l170 + 1) {
			fVec132[l170] = 0.0f;
		}
		for (int l171 = 0; l171 < 65536; l171 = l171 + 1) {
			fVec133[l171] = 0.0f;
		}
		for (int l172 = 0; l172 < 131072; l172 = l172 + 1) {
			fVec134[l172] = 0.0f;
		}
		for (int l173 = 0; l173 < 262144; l173 = l173 + 1) {
			fVec135[l173] = 0.0f;
		}
		for (int l174 = 0; l174 < 3; l174 = l174 + 1) {
			fRec45[l174] = 0.0f;
		}
		for (int l175 = 0; l175 < 32768; l175 = l175 + 1) {
			fVec136[l175] = 0.0f;
		}
		for (int l176 = 0; l176 < 2; l176 = l176 + 1) {
			fVec137[l176] = 0.0f;
		}
		for (int l177 = 0; l177 < 2; l177 = l177 + 1) {
			fRec49[l177] = 0.0f;
		}
		for (int l178 = 0; l178 < 2; l178 = l178 + 1) {
			fRec48[l178] = 0.0f;
		}
		for (int l179 = 0; l179 < 2; l179 = l179 + 1) {
			fVec138[l179] = 0.0f;
		}
		for (int l180 = 0; l180 < 2; l180 = l180 + 1) {
			fRec47[l180] = 0.0f;
		}
		for (int l181 = 0; l181 < 2; l181 = l181 + 1) {
			fRec46[l181] = 0.0f;
		}
		for (int l182 = 0; l182 < 2; l182 = l182 + 1) {
			fVec139[l182] = 0.0f;
		}
		for (int l183 = 0; l183 < 3; l183 = l183 + 1) {
			fVec140[l183] = 0.0f;
		}
		for (int l184 = 0; l184 < 7; l184 = l184 + 1) {
			fVec141[l184] = 0.0f;
		}
		for (int l185 = 0; l185 < 15; l185 = l185 + 1) {
			fVec142[l185] = 0.0f;
		}
		for (int l186 = 0; l186 < 32; l186 = l186 + 1) {
			fVec143[l186] = 0.0f;
		}
		for (int l187 = 0; l187 < 64; l187 = l187 + 1) {
			fVec144[l187] = 0.0f;
		}
		for (int l188 = 0; l188 < 128; l188 = l188 + 1) {
			fVec145[l188] = 0.0f;
		}
		for (int l189 = 0; l189 < 256; l189 = l189 + 1) {
			fVec146[l189] = 0.0f;
		}
		for (int l190 = 0; l190 < 512; l190 = l190 + 1) {
			fVec147[l190] = 0.0f;
		}
		for (int l191 = 0; l191 < 1024; l191 = l191 + 1) {
			fVec148[l191] = 0.0f;
		}
		for (int l192 = 0; l192 < 2048; l192 = l192 + 1) {
			fVec149[l192] = 0.0f;
		}
		for (int l193 = 0; l193 < 4096; l193 = l193 + 1) {
			fVec150[l193] = 0.0f;
		}
		for (int l194 = 0; l194 < 8192; l194 = l194 + 1) {
			fVec151[l194] = 0.0f;
		}
		for (int l195 = 0; l195 < 16384; l195 = l195 + 1) {
			fVec152[l195] = 0.0f;
		}
		for (int l196 = 0; l196 < 32768; l196 = l196 + 1) {
			fVec153[l196] = 0.0f;
		}
		for (int l197 = 0; l197 < 65536; l197 = l197 + 1) {
			fVec154[l197] = 0.0f;
		}
		for (int l198 = 0; l198 < 131072; l198 = l198 + 1) {
			fVec155[l198] = 0.0f;
		}
		for (int l199 = 0; l199 < 262144; l199 = l199 + 1) {
			fVec156[l199] = 0.0f;
		}
		for (int l200 = 0; l200 < 3; l200 = l200 + 1) {
			fRec50[l200] = 0.0f;
		}
		for (int l201 = 0; l201 < 32768; l201 = l201 + 1) {
			fVec157[l201] = 0.0f;
		}
		for (int l202 = 0; l202 < 2; l202 = l202 + 1) {
			fVec158[l202] = 0.0f;
		}
		for (int l203 = 0; l203 < 2; l203 = l203 + 1) {
			fRec54[l203] = 0.0f;
		}
		for (int l204 = 0; l204 < 2; l204 = l204 + 1) {
			fRec53[l204] = 0.0f;
		}
		for (int l205 = 0; l205 < 2; l205 = l205 + 1) {
			fVec159[l205] = 0.0f;
		}
		for (int l206 = 0; l206 < 2; l206 = l206 + 1) {
			fRec52[l206] = 0.0f;
		}
		for (int l207 = 0; l207 < 2; l207 = l207 + 1) {
			fRec51[l207] = 0.0f;
		}
		for (int l208 = 0; l208 < 2; l208 = l208 + 1) {
			fVec160[l208] = 0.0f;
		}
		for (int l209 = 0; l209 < 3; l209 = l209 + 1) {
			fVec161[l209] = 0.0f;
		}
		for (int l210 = 0; l210 < 7; l210 = l210 + 1) {
			fVec162[l210] = 0.0f;
		}
		for (int l211 = 0; l211 < 15; l211 = l211 + 1) {
			fVec163[l211] = 0.0f;
		}
		for (int l212 = 0; l212 < 32; l212 = l212 + 1) {
			fVec164[l212] = 0.0f;
		}
		for (int l213 = 0; l213 < 64; l213 = l213 + 1) {
			fVec165[l213] = 0.0f;
		}
		for (int l214 = 0; l214 < 128; l214 = l214 + 1) {
			fVec166[l214] = 0.0f;
		}
		for (int l215 = 0; l215 < 256; l215 = l215 + 1) {
			fVec167[l215] = 0.0f;
		}
		for (int l216 = 0; l216 < 512; l216 = l216 + 1) {
			fVec168[l216] = 0.0f;
		}
		for (int l217 = 0; l217 < 1024; l217 = l217 + 1) {
			fVec169[l217] = 0.0f;
		}
		for (int l218 = 0; l218 < 2048; l218 = l218 + 1) {
			fVec170[l218] = 0.0f;
		}
		for (int l219 = 0; l219 < 4096; l219 = l219 + 1) {
			fVec171[l219] = 0.0f;
		}
		for (int l220 = 0; l220 < 8192; l220 = l220 + 1) {
			fVec172[l220] = 0.0f;
		}
		for (int l221 = 0; l221 < 16384; l221 = l221 + 1) {
			fVec173[l221] = 0.0f;
		}
		for (int l222 = 0; l222 < 32768; l222 = l222 + 1) {
			fVec174[l222] = 0.0f;
		}
		for (int l223 = 0; l223 < 65536; l223 = l223 + 1) {
			fVec175[l223] = 0.0f;
		}
		for (int l224 = 0; l224 < 131072; l224 = l224 + 1) {
			fVec176[l224] = 0.0f;
		}
		for (int l225 = 0; l225 < 262144; l225 = l225 + 1) {
			fVec177[l225] = 0.0f;
		}
		for (int l226 = 0; l226 < 3; l226 = l226 + 1) {
			fRec55[l226] = 0.0f;
		}
		for (int l227 = 0; l227 < 32768; l227 = l227 + 1) {
			fVec178[l227] = 0.0f;
		}
		for (int l228 = 0; l228 < 2; l228 = l228 + 1) {
			fVec179[l228] = 0.0f;
		}
		for (int l229 = 0; l229 < 2; l229 = l229 + 1) {
			fRec59[l229] = 0.0f;
		}
		for (int l230 = 0; l230 < 2; l230 = l230 + 1) {
			fRec58[l230] = 0.0f;
		}
		for (int l231 = 0; l231 < 2; l231 = l231 + 1) {
			fVec180[l231] = 0.0f;
		}
		for (int l232 = 0; l232 < 2; l232 = l232 + 1) {
			fRec57[l232] = 0.0f;
		}
		for (int l233 = 0; l233 < 2; l233 = l233 + 1) {
			fRec56[l233] = 0.0f;
		}
		for (int l234 = 0; l234 < 2; l234 = l234 + 1) {
			fVec181[l234] = 0.0f;
		}
		for (int l235 = 0; l235 < 3; l235 = l235 + 1) {
			fVec182[l235] = 0.0f;
		}
		for (int l236 = 0; l236 < 7; l236 = l236 + 1) {
			fVec183[l236] = 0.0f;
		}
		for (int l237 = 0; l237 < 15; l237 = l237 + 1) {
			fVec184[l237] = 0.0f;
		}
		for (int l238 = 0; l238 < 32; l238 = l238 + 1) {
			fVec185[l238] = 0.0f;
		}
		for (int l239 = 0; l239 < 64; l239 = l239 + 1) {
			fVec186[l239] = 0.0f;
		}
		for (int l240 = 0; l240 < 128; l240 = l240 + 1) {
			fVec187[l240] = 0.0f;
		}
		for (int l241 = 0; l241 < 256; l241 = l241 + 1) {
			fVec188[l241] = 0.0f;
		}
		for (int l242 = 0; l242 < 512; l242 = l242 + 1) {
			fVec189[l242] = 0.0f;
		}
		for (int l243 = 0; l243 < 1024; l243 = l243 + 1) {
			fVec190[l243] = 0.0f;
		}
		for (int l244 = 0; l244 < 2048; l244 = l244 + 1) {
			fVec191[l244] = 0.0f;
		}
		for (int l245 = 0; l245 < 4096; l245 = l245 + 1) {
			fVec192[l245] = 0.0f;
		}
		for (int l246 = 0; l246 < 8192; l246 = l246 + 1) {
			fVec193[l246] = 0.0f;
		}
		for (int l247 = 0; l247 < 16384; l247 = l247 + 1) {
			fVec194[l247] = 0.0f;
		}
		for (int l248 = 0; l248 < 32768; l248 = l248 + 1) {
			fVec195[l248] = 0.0f;
		}
		for (int l249 = 0; l249 < 65536; l249 = l249 + 1) {
			fVec196[l249] = 0.0f;
		}
		for (int l250 = 0; l250 < 131072; l250 = l250 + 1) {
			fVec197[l250] = 0.0f;
		}
		for (int l251 = 0; l251 < 262144; l251 = l251 + 1) {
			fVec198[l251] = 0.0f;
		}
		for (int l252 = 0; l252 < 3; l252 = l252 + 1) {
			fRec60[l252] = 0.0f;
		}
		for (int l253 = 0; l253 < 32768; l253 = l253 + 1) {
			fVec199[l253] = 0.0f;
		}
		for (int l254 = 0; l254 < 2; l254 = l254 + 1) {
			fVec200[l254] = 0.0f;
		}
		for (int l255 = 0; l255 < 2; l255 = l255 + 1) {
			fRec64[l255] = 0.0f;
		}
		for (int l256 = 0; l256 < 2; l256 = l256 + 1) {
			fRec63[l256] = 0.0f;
		}
		for (int l257 = 0; l257 < 2; l257 = l257 + 1) {
			fVec201[l257] = 0.0f;
		}
		for (int l258 = 0; l258 < 2; l258 = l258 + 1) {
			fRec62[l258] = 0.0f;
		}
		for (int l259 = 0; l259 < 2; l259 = l259 + 1) {
			fRec61[l259] = 0.0f;
		}
		for (int l260 = 0; l260 < 2; l260 = l260 + 1) {
			fVec202[l260] = 0.0f;
		}
		for (int l261 = 0; l261 < 3; l261 = l261 + 1) {
			fVec203[l261] = 0.0f;
		}
		for (int l262 = 0; l262 < 7; l262 = l262 + 1) {
			fVec204[l262] = 0.0f;
		}
		for (int l263 = 0; l263 < 15; l263 = l263 + 1) {
			fVec205[l263] = 0.0f;
		}
		for (int l264 = 0; l264 < 32; l264 = l264 + 1) {
			fVec206[l264] = 0.0f;
		}
		for (int l265 = 0; l265 < 64; l265 = l265 + 1) {
			fVec207[l265] = 0.0f;
		}
		for (int l266 = 0; l266 < 128; l266 = l266 + 1) {
			fVec208[l266] = 0.0f;
		}
		for (int l267 = 0; l267 < 256; l267 = l267 + 1) {
			fVec209[l267] = 0.0f;
		}
		for (int l268 = 0; l268 < 512; l268 = l268 + 1) {
			fVec210[l268] = 0.0f;
		}
		for (int l269 = 0; l269 < 1024; l269 = l269 + 1) {
			fVec211[l269] = 0.0f;
		}
		for (int l270 = 0; l270 < 2048; l270 = l270 + 1) {
			fVec212[l270] = 0.0f;
		}
		for (int l271 = 0; l271 < 4096; l271 = l271 + 1) {
			fVec213[l271] = 0.0f;
		}
		for (int l272 = 0; l272 < 8192; l272 = l272 + 1) {
			fVec214[l272] = 0.0f;
		}
		for (int l273 = 0; l273 < 16384; l273 = l273 + 1) {
			fVec215[l273] = 0.0f;
		}
		for (int l274 = 0; l274 < 32768; l274 = l274 + 1) {
			fVec216[l274] = 0.0f;
		}
		for (int l275 = 0; l275 < 65536; l275 = l275 + 1) {
			fVec217[l275] = 0.0f;
		}
		for (int l276 = 0; l276 < 131072; l276 = l276 + 1) {
			fVec218[l276] = 0.0f;
		}
		for (int l277 = 0; l277 < 262144; l277 = l277 + 1) {
			fVec219[l277] = 0.0f;
		}
		for (int l278 = 0; l278 < 3; l278 = l278 + 1) {
			fRec65[l278] = 0.0f;
		}
		for (int l279 = 0; l279 < 32768; l279 = l279 + 1) {
			fVec220[l279] = 0.0f;
		}
		for (int l280 = 0; l280 < 2; l280 = l280 + 1) {
			fVec221[l280] = 0.0f;
		}
		for (int l281 = 0; l281 < 2; l281 = l281 + 1) {
			fRec69[l281] = 0.0f;
		}
		for (int l282 = 0; l282 < 2; l282 = l282 + 1) {
			fRec68[l282] = 0.0f;
		}
		for (int l283 = 0; l283 < 2; l283 = l283 + 1) {
			fVec222[l283] = 0.0f;
		}
		for (int l284 = 0; l284 < 2; l284 = l284 + 1) {
			fRec67[l284] = 0.0f;
		}
		for (int l285 = 0; l285 < 2; l285 = l285 + 1) {
			fRec66[l285] = 0.0f;
		}
		for (int l286 = 0; l286 < 2; l286 = l286 + 1) {
			fVec223[l286] = 0.0f;
		}
		for (int l287 = 0; l287 < 3; l287 = l287 + 1) {
			fVec224[l287] = 0.0f;
		}
		for (int l288 = 0; l288 < 7; l288 = l288 + 1) {
			fVec225[l288] = 0.0f;
		}
		for (int l289 = 0; l289 < 15; l289 = l289 + 1) {
			fVec226[l289] = 0.0f;
		}
		for (int l290 = 0; l290 < 32; l290 = l290 + 1) {
			fVec227[l290] = 0.0f;
		}
		for (int l291 = 0; l291 < 64; l291 = l291 + 1) {
			fVec228[l291] = 0.0f;
		}
		for (int l292 = 0; l292 < 128; l292 = l292 + 1) {
			fVec229[l292] = 0.0f;
		}
		for (int l293 = 0; l293 < 256; l293 = l293 + 1) {
			fVec230[l293] = 0.0f;
		}
		for (int l294 = 0; l294 < 512; l294 = l294 + 1) {
			fVec231[l294] = 0.0f;
		}
		for (int l295 = 0; l295 < 1024; l295 = l295 + 1) {
			fVec232[l295] = 0.0f;
		}
		for (int l296 = 0; l296 < 2048; l296 = l296 + 1) {
			fVec233[l296] = 0.0f;
		}
		for (int l297 = 0; l297 < 4096; l297 = l297 + 1) {
			fVec234[l297] = 0.0f;
		}
		for (int l298 = 0; l298 < 8192; l298 = l298 + 1) {
			fVec235[l298] = 0.0f;
		}
		for (int l299 = 0; l299 < 16384; l299 = l299 + 1) {
			fVec236[l299] = 0.0f;
		}
		for (int l300 = 0; l300 < 32768; l300 = l300 + 1) {
			fVec237[l300] = 0.0f;
		}
		for (int l301 = 0; l301 < 65536; l301 = l301 + 1) {
			fVec238[l301] = 0.0f;
		}
		for (int l302 = 0; l302 < 131072; l302 = l302 + 1) {
			fVec239[l302] = 0.0f;
		}
		for (int l303 = 0; l303 < 262144; l303 = l303 + 1) {
			fVec240[l303] = 0.0f;
		}
		for (int l304 = 0; l304 < 3; l304 = l304 + 1) {
			fRec70[l304] = 0.0f;
		}
		for (int l305 = 0; l305 < 32768; l305 = l305 + 1) {
			fVec241[l305] = 0.0f;
		}
		for (int l306 = 0; l306 < 2; l306 = l306 + 1) {
			fVec242[l306] = 0.0f;
		}
		for (int l307 = 0; l307 < 2; l307 = l307 + 1) {
			fRec74[l307] = 0.0f;
		}
		for (int l308 = 0; l308 < 2; l308 = l308 + 1) {
			fRec73[l308] = 0.0f;
		}
		for (int l309 = 0; l309 < 2; l309 = l309 + 1) {
			fVec243[l309] = 0.0f;
		}
		for (int l310 = 0; l310 < 2; l310 = l310 + 1) {
			fRec72[l310] = 0.0f;
		}
		for (int l311 = 0; l311 < 2; l311 = l311 + 1) {
			fRec71[l311] = 0.0f;
		}
		for (int l312 = 0; l312 < 2; l312 = l312 + 1) {
			fVec244[l312] = 0.0f;
		}
		for (int l313 = 0; l313 < 3; l313 = l313 + 1) {
			fVec245[l313] = 0.0f;
		}
		for (int l314 = 0; l314 < 7; l314 = l314 + 1) {
			fVec246[l314] = 0.0f;
		}
		for (int l315 = 0; l315 < 15; l315 = l315 + 1) {
			fVec247[l315] = 0.0f;
		}
		for (int l316 = 0; l316 < 32; l316 = l316 + 1) {
			fVec248[l316] = 0.0f;
		}
		for (int l317 = 0; l317 < 64; l317 = l317 + 1) {
			fVec249[l317] = 0.0f;
		}
		for (int l318 = 0; l318 < 128; l318 = l318 + 1) {
			fVec250[l318] = 0.0f;
		}
		for (int l319 = 0; l319 < 256; l319 = l319 + 1) {
			fVec251[l319] = 0.0f;
		}
		for (int l320 = 0; l320 < 512; l320 = l320 + 1) {
			fVec252[l320] = 0.0f;
		}
		for (int l321 = 0; l321 < 1024; l321 = l321 + 1) {
			fVec253[l321] = 0.0f;
		}
		for (int l322 = 0; l322 < 2048; l322 = l322 + 1) {
			fVec254[l322] = 0.0f;
		}
		for (int l323 = 0; l323 < 4096; l323 = l323 + 1) {
			fVec255[l323] = 0.0f;
		}
		for (int l324 = 0; l324 < 8192; l324 = l324 + 1) {
			fVec256[l324] = 0.0f;
		}
		for (int l325 = 0; l325 < 16384; l325 = l325 + 1) {
			fVec257[l325] = 0.0f;
		}
		for (int l326 = 0; l326 < 32768; l326 = l326 + 1) {
			fVec258[l326] = 0.0f;
		}
		for (int l327 = 0; l327 < 65536; l327 = l327 + 1) {
			fVec259[l327] = 0.0f;
		}
		for (int l328 = 0; l328 < 131072; l328 = l328 + 1) {
			fVec260[l328] = 0.0f;
		}
		for (int l329 = 0; l329 < 262144; l329 = l329 + 1) {
			fVec261[l329] = 0.0f;
		}
		for (int l330 = 0; l330 < 3; l330 = l330 + 1) {
			fRec75[l330] = 0.0f;
		}
		for (int l331 = 0; l331 < 32768; l331 = l331 + 1) {
			fVec262[l331] = 0.0f;
		}
		for (int l332 = 0; l332 < 2; l332 = l332 + 1) {
			fVec263[l332] = 0.0f;
		}
		for (int l333 = 0; l333 < 2; l333 = l333 + 1) {
			fRec79[l333] = 0.0f;
		}
		for (int l334 = 0; l334 < 2; l334 = l334 + 1) {
			fRec78[l334] = 0.0f;
		}
		for (int l335 = 0; l335 < 2; l335 = l335 + 1) {
			fVec264[l335] = 0.0f;
		}
		for (int l336 = 0; l336 < 2; l336 = l336 + 1) {
			fRec77[l336] = 0.0f;
		}
		for (int l337 = 0; l337 < 2; l337 = l337 + 1) {
			fRec76[l337] = 0.0f;
		}
		for (int l338 = 0; l338 < 2; l338 = l338 + 1) {
			fVec265[l338] = 0.0f;
		}
		for (int l339 = 0; l339 < 3; l339 = l339 + 1) {
			fVec266[l339] = 0.0f;
		}
		for (int l340 = 0; l340 < 7; l340 = l340 + 1) {
			fVec267[l340] = 0.0f;
		}
		for (int l341 = 0; l341 < 15; l341 = l341 + 1) {
			fVec268[l341] = 0.0f;
		}
		for (int l342 = 0; l342 < 32; l342 = l342 + 1) {
			fVec269[l342] = 0.0f;
		}
		for (int l343 = 0; l343 < 64; l343 = l343 + 1) {
			fVec270[l343] = 0.0f;
		}
		for (int l344 = 0; l344 < 128; l344 = l344 + 1) {
			fVec271[l344] = 0.0f;
		}
		for (int l345 = 0; l345 < 256; l345 = l345 + 1) {
			fVec272[l345] = 0.0f;
		}
		for (int l346 = 0; l346 < 512; l346 = l346 + 1) {
			fVec273[l346] = 0.0f;
		}
		for (int l347 = 0; l347 < 1024; l347 = l347 + 1) {
			fVec274[l347] = 0.0f;
		}
		for (int l348 = 0; l348 < 2048; l348 = l348 + 1) {
			fVec275[l348] = 0.0f;
		}
		for (int l349 = 0; l349 < 4096; l349 = l349 + 1) {
			fVec276[l349] = 0.0f;
		}
		for (int l350 = 0; l350 < 8192; l350 = l350 + 1) {
			fVec277[l350] = 0.0f;
		}
		for (int l351 = 0; l351 < 16384; l351 = l351 + 1) {
			fVec278[l351] = 0.0f;
		}
		for (int l352 = 0; l352 < 32768; l352 = l352 + 1) {
			fVec279[l352] = 0.0f;
		}
		for (int l353 = 0; l353 < 65536; l353 = l353 + 1) {
			fVec280[l353] = 0.0f;
		}
		for (int l354 = 0; l354 < 131072; l354 = l354 + 1) {
			fVec281[l354] = 0.0f;
		}
		for (int l355 = 0; l355 < 262144; l355 = l355 + 1) {
			fVec282[l355] = 0.0f;
		}
		for (int l356 = 0; l356 < 3; l356 = l356 + 1) {
			fRec80[l356] = 0.0f;
		}
		for (int l357 = 0; l357 < 32768; l357 = l357 + 1) {
			fVec283[l357] = 0.0f;
		}
		for (int l358 = 0; l358 < 2; l358 = l358 + 1) {
			fVec284[l358] = 0.0f;
		}
		for (int l359 = 0; l359 < 2; l359 = l359 + 1) {
			fRec84[l359] = 0.0f;
		}
		for (int l360 = 0; l360 < 2; l360 = l360 + 1) {
			fRec83[l360] = 0.0f;
		}
		for (int l361 = 0; l361 < 2; l361 = l361 + 1) {
			fVec285[l361] = 0.0f;
		}
		for (int l362 = 0; l362 < 2; l362 = l362 + 1) {
			fRec82[l362] = 0.0f;
		}
		for (int l363 = 0; l363 < 2; l363 = l363 + 1) {
			fRec81[l363] = 0.0f;
		}
		for (int l364 = 0; l364 < 2; l364 = l364 + 1) {
			fVec286[l364] = 0.0f;
		}
		for (int l365 = 0; l365 < 3; l365 = l365 + 1) {
			fVec287[l365] = 0.0f;
		}
		for (int l366 = 0; l366 < 7; l366 = l366 + 1) {
			fVec288[l366] = 0.0f;
		}
		for (int l367 = 0; l367 < 15; l367 = l367 + 1) {
			fVec289[l367] = 0.0f;
		}
		for (int l368 = 0; l368 < 32; l368 = l368 + 1) {
			fVec290[l368] = 0.0f;
		}
		for (int l369 = 0; l369 < 64; l369 = l369 + 1) {
			fVec291[l369] = 0.0f;
		}
		for (int l370 = 0; l370 < 128; l370 = l370 + 1) {
			fVec292[l370] = 0.0f;
		}
		for (int l371 = 0; l371 < 256; l371 = l371 + 1) {
			fVec293[l371] = 0.0f;
		}
		for (int l372 = 0; l372 < 512; l372 = l372 + 1) {
			fVec294[l372] = 0.0f;
		}
		for (int l373 = 0; l373 < 1024; l373 = l373 + 1) {
			fVec295[l373] = 0.0f;
		}
		for (int l374 = 0; l374 < 2048; l374 = l374 + 1) {
			fVec296[l374] = 0.0f;
		}
		for (int l375 = 0; l375 < 4096; l375 = l375 + 1) {
			fVec297[l375] = 0.0f;
		}
		for (int l376 = 0; l376 < 8192; l376 = l376 + 1) {
			fVec298[l376] = 0.0f;
		}
		for (int l377 = 0; l377 < 16384; l377 = l377 + 1) {
			fVec299[l377] = 0.0f;
		}
		for (int l378 = 0; l378 < 32768; l378 = l378 + 1) {
			fVec300[l378] = 0.0f;
		}
		for (int l379 = 0; l379 < 65536; l379 = l379 + 1) {
			fVec301[l379] = 0.0f;
		}
		for (int l380 = 0; l380 < 131072; l380 = l380 + 1) {
			fVec302[l380] = 0.0f;
		}
		for (int l381 = 0; l381 < 262144; l381 = l381 + 1) {
			fVec303[l381] = 0.0f;
		}
		for (int l382 = 0; l382 < 3; l382 = l382 + 1) {
			fRec85[l382] = 0.0f;
		}
		for (int l383 = 0; l383 < 32768; l383 = l383 + 1) {
			fVec304[l383] = 0.0f;
		}
		for (int l384 = 0; l384 < 2; l384 = l384 + 1) {
			fVec305[l384] = 0.0f;
		}
		for (int l385 = 0; l385 < 2; l385 = l385 + 1) {
			fRec89[l385] = 0.0f;
		}
		for (int l386 = 0; l386 < 2; l386 = l386 + 1) {
			fRec88[l386] = 0.0f;
		}
		for (int l387 = 0; l387 < 2; l387 = l387 + 1) {
			fVec306[l387] = 0.0f;
		}
		for (int l388 = 0; l388 < 2; l388 = l388 + 1) {
			fRec87[l388] = 0.0f;
		}
		for (int l389 = 0; l389 < 2; l389 = l389 + 1) {
			fRec86[l389] = 0.0f;
		}
		for (int l390 = 0; l390 < 2; l390 = l390 + 1) {
			fVec307[l390] = 0.0f;
		}
		for (int l391 = 0; l391 < 3; l391 = l391 + 1) {
			fVec308[l391] = 0.0f;
		}
		for (int l392 = 0; l392 < 7; l392 = l392 + 1) {
			fVec309[l392] = 0.0f;
		}
		for (int l393 = 0; l393 < 15; l393 = l393 + 1) {
			fVec310[l393] = 0.0f;
		}
		for (int l394 = 0; l394 < 32; l394 = l394 + 1) {
			fVec311[l394] = 0.0f;
		}
		for (int l395 = 0; l395 < 64; l395 = l395 + 1) {
			fVec312[l395] = 0.0f;
		}
		for (int l396 = 0; l396 < 128; l396 = l396 + 1) {
			fVec313[l396] = 0.0f;
		}
		for (int l397 = 0; l397 < 256; l397 = l397 + 1) {
			fVec314[l397] = 0.0f;
		}
		for (int l398 = 0; l398 < 512; l398 = l398 + 1) {
			fVec315[l398] = 0.0f;
		}
		for (int l399 = 0; l399 < 1024; l399 = l399 + 1) {
			fVec316[l399] = 0.0f;
		}
		for (int l400 = 0; l400 < 2048; l400 = l400 + 1) {
			fVec317[l400] = 0.0f;
		}
		for (int l401 = 0; l401 < 4096; l401 = l401 + 1) {
			fVec318[l401] = 0.0f;
		}
		for (int l402 = 0; l402 < 8192; l402 = l402 + 1) {
			fVec319[l402] = 0.0f;
		}
		for (int l403 = 0; l403 < 16384; l403 = l403 + 1) {
			fVec320[l403] = 0.0f;
		}
		for (int l404 = 0; l404 < 32768; l404 = l404 + 1) {
			fVec321[l404] = 0.0f;
		}
		for (int l405 = 0; l405 < 65536; l405 = l405 + 1) {
			fVec322[l405] = 0.0f;
		}
		for (int l406 = 0; l406 < 131072; l406 = l406 + 1) {
			fVec323[l406] = 0.0f;
		}
		for (int l407 = 0; l407 < 262144; l407 = l407 + 1) {
			fVec324[l407] = 0.0f;
		}
		for (int l408 = 0; l408 < 3; l408 = l408 + 1) {
			fRec90[l408] = 0.0f;
		}
		for (int l409 = 0; l409 < 32768; l409 = l409 + 1) {
			fVec325[l409] = 0.0f;
		}
		for (int l410 = 0; l410 < 2; l410 = l410 + 1) {
			fVec326[l410] = 0.0f;
		}
		for (int l411 = 0; l411 < 2; l411 = l411 + 1) {
			fRec94[l411] = 0.0f;
		}
		for (int l412 = 0; l412 < 2; l412 = l412 + 1) {
			fRec93[l412] = 0.0f;
		}
		for (int l413 = 0; l413 < 2; l413 = l413 + 1) {
			fVec327[l413] = 0.0f;
		}
		for (int l414 = 0; l414 < 2; l414 = l414 + 1) {
			fRec92[l414] = 0.0f;
		}
		for (int l415 = 0; l415 < 2; l415 = l415 + 1) {
			fRec91[l415] = 0.0f;
		}
		for (int l416 = 0; l416 < 2; l416 = l416 + 1) {
			fVec328[l416] = 0.0f;
		}
		for (int l417 = 0; l417 < 3; l417 = l417 + 1) {
			fVec329[l417] = 0.0f;
		}
		for (int l418 = 0; l418 < 7; l418 = l418 + 1) {
			fVec330[l418] = 0.0f;
		}
		for (int l419 = 0; l419 < 15; l419 = l419 + 1) {
			fVec331[l419] = 0.0f;
		}
		for (int l420 = 0; l420 < 32; l420 = l420 + 1) {
			fVec332[l420] = 0.0f;
		}
		for (int l421 = 0; l421 < 64; l421 = l421 + 1) {
			fVec333[l421] = 0.0f;
		}
		for (int l422 = 0; l422 < 128; l422 = l422 + 1) {
			fVec334[l422] = 0.0f;
		}
		for (int l423 = 0; l423 < 256; l423 = l423 + 1) {
			fVec335[l423] = 0.0f;
		}
		for (int l424 = 0; l424 < 512; l424 = l424 + 1) {
			fVec336[l424] = 0.0f;
		}
		for (int l425 = 0; l425 < 1024; l425 = l425 + 1) {
			fVec337[l425] = 0.0f;
		}
		for (int l426 = 0; l426 < 2048; l426 = l426 + 1) {
			fVec338[l426] = 0.0f;
		}
		for (int l427 = 0; l427 < 4096; l427 = l427 + 1) {
			fVec339[l427] = 0.0f;
		}
		for (int l428 = 0; l428 < 8192; l428 = l428 + 1) {
			fVec340[l428] = 0.0f;
		}
		for (int l429 = 0; l429 < 16384; l429 = l429 + 1) {
			fVec341[l429] = 0.0f;
		}
		for (int l430 = 0; l430 < 32768; l430 = l430 + 1) {
			fVec342[l430] = 0.0f;
		}
		for (int l431 = 0; l431 < 65536; l431 = l431 + 1) {
			fVec343[l431] = 0.0f;
		}
		for (int l432 = 0; l432 < 131072; l432 = l432 + 1) {
			fVec344[l432] = 0.0f;
		}
		for (int l433 = 0; l433 < 262144; l433 = l433 + 1) {
			fVec345[l433] = 0.0f;
		}
		for (int l434 = 0; l434 < 3; l434 = l434 + 1) {
			fRec95[l434] = 0.0f;
		}
		for (int l435 = 0; l435 < 32768; l435 = l435 + 1) {
			fVec346[l435] = 0.0f;
		}
		for (int l436 = 0; l436 < 2; l436 = l436 + 1) {
			fVec347[l436] = 0.0f;
		}
		for (int l437 = 0; l437 < 2; l437 = l437 + 1) {
			fRec99[l437] = 0.0f;
		}
		for (int l438 = 0; l438 < 2; l438 = l438 + 1) {
			fRec98[l438] = 0.0f;
		}
		for (int l439 = 0; l439 < 2; l439 = l439 + 1) {
			fVec348[l439] = 0.0f;
		}
		for (int l440 = 0; l440 < 2; l440 = l440 + 1) {
			fRec97[l440] = 0.0f;
		}
		for (int l441 = 0; l441 < 2; l441 = l441 + 1) {
			fRec96[l441] = 0.0f;
		}
		for (int l442 = 0; l442 < 2; l442 = l442 + 1) {
			fVec349[l442] = 0.0f;
		}
		for (int l443 = 0; l443 < 3; l443 = l443 + 1) {
			fVec350[l443] = 0.0f;
		}
		for (int l444 = 0; l444 < 7; l444 = l444 + 1) {
			fVec351[l444] = 0.0f;
		}
		for (int l445 = 0; l445 < 15; l445 = l445 + 1) {
			fVec352[l445] = 0.0f;
		}
		for (int l446 = 0; l446 < 32; l446 = l446 + 1) {
			fVec353[l446] = 0.0f;
		}
		for (int l447 = 0; l447 < 64; l447 = l447 + 1) {
			fVec354[l447] = 0.0f;
		}
		for (int l448 = 0; l448 < 128; l448 = l448 + 1) {
			fVec355[l448] = 0.0f;
		}
		for (int l449 = 0; l449 < 256; l449 = l449 + 1) {
			fVec356[l449] = 0.0f;
		}
		for (int l450 = 0; l450 < 512; l450 = l450 + 1) {
			fVec357[l450] = 0.0f;
		}
		for (int l451 = 0; l451 < 1024; l451 = l451 + 1) {
			fVec358[l451] = 0.0f;
		}
		for (int l452 = 0; l452 < 2048; l452 = l452 + 1) {
			fVec359[l452] = 0.0f;
		}
		for (int l453 = 0; l453 < 4096; l453 = l453 + 1) {
			fVec360[l453] = 0.0f;
		}
		for (int l454 = 0; l454 < 8192; l454 = l454 + 1) {
			fVec361[l454] = 0.0f;
		}
		for (int l455 = 0; l455 < 16384; l455 = l455 + 1) {
			fVec362[l455] = 0.0f;
		}
		for (int l456 = 0; l456 < 32768; l456 = l456 + 1) {
			fVec363[l456] = 0.0f;
		}
		for (int l457 = 0; l457 < 65536; l457 = l457 + 1) {
			fVec364[l457] = 0.0f;
		}
		for (int l458 = 0; l458 < 131072; l458 = l458 + 1) {
			fVec365[l458] = 0.0f;
		}
		for (int l459 = 0; l459 < 262144; l459 = l459 + 1) {
			fVec366[l459] = 0.0f;
		}
		for (int l460 = 0; l460 < 3; l460 = l460 + 1) {
			fRec100[l460] = 0.0f;
		}
		for (int l461 = 0; l461 < 32768; l461 = l461 + 1) {
			fVec367[l461] = 0.0f;
		}
		for (int l462 = 0; l462 < 2; l462 = l462 + 1) {
			fVec368[l462] = 0.0f;
		}
		for (int l463 = 0; l463 < 2; l463 = l463 + 1) {
			fRec104[l463] = 0.0f;
		}
		for (int l464 = 0; l464 < 2; l464 = l464 + 1) {
			fRec103[l464] = 0.0f;
		}
		for (int l465 = 0; l465 < 2; l465 = l465 + 1) {
			fVec369[l465] = 0.0f;
		}
		for (int l466 = 0; l466 < 2; l466 = l466 + 1) {
			fRec102[l466] = 0.0f;
		}
		for (int l467 = 0; l467 < 2; l467 = l467 + 1) {
			fRec101[l467] = 0.0f;
		}
		for (int l468 = 0; l468 < 2; l468 = l468 + 1) {
			fVec370[l468] = 0.0f;
		}
		for (int l469 = 0; l469 < 3; l469 = l469 + 1) {
			fVec371[l469] = 0.0f;
		}
		for (int l470 = 0; l470 < 7; l470 = l470 + 1) {
			fVec372[l470] = 0.0f;
		}
		for (int l471 = 0; l471 < 15; l471 = l471 + 1) {
			fVec373[l471] = 0.0f;
		}
		for (int l472 = 0; l472 < 32; l472 = l472 + 1) {
			fVec374[l472] = 0.0f;
		}
		for (int l473 = 0; l473 < 64; l473 = l473 + 1) {
			fVec375[l473] = 0.0f;
		}
		for (int l474 = 0; l474 < 128; l474 = l474 + 1) {
			fVec376[l474] = 0.0f;
		}
		for (int l475 = 0; l475 < 256; l475 = l475 + 1) {
			fVec377[l475] = 0.0f;
		}
		for (int l476 = 0; l476 < 512; l476 = l476 + 1) {
			fVec378[l476] = 0.0f;
		}
		for (int l477 = 0; l477 < 1024; l477 = l477 + 1) {
			fVec379[l477] = 0.0f;
		}
		for (int l478 = 0; l478 < 2048; l478 = l478 + 1) {
			fVec380[l478] = 0.0f;
		}
		for (int l479 = 0; l479 < 4096; l479 = l479 + 1) {
			fVec381[l479] = 0.0f;
		}
		for (int l480 = 0; l480 < 8192; l480 = l480 + 1) {
			fVec382[l480] = 0.0f;
		}
		for (int l481 = 0; l481 < 16384; l481 = l481 + 1) {
			fVec383[l481] = 0.0f;
		}
		for (int l482 = 0; l482 < 32768; l482 = l482 + 1) {
			fVec384[l482] = 0.0f;
		}
		for (int l483 = 0; l483 < 65536; l483 = l483 + 1) {
			fVec385[l483] = 0.0f;
		}
		for (int l484 = 0; l484 < 131072; l484 = l484 + 1) {
			fVec386[l484] = 0.0f;
		}
		for (int l485 = 0; l485 < 262144; l485 = l485 + 1) {
			fVec387[l485] = 0.0f;
		}
		for (int l486 = 0; l486 < 3; l486 = l486 + 1) {
			fRec105[l486] = 0.0f;
		}
		for (int l487 = 0; l487 < 32768; l487 = l487 + 1) {
			fVec388[l487] = 0.0f;
		}
		for (int l488 = 0; l488 < 2; l488 = l488 + 1) {
			fVec389[l488] = 0.0f;
		}
		for (int l489 = 0; l489 < 2; l489 = l489 + 1) {
			fRec109[l489] = 0.0f;
		}
		for (int l490 = 0; l490 < 2; l490 = l490 + 1) {
			fRec108[l490] = 0.0f;
		}
		for (int l491 = 0; l491 < 2; l491 = l491 + 1) {
			fVec390[l491] = 0.0f;
		}
		for (int l492 = 0; l492 < 2; l492 = l492 + 1) {
			fRec107[l492] = 0.0f;
		}
		for (int l493 = 0; l493 < 2; l493 = l493 + 1) {
			fRec106[l493] = 0.0f;
		}
		for (int l494 = 0; l494 < 2; l494 = l494 + 1) {
			fVec391[l494] = 0.0f;
		}
		for (int l495 = 0; l495 < 3; l495 = l495 + 1) {
			fVec392[l495] = 0.0f;
		}
		for (int l496 = 0; l496 < 7; l496 = l496 + 1) {
			fVec393[l496] = 0.0f;
		}
		for (int l497 = 0; l497 < 15; l497 = l497 + 1) {
			fVec394[l497] = 0.0f;
		}
		for (int l498 = 0; l498 < 32; l498 = l498 + 1) {
			fVec395[l498] = 0.0f;
		}
		for (int l499 = 0; l499 < 64; l499 = l499 + 1) {
			fVec396[l499] = 0.0f;
		}
		for (int l500 = 0; l500 < 128; l500 = l500 + 1) {
			fVec397[l500] = 0.0f;
		}
		for (int l501 = 0; l501 < 256; l501 = l501 + 1) {
			fVec398[l501] = 0.0f;
		}
		for (int l502 = 0; l502 < 512; l502 = l502 + 1) {
			fVec399[l502] = 0.0f;
		}
		for (int l503 = 0; l503 < 1024; l503 = l503 + 1) {
			fVec400[l503] = 0.0f;
		}
		for (int l504 = 0; l504 < 2048; l504 = l504 + 1) {
			fVec401[l504] = 0.0f;
		}
		for (int l505 = 0; l505 < 4096; l505 = l505 + 1) {
			fVec402[l505] = 0.0f;
		}
		for (int l506 = 0; l506 < 8192; l506 = l506 + 1) {
			fVec403[l506] = 0.0f;
		}
		for (int l507 = 0; l507 < 16384; l507 = l507 + 1) {
			fVec404[l507] = 0.0f;
		}
		for (int l508 = 0; l508 < 32768; l508 = l508 + 1) {
			fVec405[l508] = 0.0f;
		}
		for (int l509 = 0; l509 < 65536; l509 = l509 + 1) {
			fVec406[l509] = 0.0f;
		}
		for (int l510 = 0; l510 < 131072; l510 = l510 + 1) {
			fVec407[l510] = 0.0f;
		}
		for (int l511 = 0; l511 < 262144; l511 = l511 + 1) {
			fVec408[l511] = 0.0f;
		}
		for (int l512 = 0; l512 < 3; l512 = l512 + 1) {
			fRec110[l512] = 0.0f;
		}
		for (int l513 = 0; l513 < 32768; l513 = l513 + 1) {
			fVec409[l513] = 0.0f;
		}
		for (int l514 = 0; l514 < 2; l514 = l514 + 1) {
			fVec410[l514] = 0.0f;
		}
		for (int l515 = 0; l515 < 2; l515 = l515 + 1) {
			fRec114[l515] = 0.0f;
		}
		for (int l516 = 0; l516 < 2; l516 = l516 + 1) {
			fRec113[l516] = 0.0f;
		}
		for (int l517 = 0; l517 < 2; l517 = l517 + 1) {
			fVec411[l517] = 0.0f;
		}
		for (int l518 = 0; l518 < 2; l518 = l518 + 1) {
			fRec112[l518] = 0.0f;
		}
		for (int l519 = 0; l519 < 2; l519 = l519 + 1) {
			fRec111[l519] = 0.0f;
		}
		for (int l520 = 0; l520 < 2; l520 = l520 + 1) {
			fVec412[l520] = 0.0f;
		}
		for (int l521 = 0; l521 < 3; l521 = l521 + 1) {
			fVec413[l521] = 0.0f;
		}
		for (int l522 = 0; l522 < 7; l522 = l522 + 1) {
			fVec414[l522] = 0.0f;
		}
		for (int l523 = 0; l523 < 15; l523 = l523 + 1) {
			fVec415[l523] = 0.0f;
		}
		for (int l524 = 0; l524 < 32; l524 = l524 + 1) {
			fVec416[l524] = 0.0f;
		}
		for (int l525 = 0; l525 < 64; l525 = l525 + 1) {
			fVec417[l525] = 0.0f;
		}
		for (int l526 = 0; l526 < 128; l526 = l526 + 1) {
			fVec418[l526] = 0.0f;
		}
		for (int l527 = 0; l527 < 256; l527 = l527 + 1) {
			fVec419[l527] = 0.0f;
		}
		for (int l528 = 0; l528 < 512; l528 = l528 + 1) {
			fVec420[l528] = 0.0f;
		}
		for (int l529 = 0; l529 < 1024; l529 = l529 + 1) {
			fVec421[l529] = 0.0f;
		}
		for (int l530 = 0; l530 < 2048; l530 = l530 + 1) {
			fVec422[l530] = 0.0f;
		}
		for (int l531 = 0; l531 < 4096; l531 = l531 + 1) {
			fVec423[l531] = 0.0f;
		}
		for (int l532 = 0; l532 < 8192; l532 = l532 + 1) {
			fVec424[l532] = 0.0f;
		}
		for (int l533 = 0; l533 < 16384; l533 = l533 + 1) {
			fVec425[l533] = 0.0f;
		}
		for (int l534 = 0; l534 < 32768; l534 = l534 + 1) {
			fVec426[l534] = 0.0f;
		}
		for (int l535 = 0; l535 < 65536; l535 = l535 + 1) {
			fVec427[l535] = 0.0f;
		}
		for (int l536 = 0; l536 < 131072; l536 = l536 + 1) {
			fVec428[l536] = 0.0f;
		}
		for (int l537 = 0; l537 < 262144; l537 = l537 + 1) {
			fVec429[l537] = 0.0f;
		}
		for (int l538 = 0; l538 < 3; l538 = l538 + 1) {
			fRec115[l538] = 0.0f;
		}
		for (int l539 = 0; l539 < 32768; l539 = l539 + 1) {
			fVec430[l539] = 0.0f;
		}
		for (int l540 = 0; l540 < 2; l540 = l540 + 1) {
			fVec431[l540] = 0.0f;
		}
		for (int l541 = 0; l541 < 2; l541 = l541 + 1) {
			fRec119[l541] = 0.0f;
		}
		for (int l542 = 0; l542 < 2; l542 = l542 + 1) {
			fRec118[l542] = 0.0f;
		}
		for (int l543 = 0; l543 < 2; l543 = l543 + 1) {
			fVec432[l543] = 0.0f;
		}
		for (int l544 = 0; l544 < 2; l544 = l544 + 1) {
			fRec117[l544] = 0.0f;
		}
		for (int l545 = 0; l545 < 2; l545 = l545 + 1) {
			fRec116[l545] = 0.0f;
		}
		for (int l546 = 0; l546 < 2; l546 = l546 + 1) {
			fVec433[l546] = 0.0f;
		}
		for (int l547 = 0; l547 < 3; l547 = l547 + 1) {
			fVec434[l547] = 0.0f;
		}
		for (int l548 = 0; l548 < 7; l548 = l548 + 1) {
			fVec435[l548] = 0.0f;
		}
		for (int l549 = 0; l549 < 15; l549 = l549 + 1) {
			fVec436[l549] = 0.0f;
		}
		for (int l550 = 0; l550 < 32; l550 = l550 + 1) {
			fVec437[l550] = 0.0f;
		}
		for (int l551 = 0; l551 < 64; l551 = l551 + 1) {
			fVec438[l551] = 0.0f;
		}
		for (int l552 = 0; l552 < 128; l552 = l552 + 1) {
			fVec439[l552] = 0.0f;
		}
		for (int l553 = 0; l553 < 256; l553 = l553 + 1) {
			fVec440[l553] = 0.0f;
		}
		for (int l554 = 0; l554 < 512; l554 = l554 + 1) {
			fVec441[l554] = 0.0f;
		}
		for (int l555 = 0; l555 < 1024; l555 = l555 + 1) {
			fVec442[l555] = 0.0f;
		}
		for (int l556 = 0; l556 < 2048; l556 = l556 + 1) {
			fVec443[l556] = 0.0f;
		}
		for (int l557 = 0; l557 < 4096; l557 = l557 + 1) {
			fVec444[l557] = 0.0f;
		}
		for (int l558 = 0; l558 < 8192; l558 = l558 + 1) {
			fVec445[l558] = 0.0f;
		}
		for (int l559 = 0; l559 < 16384; l559 = l559 + 1) {
			fVec446[l559] = 0.0f;
		}
		for (int l560 = 0; l560 < 32768; l560 = l560 + 1) {
			fVec447[l560] = 0.0f;
		}
		for (int l561 = 0; l561 < 65536; l561 = l561 + 1) {
			fVec448[l561] = 0.0f;
		}
		for (int l562 = 0; l562 < 131072; l562 = l562 + 1) {
			fVec449[l562] = 0.0f;
		}
		for (int l563 = 0; l563 < 262144; l563 = l563 + 1) {
			fVec450[l563] = 0.0f;
		}
		for (int l564 = 0; l564 < 2; l564 = l564 + 1) {
			fRec120[l564] = 0.0f;
		}
		for (int l565 = 0; l565 < 32768; l565 = l565 + 1) {
			fVec451[l565] = 0.0f;
		}
		for (int l566 = 0; l566 < 2; l566 = l566 + 1) {
			fRec121[l566] = 0.0f;
		}
		for (int l567 = 0; l567 < 2; l567 = l567 + 1) {
			fVec452[l567] = 0.0f;
		}
		for (int l568 = 0; l568 < 3; l568 = l568 + 1) {
			fVec453[l568] = 0.0f;
		}
		for (int l569 = 0; l569 < 7; l569 = l569 + 1) {
			fVec454[l569] = 0.0f;
		}
		for (int l570 = 0; l570 < 15; l570 = l570 + 1) {
			fVec455[l570] = 0.0f;
		}
		for (int l571 = 0; l571 < 32; l571 = l571 + 1) {
			fVec456[l571] = 0.0f;
		}
		for (int l572 = 0; l572 < 2; l572 = l572 + 1) {
			fRec132[l572] = 0.0f;
		}
		for (int l573 = 0; l573 < 2; l573 = l573 + 1) {
			fVec457[l573] = 0.0f;
		}
		for (int l574 = 0; l574 < 2; l574 = l574 + 1) {
			fRec136[l574] = 0.0f;
		}
		for (int l575 = 0; l575 < 2; l575 = l575 + 1) {
			fRec135[l575] = 0.0f;
		}
		for (int l576 = 0; l576 < 2; l576 = l576 + 1) {
			fVec458[l576] = 0.0f;
		}
		for (int l577 = 0; l577 < 2; l577 = l577 + 1) {
			fRec134[l577] = 0.0f;
		}
		for (int l578 = 0; l578 < 2; l578 = l578 + 1) {
			fRec133[l578] = 0.0f;
		}
		for (int l579 = 0; l579 < 2; l579 = l579 + 1) {
			fVec459[l579] = 0.0f;
		}
		for (int l580 = 0; l580 < 3; l580 = l580 + 1) {
			fVec460[l580] = 0.0f;
		}
		for (int l581 = 0; l581 < 7; l581 = l581 + 1) {
			fVec461[l581] = 0.0f;
		}
		for (int l582 = 0; l582 < 15; l582 = l582 + 1) {
			fVec462[l582] = 0.0f;
		}
		for (int l583 = 0; l583 < 32; l583 = l583 + 1) {
			fVec463[l583] = 0.0f;
		}
		for (int l584 = 0; l584 < 64; l584 = l584 + 1) {
			fVec464[l584] = 0.0f;
		}
		for (int l585 = 0; l585 < 128; l585 = l585 + 1) {
			fVec465[l585] = 0.0f;
		}
		for (int l586 = 0; l586 < 256; l586 = l586 + 1) {
			fVec466[l586] = 0.0f;
		}
		for (int l587 = 0; l587 < 512; l587 = l587 + 1) {
			fVec467[l587] = 0.0f;
		}
		for (int l588 = 0; l588 < 1024; l588 = l588 + 1) {
			fVec468[l588] = 0.0f;
		}
		for (int l589 = 0; l589 < 2048; l589 = l589 + 1) {
			fVec469[l589] = 0.0f;
		}
		for (int l590 = 0; l590 < 2; l590 = l590 + 1) {
			fVec470[l590] = 0.0f;
		}
		for (int l591 = 0; l591 < 2; l591 = l591 + 1) {
			fRec140[l591] = 0.0f;
		}
		for (int l592 = 0; l592 < 2; l592 = l592 + 1) {
			fRec139[l592] = 0.0f;
		}
		for (int l593 = 0; l593 < 2; l593 = l593 + 1) {
			fVec471[l593] = 0.0f;
		}
		for (int l594 = 0; l594 < 2; l594 = l594 + 1) {
			fRec138[l594] = 0.0f;
		}
		for (int l595 = 0; l595 < 2; l595 = l595 + 1) {
			fRec137[l595] = 0.0f;
		}
		for (int l596 = 0; l596 < 2; l596 = l596 + 1) {
			fVec472[l596] = 0.0f;
		}
		for (int l597 = 0; l597 < 3; l597 = l597 + 1) {
			fVec473[l597] = 0.0f;
		}
		for (int l598 = 0; l598 < 7; l598 = l598 + 1) {
			fVec474[l598] = 0.0f;
		}
		for (int l599 = 0; l599 < 15; l599 = l599 + 1) {
			fVec475[l599] = 0.0f;
		}
		for (int l600 = 0; l600 < 32; l600 = l600 + 1) {
			fVec476[l600] = 0.0f;
		}
		for (int l601 = 0; l601 < 64; l601 = l601 + 1) {
			fVec477[l601] = 0.0f;
		}
		for (int l602 = 0; l602 < 128; l602 = l602 + 1) {
			fVec478[l602] = 0.0f;
		}
		for (int l603 = 0; l603 < 256; l603 = l603 + 1) {
			fVec479[l603] = 0.0f;
		}
		for (int l604 = 0; l604 < 512; l604 = l604 + 1) {
			fVec480[l604] = 0.0f;
		}
		for (int l605 = 0; l605 < 1024; l605 = l605 + 1) {
			fVec481[l605] = 0.0f;
		}
		for (int l606 = 0; l606 < 2048; l606 = l606 + 1) {
			fVec482[l606] = 0.0f;
		}
		for (int l607 = 0; l607 < 2; l607 = l607 + 1) {
			fRec127[l607] = 0.0f;
		}
		for (int l608 = 0; l608 < 2; l608 = l608 + 1) {
			fRec128[l608] = 0.0f;
		}
		for (int l609 = 0; l609 < 2; l609 = l609 + 1) {
			fRec125[l609] = 0.0f;
		}
		for (int l610 = 0; l610 < 2; l610 = l610 + 1) {
			fRec124[l610] = 0.0f;
		}
		for (int l611 = 0; l611 < 3; l611 = l611 + 1) {
			fRec122[l611] = 0.0f;
		}
		for (int l612 = 0; l612 < 32768; l612 = l612 + 1) {
			fVec483[l612] = 0.0f;
		}
		for (int l613 = 0; l613 < 3; l613 = l613 + 1) {
			fRec123[l613] = 0.0f;
		}
		for (int l614 = 0; l614 < 3; l614 = l614 + 1) {
			fRec6[l614] = 0.0f;
		}
		for (int l615 = 0; l615 < 3; l615 = l615 + 1) {
			fRec5[l615] = 0.0f;
		}
		for (int l616 = 0; l616 < 3; l616 = l616 + 1) {
			fRec4[l616] = 0.0f;
		}
		for (int l617 = 0; l617 < 2; l617 = l617 + 1) {
			fVec484[l617] = 0.0f;
		}
		for (int l618 = 0; l618 < 2; l618 = l618 + 1) {
			fRec3[l618] = 0.0f;
		}
		for (int l619 = 0; l619 < 3; l619 = l619 + 1) {
			fRec144[l619] = 0.0f;
		}
		for (int l620 = 0; l620 < 3; l620 = l620 + 1) {
			fRec143[l620] = 0.0f;
		}
		for (int l621 = 0; l621 < 3; l621 = l621 + 1) {
			fRec142[l621] = 0.0f;
		}
		for (int l622 = 0; l622 < 2; l622 = l622 + 1) {
			fVec485[l622] = 0.0f;
		}
		for (int l623 = 0; l623 < 2; l623 = l623 + 1) {
			fRec141[l623] = 0.0f;
		}
		for (int l624 = 0; l624 < 3; l624 = l624 + 1) {
			fVec486[l624] = 0.0f;
		}
		for (int l625 = 0; l625 < 7; l625 = l625 + 1) {
			fVec487[l625] = 0.0f;
		}
		for (int l626 = 0; l626 < 15; l626 = l626 + 1) {
			fVec488[l626] = 0.0f;
		}
		for (int l627 = 0; l627 < 32; l627 = l627 + 1) {
			fVec489[l627] = 0.0f;
		}
		for (int l628 = 0; l628 < 64; l628 = l628 + 1) {
			fVec490[l628] = 0.0f;
		}
		for (int l629 = 0; l629 < 128; l629 = l629 + 1) {
			fVec491[l629] = 0.0f;
		}
		for (int l630 = 0; l630 < 256; l630 = l630 + 1) {
			fVec492[l630] = 0.0f;
		}
		for (int l631 = 0; l631 < 512; l631 = l631 + 1) {
			fVec493[l631] = 0.0f;
		}
		for (int l632 = 0; l632 < 1024; l632 = l632 + 1) {
			fVec494[l632] = 0.0f;
		}
		for (int l633 = 0; l633 < 2048; l633 = l633 + 1) {
			fVec495[l633] = 0.0f;
		}
		for (int l634 = 0; l634 < 4096; l634 = l634 + 1) {
			fVec496[l634] = 0.0f;
		}
		for (int l635 = 0; l635 < 2; l635 = l635 + 1) {
			fRec145[l635] = 0.0f;
		}
		for (int l636 = 0; l636 < 3; l636 = l636 + 1) {
			fVec497[l636] = 0.0f;
		}
		for (int l637 = 0; l637 < 7; l637 = l637 + 1) {
			fVec498[l637] = 0.0f;
		}
		for (int l638 = 0; l638 < 15; l638 = l638 + 1) {
			fVec499[l638] = 0.0f;
		}
		for (int l639 = 0; l639 < 32; l639 = l639 + 1) {
			fVec500[l639] = 0.0f;
		}
		for (int l640 = 0; l640 < 64; l640 = l640 + 1) {
			fVec501[l640] = 0.0f;
		}
		for (int l641 = 0; l641 < 128; l641 = l641 + 1) {
			fVec502[l641] = 0.0f;
		}
		for (int l642 = 0; l642 < 256; l642 = l642 + 1) {
			fVec503[l642] = 0.0f;
		}
		for (int l643 = 0; l643 < 512; l643 = l643 + 1) {
			fVec504[l643] = 0.0f;
		}
		for (int l644 = 0; l644 < 1024; l644 = l644 + 1) {
			fVec505[l644] = 0.0f;
		}
		for (int l645 = 0; l645 < 2048; l645 = l645 + 1) {
			fVec506[l645] = 0.0f;
		}
		for (int l646 = 0; l646 < 4096; l646 = l646 + 1) {
			fVec507[l646] = 0.0f;
		}
		for (int l647 = 0; l647 < 2; l647 = l647 + 1) {
			fRec146[l647] = 0.0f;
		}
		for (int l648 = 0; l648 < 3; l648 = l648 + 1) {
			fRec156[l648] = 0.0f;
		}
		for (int l649 = 0; l649 < 3; l649 = l649 + 1) {
			fRec155[l649] = 0.0f;
		}
		for (int l650 = 0; l650 < 3; l650 = l650 + 1) {
			fRec154[l650] = 0.0f;
		}
		for (int l651 = 0; l651 < 3; l651 = l651 + 1) {
			fRec153[l651] = 0.0f;
		}
		for (int l652 = 0; l652 < 3; l652 = l652 + 1) {
			fRec152[l652] = 0.0f;
		}
		for (int l653 = 0; l653 < 2; l653 = l653 + 1) {
			fVec508[l653] = 0.0f;
		}
		for (int l654 = 0; l654 < 2; l654 = l654 + 1) {
			fRec151[l654] = 0.0f;
		}
		for (int l655 = 0; l655 < 3; l655 = l655 + 1) {
			fRec162[l655] = 0.0f;
		}
		for (int l656 = 0; l656 < 3; l656 = l656 + 1) {
			fRec161[l656] = 0.0f;
		}
		for (int l657 = 0; l657 < 3; l657 = l657 + 1) {
			fRec160[l657] = 0.0f;
		}
		for (int l658 = 0; l658 < 3; l658 = l658 + 1) {
			fRec159[l658] = 0.0f;
		}
		for (int l659 = 0; l659 < 3; l659 = l659 + 1) {
			fRec158[l659] = 0.0f;
		}
		for (int l660 = 0; l660 < 2; l660 = l660 + 1) {
			fVec509[l660] = 0.0f;
		}
		for (int l661 = 0; l661 < 2; l661 = l661 + 1) {
			fRec157[l661] = 0.0f;
		}
		for (int l662 = 0; l662 < 3; l662 = l662 + 1) {
			fVec510[l662] = 0.0f;
		}
		for (int l663 = 0; l663 < 7; l663 = l663 + 1) {
			fVec511[l663] = 0.0f;
		}
		for (int l664 = 0; l664 < 15; l664 = l664 + 1) {
			fVec512[l664] = 0.0f;
		}
		for (int l665 = 0; l665 < 32; l665 = l665 + 1) {
			fVec513[l665] = 0.0f;
		}
		for (int l666 = 0; l666 < 64; l666 = l666 + 1) {
			fVec514[l666] = 0.0f;
		}
		for (int l667 = 0; l667 < 128; l667 = l667 + 1) {
			fVec515[l667] = 0.0f;
		}
		for (int l668 = 0; l668 < 256; l668 = l668 + 1) {
			fVec516[l668] = 0.0f;
		}
		for (int l669 = 0; l669 < 512; l669 = l669 + 1) {
			fVec517[l669] = 0.0f;
		}
		for (int l670 = 0; l670 < 1024; l670 = l670 + 1) {
			fVec518[l670] = 0.0f;
		}
		for (int l671 = 0; l671 < 2048; l671 = l671 + 1) {
			fVec519[l671] = 0.0f;
		}
		for (int l672 = 0; l672 < 4096; l672 = l672 + 1) {
			fVec520[l672] = 0.0f;
		}
		for (int l673 = 0; l673 < 2; l673 = l673 + 1) {
			fRec163[l673] = 0.0f;
		}
		for (int l674 = 0; l674 < 3; l674 = l674 + 1) {
			fVec521[l674] = 0.0f;
		}
		for (int l675 = 0; l675 < 7; l675 = l675 + 1) {
			fVec522[l675] = 0.0f;
		}
		for (int l676 = 0; l676 < 15; l676 = l676 + 1) {
			fVec523[l676] = 0.0f;
		}
		for (int l677 = 0; l677 < 32; l677 = l677 + 1) {
			fVec524[l677] = 0.0f;
		}
		for (int l678 = 0; l678 < 64; l678 = l678 + 1) {
			fVec525[l678] = 0.0f;
		}
		for (int l679 = 0; l679 < 128; l679 = l679 + 1) {
			fVec526[l679] = 0.0f;
		}
		for (int l680 = 0; l680 < 256; l680 = l680 + 1) {
			fVec527[l680] = 0.0f;
		}
		for (int l681 = 0; l681 < 512; l681 = l681 + 1) {
			fVec528[l681] = 0.0f;
		}
		for (int l682 = 0; l682 < 1024; l682 = l682 + 1) {
			fVec529[l682] = 0.0f;
		}
		for (int l683 = 0; l683 < 2048; l683 = l683 + 1) {
			fVec530[l683] = 0.0f;
		}
		for (int l684 = 0; l684 < 4096; l684 = l684 + 1) {
			fVec531[l684] = 0.0f;
		}
		for (int l685 = 0; l685 < 2; l685 = l685 + 1) {
			fRec164[l685] = 0.0f;
		}
		for (int l686 = 0; l686 < 3; l686 = l686 + 1) {
			fRec178[l686] = 0.0f;
		}
		for (int l687 = 0; l687 < 3; l687 = l687 + 1) {
			fRec177[l687] = 0.0f;
		}
		for (int l688 = 0; l688 < 3; l688 = l688 + 1) {
			fRec176[l688] = 0.0f;
		}
		for (int l689 = 0; l689 < 3; l689 = l689 + 1) {
			fRec175[l689] = 0.0f;
		}
		for (int l690 = 0; l690 < 3; l690 = l690 + 1) {
			fRec174[l690] = 0.0f;
		}
		for (int l691 = 0; l691 < 2; l691 = l691 + 1) {
			fVec532[l691] = 0.0f;
		}
		for (int l692 = 0; l692 < 2; l692 = l692 + 1) {
			fRec173[l692] = 0.0f;
		}
		for (int l693 = 0; l693 < 3; l693 = l693 + 1) {
			fRec184[l693] = 0.0f;
		}
		for (int l694 = 0; l694 < 3; l694 = l694 + 1) {
			fRec183[l694] = 0.0f;
		}
		for (int l695 = 0; l695 < 3; l695 = l695 + 1) {
			fRec182[l695] = 0.0f;
		}
		for (int l696 = 0; l696 < 3; l696 = l696 + 1) {
			fRec181[l696] = 0.0f;
		}
		for (int l697 = 0; l697 < 3; l697 = l697 + 1) {
			fRec180[l697] = 0.0f;
		}
		for (int l698 = 0; l698 < 2; l698 = l698 + 1) {
			fVec533[l698] = 0.0f;
		}
		for (int l699 = 0; l699 < 2; l699 = l699 + 1) {
			fRec179[l699] = 0.0f;
		}
		for (int l700 = 0; l700 < 3; l700 = l700 + 1) {
			fVec534[l700] = 0.0f;
		}
		for (int l701 = 0; l701 < 7; l701 = l701 + 1) {
			fVec535[l701] = 0.0f;
		}
		for (int l702 = 0; l702 < 15; l702 = l702 + 1) {
			fVec536[l702] = 0.0f;
		}
		for (int l703 = 0; l703 < 32; l703 = l703 + 1) {
			fVec537[l703] = 0.0f;
		}
		for (int l704 = 0; l704 < 64; l704 = l704 + 1) {
			fVec538[l704] = 0.0f;
		}
		for (int l705 = 0; l705 < 128; l705 = l705 + 1) {
			fVec539[l705] = 0.0f;
		}
		for (int l706 = 0; l706 < 256; l706 = l706 + 1) {
			fVec540[l706] = 0.0f;
		}
		for (int l707 = 0; l707 < 512; l707 = l707 + 1) {
			fVec541[l707] = 0.0f;
		}
		for (int l708 = 0; l708 < 1024; l708 = l708 + 1) {
			fVec542[l708] = 0.0f;
		}
		for (int l709 = 0; l709 < 2048; l709 = l709 + 1) {
			fVec543[l709] = 0.0f;
		}
		for (int l710 = 0; l710 < 4096; l710 = l710 + 1) {
			fVec544[l710] = 0.0f;
		}
		for (int l711 = 0; l711 < 2; l711 = l711 + 1) {
			fRec185[l711] = 0.0f;
		}
		for (int l712 = 0; l712 < 3; l712 = l712 + 1) {
			fVec545[l712] = 0.0f;
		}
		for (int l713 = 0; l713 < 7; l713 = l713 + 1) {
			fVec546[l713] = 0.0f;
		}
		for (int l714 = 0; l714 < 15; l714 = l714 + 1) {
			fVec547[l714] = 0.0f;
		}
		for (int l715 = 0; l715 < 32; l715 = l715 + 1) {
			fVec548[l715] = 0.0f;
		}
		for (int l716 = 0; l716 < 64; l716 = l716 + 1) {
			fVec549[l716] = 0.0f;
		}
		for (int l717 = 0; l717 < 128; l717 = l717 + 1) {
			fVec550[l717] = 0.0f;
		}
		for (int l718 = 0; l718 < 256; l718 = l718 + 1) {
			fVec551[l718] = 0.0f;
		}
		for (int l719 = 0; l719 < 512; l719 = l719 + 1) {
			fVec552[l719] = 0.0f;
		}
		for (int l720 = 0; l720 < 1024; l720 = l720 + 1) {
			fVec553[l720] = 0.0f;
		}
		for (int l721 = 0; l721 < 2048; l721 = l721 + 1) {
			fVec554[l721] = 0.0f;
		}
		for (int l722 = 0; l722 < 4096; l722 = l722 + 1) {
			fVec555[l722] = 0.0f;
		}
		for (int l723 = 0; l723 < 2; l723 = l723 + 1) {
			fRec186[l723] = 0.0f;
		}
		for (int l724 = 0; l724 < 3; l724 = l724 + 1) {
			fRec200[l724] = 0.0f;
		}
		for (int l725 = 0; l725 < 3; l725 = l725 + 1) {
			fRec199[l725] = 0.0f;
		}
		for (int l726 = 0; l726 < 3; l726 = l726 + 1) {
			fRec198[l726] = 0.0f;
		}
		for (int l727 = 0; l727 < 3; l727 = l727 + 1) {
			fRec197[l727] = 0.0f;
		}
		for (int l728 = 0; l728 < 3; l728 = l728 + 1) {
			fRec196[l728] = 0.0f;
		}
		for (int l729 = 0; l729 < 2; l729 = l729 + 1) {
			fVec556[l729] = 0.0f;
		}
		for (int l730 = 0; l730 < 2; l730 = l730 + 1) {
			fRec195[l730] = 0.0f;
		}
		for (int l731 = 0; l731 < 3; l731 = l731 + 1) {
			fRec206[l731] = 0.0f;
		}
		for (int l732 = 0; l732 < 3; l732 = l732 + 1) {
			fRec205[l732] = 0.0f;
		}
		for (int l733 = 0; l733 < 3; l733 = l733 + 1) {
			fRec204[l733] = 0.0f;
		}
		for (int l734 = 0; l734 < 3; l734 = l734 + 1) {
			fRec203[l734] = 0.0f;
		}
		for (int l735 = 0; l735 < 3; l735 = l735 + 1) {
			fRec202[l735] = 0.0f;
		}
		for (int l736 = 0; l736 < 2; l736 = l736 + 1) {
			fVec557[l736] = 0.0f;
		}
		for (int l737 = 0; l737 < 2; l737 = l737 + 1) {
			fRec201[l737] = 0.0f;
		}
		for (int l738 = 0; l738 < 3; l738 = l738 + 1) {
			fVec558[l738] = 0.0f;
		}
		for (int l739 = 0; l739 < 7; l739 = l739 + 1) {
			fVec559[l739] = 0.0f;
		}
		for (int l740 = 0; l740 < 15; l740 = l740 + 1) {
			fVec560[l740] = 0.0f;
		}
		for (int l741 = 0; l741 < 32; l741 = l741 + 1) {
			fVec561[l741] = 0.0f;
		}
		for (int l742 = 0; l742 < 64; l742 = l742 + 1) {
			fVec562[l742] = 0.0f;
		}
		for (int l743 = 0; l743 < 128; l743 = l743 + 1) {
			fVec563[l743] = 0.0f;
		}
		for (int l744 = 0; l744 < 256; l744 = l744 + 1) {
			fVec564[l744] = 0.0f;
		}
		for (int l745 = 0; l745 < 512; l745 = l745 + 1) {
			fVec565[l745] = 0.0f;
		}
		for (int l746 = 0; l746 < 1024; l746 = l746 + 1) {
			fVec566[l746] = 0.0f;
		}
		for (int l747 = 0; l747 < 2048; l747 = l747 + 1) {
			fVec567[l747] = 0.0f;
		}
		for (int l748 = 0; l748 < 4096; l748 = l748 + 1) {
			fVec568[l748] = 0.0f;
		}
		for (int l749 = 0; l749 < 2; l749 = l749 + 1) {
			fRec207[l749] = 0.0f;
		}
		for (int l750 = 0; l750 < 3; l750 = l750 + 1) {
			fVec569[l750] = 0.0f;
		}
		for (int l751 = 0; l751 < 7; l751 = l751 + 1) {
			fVec570[l751] = 0.0f;
		}
		for (int l752 = 0; l752 < 15; l752 = l752 + 1) {
			fVec571[l752] = 0.0f;
		}
		for (int l753 = 0; l753 < 32; l753 = l753 + 1) {
			fVec572[l753] = 0.0f;
		}
		for (int l754 = 0; l754 < 64; l754 = l754 + 1) {
			fVec573[l754] = 0.0f;
		}
		for (int l755 = 0; l755 < 128; l755 = l755 + 1) {
			fVec574[l755] = 0.0f;
		}
		for (int l756 = 0; l756 < 256; l756 = l756 + 1) {
			fVec575[l756] = 0.0f;
		}
		for (int l757 = 0; l757 < 512; l757 = l757 + 1) {
			fVec576[l757] = 0.0f;
		}
		for (int l758 = 0; l758 < 1024; l758 = l758 + 1) {
			fVec577[l758] = 0.0f;
		}
		for (int l759 = 0; l759 < 2048; l759 = l759 + 1) {
			fVec578[l759] = 0.0f;
		}
		for (int l760 = 0; l760 < 4096; l760 = l760 + 1) {
			fVec579[l760] = 0.0f;
		}
		for (int l761 = 0; l761 < 2; l761 = l761 + 1) {
			fRec208[l761] = 0.0f;
		}
		for (int l762 = 0; l762 < 3; l762 = l762 + 1) {
			fRec219[l762] = 0.0f;
		}
		for (int l763 = 0; l763 < 3; l763 = l763 + 1) {
			fRec218[l763] = 0.0f;
		}
		for (int l764 = 0; l764 < 2; l764 = l764 + 1) {
			fVec580[l764] = 0.0f;
		}
		for (int l765 = 0; l765 < 2; l765 = l765 + 1) {
			fRec217[l765] = 0.0f;
		}
		for (int l766 = 0; l766 < 3; l766 = l766 + 1) {
			fRec222[l766] = 0.0f;
		}
		for (int l767 = 0; l767 < 3; l767 = l767 + 1) {
			fRec221[l767] = 0.0f;
		}
		for (int l768 = 0; l768 < 2; l768 = l768 + 1) {
			fVec581[l768] = 0.0f;
		}
		for (int l769 = 0; l769 < 2; l769 = l769 + 1) {
			fRec220[l769] = 0.0f;
		}
		for (int l770 = 0; l770 < 3; l770 = l770 + 1) {
			fVec582[l770] = 0.0f;
		}
		for (int l771 = 0; l771 < 7; l771 = l771 + 1) {
			fVec583[l771] = 0.0f;
		}
		for (int l772 = 0; l772 < 15; l772 = l772 + 1) {
			fVec584[l772] = 0.0f;
		}
		for (int l773 = 0; l773 < 32; l773 = l773 + 1) {
			fVec585[l773] = 0.0f;
		}
		for (int l774 = 0; l774 < 64; l774 = l774 + 1) {
			fVec586[l774] = 0.0f;
		}
		for (int l775 = 0; l775 < 128; l775 = l775 + 1) {
			fVec587[l775] = 0.0f;
		}
		for (int l776 = 0; l776 < 256; l776 = l776 + 1) {
			fVec588[l776] = 0.0f;
		}
		for (int l777 = 0; l777 < 512; l777 = l777 + 1) {
			fVec589[l777] = 0.0f;
		}
		for (int l778 = 0; l778 < 1024; l778 = l778 + 1) {
			fVec590[l778] = 0.0f;
		}
		for (int l779 = 0; l779 < 2048; l779 = l779 + 1) {
			fVec591[l779] = 0.0f;
		}
		for (int l780 = 0; l780 < 4096; l780 = l780 + 1) {
			fVec592[l780] = 0.0f;
		}
		for (int l781 = 0; l781 < 2; l781 = l781 + 1) {
			fRec223[l781] = 0.0f;
		}
		for (int l782 = 0; l782 < 3; l782 = l782 + 1) {
			fVec593[l782] = 0.0f;
		}
		for (int l783 = 0; l783 < 7; l783 = l783 + 1) {
			fVec594[l783] = 0.0f;
		}
		for (int l784 = 0; l784 < 15; l784 = l784 + 1) {
			fVec595[l784] = 0.0f;
		}
		for (int l785 = 0; l785 < 32; l785 = l785 + 1) {
			fVec596[l785] = 0.0f;
		}
		for (int l786 = 0; l786 < 64; l786 = l786 + 1) {
			fVec597[l786] = 0.0f;
		}
		for (int l787 = 0; l787 < 128; l787 = l787 + 1) {
			fVec598[l787] = 0.0f;
		}
		for (int l788 = 0; l788 < 256; l788 = l788 + 1) {
			fVec599[l788] = 0.0f;
		}
		for (int l789 = 0; l789 < 512; l789 = l789 + 1) {
			fVec600[l789] = 0.0f;
		}
		for (int l790 = 0; l790 < 1024; l790 = l790 + 1) {
			fVec601[l790] = 0.0f;
		}
		for (int l791 = 0; l791 < 2048; l791 = l791 + 1) {
			fVec602[l791] = 0.0f;
		}
		for (int l792 = 0; l792 < 4096; l792 = l792 + 1) {
			fVec603[l792] = 0.0f;
		}
		for (int l793 = 0; l793 < 2; l793 = l793 + 1) {
			fRec224[l793] = 0.0f;
		}
		for (int l794 = 0; l794 < 2; l794 = l794 + 1) {
			fRec225[l794] = 0.0f;
		}
		for (int l795 = 0; l795 < 2; l795 = l795 + 1) {
			fRec226[l795] = 0.0f;
		}
		for (int l796 = 0; l796 < 2; l796 = l796 + 1) {
			fRec213[l796] = 0.0f;
		}
		for (int l797 = 0; l797 < 2; l797 = l797 + 1) {
			fRec214[l797] = 0.0f;
		}
		for (int l798 = 0; l798 < 2; l798 = l798 + 1) {
			fRec209[l798] = 0.0f;
		}
		for (int l799 = 0; l799 < 2; l799 = l799 + 1) {
			fRec210[l799] = 0.0f;
		}
		for (int l800 = 0; l800 < 2; l800 = l800 + 1) {
			fRec191[l800] = 0.0f;
		}
		for (int l801 = 0; l801 < 2; l801 = l801 + 1) {
			fRec192[l801] = 0.0f;
		}
		for (int l802 = 0; l802 < 2; l802 = l802 + 1) {
			fRec187[l802] = 0.0f;
		}
		for (int l803 = 0; l803 < 2; l803 = l803 + 1) {
			fRec188[l803] = 0.0f;
		}
		for (int l804 = 0; l804 < 2; l804 = l804 + 1) {
			fRec169[l804] = 0.0f;
		}
		for (int l805 = 0; l805 < 2; l805 = l805 + 1) {
			fRec170[l805] = 0.0f;
		}
		for (int l806 = 0; l806 < 2; l806 = l806 + 1) {
			fRec165[l806] = 0.0f;
		}
		for (int l807 = 0; l807 < 2; l807 = l807 + 1) {
			fRec166[l807] = 0.0f;
		}
		for (int l808 = 0; l808 < 2; l808 = l808 + 1) {
			fRec147[l808] = 0.0f;
		}
		for (int l809 = 0; l809 < 2; l809 = l809 + 1) {
			fRec148[l809] = 0.0f;
		}
		for (int l810 = 0; l810 < 2; l810 = l810 + 1) {
			fRec229[l810] = 0.0f;
		}
		for (int l811 = 0; l811 < 3; l811 = l811 + 1) {
			fRec2[l811] = 0.0f;
		}
		for (int l812 = 0; l812 < 2; l812 = l812 + 1) {
			fRec1[l812] = 0.0f;
		}
		for (int l813 = 0; l813 < 2; l813 = l813 + 1) {
			fRec260[l813] = 0.0f;
		}
		for (int l814 = 0; l814 < 2; l814 = l814 + 1) {
			fRec261[l814] = 0.0f;
		}
		for (int l815 = 0; l815 < 2; l815 = l815 + 1) {
			fRec256[l815] = 0.0f;
		}
		for (int l816 = 0; l816 < 2; l816 = l816 + 1) {
			fRec257[l816] = 0.0f;
		}
		for (int l817 = 0; l817 < 2; l817 = l817 + 1) {
			fRec252[l817] = 0.0f;
		}
		for (int l818 = 0; l818 < 2; l818 = l818 + 1) {
			fRec253[l818] = 0.0f;
		}
		for (int l819 = 0; l819 < 2; l819 = l819 + 1) {
			fRec248[l819] = 0.0f;
		}
		for (int l820 = 0; l820 < 2; l820 = l820 + 1) {
			fRec249[l820] = 0.0f;
		}
		for (int l821 = 0; l821 < 2; l821 = l821 + 1) {
			fRec244[l821] = 0.0f;
		}
		for (int l822 = 0; l822 < 2; l822 = l822 + 1) {
			fRec245[l822] = 0.0f;
		}
		for (int l823 = 0; l823 < 2; l823 = l823 + 1) {
			fRec240[l823] = 0.0f;
		}
		for (int l824 = 0; l824 < 2; l824 = l824 + 1) {
			fRec241[l824] = 0.0f;
		}
		for (int l825 = 0; l825 < 2; l825 = l825 + 1) {
			fRec236[l825] = 0.0f;
		}
		for (int l826 = 0; l826 < 2; l826 = l826 + 1) {
			fRec237[l826] = 0.0f;
		}
		for (int l827 = 0; l827 < 2; l827 = l827 + 1) {
			fRec232[l827] = 0.0f;
		}
		for (int l828 = 0; l828 < 2; l828 = l828 + 1) {
			fRec233[l828] = 0.0f;
		}
		for (int l829 = 0; l829 < 3; l829 = l829 + 1) {
			fRec231[l829] = 0.0f;
		}
		for (int l830 = 0; l830 < 2; l830 = l830 + 1) {
			fRec230[l830] = 0.0f;
		}
		for (int l831 = 0; l831 < 3; l831 = l831 + 1) {
			fRec264[l831] = 0.0f;
		}
		for (int l832 = 0; l832 < 2048; l832 = l832 + 1) {
			fVec604[l832] = 0.0f;
		}
		for (int l833 = 0; l833 < 3; l833 = l833 + 1) {
			fRec269[l833] = 0.0f;
		}
		for (int l834 = 0; l834 < 2048; l834 = l834 + 1) {
			fVec605[l834] = 0.0f;
		}
		for (int l835 = 0; l835 < 2; l835 = l835 + 1) {
			iRec267[l835] = 0;
		}
		for (int l836 = 0; l836 < 2; l836 = l836 + 1) {
			fRec268[l836] = 0.0f;
		}
		for (int l837 = 0; l837 < 2; l837 = l837 + 1) {
			fRec266[l837] = 0.0f;
		}
		for (int l838 = 0; l838 < 2; l838 = l838 + 1) {
			fRec265[l838] = 0.0f;
		}
		for (int l839 = 0; l839 < 2; l839 = l839 + 1) {
			fRec270[l839] = 0.0f;
		}
		for (int l840 = 0; l840 < 2; l840 = l840 + 1) {
			fRec0[l840] = 0.0f;
		}
		for (int l841 = 0; l841 < 2; l841 = l841 + 1) {
			fVec606[l841] = 0.0f;
		}
		for (int l842 = 0; l842 < 2; l842 = l842 + 1) {
			fRec275[l842] = 0.0f;
		}
		for (int l843 = 0; l843 < 2; l843 = l843 + 1) {
			fVec607[l843] = 0.0f;
		}
		for (int l844 = 0; l844 < 2; l844 = l844 + 1) {
			fVec608[l844] = 0.0f;
		}
		for (int l845 = 0; l845 < 2; l845 = l845 + 1) {
			fRec274[l845] = 0.0f;
		}
		for (int l846 = 0; l846 < 2; l846 = l846 + 1) {
			fRec273[l846] = 0.0f;
		}
		for (int l847 = 0; l847 < 2; l847 = l847 + 1) {
			fVec609[l847] = 0.0f;
		}
		for (int l848 = 0; l848 < 2; l848 = l848 + 1) {
			fRec272[l848] = 0.0f;
		}
		for (int l849 = 0; l849 < 2; l849 = l849 + 1) {
			fRec271[l849] = 0.0f;
		}
		for (int l850 = 0; l850 < 2; l850 = l850 + 1) {
			fVec610[l850] = 0.0f;
		}
		for (int l851 = 0; l851 < 3; l851 = l851 + 1) {
			fVec611[l851] = 0.0f;
		}
		for (int l852 = 0; l852 < 7; l852 = l852 + 1) {
			fVec612[l852] = 0.0f;
		}
		for (int l853 = 0; l853 < 15; l853 = l853 + 1) {
			fVec613[l853] = 0.0f;
		}
		for (int l854 = 0; l854 < 32; l854 = l854 + 1) {
			fVec614[l854] = 0.0f;
		}
		for (int l855 = 0; l855 < 64; l855 = l855 + 1) {
			fVec615[l855] = 0.0f;
		}
		for (int l856 = 0; l856 < 128; l856 = l856 + 1) {
			fVec616[l856] = 0.0f;
		}
		for (int l857 = 0; l857 < 256; l857 = l857 + 1) {
			fVec617[l857] = 0.0f;
		}
		for (int l858 = 0; l858 < 512; l858 = l858 + 1) {
			fVec618[l858] = 0.0f;
		}
		for (int l859 = 0; l859 < 1024; l859 = l859 + 1) {
			fVec619[l859] = 0.0f;
		}
		for (int l860 = 0; l860 < 2048; l860 = l860 + 1) {
			fVec620[l860] = 0.0f;
		}
		for (int l861 = 0; l861 < 4096; l861 = l861 + 1) {
			fVec621[l861] = 0.0f;
		}
		for (int l862 = 0; l862 < 8192; l862 = l862 + 1) {
			fVec622[l862] = 0.0f;
		}
		for (int l863 = 0; l863 < 16384; l863 = l863 + 1) {
			fVec623[l863] = 0.0f;
		}
		for (int l864 = 0; l864 < 32768; l864 = l864 + 1) {
			fVec624[l864] = 0.0f;
		}
		for (int l865 = 0; l865 < 65536; l865 = l865 + 1) {
			fVec625[l865] = 0.0f;
		}
		for (int l866 = 0; l866 < 131072; l866 = l866 + 1) {
			fVec626[l866] = 0.0f;
		}
		for (int l867 = 0; l867 < 262144; l867 = l867 + 1) {
			fVec627[l867] = 0.0f;
		}
		for (int l868 = 0; l868 < 524288; l868 = l868 + 1) {
			fVec628[l868] = 0.0f;
		}
		for (int l869 = 0; l869 < 1048576; l869 = l869 + 1) {
			fVec629[l869] = 0.0f;
		}
		for (int l870 = 0; l870 < 2; l870 = l870 + 1) {
			fVec630[l870] = 0.0f;
		}
		for (int l871 = 0; l871 < 2; l871 = l871 + 1) {
			fRec279[l871] = 0.0f;
		}
		for (int l872 = 0; l872 < 2; l872 = l872 + 1) {
			fRec278[l872] = 0.0f;
		}
		for (int l873 = 0; l873 < 2; l873 = l873 + 1) {
			fVec631[l873] = 0.0f;
		}
		for (int l874 = 0; l874 < 2; l874 = l874 + 1) {
			fRec277[l874] = 0.0f;
		}
		for (int l875 = 0; l875 < 2; l875 = l875 + 1) {
			fRec276[l875] = 0.0f;
		}
		for (int l876 = 0; l876 < 2; l876 = l876 + 1) {
			fVec632[l876] = 0.0f;
		}
		for (int l877 = 0; l877 < 3; l877 = l877 + 1) {
			fVec633[l877] = 0.0f;
		}
		for (int l878 = 0; l878 < 7; l878 = l878 + 1) {
			fVec634[l878] = 0.0f;
		}
		for (int l879 = 0; l879 < 15; l879 = l879 + 1) {
			fVec635[l879] = 0.0f;
		}
		for (int l880 = 0; l880 < 32; l880 = l880 + 1) {
			fVec636[l880] = 0.0f;
		}
		for (int l881 = 0; l881 < 64; l881 = l881 + 1) {
			fVec637[l881] = 0.0f;
		}
		for (int l882 = 0; l882 < 128; l882 = l882 + 1) {
			fVec638[l882] = 0.0f;
		}
		for (int l883 = 0; l883 < 256; l883 = l883 + 1) {
			fVec639[l883] = 0.0f;
		}
		for (int l884 = 0; l884 < 512; l884 = l884 + 1) {
			fVec640[l884] = 0.0f;
		}
		for (int l885 = 0; l885 < 1024; l885 = l885 + 1) {
			fVec641[l885] = 0.0f;
		}
		for (int l886 = 0; l886 < 2048; l886 = l886 + 1) {
			fVec642[l886] = 0.0f;
		}
		for (int l887 = 0; l887 < 4096; l887 = l887 + 1) {
			fVec643[l887] = 0.0f;
		}
		for (int l888 = 0; l888 < 8192; l888 = l888 + 1) {
			fVec644[l888] = 0.0f;
		}
		for (int l889 = 0; l889 < 16384; l889 = l889 + 1) {
			fVec645[l889] = 0.0f;
		}
		for (int l890 = 0; l890 < 32768; l890 = l890 + 1) {
			fVec646[l890] = 0.0f;
		}
		for (int l891 = 0; l891 < 65536; l891 = l891 + 1) {
			fVec647[l891] = 0.0f;
		}
		for (int l892 = 0; l892 < 131072; l892 = l892 + 1) {
			fVec648[l892] = 0.0f;
		}
		for (int l893 = 0; l893 < 262144; l893 = l893 + 1) {
			fVec649[l893] = 0.0f;
		}
		for (int l894 = 0; l894 < 524288; l894 = l894 + 1) {
			fVec650[l894] = 0.0f;
		}
		for (int l895 = 0; l895 < 1048576; l895 = l895 + 1) {
			fVec651[l895] = 0.0f;
		}
	}
	
	FAUSTPP_VIRTUAL void init(int sample_rate) {
		classInit(sample_rate);
		instanceInit(sample_rate);
	}
	FAUSTPP_VIRTUAL void instanceInit(int sample_rate) {
		instanceConstants(sample_rate);
		instanceResetUserInterface();
		instanceClear();
	}
	
	FAUSTPP_VIRTUAL mydsp* clone() {
		return new mydsp();
	}
	
	FAUSTPP_VIRTUAL int getSampleRate() {
		return fSampleRate;
	}
	
	FAUSTPP_VIRTUAL void buildUserInterface(UI* ui_interface) {
		ui_interface->openVerticalBox("Podcast Plugins");
		ui_interface->declare(0, "0", "");
		ui_interface->openHorizontalBox("Modules");
		ui_interface->declare(&fCheckbox0, "2", "");
		ui_interface->declare(&fCheckbox0, "symbol", "bypass_timbre");
		ui_interface->addCheckButton("bypass timbre", &fCheckbox0);
		ui_interface->declare(&fCheckbox1, "3", "");
		ui_interface->declare(&fCheckbox1, "symbol", "bypass_leveler");
		ui_interface->addCheckButton("bypass_leveler", &fCheckbox1);
		ui_interface->declare(&fCheckbox2, "4", "");
		ui_interface->declare(&fCheckbox2, "symbol", "bypass_style");
		ui_interface->addCheckButton("bypass style", &fCheckbox2);
		ui_interface->declare(&fCheckbox3, "9", "");
		ui_interface->declare(&fCheckbox3, "symbol", "bypass_global");
		ui_interface->addCheckButton("bypass global", &fCheckbox3);
		ui_interface->closeBox();
		ui_interface->declare(0, "1", "");
		ui_interface->openVerticalBox("Spectral Ballancer");
		ui_interface->openHorizontalBox("Target Spectrum");
		ui_interface->openHorizontalBox("Parameters");
		ui_interface->declare(&fVslider4, "1", "");
		ui_interface->declare(&fVslider4, "symbol", "timbre_strength");
		ui_interface->declare(&fVslider4, "unit", "%");
		ui_interface->addVerticalSlider("strength", &fVslider4, FAUSTFLOAT(8e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1e+02f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider3, "2", "");
		ui_interface->declare(&fVslider3, "symbol", "timbre");
		ui_interface->addVerticalSlider("timbre", &fVslider3, FAUSTFLOAT(0.0f), FAUSTFLOAT(-5.0f), FAUSTFLOAT(5.0f), FAUSTFLOAT(0.1f));
		ui_interface->declare(&fVbargraph28, "symbol", "latency_global");
		ui_interface->addVerticalBargraph("latency_global", &fVbargraph28, FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
		ui_interface->closeBox();
		ui_interface->closeBox();
		ui_interface->declare(0, "3", "");
		ui_interface->openHorizontalBox("resulting gain");
		ui_interface->declare(&fVbargraph21, "1", "");
		ui_interface->declare(&fVbargraph21, "symbol", "spectral_ballancer_gain_band_ 0");
		ui_interface->addVerticalBargraph("gr  0", &fVbargraph21, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph20, "1", "");
		ui_interface->declare(&fVbargraph20, "symbol", "spectral_ballancer_gain_band_ 1");
		ui_interface->addVerticalBargraph("gr  1", &fVbargraph20, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph19, "1", "");
		ui_interface->declare(&fVbargraph19, "symbol", "spectral_ballancer_gain_band_ 2");
		ui_interface->addVerticalBargraph("gr  2", &fVbargraph19, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph18, "1", "");
		ui_interface->declare(&fVbargraph18, "symbol", "spectral_ballancer_gain_band_ 3");
		ui_interface->addVerticalBargraph("gr  3", &fVbargraph18, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph17, "1", "");
		ui_interface->declare(&fVbargraph17, "symbol", "spectral_ballancer_gain_band_ 4");
		ui_interface->addVerticalBargraph("gr  4", &fVbargraph17, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph16, "1", "");
		ui_interface->declare(&fVbargraph16, "symbol", "spectral_ballancer_gain_band_ 5");
		ui_interface->addVerticalBargraph("gr  5", &fVbargraph16, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph15, "1", "");
		ui_interface->declare(&fVbargraph15, "symbol", "spectral_ballancer_gain_band_ 6");
		ui_interface->addVerticalBargraph("gr  6", &fVbargraph15, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph14, "1", "");
		ui_interface->declare(&fVbargraph14, "symbol", "spectral_ballancer_gain_band_ 7");
		ui_interface->addVerticalBargraph("gr  7", &fVbargraph14, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph13, "1", "");
		ui_interface->declare(&fVbargraph13, "symbol", "spectral_ballancer_gain_band_ 8");
		ui_interface->addVerticalBargraph("gr  8", &fVbargraph13, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph12, "1", "");
		ui_interface->declare(&fVbargraph12, "symbol", "spectral_ballancer_gain_band_ 9");
		ui_interface->addVerticalBargraph("gr  9", &fVbargraph12, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph11, "1", "");
		ui_interface->declare(&fVbargraph11, "symbol", "spectral_ballancer_gain_band_10");
		ui_interface->addVerticalBargraph("gr 10", &fVbargraph11, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph10, "1", "");
		ui_interface->declare(&fVbargraph10, "symbol", "spectral_ballancer_gain_band_11");
		ui_interface->addVerticalBargraph("gr 11", &fVbargraph10, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph9, "1", "");
		ui_interface->declare(&fVbargraph9, "symbol", "spectral_ballancer_gain_band_12");
		ui_interface->addVerticalBargraph("gr 12", &fVbargraph9, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph8, "1", "");
		ui_interface->declare(&fVbargraph8, "symbol", "spectral_ballancer_gain_band_13");
		ui_interface->addVerticalBargraph("gr 13", &fVbargraph8, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph7, "1", "");
		ui_interface->declare(&fVbargraph7, "symbol", "spectral_ballancer_gain_band_14");
		ui_interface->addVerticalBargraph("gr 14", &fVbargraph7, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph6, "1", "");
		ui_interface->declare(&fVbargraph6, "symbol", "spectral_ballancer_gain_band_15");
		ui_interface->addVerticalBargraph("gr 15", &fVbargraph6, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph5, "1", "");
		ui_interface->declare(&fVbargraph5, "symbol", "spectral_ballancer_gain_band_16");
		ui_interface->addVerticalBargraph("gr 16", &fVbargraph5, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph4, "1", "");
		ui_interface->declare(&fVbargraph4, "symbol", "spectral_ballancer_gain_band_17");
		ui_interface->addVerticalBargraph("gr 17", &fVbargraph4, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph3, "1", "");
		ui_interface->declare(&fVbargraph3, "symbol", "spectral_ballancer_gain_band_18");
		ui_interface->addVerticalBargraph("gr 18", &fVbargraph3, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph2, "1", "");
		ui_interface->declare(&fVbargraph2, "symbol", "spectral_ballancer_gain_band_19");
		ui_interface->addVerticalBargraph("gr 19", &fVbargraph2, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->closeBox();
		ui_interface->closeBox();
		ui_interface->declare(0, "2", "");
		ui_interface->openHorizontalBox("Leveler, MBcomp, Limiter");
		ui_interface->declare(0, "1", "");
		ui_interface->openHorizontalBox("PreStage");
		ui_interface->declare(&fVslider2, "1", "");
		ui_interface->declare(&fVslider2, "symbol", "input_gain");
		ui_interface->declare(&fVslider2, "unit", "dB");
		ui_interface->addVerticalSlider("PreGain", &fVslider2, FAUSTFLOAT(0.0f), FAUSTFLOAT(-2e+01f), FAUSTFLOAT(2e+01f), FAUSTFLOAT(0.1f));
		ui_interface->declare(&fVbargraph1, "symbol", "input_peak_channel_0");
		ui_interface->addVerticalBargraph("In 0", &fVbargraph1, FAUSTFLOAT(-7e+01f), FAUSTFLOAT(0.0f));
		ui_interface->declare(&fVbargraph0, "symbol", "input_peak_channel_1");
		ui_interface->addVerticalBargraph("In 1", &fVbargraph0, FAUSTFLOAT(-7e+01f), FAUSTFLOAT(0.0f));
		ui_interface->closeBox();
		ui_interface->declare(0, "2", "");
		ui_interface->openHorizontalBox("Leveler");
		ui_interface->declare(&fVbargraph22, "1", "");
		ui_interface->declare(&fVbargraph22, "symbol", "leveler_gain");
		ui_interface->declare(&fVbargraph22, "unit", "dB");
		ui_interface->addVerticalBargraph("gain", &fVbargraph22, FAUSTFLOAT(-5e+01f), FAUSTFLOAT(5e+01f));
		ui_interface->declare(&fVslider0, "3", "");
		ui_interface->declare(&fVslider0, "symbol", "leveler_target");
		ui_interface->declare(&fVslider0, "unit", "dB");
		ui_interface->addVerticalSlider("target", &fVslider0, FAUSTFLOAT(-16.0f), FAUSTFLOAT(-26.0f), FAUSTFLOAT(-6.0f), FAUSTFLOAT(1.0f));
		ui_interface->closeBox();
		ui_interface->declare(0, "3", "");
		ui_interface->openHorizontalBox("Multiband Conpressor");
		ui_interface->openHorizontalBox("Parameters");
		ui_interface->declare(&fVslider1, "2", "");
		ui_interface->declare(&fVslider1, "symbol", "style");
		ui_interface->addVerticalSlider("style", &fVslider1, FAUSTFLOAT(0.0f), FAUSTFLOAT(-5.0f), FAUSTFLOAT(5.0f), FAUSTFLOAT(0.1f));
		ui_interface->closeBox();
		ui_interface->openHorizontalBox("bands");
		ui_interface->declare(&fVbargraph27, "8", "");
		ui_interface->declare(&fVbargraph27, "symbol", "multiband_compressor_gain_band_1");
		ui_interface->declare(&fVbargraph27, "unit", "dB");
		ui_interface->addVerticalBargraph("gr 1", &fVbargraph27, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph26, "8", "");
		ui_interface->declare(&fVbargraph26, "symbol", "multiband_compressor_gain_band_2");
		ui_interface->declare(&fVbargraph26, "unit", "dB");
		ui_interface->addVerticalBargraph("gr 2", &fVbargraph26, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph25, "8", "");
		ui_interface->declare(&fVbargraph25, "symbol", "multiband_compressor_gain_band_3");
		ui_interface->declare(&fVbargraph25, "unit", "dB");
		ui_interface->addVerticalBargraph("gr 3", &fVbargraph25, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph24, "8", "");
		ui_interface->declare(&fVbargraph24, "symbol", "multiband_compressor_gain_band_4");
		ui_interface->declare(&fVbargraph24, "unit", "dB");
		ui_interface->addVerticalBargraph("gr 4", &fVbargraph24, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph23, "8", "");
		ui_interface->declare(&fVbargraph23, "symbol", "multiband_compressor_gain_band_5");
		ui_interface->declare(&fVbargraph23, "unit", "dB");
		ui_interface->addVerticalBargraph("gr 5", &fVbargraph23, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->closeBox();
		ui_interface->closeBox();
		ui_interface->declare(0, "6", "");
		ui_interface->openHorizontalBox("PostStage");
		ui_interface->declare(&fVbargraph29, "0", "");
		ui_interface->declare(&fVbargraph29, "symbol", "limiter_gain");
		ui_interface->addVerticalBargraph("LimiterGR", &fVbargraph29, FAUSTFLOAT(-7e+01f), FAUSTFLOAT(0.0f));
		ui_interface->declare(&fVbargraph32, "symbol", "lufs_out_meter");
		ui_interface->declare(&fVbargraph32, "unit", "dB");
		ui_interface->addVerticalBargraph("lufs", &fVbargraph32, FAUSTFLOAT(-7e+01f), FAUSTFLOAT(0.0f));
		ui_interface->declare(&fVbargraph30, "symbol", "output_peak_channel_0");
		ui_interface->addVerticalBargraph("Out 0", &fVbargraph30, FAUSTFLOAT(-7e+01f), FAUSTFLOAT(0.0f));
		ui_interface->declare(&fVbargraph31, "symbol", "output_peak_channel_1");
		ui_interface->addVerticalBargraph("Out 1", &fVbargraph31, FAUSTFLOAT(-7e+01f), FAUSTFLOAT(0.0f));
		ui_interface->closeBox();
		ui_interface->closeBox();
		ui_interface->closeBox();
	}
	
	FAUSTPP_VIRTUAL void compute(int count, FAUSTFLOAT** RESTRICT inputs, FAUSTFLOAT** RESTRICT outputs) {
		FAUSTFLOAT* input0 = inputs[0];
		FAUSTFLOAT* input1 = inputs[1];
		FAUSTFLOAT* output0 = outputs[0];
		FAUSTFLOAT* output1 = outputs[1];
		float fSlow0 = float(fVslider0);
		float fSlow1 = fSlow0 + -1.0f;
		float fSlow2 = float(fVslider1);
		float fSlow3 = fSlow2 + 5.0f;
		float fSlow4 = 0.4f * fSlow3;
		float fSlow5 = -18.0f - fSlow4;
		float fSlow6 = 0.6f * fSlow3;
		float fSlow7 = 6.0f - fSlow6;
		float fSlow8 = 0.5f * fSlow7;
		float fSlow9 = fSlow0 + fSlow8;
		float fSlow10 = fSlow9 + fSlow5;
		float fSlow11 = fConst31 * std::pow(1e+01f, 0.05f * float(fVslider2));
		float fSlow12 = float(fVslider3) + 5.0f;
		float fSlow13 = 1.3f * fSlow12;
		float fSlow14 = 0.01f * float(fVslider4);
		float fSlow15 = 0.9f * fSlow12;
		float fSlow16 = 0.6f * fSlow12;
		float fSlow17 = 0.5f * fSlow12;
		float fSlow18 = 0.3f * fSlow12;
		float fSlow19 = 0.1f * fSlow12;
		float fSlow20 = 0.2f * fSlow12;
		float fSlow21 = 0.4f * fSlow12;
		float fSlow22 = fConst31 * float(fCheckbox0);
		float fSlow23 = fConst31 * float(fCheckbox1);
		float fSlow24 = fSlow0 + 1e+01f;
		float fSlow25 = fSlow0 + 1e+01f;
		float fSlow26 = fSlow4 + fSlow8;
		float fSlow27 = fSlow0 + (-18.0f - fSlow26);
		float fSlow28 = 0.5f / std::max<float>(1.1920929e-07f, fSlow7);
		float fSlow29 = 0.04090909f * fSlow3 + 0.09090909f;
		float fSlow30 = 0.0003f * fSlow3;
		float fSlow31 = 0.005f - fSlow30;
		int iSlow32 = std::fabs(fSlow31) < 1.1920929e-07f;
		float fSlow33 = ((iSlow32) ? 0.0f : std::exp(0.0f - fConst7 / ((iSlow32) ? 1.0f : fSlow31)));
		float fSlow34 = -3.0f - 2.7f * fSlow3;
		float fSlow35 = 12.0f - fSlow6;
		float fSlow36 = 0.5f * fSlow35;
		float fSlow37 = fSlow0 + fSlow36;
		float fSlow38 = fSlow37 + fSlow5;
		float fSlow39 = fSlow4 + fSlow36;
		float fSlow40 = fSlow0 + (-18.0f - fSlow39);
		float fSlow41 = 1.0f / std::min<float>(1.1920929e-07f, 0.0f - 2.0f * fSlow35);
		float fSlow42 = 3.0f * fSlow3 + 1e+01f;
		float fSlow43 = std::fabs(fSlow42);
		int iSlow44 = fSlow42 > 0.0f;
		float fSlow45 = float(2 * iSlow44 + -1);
		float fSlow46 = 0.3f - 0.01f * fSlow3;
		float fSlow47 = ((iSlow44) ? fSlow46 : 0.001f);
		int iSlow48 = std::fabs(fSlow47) < 1.1920929e-07f;
		float fSlow49 = ((iSlow48) ? 0.0f : std::exp(0.0f - fConst7 / ((iSlow48) ? 1.0f : fSlow47)));
		float fSlow50 = ((iSlow44) ? 0.001f : fSlow46);
		int iSlow51 = std::fabs(fSlow50) < 1.1920929e-07f;
		float fSlow52 = ((iSlow51) ? 0.0f : std::exp(0.0f - fConst7 / ((iSlow51) ? 1.0f : fSlow50)));
		float fSlow53 = 0.7f * fSlow3;
		float fSlow54 = -16.0f - fSlow53;
		float fSlow55 = fSlow9 + fSlow54;
		float fSlow56 = fSlow8 + fSlow53;
		float fSlow57 = fSlow0 + (-16.0f - fSlow56);
		float fSlow58 = 0.08f - 0.0045f * fSlow3;
		int iSlow59 = std::fabs(fSlow58) < 1.1920929e-07f;
		float fSlow60 = ((iSlow59) ? 0.0f : std::exp(0.0f - fConst7 / ((iSlow59) ? 1.0f : fSlow58)));
		float fSlow61 = fSlow37 + fSlow54;
		float fSlow62 = fSlow0 + (-16.0f - (fSlow36 + fSlow53));
		float fSlow63 = 2.5f * fSlow3 + 1e+01f;
		float fSlow64 = std::fabs(fSlow63);
		int iSlow65 = fSlow63 > 0.0f;
		float fSlow66 = float(2 * iSlow65 + -1);
		float fSlow67 = ((iSlow65) ? 0.4f : 0.002f);
		int iSlow68 = std::fabs(fSlow67) < 1.1920929e-07f;
		float fSlow69 = ((iSlow68) ? 0.0f : std::exp(0.0f - fConst7 / ((iSlow68) ? 1.0f : fSlow67)));
		float fSlow70 = ((iSlow65) ? 0.002f : 0.4f);
		int iSlow71 = std::fabs(fSlow70) < 1.1920929e-07f;
		float fSlow72 = ((iSlow71) ? 0.0f : std::exp(0.0f - fConst7 / ((iSlow71) ? 1.0f : fSlow70)));
		float fSlow73 = -12.0f - fSlow6;
		float fSlow74 = fSlow9 + fSlow73;
		float fSlow75 = fSlow6 + fSlow8;
		float fSlow76 = fSlow0 + (-12.0f - fSlow75);
		float fSlow77 = 0.12f - 0.009f * fSlow3;
		int iSlow78 = std::fabs(fSlow77) < 1.1920929e-07f;
		float fSlow79 = ((iSlow78) ? 0.0f : std::exp(0.0f - fConst7 / ((iSlow78) ? 1.0f : fSlow77)));
		float fSlow80 = fSlow37 + fSlow73;
		float fSlow81 = fSlow0 + (-12.0f - (fSlow6 + fSlow36));
		float fSlow82 = 2.0f * fSlow3 + 1e+01f;
		float fSlow83 = std::fabs(fSlow82);
		int iSlow84 = fSlow82 > 0.0f;
		float fSlow85 = float(2 * iSlow84 + -1);
		float fSlow86 = fSlow30 + 0.002f;
		float fSlow87 = ((iSlow84) ? 0.6f : fSlow86);
		int iSlow88 = std::fabs(fSlow87) < 1.1920929e-07f;
		float fSlow89 = ((iSlow88) ? 0.0f : std::exp(0.0f - fConst7 / ((iSlow88) ? 1.0f : fSlow87)));
		float fSlow90 = ((iSlow84) ? fSlow86 : 0.6f);
		int iSlow91 = std::fabs(fSlow90) < 1.1920929e-07f;
		float fSlow92 = ((iSlow91) ? 0.0f : std::exp(0.0f - fConst7 / ((iSlow91) ? 1.0f : fSlow90)));
		float fSlow93 = -12.0f - fSlow4;
		float fSlow94 = fSlow9 + fSlow93;
		float fSlow95 = fSlow0 + (-12.0f - fSlow26);
		float fSlow96 = 0.16f - 0.014f * fSlow3;
		int iSlow97 = std::fabs(fSlow96) < 1.1920929e-07f;
		float fSlow98 = ((iSlow97) ? 0.0f : std::exp(0.0f - fConst7 / ((iSlow97) ? 1.0f : fSlow96)));
		float fSlow99 = fSlow37 + fSlow93;
		float fSlow100 = fSlow0 + (-12.0f - fSlow39);
		float fSlow101 = fSlow2 + 15.0f;
		float fSlow102 = std::fabs(fSlow101);
		int iSlow103 = fSlow101 > 0.0f;
		float fSlow104 = float(2 * iSlow103 + -1);
		float fSlow105 = 0.0005f * fSlow3 + 0.005f;
		float fSlow106 = ((iSlow103) ? 0.8f : fSlow105);
		int iSlow107 = std::fabs(fSlow106) < 1.1920929e-07f;
		float fSlow108 = ((iSlow107) ? 0.0f : std::exp(0.0f - fConst7 / ((iSlow107) ? 1.0f : fSlow106)));
		float fSlow109 = ((iSlow103) ? fSlow105 : 0.8f);
		int iSlow110 = std::fabs(fSlow109) < 1.1920929e-07f;
		float fSlow111 = ((iSlow110) ? 0.0f : std::exp(0.0f - fConst7 / ((iSlow110) ? 1.0f : fSlow109)));
		float fSlow112 = -18.0f - fSlow2;
		float fSlow113 = fSlow9 + fSlow112;
		float fSlow114 = fSlow2 + fSlow8;
		float fSlow115 = fSlow0 + (-18.0f - fSlow114);
		float fSlow116 = 0.2f - 0.0185f * fSlow3;
		int iSlow117 = std::fabs(fSlow116) < 1.1920929e-07f;
		float fSlow118 = ((iSlow117) ? 0.0f : std::exp(0.0f - fConst7 / ((iSlow117) ? 1.0f : fSlow116)));
		float fSlow119 = fSlow37 + fSlow112;
		float fSlow120 = fSlow0 + (-18.0f - (fSlow2 + fSlow36));
		float fSlow121 = 1.0f - 0.02f * fSlow3;
		float fSlow122 = ((iSlow103) ? fSlow121 : fSlow105);
		int iSlow123 = std::fabs(fSlow122) < 1.1920929e-07f;
		float fSlow124 = ((iSlow123) ? 0.0f : std::exp(0.0f - fConst7 / ((iSlow123) ? 1.0f : fSlow122)));
		float fSlow125 = ((iSlow103) ? fSlow105 : fSlow121);
		int iSlow126 = std::fabs(fSlow125) < 1.1920929e-07f;
		float fSlow127 = ((iSlow126) ? 0.0f : std::exp(0.0f - fConst7 / ((iSlow126) ? 1.0f : fSlow125)));
		float fSlow128 = fConst31 * float(fCheckbox2);
		float fSlow129 = fSlow0 + -7.0f;
		fVbargraph28 = FAUSTFLOAT(0.11f);
		float fSlow130 = fConst31 * float(fCheckbox3);
		for (int i0 = 0; i0 < count; i0 = i0 + 1) {
			fRec9[0] = fSlow11 + fConst32 * fRec9[1];
			float fTemp0 = float(input1[i0]);
			fVec0[IOTA0 & 32767] = fTemp0;
			float fTemp1 = fTemp0 * fRec9[0];
			fRec8[0] = std::max<float>(fRec8[1] - fConst1, std::min<float>(12.0f, 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(0.00031622776f, std::fabs(fTemp1))))));
			fVbargraph0 = FAUSTFLOAT(fRec8[0]);
			float fTemp2 = fTemp1;
			float fTemp3 = float(input0[i0]);
			fVec1[IOTA0 & 32767] = fTemp3;
			float fTemp4 = fTemp3 * fRec9[0];
			fRec10[0] = std::max<float>(fRec10[1] - fConst1, std::min<float>(12.0f, 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(0.00031622776f, std::fabs(fTemp4))))));
			fVbargraph1 = FAUSTFLOAT(fRec10[0]);
			float fTemp5 = fTemp4;
			fRec11[0] = fConst32 * fRec11[1];
			fRec13[0] = fTemp2 - fConst44 * (fConst43 * fRec13[2] + fConst41 * fRec13[1]);
			fRec12[0] = fConst44 * (fConst40 * fRec13[0] + fConst45 * fRec13[1] + fConst40 * fRec13[2]) - fConst37 * (fConst36 * fRec12[2] + fConst34 * fRec12[1]);
			float fTemp6 = fRec12[2] + fRec12[0] + 2.0f * fRec12[1];
			fRec15[0] = fTemp5 - fConst44 * (fConst43 * fRec15[2] + fConst41 * fRec15[1]);
			fRec14[0] = fConst44 * (fConst40 * fRec15[0] + fConst45 * fRec15[1] + fConst40 * fRec15[2]) - fConst37 * (fConst36 * fRec14[2] + fConst34 * fRec14[1]);
			float fTemp7 = fRec14[2] + fRec14[0] + 2.0f * fRec14[1];
			float fTemp8 = 1.0f - fRec11[0];
			float fTemp9 = fConst37 * fTemp8 * (fTemp7 + fTemp6) + fRec11[0] * (fTemp5 + fTemp2);
			fVec2[0] = fTemp9;
			float fTemp10 = 0.5f * fTemp9;
			fRec7[0] = fTemp10 - fConst30 * (fConst28 * fRec7[2] + fConst26 * fRec7[1]);
			float fTemp11 = fConst46 * fRec7[0] + fConst47 * fRec7[2];
			fVec3[IOTA0 & 32767] = fTemp11;
			float fTemp12 = fVec3[(IOTA0 - 1) & 32767];
			fVec4[0] = fConst64 * fTemp12 - fConst62 * fRec18[1];
			fRec19[0] = fConst65 * (fVec4[1] - fConst60 * fRec19[1] + fConst58 * fTemp12 + fConst56 * fTemp11);
			fRec18[0] = fRec19[0];
			fVec5[0] = 0.50032705f * fRec18[1] - fConst70 * fRec16[1];
			fRec17[0] = fConst73 * fRec18[1] + fConst72 * (fVec5[1] - fConst68 * fRec17[1] + 0.50032705f * fRec18[0]);
			fRec16[0] = fRec17[0];
			float fTemp13 = mydsp_faustpower2_f(fRec16[0]);
			fVec6[0] = fTemp13;
			float fTemp14 = fTemp13 + fVec6[1];
			fVec7[0] = fTemp14;
			float fTemp15 = fTemp14 + fVec7[2];
			fVec8[0] = fTemp15;
			float fTemp16 = fTemp15 + fVec8[4];
			fVec9[0] = fTemp16;
			float fTemp17 = fTemp16 + fVec9[8];
			fVec10[IOTA0 & 31] = fTemp17;
			float fTemp18 = fTemp17 + fVec10[(IOTA0 - 16) & 31];
			fVec11[IOTA0 & 63] = fTemp18;
			float fTemp19 = fTemp18 + fVec11[(IOTA0 - 32) & 63];
			fVec12[IOTA0 & 127] = fTemp19;
			float fTemp20 = fTemp19 + fVec12[(IOTA0 - 64) & 127];
			fVec13[IOTA0 & 255] = fTemp20;
			float fTemp21 = fTemp20 + fVec13[(IOTA0 - 128) & 255];
			fVec14[IOTA0 & 511] = fTemp21;
			float fTemp22 = fTemp21 + fVec14[(IOTA0 - 256) & 511];
			fVec15[IOTA0 & 1023] = fTemp22;
			float fTemp23 = fTemp22 + fVec15[(IOTA0 - 512) & 1023];
			fVec16[IOTA0 & 2047] = fTemp23;
			float fTemp24 = fTemp23 + fVec16[(IOTA0 - 1024) & 2047];
			fVec17[IOTA0 & 4095] = fTemp24;
			float fTemp25 = fTemp24 + fVec17[(IOTA0 - 2048) & 4095];
			fVec18[IOTA0 & 8191] = fTemp25;
			float fTemp26 = fTemp25 + fVec18[(IOTA0 - 4096) & 8191];
			fVec19[IOTA0 & 16383] = fTemp26;
			float fTemp27 = fTemp26 + fVec19[(IOTA0 - 8192) & 16383];
			fVec20[IOTA0 & 32767] = fTemp27;
			float fTemp28 = fTemp27 + fVec20[(IOTA0 - 16384) & 32767];
			fVec21[IOTA0 & 65535] = fTemp28;
			float fTemp29 = fTemp28 + fVec21[(IOTA0 - 32768) & 65535];
			fVec22[IOTA0 & 131071] = fTemp29;
			fVec23[IOTA0 & 262143] = fTemp29 + fVec22[(IOTA0 - 65536) & 131071];
			fVec24[0] = fConst109 * fVec2[1] - fConst62 * fRec22[1];
			fRec23[0] = fConst65 * (fVec24[1] - fConst60 * fRec23[1] + fConst57 * fVec2[1] + fConst108 * fTemp9);
			fRec22[0] = fRec23[0];
			fVec25[0] = 0.50032705f * fRec22[1] - fConst70 * fRec20[1];
			fRec21[0] = fConst73 * fRec22[1] + fConst72 * (fVec25[1] - fConst68 * fRec21[1] + 0.50032705f * fRec22[0]);
			fRec20[0] = fRec21[0];
			float fTemp30 = mydsp_faustpower2_f(fRec20[0]);
			fVec26[0] = fTemp30;
			float fTemp31 = fTemp30 + fVec26[1];
			fVec27[0] = fTemp31;
			float fTemp32 = fTemp31 + fVec27[2];
			fVec28[0] = fTemp32;
			float fTemp33 = fTemp32 + fVec28[4];
			fVec29[0] = fTemp33;
			float fTemp34 = fTemp33 + fVec29[8];
			fVec30[IOTA0 & 31] = fTemp34;
			float fTemp35 = fTemp34 + fVec30[(IOTA0 - 16) & 31];
			fVec31[IOTA0 & 63] = fTemp35;
			float fTemp36 = fTemp35 + fVec31[(IOTA0 - 32) & 63];
			fVec32[IOTA0 & 127] = fTemp36;
			float fTemp37 = fTemp36 + fVec32[(IOTA0 - 64) & 127];
			fVec33[IOTA0 & 255] = fTemp37;
			float fTemp38 = fTemp37 + fVec33[(IOTA0 - 128) & 255];
			fVec34[IOTA0 & 511] = fTemp38;
			float fTemp39 = fTemp38 + fVec34[(IOTA0 - 256) & 511];
			fVec35[IOTA0 & 1023] = fTemp39;
			float fTemp40 = fTemp39 + fVec35[(IOTA0 - 512) & 1023];
			fVec36[IOTA0 & 2047] = fTemp40;
			float fTemp41 = fTemp40 + fVec36[(IOTA0 - 1024) & 2047];
			fVec37[IOTA0 & 4095] = fTemp41;
			float fTemp42 = fTemp41 + fVec37[(IOTA0 - 2048) & 4095];
			fVec38[IOTA0 & 8191] = fTemp42;
			float fTemp43 = fTemp42 + fVec38[(IOTA0 - 4096) & 8191];
			fVec39[IOTA0 & 16383] = fTemp43;
			float fTemp44 = fTemp43 + fVec39[(IOTA0 - 8192) & 16383];
			fVec40[IOTA0 & 32767] = fTemp44;
			float fTemp45 = fTemp44 + fVec40[(IOTA0 - 16384) & 32767];
			fVec41[IOTA0 & 65535] = fTemp45;
			float fTemp46 = fTemp45 + fVec41[(IOTA0 - 32768) & 65535];
			fVec42[IOTA0 & 131071] = fTemp46;
			fVec43[IOTA0 & 262143] = fTemp46 + fVec42[(IOTA0 - 65536) & 131071];
			float fTemp47 = std::log(std::max<float>(1e-12f, fConst107 * (((iConst105) ? 0.86000985f * fVec43[(IOTA0 - iConst106) & 262143] : 0.0f) + ((iConst103) ? 0.86000985f * fVec42[(IOTA0 - iConst104) & 131071] : 0.0f) + ((iConst101) ? 0.86000985f * fVec41[(IOTA0 - iConst102) & 65535] : 0.0f) + ((iConst99) ? 0.86000985f * fVec40[(IOTA0 - iConst100) & 32767] : 0.0f) + ((iConst97) ? 0.86000985f * fVec39[(IOTA0 - iConst98) & 16383] : 0.0f) + ((iConst95) ? 0.86000985f * fVec38[(IOTA0 - iConst96) & 8191] : 0.0f) + ((iConst93) ? 0.86000985f * fVec37[(IOTA0 - iConst94) & 4095] : 0.0f) + ((iConst91) ? 0.86000985f * fVec36[(IOTA0 - iConst92) & 2047] : 0.0f) + ((iConst89) ? 0.86000985f * fVec35[(IOTA0 - iConst90) & 1023] : 0.0f) + ((iConst87) ? 0.86000985f * fVec34[(IOTA0 - iConst88) & 511] : 0.0f) + ((iConst85) ? 0.86000985f * fVec33[(IOTA0 - iConst86) & 255] : 0.0f) + ((iConst83) ? 0.86000985f * fVec32[(IOTA0 - iConst84) & 127] : 0.0f) + ((iConst81) ? 0.86000985f * fVec31[(IOTA0 - iConst82) & 63] : 0.0f) + ((iConst79) ? 0.86000985f * fVec30[(IOTA0 - iConst80) & 31] : 0.0f) + ((iConst77) ? 0.86000985f * fVec29[iConst78] : 0.0f) + ((iConst75) ? 0.86000985f * fVec28[iConst76] : 0.0f) + ((iConst74) ? 0.86000985f * fTemp30 : 0.0f) + ((iConst51) ? 0.86000985f * fVec27[iConst74] : 0.0f))));
			float fTemp48 = std::fabs(fTemp10);
			fVec44[0] = fTemp48;
			float fTemp49 = std::max<float>(fTemp48, fVec44[1]);
			fVec45[0] = fTemp49;
			float fTemp50 = std::max<float>(fTemp49, fVec45[2]);
			fVec46[0] = fTemp50;
			float fTemp51 = std::max<float>(fTemp50, fVec46[4]);
			fVec47[0] = fTemp51;
			float fTemp52 = std::max<float>(fTemp51, fVec47[8]);
			fVec48[IOTA0 & 31] = fTemp52;
			float fTemp53 = std::max<float>(fTemp52, fVec48[(IOTA0 - 16) & 31]);
			fVec49[IOTA0 & 63] = fTemp53;
			float fTemp54 = std::max<float>(fTemp53, fVec49[(IOTA0 - 32) & 63]);
			fVec50[IOTA0 & 127] = fTemp54;
			fVec51[IOTA0 & 255] = std::max<float>(fTemp54, fVec50[(IOTA0 - 64) & 127]);
			float fTemp55 = std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst110) ? fTemp48 : -3.4028235e+38f), ((iConst111) ? fVec45[iConst110] : -3.4028235e+38f)), ((iConst112) ? fVec46[iConst113] : -3.4028235e+38f)), ((iConst114) ? fVec47[iConst115] : -3.4028235e+38f)), ((iConst116) ? fVec48[(IOTA0 - iConst117) & 31] : -3.4028235e+38f)), ((iConst118) ? fVec49[(IOTA0 - iConst119) & 63] : -3.4028235e+38f)), ((iConst120) ? fVec50[(IOTA0 - iConst121) & 127] : -3.4028235e+38f)), ((iConst122) ? fVec51[(IOTA0 - iConst123) & 255] : -3.4028235e+38f))));
			float fTemp56 = 2e+01f * fTemp55;
			int iTemp57 = (fTemp56 > -2e+01f) + (fTemp56 > -2e+01f);
			float fTemp58 = 2e+01f * (fTemp55 + 1.0f);
			float fTemp59 = std::max<float>(-3.4028235e+38f, 0.8f * ((iTemp57 == 0) ? fTemp58 : ((iTemp57 == 1) ? 0.0f - 4194304.0f * mydsp_faustpower2_f(fTemp58 + -5.9604645e-08f) : 0.0f)));
			float fTemp60 = ((fTemp59 > fRec24[1]) ? fConst125 : fConst124);
			fRec24[0] = fTemp59 * (1.0f - fTemp60) + fRec24[1] * fTemp60;
			float fTemp61 = std::min<float>(1.0f, std::max<float>(0.0f, std::pow(1e+01f, 0.05f * fRec24[0])));
			float fTemp62 = fTemp61;
			float fTemp63 = fSlow14 * fTemp62 * (fSlow13 + 4.3429446f * (fTemp47 - std::log(std::max<float>(1e-12f, fConst107 * (((iConst105) ? 0.86000985f * fVec23[(IOTA0 - iConst106) & 262143] : 0.0f) + ((iConst103) ? 0.86000985f * fVec22[(IOTA0 - iConst104) & 131071] : 0.0f) + ((iConst101) ? 0.86000985f * fVec21[(IOTA0 - iConst102) & 65535] : 0.0f) + ((iConst99) ? 0.86000985f * fVec20[(IOTA0 - iConst100) & 32767] : 0.0f) + ((iConst97) ? 0.86000985f * fVec19[(IOTA0 - iConst98) & 16383] : 0.0f) + ((iConst95) ? 0.86000985f * fVec18[(IOTA0 - iConst96) & 8191] : 0.0f) + ((iConst93) ? 0.86000985f * fVec17[(IOTA0 - iConst94) & 4095] : 0.0f) + ((iConst91) ? 0.86000985f * fVec16[(IOTA0 - iConst92) & 2047] : 0.0f) + ((iConst89) ? 0.86000985f * fVec15[(IOTA0 - iConst90) & 1023] : 0.0f) + ((iConst87) ? 0.86000985f * fVec14[(IOTA0 - iConst88) & 511] : 0.0f) + ((iConst85) ? 0.86000985f * fVec13[(IOTA0 - iConst86) & 255] : 0.0f) + ((iConst83) ? 0.86000985f * fVec12[(IOTA0 - iConst84) & 127] : 0.0f) + ((iConst81) ? 0.86000985f * fVec11[(IOTA0 - iConst82) & 63] : 0.0f) + ((iConst79) ? 0.86000985f * fVec10[(IOTA0 - iConst80) & 31] : 0.0f) + ((iConst77) ? 0.86000985f * fVec9[iConst78] : 0.0f) + ((iConst75) ? 0.86000985f * fVec8[iConst76] : 0.0f) + ((iConst74) ? 0.86000985f * fTemp13 : 0.0f) + ((iConst51) ? 0.86000985f * fVec7[iConst74] : 0.0f))))) + -29.0f);
			fVbargraph2 = FAUSTFLOAT(fTemp63);
			fRec25[0] = fTemp10 - fConst131 * (fConst129 * fRec25[2] + fConst127 * fRec25[1]);
			float fTemp64 = fConst132 * fRec25[0] + fConst133 * fRec25[2];
			fVec52[IOTA0 & 32767] = fTemp64;
			float fTemp65 = fVec52[(IOTA0 - 1) & 32767];
			fVec53[0] = fConst64 * fTemp65 - fConst62 * fRec28[1];
			fRec29[0] = fConst65 * (fVec53[1] - fConst60 * fRec29[1] + fConst58 * fTemp65 + fConst56 * fTemp64);
			fRec28[0] = fRec29[0];
			fVec54[0] = 0.50032705f * fRec28[1] - fConst70 * fRec26[1];
			fRec27[0] = fConst73 * fRec28[1] + fConst72 * (fVec54[1] - fConst68 * fRec27[1] + 0.50032705f * fRec28[0]);
			fRec26[0] = fRec27[0];
			float fTemp66 = mydsp_faustpower2_f(fRec26[0]);
			fVec55[0] = fTemp66;
			float fTemp67 = fTemp66 + fVec55[1];
			fVec56[0] = fTemp67;
			float fTemp68 = fTemp67 + fVec56[2];
			fVec57[0] = fTemp68;
			float fTemp69 = fTemp68 + fVec57[4];
			fVec58[0] = fTemp69;
			float fTemp70 = fTemp69 + fVec58[8];
			fVec59[IOTA0 & 31] = fTemp70;
			float fTemp71 = fTemp70 + fVec59[(IOTA0 - 16) & 31];
			fVec60[IOTA0 & 63] = fTemp71;
			float fTemp72 = fTemp71 + fVec60[(IOTA0 - 32) & 63];
			fVec61[IOTA0 & 127] = fTemp72;
			float fTemp73 = fTemp72 + fVec61[(IOTA0 - 64) & 127];
			fVec62[IOTA0 & 255] = fTemp73;
			float fTemp74 = fTemp73 + fVec62[(IOTA0 - 128) & 255];
			fVec63[IOTA0 & 511] = fTemp74;
			float fTemp75 = fTemp74 + fVec63[(IOTA0 - 256) & 511];
			fVec64[IOTA0 & 1023] = fTemp75;
			float fTemp76 = fTemp75 + fVec64[(IOTA0 - 512) & 1023];
			fVec65[IOTA0 & 2047] = fTemp76;
			float fTemp77 = fTemp76 + fVec65[(IOTA0 - 1024) & 2047];
			fVec66[IOTA0 & 4095] = fTemp77;
			float fTemp78 = fTemp77 + fVec66[(IOTA0 - 2048) & 4095];
			fVec67[IOTA0 & 8191] = fTemp78;
			float fTemp79 = fTemp78 + fVec67[(IOTA0 - 4096) & 8191];
			fVec68[IOTA0 & 16383] = fTemp79;
			float fTemp80 = fTemp79 + fVec68[(IOTA0 - 8192) & 16383];
			fVec69[IOTA0 & 32767] = fTemp80;
			float fTemp81 = fTemp80 + fVec69[(IOTA0 - 16384) & 32767];
			fVec70[IOTA0 & 65535] = fTemp81;
			float fTemp82 = fTemp81 + fVec70[(IOTA0 - 32768) & 65535];
			fVec71[IOTA0 & 131071] = fTemp82;
			fVec72[IOTA0 & 262143] = fTemp82 + fVec71[(IOTA0 - 65536) & 131071];
			float fTemp83 = fSlow14 * fTemp62 * (fSlow15 + 4.3429446f * (fTemp47 - std::log(std::max<float>(1e-12f, fConst107 * (((iConst105) ? 0.86000985f * fVec72[(IOTA0 - iConst106) & 262143] : 0.0f) + ((iConst103) ? 0.86000985f * fVec71[(IOTA0 - iConst104) & 131071] : 0.0f) + ((iConst101) ? 0.86000985f * fVec70[(IOTA0 - iConst102) & 65535] : 0.0f) + ((iConst99) ? 0.86000985f * fVec69[(IOTA0 - iConst100) & 32767] : 0.0f) + ((iConst97) ? 0.86000985f * fVec68[(IOTA0 - iConst98) & 16383] : 0.0f) + ((iConst95) ? 0.86000985f * fVec67[(IOTA0 - iConst96) & 8191] : 0.0f) + ((iConst93) ? 0.86000985f * fVec66[(IOTA0 - iConst94) & 4095] : 0.0f) + ((iConst91) ? 0.86000985f * fVec65[(IOTA0 - iConst92) & 2047] : 0.0f) + ((iConst89) ? 0.86000985f * fVec64[(IOTA0 - iConst90) & 1023] : 0.0f) + ((iConst87) ? 0.86000985f * fVec63[(IOTA0 - iConst88) & 511] : 0.0f) + ((iConst85) ? 0.86000985f * fVec62[(IOTA0 - iConst86) & 255] : 0.0f) + ((iConst83) ? 0.86000985f * fVec61[(IOTA0 - iConst84) & 127] : 0.0f) + ((iConst81) ? 0.86000985f * fVec60[(IOTA0 - iConst82) & 63] : 0.0f) + ((iConst79) ? 0.86000985f * fVec59[(IOTA0 - iConst80) & 31] : 0.0f) + ((iConst77) ? 0.86000985f * fVec58[iConst78] : 0.0f) + ((iConst75) ? 0.86000985f * fVec57[iConst76] : 0.0f) + ((iConst74) ? 0.86000985f * fTemp66 : 0.0f) + ((iConst51) ? 0.86000985f * fVec56[iConst74] : 0.0f))))) + -29.0f);
			fVbargraph3 = FAUSTFLOAT(fTemp83);
			fRec30[0] = fTemp10 - fConst139 * (fConst137 * fRec30[2] + fConst135 * fRec30[1]);
			float fTemp84 = fConst140 * fRec30[0] + fConst141 * fRec30[2];
			fVec73[IOTA0 & 32767] = fTemp84;
			float fTemp85 = fVec73[(IOTA0 - 1) & 32767];
			fVec74[0] = fConst64 * fTemp85 - fConst62 * fRec33[1];
			fRec34[0] = fConst65 * (fVec74[1] - fConst60 * fRec34[1] + fConst58 * fTemp85 + fConst56 * fTemp84);
			fRec33[0] = fRec34[0];
			fVec75[0] = 0.50032705f * fRec33[1] - fConst70 * fRec31[1];
			fRec32[0] = fConst73 * fRec33[1] + fConst72 * (fVec75[1] - fConst68 * fRec32[1] + 0.50032705f * fRec33[0]);
			fRec31[0] = fRec32[0];
			float fTemp86 = mydsp_faustpower2_f(fRec31[0]);
			fVec76[0] = fTemp86;
			float fTemp87 = fTemp86 + fVec76[1];
			fVec77[0] = fTemp87;
			float fTemp88 = fTemp87 + fVec77[2];
			fVec78[0] = fTemp88;
			float fTemp89 = fTemp88 + fVec78[4];
			fVec79[0] = fTemp89;
			float fTemp90 = fTemp89 + fVec79[8];
			fVec80[IOTA0 & 31] = fTemp90;
			float fTemp91 = fTemp90 + fVec80[(IOTA0 - 16) & 31];
			fVec81[IOTA0 & 63] = fTemp91;
			float fTemp92 = fTemp91 + fVec81[(IOTA0 - 32) & 63];
			fVec82[IOTA0 & 127] = fTemp92;
			float fTemp93 = fTemp92 + fVec82[(IOTA0 - 64) & 127];
			fVec83[IOTA0 & 255] = fTemp93;
			float fTemp94 = fTemp93 + fVec83[(IOTA0 - 128) & 255];
			fVec84[IOTA0 & 511] = fTemp94;
			float fTemp95 = fTemp94 + fVec84[(IOTA0 - 256) & 511];
			fVec85[IOTA0 & 1023] = fTemp95;
			float fTemp96 = fTemp95 + fVec85[(IOTA0 - 512) & 1023];
			fVec86[IOTA0 & 2047] = fTemp96;
			float fTemp97 = fTemp96 + fVec86[(IOTA0 - 1024) & 2047];
			fVec87[IOTA0 & 4095] = fTemp97;
			float fTemp98 = fTemp97 + fVec87[(IOTA0 - 2048) & 4095];
			fVec88[IOTA0 & 8191] = fTemp98;
			float fTemp99 = fTemp98 + fVec88[(IOTA0 - 4096) & 8191];
			fVec89[IOTA0 & 16383] = fTemp99;
			float fTemp100 = fTemp99 + fVec89[(IOTA0 - 8192) & 16383];
			fVec90[IOTA0 & 32767] = fTemp100;
			float fTemp101 = fTemp100 + fVec90[(IOTA0 - 16384) & 32767];
			fVec91[IOTA0 & 65535] = fTemp101;
			float fTemp102 = fTemp101 + fVec91[(IOTA0 - 32768) & 65535];
			fVec92[IOTA0 & 131071] = fTemp102;
			fVec93[IOTA0 & 262143] = fTemp102 + fVec92[(IOTA0 - 65536) & 131071];
			float fTemp103 = fSlow14 * fTemp62 * (fSlow16 + 4.3429446f * (fTemp47 - std::log(std::max<float>(1e-12f, fConst107 * (((iConst105) ? 0.86000985f * fVec93[(IOTA0 - iConst106) & 262143] : 0.0f) + ((iConst103) ? 0.86000985f * fVec92[(IOTA0 - iConst104) & 131071] : 0.0f) + ((iConst101) ? 0.86000985f * fVec91[(IOTA0 - iConst102) & 65535] : 0.0f) + ((iConst99) ? 0.86000985f * fVec90[(IOTA0 - iConst100) & 32767] : 0.0f) + ((iConst97) ? 0.86000985f * fVec89[(IOTA0 - iConst98) & 16383] : 0.0f) + ((iConst95) ? 0.86000985f * fVec88[(IOTA0 - iConst96) & 8191] : 0.0f) + ((iConst93) ? 0.86000985f * fVec87[(IOTA0 - iConst94) & 4095] : 0.0f) + ((iConst91) ? 0.86000985f * fVec86[(IOTA0 - iConst92) & 2047] : 0.0f) + ((iConst89) ? 0.86000985f * fVec85[(IOTA0 - iConst90) & 1023] : 0.0f) + ((iConst87) ? 0.86000985f * fVec84[(IOTA0 - iConst88) & 511] : 0.0f) + ((iConst85) ? 0.86000985f * fVec83[(IOTA0 - iConst86) & 255] : 0.0f) + ((iConst83) ? 0.86000985f * fVec82[(IOTA0 - iConst84) & 127] : 0.0f) + ((iConst81) ? 0.86000985f * fVec81[(IOTA0 - iConst82) & 63] : 0.0f) + ((iConst79) ? 0.86000985f * fVec80[(IOTA0 - iConst80) & 31] : 0.0f) + ((iConst77) ? 0.86000985f * fVec79[iConst78] : 0.0f) + ((iConst75) ? 0.86000985f * fVec78[iConst76] : 0.0f) + ((iConst74) ? 0.86000985f * fTemp86 : 0.0f) + ((iConst51) ? 0.86000985f * fVec77[iConst74] : 0.0f))))) + -29.0f);
			fVbargraph4 = FAUSTFLOAT(fTemp103);
			fRec35[0] = fTemp10 - fConst147 * (fConst145 * fRec35[2] + fConst143 * fRec35[1]);
			float fTemp104 = fConst148 * fRec35[0] + fConst149 * fRec35[2];
			fVec94[IOTA0 & 32767] = fTemp104;
			float fTemp105 = fVec94[(IOTA0 - 1) & 32767];
			fVec95[0] = fConst64 * fTemp105 - fConst62 * fRec38[1];
			fRec39[0] = fConst65 * (fVec95[1] - fConst60 * fRec39[1] + fConst58 * fTemp105 + fConst56 * fTemp104);
			fRec38[0] = fRec39[0];
			fVec96[0] = 0.50032705f * fRec38[1] - fConst70 * fRec36[1];
			fRec37[0] = fConst73 * fRec38[1] + fConst72 * (fVec96[1] - fConst68 * fRec37[1] + 0.50032705f * fRec38[0]);
			fRec36[0] = fRec37[0];
			float fTemp106 = mydsp_faustpower2_f(fRec36[0]);
			fVec97[0] = fTemp106;
			float fTemp107 = fTemp106 + fVec97[1];
			fVec98[0] = fTemp107;
			float fTemp108 = fTemp107 + fVec98[2];
			fVec99[0] = fTemp108;
			float fTemp109 = fTemp108 + fVec99[4];
			fVec100[0] = fTemp109;
			float fTemp110 = fTemp109 + fVec100[8];
			fVec101[IOTA0 & 31] = fTemp110;
			float fTemp111 = fTemp110 + fVec101[(IOTA0 - 16) & 31];
			fVec102[IOTA0 & 63] = fTemp111;
			float fTemp112 = fTemp111 + fVec102[(IOTA0 - 32) & 63];
			fVec103[IOTA0 & 127] = fTemp112;
			float fTemp113 = fTemp112 + fVec103[(IOTA0 - 64) & 127];
			fVec104[IOTA0 & 255] = fTemp113;
			float fTemp114 = fTemp113 + fVec104[(IOTA0 - 128) & 255];
			fVec105[IOTA0 & 511] = fTemp114;
			float fTemp115 = fTemp114 + fVec105[(IOTA0 - 256) & 511];
			fVec106[IOTA0 & 1023] = fTemp115;
			float fTemp116 = fTemp115 + fVec106[(IOTA0 - 512) & 1023];
			fVec107[IOTA0 & 2047] = fTemp116;
			float fTemp117 = fTemp116 + fVec107[(IOTA0 - 1024) & 2047];
			fVec108[IOTA0 & 4095] = fTemp117;
			float fTemp118 = fTemp117 + fVec108[(IOTA0 - 2048) & 4095];
			fVec109[IOTA0 & 8191] = fTemp118;
			float fTemp119 = fTemp118 + fVec109[(IOTA0 - 4096) & 8191];
			fVec110[IOTA0 & 16383] = fTemp119;
			float fTemp120 = fTemp119 + fVec110[(IOTA0 - 8192) & 16383];
			fVec111[IOTA0 & 32767] = fTemp120;
			float fTemp121 = fTemp120 + fVec111[(IOTA0 - 16384) & 32767];
			fVec112[IOTA0 & 65535] = fTemp121;
			float fTemp122 = fTemp121 + fVec112[(IOTA0 - 32768) & 65535];
			fVec113[IOTA0 & 131071] = fTemp122;
			fVec114[IOTA0 & 262143] = fTemp122 + fVec113[(IOTA0 - 65536) & 131071];
			float fTemp123 = fSlow14 * fTemp62 * (fSlow17 + 4.3429446f * (fTemp47 - std::log(std::max<float>(1e-12f, fConst107 * (((iConst105) ? 0.86000985f * fVec114[(IOTA0 - iConst106) & 262143] : 0.0f) + ((iConst103) ? 0.86000985f * fVec113[(IOTA0 - iConst104) & 131071] : 0.0f) + ((iConst101) ? 0.86000985f * fVec112[(IOTA0 - iConst102) & 65535] : 0.0f) + ((iConst99) ? 0.86000985f * fVec111[(IOTA0 - iConst100) & 32767] : 0.0f) + ((iConst97) ? 0.86000985f * fVec110[(IOTA0 - iConst98) & 16383] : 0.0f) + ((iConst95) ? 0.86000985f * fVec109[(IOTA0 - iConst96) & 8191] : 0.0f) + ((iConst93) ? 0.86000985f * fVec108[(IOTA0 - iConst94) & 4095] : 0.0f) + ((iConst91) ? 0.86000985f * fVec107[(IOTA0 - iConst92) & 2047] : 0.0f) + ((iConst89) ? 0.86000985f * fVec106[(IOTA0 - iConst90) & 1023] : 0.0f) + ((iConst87) ? 0.86000985f * fVec105[(IOTA0 - iConst88) & 511] : 0.0f) + ((iConst85) ? 0.86000985f * fVec104[(IOTA0 - iConst86) & 255] : 0.0f) + ((iConst83) ? 0.86000985f * fVec103[(IOTA0 - iConst84) & 127] : 0.0f) + ((iConst81) ? 0.86000985f * fVec102[(IOTA0 - iConst82) & 63] : 0.0f) + ((iConst79) ? 0.86000985f * fVec101[(IOTA0 - iConst80) & 31] : 0.0f) + ((iConst77) ? 0.86000985f * fVec100[iConst78] : 0.0f) + ((iConst75) ? 0.86000985f * fVec99[iConst76] : 0.0f) + ((iConst74) ? 0.86000985f * fTemp106 : 0.0f) + ((iConst51) ? 0.86000985f * fVec98[iConst74] : 0.0f))))) + -29.0f);
			fVbargraph5 = FAUSTFLOAT(fTemp123);
			fRec40[0] = fTemp10 - fConst155 * (fConst153 * fRec40[2] + fConst151 * fRec40[1]);
			float fTemp124 = fConst156 * fRec40[0] + fConst157 * fRec40[2];
			fVec115[IOTA0 & 32767] = fTemp124;
			float fTemp125 = fVec115[(IOTA0 - 1) & 32767];
			fVec116[0] = fConst64 * fTemp125 - fConst62 * fRec43[1];
			fRec44[0] = fConst65 * (fVec116[1] - fConst60 * fRec44[1] + fConst58 * fTemp125 + fConst56 * fTemp124);
			fRec43[0] = fRec44[0];
			fVec117[0] = 0.50032705f * fRec43[1] - fConst70 * fRec41[1];
			fRec42[0] = fConst73 * fRec43[1] + fConst72 * (fVec117[1] - fConst68 * fRec42[1] + 0.50032705f * fRec43[0]);
			fRec41[0] = fRec42[0];
			float fTemp126 = mydsp_faustpower2_f(fRec41[0]);
			fVec118[0] = fTemp126;
			float fTemp127 = fTemp126 + fVec118[1];
			fVec119[0] = fTemp127;
			float fTemp128 = fTemp127 + fVec119[2];
			fVec120[0] = fTemp128;
			float fTemp129 = fTemp128 + fVec120[4];
			fVec121[0] = fTemp129;
			float fTemp130 = fTemp129 + fVec121[8];
			fVec122[IOTA0 & 31] = fTemp130;
			float fTemp131 = fTemp130 + fVec122[(IOTA0 - 16) & 31];
			fVec123[IOTA0 & 63] = fTemp131;
			float fTemp132 = fTemp131 + fVec123[(IOTA0 - 32) & 63];
			fVec124[IOTA0 & 127] = fTemp132;
			float fTemp133 = fTemp132 + fVec124[(IOTA0 - 64) & 127];
			fVec125[IOTA0 & 255] = fTemp133;
			float fTemp134 = fTemp133 + fVec125[(IOTA0 - 128) & 255];
			fVec126[IOTA0 & 511] = fTemp134;
			float fTemp135 = fTemp134 + fVec126[(IOTA0 - 256) & 511];
			fVec127[IOTA0 & 1023] = fTemp135;
			float fTemp136 = fTemp135 + fVec127[(IOTA0 - 512) & 1023];
			fVec128[IOTA0 & 2047] = fTemp136;
			float fTemp137 = fTemp136 + fVec128[(IOTA0 - 1024) & 2047];
			fVec129[IOTA0 & 4095] = fTemp137;
			float fTemp138 = fTemp137 + fVec129[(IOTA0 - 2048) & 4095];
			fVec130[IOTA0 & 8191] = fTemp138;
			float fTemp139 = fTemp138 + fVec130[(IOTA0 - 4096) & 8191];
			fVec131[IOTA0 & 16383] = fTemp139;
			float fTemp140 = fTemp139 + fVec131[(IOTA0 - 8192) & 16383];
			fVec132[IOTA0 & 32767] = fTemp140;
			float fTemp141 = fTemp140 + fVec132[(IOTA0 - 16384) & 32767];
			fVec133[IOTA0 & 65535] = fTemp141;
			float fTemp142 = fTemp141 + fVec133[(IOTA0 - 32768) & 65535];
			fVec134[IOTA0 & 131071] = fTemp142;
			fVec135[IOTA0 & 262143] = fTemp142 + fVec134[(IOTA0 - 65536) & 131071];
			float fTemp143 = fSlow14 * fTemp62 * (fSlow18 + 4.3429446f * (fTemp47 - std::log(std::max<float>(1e-12f, fConst107 * (((iConst105) ? 0.86000985f * fVec135[(IOTA0 - iConst106) & 262143] : 0.0f) + ((iConst103) ? 0.86000985f * fVec134[(IOTA0 - iConst104) & 131071] : 0.0f) + ((iConst101) ? 0.86000985f * fVec133[(IOTA0 - iConst102) & 65535] : 0.0f) + ((iConst99) ? 0.86000985f * fVec132[(IOTA0 - iConst100) & 32767] : 0.0f) + ((iConst97) ? 0.86000985f * fVec131[(IOTA0 - iConst98) & 16383] : 0.0f) + ((iConst95) ? 0.86000985f * fVec130[(IOTA0 - iConst96) & 8191] : 0.0f) + ((iConst93) ? 0.86000985f * fVec129[(IOTA0 - iConst94) & 4095] : 0.0f) + ((iConst91) ? 0.86000985f * fVec128[(IOTA0 - iConst92) & 2047] : 0.0f) + ((iConst89) ? 0.86000985f * fVec127[(IOTA0 - iConst90) & 1023] : 0.0f) + ((iConst87) ? 0.86000985f * fVec126[(IOTA0 - iConst88) & 511] : 0.0f) + ((iConst85) ? 0.86000985f * fVec125[(IOTA0 - iConst86) & 255] : 0.0f) + ((iConst83) ? 0.86000985f * fVec124[(IOTA0 - iConst84) & 127] : 0.0f) + ((iConst81) ? 0.86000985f * fVec123[(IOTA0 - iConst82) & 63] : 0.0f) + ((iConst79) ? 0.86000985f * fVec122[(IOTA0 - iConst80) & 31] : 0.0f) + ((iConst77) ? 0.86000985f * fVec121[iConst78] : 0.0f) + ((iConst75) ? 0.86000985f * fVec120[iConst76] : 0.0f) + ((iConst74) ? 0.86000985f * fTemp126 : 0.0f) + ((iConst51) ? 0.86000985f * fVec119[iConst74] : 0.0f))))) + -28.0f);
			fVbargraph6 = FAUSTFLOAT(fTemp143);
			fRec45[0] = fTemp10 - fConst163 * (fConst161 * fRec45[2] + fConst159 * fRec45[1]);
			float fTemp144 = fConst164 * fRec45[0] + fConst165 * fRec45[2];
			fVec136[IOTA0 & 32767] = fTemp144;
			float fTemp145 = fVec136[(IOTA0 - 1) & 32767];
			fVec137[0] = fConst64 * fTemp145 - fConst62 * fRec48[1];
			fRec49[0] = fConst65 * (fVec137[1] - fConst60 * fRec49[1] + fConst58 * fTemp145 + fConst56 * fTemp144);
			fRec48[0] = fRec49[0];
			fVec138[0] = 0.50032705f * fRec48[1] - fConst70 * fRec46[1];
			fRec47[0] = fConst73 * fRec48[1] + fConst72 * (fVec138[1] - fConst68 * fRec47[1] + 0.50032705f * fRec48[0]);
			fRec46[0] = fRec47[0];
			float fTemp146 = mydsp_faustpower2_f(fRec46[0]);
			fVec139[0] = fTemp146;
			float fTemp147 = fTemp146 + fVec139[1];
			fVec140[0] = fTemp147;
			float fTemp148 = fTemp147 + fVec140[2];
			fVec141[0] = fTemp148;
			float fTemp149 = fTemp148 + fVec141[4];
			fVec142[0] = fTemp149;
			float fTemp150 = fTemp149 + fVec142[8];
			fVec143[IOTA0 & 31] = fTemp150;
			float fTemp151 = fTemp150 + fVec143[(IOTA0 - 16) & 31];
			fVec144[IOTA0 & 63] = fTemp151;
			float fTemp152 = fTemp151 + fVec144[(IOTA0 - 32) & 63];
			fVec145[IOTA0 & 127] = fTemp152;
			float fTemp153 = fTemp152 + fVec145[(IOTA0 - 64) & 127];
			fVec146[IOTA0 & 255] = fTemp153;
			float fTemp154 = fTemp153 + fVec146[(IOTA0 - 128) & 255];
			fVec147[IOTA0 & 511] = fTemp154;
			float fTemp155 = fTemp154 + fVec147[(IOTA0 - 256) & 511];
			fVec148[IOTA0 & 1023] = fTemp155;
			float fTemp156 = fTemp155 + fVec148[(IOTA0 - 512) & 1023];
			fVec149[IOTA0 & 2047] = fTemp156;
			float fTemp157 = fTemp156 + fVec149[(IOTA0 - 1024) & 2047];
			fVec150[IOTA0 & 4095] = fTemp157;
			float fTemp158 = fTemp157 + fVec150[(IOTA0 - 2048) & 4095];
			fVec151[IOTA0 & 8191] = fTemp158;
			float fTemp159 = fTemp158 + fVec151[(IOTA0 - 4096) & 8191];
			fVec152[IOTA0 & 16383] = fTemp159;
			float fTemp160 = fTemp159 + fVec152[(IOTA0 - 8192) & 16383];
			fVec153[IOTA0 & 32767] = fTemp160;
			float fTemp161 = fTemp160 + fVec153[(IOTA0 - 16384) & 32767];
			fVec154[IOTA0 & 65535] = fTemp161;
			float fTemp162 = fTemp161 + fVec154[(IOTA0 - 32768) & 65535];
			fVec155[IOTA0 & 131071] = fTemp162;
			fVec156[IOTA0 & 262143] = fTemp162 + fVec155[(IOTA0 - 65536) & 131071];
			float fTemp163 = fSlow14 * fTemp62 * (fSlow19 + 4.3429446f * (fTemp47 - std::log(std::max<float>(1e-12f, fConst107 * (((iConst105) ? 0.86000985f * fVec156[(IOTA0 - iConst106) & 262143] : 0.0f) + ((iConst103) ? 0.86000985f * fVec155[(IOTA0 - iConst104) & 131071] : 0.0f) + ((iConst101) ? 0.86000985f * fVec154[(IOTA0 - iConst102) & 65535] : 0.0f) + ((iConst99) ? 0.86000985f * fVec153[(IOTA0 - iConst100) & 32767] : 0.0f) + ((iConst97) ? 0.86000985f * fVec152[(IOTA0 - iConst98) & 16383] : 0.0f) + ((iConst95) ? 0.86000985f * fVec151[(IOTA0 - iConst96) & 8191] : 0.0f) + ((iConst93) ? 0.86000985f * fVec150[(IOTA0 - iConst94) & 4095] : 0.0f) + ((iConst91) ? 0.86000985f * fVec149[(IOTA0 - iConst92) & 2047] : 0.0f) + ((iConst89) ? 0.86000985f * fVec148[(IOTA0 - iConst90) & 1023] : 0.0f) + ((iConst87) ? 0.86000985f * fVec147[(IOTA0 - iConst88) & 511] : 0.0f) + ((iConst85) ? 0.86000985f * fVec146[(IOTA0 - iConst86) & 255] : 0.0f) + ((iConst83) ? 0.86000985f * fVec145[(IOTA0 - iConst84) & 127] : 0.0f) + ((iConst81) ? 0.86000985f * fVec144[(IOTA0 - iConst82) & 63] : 0.0f) + ((iConst79) ? 0.86000985f * fVec143[(IOTA0 - iConst80) & 31] : 0.0f) + ((iConst77) ? 0.86000985f * fVec142[iConst78] : 0.0f) + ((iConst75) ? 0.86000985f * fVec141[iConst76] : 0.0f) + ((iConst74) ? 0.86000985f * fTemp146 : 0.0f) + ((iConst51) ? 0.86000985f * fVec140[iConst74] : 0.0f))))) + -26.0f);
			fVbargraph7 = FAUSTFLOAT(fTemp163);
			fRec50[0] = fTemp10 - fConst171 * (fConst169 * fRec50[2] + fConst167 * fRec50[1]);
			float fTemp164 = fConst172 * fRec50[0] + fConst173 * fRec50[2];
			fVec157[IOTA0 & 32767] = fTemp164;
			float fTemp165 = fVec157[(IOTA0 - 1) & 32767];
			fVec158[0] = fConst64 * fTemp165 - fConst62 * fRec53[1];
			fRec54[0] = fConst65 * (fVec158[1] - fConst60 * fRec54[1] + fConst58 * fTemp165 + fConst56 * fTemp164);
			fRec53[0] = fRec54[0];
			fVec159[0] = 0.50032705f * fRec53[1] - fConst70 * fRec51[1];
			fRec52[0] = fConst73 * fRec53[1] + fConst72 * (fVec159[1] - fConst68 * fRec52[1] + 0.50032705f * fRec53[0]);
			fRec51[0] = fRec52[0];
			float fTemp166 = mydsp_faustpower2_f(fRec51[0]);
			fVec160[0] = fTemp166;
			float fTemp167 = fTemp166 + fVec160[1];
			fVec161[0] = fTemp167;
			float fTemp168 = fTemp167 + fVec161[2];
			fVec162[0] = fTemp168;
			float fTemp169 = fTemp168 + fVec162[4];
			fVec163[0] = fTemp169;
			float fTemp170 = fTemp169 + fVec163[8];
			fVec164[IOTA0 & 31] = fTemp170;
			float fTemp171 = fTemp170 + fVec164[(IOTA0 - 16) & 31];
			fVec165[IOTA0 & 63] = fTemp171;
			float fTemp172 = fTemp171 + fVec165[(IOTA0 - 32) & 63];
			fVec166[IOTA0 & 127] = fTemp172;
			float fTemp173 = fTemp172 + fVec166[(IOTA0 - 64) & 127];
			fVec167[IOTA0 & 255] = fTemp173;
			float fTemp174 = fTemp173 + fVec167[(IOTA0 - 128) & 255];
			fVec168[IOTA0 & 511] = fTemp174;
			float fTemp175 = fTemp174 + fVec168[(IOTA0 - 256) & 511];
			fVec169[IOTA0 & 1023] = fTemp175;
			float fTemp176 = fTemp175 + fVec169[(IOTA0 - 512) & 1023];
			fVec170[IOTA0 & 2047] = fTemp176;
			float fTemp177 = fTemp176 + fVec170[(IOTA0 - 1024) & 2047];
			fVec171[IOTA0 & 4095] = fTemp177;
			float fTemp178 = fTemp177 + fVec171[(IOTA0 - 2048) & 4095];
			fVec172[IOTA0 & 8191] = fTemp178;
			float fTemp179 = fTemp178 + fVec172[(IOTA0 - 4096) & 8191];
			fVec173[IOTA0 & 16383] = fTemp179;
			float fTemp180 = fTemp179 + fVec173[(IOTA0 - 8192) & 16383];
			fVec174[IOTA0 & 32767] = fTemp180;
			float fTemp181 = fTemp180 + fVec174[(IOTA0 - 16384) & 32767];
			fVec175[IOTA0 & 65535] = fTemp181;
			float fTemp182 = fTemp181 + fVec175[(IOTA0 - 32768) & 65535];
			fVec176[IOTA0 & 131071] = fTemp182;
			fVec177[IOTA0 & 262143] = fTemp182 + fVec176[(IOTA0 - 65536) & 131071];
			float fTemp183 = fSlow14 * fTemp62 * (fSlow18 + 4.3429446f * (fTemp47 - std::log(std::max<float>(1e-12f, fConst107 * (((iConst105) ? 0.86000985f * fVec177[(IOTA0 - iConst106) & 262143] : 0.0f) + ((iConst103) ? 0.86000985f * fVec176[(IOTA0 - iConst104) & 131071] : 0.0f) + ((iConst101) ? 0.86000985f * fVec175[(IOTA0 - iConst102) & 65535] : 0.0f) + ((iConst99) ? 0.86000985f * fVec174[(IOTA0 - iConst100) & 32767] : 0.0f) + ((iConst97) ? 0.86000985f * fVec173[(IOTA0 - iConst98) & 16383] : 0.0f) + ((iConst95) ? 0.86000985f * fVec172[(IOTA0 - iConst96) & 8191] : 0.0f) + ((iConst93) ? 0.86000985f * fVec171[(IOTA0 - iConst94) & 4095] : 0.0f) + ((iConst91) ? 0.86000985f * fVec170[(IOTA0 - iConst92) & 2047] : 0.0f) + ((iConst89) ? 0.86000985f * fVec169[(IOTA0 - iConst90) & 1023] : 0.0f) + ((iConst87) ? 0.86000985f * fVec168[(IOTA0 - iConst88) & 511] : 0.0f) + ((iConst85) ? 0.86000985f * fVec167[(IOTA0 - iConst86) & 255] : 0.0f) + ((iConst83) ? 0.86000985f * fVec166[(IOTA0 - iConst84) & 127] : 0.0f) + ((iConst81) ? 0.86000985f * fVec165[(IOTA0 - iConst82) & 63] : 0.0f) + ((iConst79) ? 0.86000985f * fVec164[(IOTA0 - iConst80) & 31] : 0.0f) + ((iConst77) ? 0.86000985f * fVec163[iConst78] : 0.0f) + ((iConst75) ? 0.86000985f * fVec162[iConst76] : 0.0f) + ((iConst74) ? 0.86000985f * fTemp166 : 0.0f) + ((iConst51) ? 0.86000985f * fVec161[iConst74] : 0.0f))))) + -27.0f);
			fVbargraph8 = FAUSTFLOAT(fTemp183);
			fRec55[0] = fTemp10 - fConst179 * (fConst177 * fRec55[2] + fConst175 * fRec55[1]);
			float fTemp184 = fConst180 * fRec55[0] + fConst181 * fRec55[2];
			fVec178[IOTA0 & 32767] = fTemp184;
			float fTemp185 = fVec178[(IOTA0 - 1) & 32767];
			fVec179[0] = fConst64 * fTemp185 - fConst62 * fRec58[1];
			fRec59[0] = fConst65 * (fVec179[1] - fConst60 * fRec59[1] + fConst58 * fTemp185 + fConst56 * fTemp184);
			fRec58[0] = fRec59[0];
			fVec180[0] = 0.50032705f * fRec58[1] - fConst70 * fRec56[1];
			fRec57[0] = fConst73 * fRec58[1] + fConst72 * (fVec180[1] - fConst68 * fRec57[1] + 0.50032705f * fRec58[0]);
			fRec56[0] = fRec57[0];
			float fTemp186 = mydsp_faustpower2_f(fRec56[0]);
			fVec181[0] = fTemp186;
			float fTemp187 = fTemp186 + fVec181[1];
			fVec182[0] = fTemp187;
			float fTemp188 = fTemp187 + fVec182[2];
			fVec183[0] = fTemp188;
			float fTemp189 = fTemp188 + fVec183[4];
			fVec184[0] = fTemp189;
			float fTemp190 = fTemp189 + fVec184[8];
			fVec185[IOTA0 & 31] = fTemp190;
			float fTemp191 = fTemp190 + fVec185[(IOTA0 - 16) & 31];
			fVec186[IOTA0 & 63] = fTemp191;
			float fTemp192 = fTemp191 + fVec186[(IOTA0 - 32) & 63];
			fVec187[IOTA0 & 127] = fTemp192;
			float fTemp193 = fTemp192 + fVec187[(IOTA0 - 64) & 127];
			fVec188[IOTA0 & 255] = fTemp193;
			float fTemp194 = fTemp193 + fVec188[(IOTA0 - 128) & 255];
			fVec189[IOTA0 & 511] = fTemp194;
			float fTemp195 = fTemp194 + fVec189[(IOTA0 - 256) & 511];
			fVec190[IOTA0 & 1023] = fTemp195;
			float fTemp196 = fTemp195 + fVec190[(IOTA0 - 512) & 1023];
			fVec191[IOTA0 & 2047] = fTemp196;
			float fTemp197 = fTemp196 + fVec191[(IOTA0 - 1024) & 2047];
			fVec192[IOTA0 & 4095] = fTemp197;
			float fTemp198 = fTemp197 + fVec192[(IOTA0 - 2048) & 4095];
			fVec193[IOTA0 & 8191] = fTemp198;
			float fTemp199 = fTemp198 + fVec193[(IOTA0 - 4096) & 8191];
			fVec194[IOTA0 & 16383] = fTemp199;
			float fTemp200 = fTemp199 + fVec194[(IOTA0 - 8192) & 16383];
			fVec195[IOTA0 & 32767] = fTemp200;
			float fTemp201 = fTemp200 + fVec195[(IOTA0 - 16384) & 32767];
			fVec196[IOTA0 & 65535] = fTemp201;
			float fTemp202 = fTemp201 + fVec196[(IOTA0 - 32768) & 65535];
			fVec197[IOTA0 & 131071] = fTemp202;
			fVec198[IOTA0 & 262143] = fTemp202 + fVec197[(IOTA0 - 65536) & 131071];
			float fTemp203 = fSlow14 * fTemp62 * (fSlow19 + 4.3429446f * (fTemp47 - std::log(std::max<float>(1e-12f, fConst107 * (((iConst105) ? 0.86000985f * fVec198[(IOTA0 - iConst106) & 262143] : 0.0f) + ((iConst103) ? 0.86000985f * fVec197[(IOTA0 - iConst104) & 131071] : 0.0f) + ((iConst101) ? 0.86000985f * fVec196[(IOTA0 - iConst102) & 65535] : 0.0f) + ((iConst99) ? 0.86000985f * fVec195[(IOTA0 - iConst100) & 32767] : 0.0f) + ((iConst97) ? 0.86000985f * fVec194[(IOTA0 - iConst98) & 16383] : 0.0f) + ((iConst95) ? 0.86000985f * fVec193[(IOTA0 - iConst96) & 8191] : 0.0f) + ((iConst93) ? 0.86000985f * fVec192[(IOTA0 - iConst94) & 4095] : 0.0f) + ((iConst91) ? 0.86000985f * fVec191[(IOTA0 - iConst92) & 2047] : 0.0f) + ((iConst89) ? 0.86000985f * fVec190[(IOTA0 - iConst90) & 1023] : 0.0f) + ((iConst87) ? 0.86000985f * fVec189[(IOTA0 - iConst88) & 511] : 0.0f) + ((iConst85) ? 0.86000985f * fVec188[(IOTA0 - iConst86) & 255] : 0.0f) + ((iConst83) ? 0.86000985f * fVec187[(IOTA0 - iConst84) & 127] : 0.0f) + ((iConst81) ? 0.86000985f * fVec186[(IOTA0 - iConst82) & 63] : 0.0f) + ((iConst79) ? 0.86000985f * fVec185[(IOTA0 - iConst80) & 31] : 0.0f) + ((iConst77) ? 0.86000985f * fVec184[iConst78] : 0.0f) + ((iConst75) ? 0.86000985f * fVec183[iConst76] : 0.0f) + ((iConst74) ? 0.86000985f * fTemp186 : 0.0f) + ((iConst51) ? 0.86000985f * fVec182[iConst74] : 0.0f))))) + -24.0f);
			fVbargraph9 = FAUSTFLOAT(fTemp203);
			fRec60[0] = fTemp10 - fConst187 * (fConst185 * fRec60[2] + fConst183 * fRec60[1]);
			float fTemp204 = fConst188 * fRec60[0] + fConst189 * fRec60[2];
			fVec199[IOTA0 & 32767] = fTemp204;
			float fTemp205 = fVec199[(IOTA0 - 1) & 32767];
			fVec200[0] = fConst64 * fTemp205 - fConst62 * fRec63[1];
			fRec64[0] = fConst65 * (fVec200[1] - fConst60 * fRec64[1] + fConst58 * fTemp205 + fConst56 * fTemp204);
			fRec63[0] = fRec64[0];
			fVec201[0] = 0.50032705f * fRec63[1] - fConst70 * fRec61[1];
			fRec62[0] = fConst73 * fRec63[1] + fConst72 * (fVec201[1] - fConst68 * fRec62[1] + 0.50032705f * fRec63[0]);
			fRec61[0] = fRec62[0];
			float fTemp206 = mydsp_faustpower2_f(fRec61[0]);
			fVec202[0] = fTemp206;
			float fTemp207 = fTemp206 + fVec202[1];
			fVec203[0] = fTemp207;
			float fTemp208 = fTemp207 + fVec203[2];
			fVec204[0] = fTemp208;
			float fTemp209 = fTemp208 + fVec204[4];
			fVec205[0] = fTemp209;
			float fTemp210 = fTemp209 + fVec205[8];
			fVec206[IOTA0 & 31] = fTemp210;
			float fTemp211 = fTemp210 + fVec206[(IOTA0 - 16) & 31];
			fVec207[IOTA0 & 63] = fTemp211;
			float fTemp212 = fTemp211 + fVec207[(IOTA0 - 32) & 63];
			fVec208[IOTA0 & 127] = fTemp212;
			float fTemp213 = fTemp212 + fVec208[(IOTA0 - 64) & 127];
			fVec209[IOTA0 & 255] = fTemp213;
			float fTemp214 = fTemp213 + fVec209[(IOTA0 - 128) & 255];
			fVec210[IOTA0 & 511] = fTemp214;
			float fTemp215 = fTemp214 + fVec210[(IOTA0 - 256) & 511];
			fVec211[IOTA0 & 1023] = fTemp215;
			float fTemp216 = fTemp215 + fVec211[(IOTA0 - 512) & 1023];
			fVec212[IOTA0 & 2047] = fTemp216;
			float fTemp217 = fTemp216 + fVec212[(IOTA0 - 1024) & 2047];
			fVec213[IOTA0 & 4095] = fTemp217;
			float fTemp218 = fTemp217 + fVec213[(IOTA0 - 2048) & 4095];
			fVec214[IOTA0 & 8191] = fTemp218;
			float fTemp219 = fTemp218 + fVec214[(IOTA0 - 4096) & 8191];
			fVec215[IOTA0 & 16383] = fTemp219;
			float fTemp220 = fTemp219 + fVec215[(IOTA0 - 8192) & 16383];
			fVec216[IOTA0 & 32767] = fTemp220;
			float fTemp221 = fTemp220 + fVec216[(IOTA0 - 16384) & 32767];
			fVec217[IOTA0 & 65535] = fTemp221;
			float fTemp222 = fTemp221 + fVec217[(IOTA0 - 32768) & 65535];
			fVec218[IOTA0 & 131071] = fTemp222;
			fVec219[IOTA0 & 262143] = fTemp222 + fVec218[(IOTA0 - 65536) & 131071];
			float fTemp223 = fSlow14 * fTemp62 * (4.3429446f * (fTemp47 - std::log(std::max<float>(1e-12f, fConst107 * (((iConst105) ? 0.86000985f * fVec219[(IOTA0 - iConst106) & 262143] : 0.0f) + ((iConst103) ? 0.86000985f * fVec218[(IOTA0 - iConst104) & 131071] : 0.0f) + ((iConst101) ? 0.86000985f * fVec217[(IOTA0 - iConst102) & 65535] : 0.0f) + ((iConst99) ? 0.86000985f * fVec216[(IOTA0 - iConst100) & 32767] : 0.0f) + ((iConst97) ? 0.86000985f * fVec215[(IOTA0 - iConst98) & 16383] : 0.0f) + ((iConst95) ? 0.86000985f * fVec214[(IOTA0 - iConst96) & 8191] : 0.0f) + ((iConst93) ? 0.86000985f * fVec213[(IOTA0 - iConst94) & 4095] : 0.0f) + ((iConst91) ? 0.86000985f * fVec212[(IOTA0 - iConst92) & 2047] : 0.0f) + ((iConst89) ? 0.86000985f * fVec211[(IOTA0 - iConst90) & 1023] : 0.0f) + ((iConst87) ? 0.86000985f * fVec210[(IOTA0 - iConst88) & 511] : 0.0f) + ((iConst85) ? 0.86000985f * fVec209[(IOTA0 - iConst86) & 255] : 0.0f) + ((iConst83) ? 0.86000985f * fVec208[(IOTA0 - iConst84) & 127] : 0.0f) + ((iConst81) ? 0.86000985f * fVec207[(IOTA0 - iConst82) & 63] : 0.0f) + ((iConst79) ? 0.86000985f * fVec206[(IOTA0 - iConst80) & 31] : 0.0f) + ((iConst77) ? 0.86000985f * fVec205[iConst78] : 0.0f) + ((iConst75) ? 0.86000985f * fVec204[iConst76] : 0.0f) + ((iConst74) ? 0.86000985f * fTemp206 : 0.0f) + ((iConst51) ? 0.86000985f * fVec203[iConst74] : 0.0f))))) + -22.0f - fSlow20);
			fVbargraph10 = FAUSTFLOAT(fTemp223);
			fRec65[0] = fTemp10 - fConst195 * (fConst193 * fRec65[2] + fConst191 * fRec65[1]);
			float fTemp224 = fConst196 * fRec65[0] + fConst197 * fRec65[2];
			fVec220[IOTA0 & 32767] = fTemp224;
			float fTemp225 = fVec220[(IOTA0 - 1) & 32767];
			fVec221[0] = fConst64 * fTemp225 - fConst62 * fRec68[1];
			fRec69[0] = fConst65 * (fVec221[1] - fConst60 * fRec69[1] + fConst58 * fTemp225 + fConst56 * fTemp224);
			fRec68[0] = fRec69[0];
			fVec222[0] = 0.50032705f * fRec68[1] - fConst70 * fRec66[1];
			fRec67[0] = fConst73 * fRec68[1] + fConst72 * (fVec222[1] - fConst68 * fRec67[1] + 0.50032705f * fRec68[0]);
			fRec66[0] = fRec67[0];
			float fTemp226 = mydsp_faustpower2_f(fRec66[0]);
			fVec223[0] = fTemp226;
			float fTemp227 = fTemp226 + fVec223[1];
			fVec224[0] = fTemp227;
			float fTemp228 = fTemp227 + fVec224[2];
			fVec225[0] = fTemp228;
			float fTemp229 = fTemp228 + fVec225[4];
			fVec226[0] = fTemp229;
			float fTemp230 = fTemp229 + fVec226[8];
			fVec227[IOTA0 & 31] = fTemp230;
			float fTemp231 = fTemp230 + fVec227[(IOTA0 - 16) & 31];
			fVec228[IOTA0 & 63] = fTemp231;
			float fTemp232 = fTemp231 + fVec228[(IOTA0 - 32) & 63];
			fVec229[IOTA0 & 127] = fTemp232;
			float fTemp233 = fTemp232 + fVec229[(IOTA0 - 64) & 127];
			fVec230[IOTA0 & 255] = fTemp233;
			float fTemp234 = fTemp233 + fVec230[(IOTA0 - 128) & 255];
			fVec231[IOTA0 & 511] = fTemp234;
			float fTemp235 = fTemp234 + fVec231[(IOTA0 - 256) & 511];
			fVec232[IOTA0 & 1023] = fTemp235;
			float fTemp236 = fTemp235 + fVec232[(IOTA0 - 512) & 1023];
			fVec233[IOTA0 & 2047] = fTemp236;
			float fTemp237 = fTemp236 + fVec233[(IOTA0 - 1024) & 2047];
			fVec234[IOTA0 & 4095] = fTemp237;
			float fTemp238 = fTemp237 + fVec234[(IOTA0 - 2048) & 4095];
			fVec235[IOTA0 & 8191] = fTemp238;
			float fTemp239 = fTemp238 + fVec235[(IOTA0 - 4096) & 8191];
			fVec236[IOTA0 & 16383] = fTemp239;
			float fTemp240 = fTemp239 + fVec236[(IOTA0 - 8192) & 16383];
			fVec237[IOTA0 & 32767] = fTemp240;
			float fTemp241 = fTemp240 + fVec237[(IOTA0 - 16384) & 32767];
			fVec238[IOTA0 & 65535] = fTemp241;
			float fTemp242 = fTemp241 + fVec238[(IOTA0 - 32768) & 65535];
			fVec239[IOTA0 & 131071] = fTemp242;
			fVec240[IOTA0 & 262143] = fTemp242 + fVec239[(IOTA0 - 65536) & 131071];
			float fTemp243 = fSlow14 * fTemp62 * (4.3429446f * (fTemp47 - std::log(std::max<float>(1e-12f, fConst107 * (((iConst105) ? 0.86000985f * fVec240[(IOTA0 - iConst106) & 262143] : 0.0f) + ((iConst103) ? 0.86000985f * fVec239[(IOTA0 - iConst104) & 131071] : 0.0f) + ((iConst101) ? 0.86000985f * fVec238[(IOTA0 - iConst102) & 65535] : 0.0f) + ((iConst99) ? 0.86000985f * fVec237[(IOTA0 - iConst100) & 32767] : 0.0f) + ((iConst97) ? 0.86000985f * fVec236[(IOTA0 - iConst98) & 16383] : 0.0f) + ((iConst95) ? 0.86000985f * fVec235[(IOTA0 - iConst96) & 8191] : 0.0f) + ((iConst93) ? 0.86000985f * fVec234[(IOTA0 - iConst94) & 4095] : 0.0f) + ((iConst91) ? 0.86000985f * fVec233[(IOTA0 - iConst92) & 2047] : 0.0f) + ((iConst89) ? 0.86000985f * fVec232[(IOTA0 - iConst90) & 1023] : 0.0f) + ((iConst87) ? 0.86000985f * fVec231[(IOTA0 - iConst88) & 511] : 0.0f) + ((iConst85) ? 0.86000985f * fVec230[(IOTA0 - iConst86) & 255] : 0.0f) + ((iConst83) ? 0.86000985f * fVec229[(IOTA0 - iConst84) & 127] : 0.0f) + ((iConst81) ? 0.86000985f * fVec228[(IOTA0 - iConst82) & 63] : 0.0f) + ((iConst79) ? 0.86000985f * fVec227[(IOTA0 - iConst80) & 31] : 0.0f) + ((iConst77) ? 0.86000985f * fVec226[iConst78] : 0.0f) + ((iConst75) ? 0.86000985f * fVec225[iConst76] : 0.0f) + ((iConst74) ? 0.86000985f * fTemp226 : 0.0f) + ((iConst51) ? 0.86000985f * fVec224[iConst74] : 0.0f))))) + -2e+01f - fSlow21);
			fVbargraph11 = FAUSTFLOAT(fTemp243);
			fRec70[0] = fTemp10 - fConst203 * (fConst201 * fRec70[2] + fConst199 * fRec70[1]);
			float fTemp244 = fConst204 * fRec70[0] + fConst205 * fRec70[2];
			fVec241[IOTA0 & 32767] = fTemp244;
			float fTemp245 = fVec241[(IOTA0 - 1) & 32767];
			fVec242[0] = fConst64 * fTemp245 - fConst62 * fRec73[1];
			fRec74[0] = fConst65 * (fVec242[1] - fConst60 * fRec74[1] + fConst58 * fTemp245 + fConst56 * fTemp244);
			fRec73[0] = fRec74[0];
			fVec243[0] = 0.50032705f * fRec73[1] - fConst70 * fRec71[1];
			fRec72[0] = fConst73 * fRec73[1] + fConst72 * (fVec243[1] - fConst68 * fRec72[1] + 0.50032705f * fRec73[0]);
			fRec71[0] = fRec72[0];
			float fTemp246 = mydsp_faustpower2_f(fRec71[0]);
			fVec244[0] = fTemp246;
			float fTemp247 = fTemp246 + fVec244[1];
			fVec245[0] = fTemp247;
			float fTemp248 = fTemp247 + fVec245[2];
			fVec246[0] = fTemp248;
			float fTemp249 = fTemp248 + fVec246[4];
			fVec247[0] = fTemp249;
			float fTemp250 = fTemp249 + fVec247[8];
			fVec248[IOTA0 & 31] = fTemp250;
			float fTemp251 = fTemp250 + fVec248[(IOTA0 - 16) & 31];
			fVec249[IOTA0 & 63] = fTemp251;
			float fTemp252 = fTemp251 + fVec249[(IOTA0 - 32) & 63];
			fVec250[IOTA0 & 127] = fTemp252;
			float fTemp253 = fTemp252 + fVec250[(IOTA0 - 64) & 127];
			fVec251[IOTA0 & 255] = fTemp253;
			float fTemp254 = fTemp253 + fVec251[(IOTA0 - 128) & 255];
			fVec252[IOTA0 & 511] = fTemp254;
			float fTemp255 = fTemp254 + fVec252[(IOTA0 - 256) & 511];
			fVec253[IOTA0 & 1023] = fTemp255;
			float fTemp256 = fTemp255 + fVec253[(IOTA0 - 512) & 1023];
			fVec254[IOTA0 & 2047] = fTemp256;
			float fTemp257 = fTemp256 + fVec254[(IOTA0 - 1024) & 2047];
			fVec255[IOTA0 & 4095] = fTemp257;
			float fTemp258 = fTemp257 + fVec255[(IOTA0 - 2048) & 4095];
			fVec256[IOTA0 & 8191] = fTemp258;
			float fTemp259 = fTemp258 + fVec256[(IOTA0 - 4096) & 8191];
			fVec257[IOTA0 & 16383] = fTemp259;
			float fTemp260 = fTemp259 + fVec257[(IOTA0 - 8192) & 16383];
			fVec258[IOTA0 & 32767] = fTemp260;
			float fTemp261 = fTemp260 + fVec258[(IOTA0 - 16384) & 32767];
			fVec259[IOTA0 & 65535] = fTemp261;
			float fTemp262 = fTemp261 + fVec259[(IOTA0 - 32768) & 65535];
			fVec260[IOTA0 & 131071] = fTemp262;
			fVec261[IOTA0 & 262143] = fTemp262 + fVec260[(IOTA0 - 65536) & 131071];
			float fTemp263 = fSlow14 * fTemp62 * (4.3429446f * (fTemp47 - std::log(std::max<float>(1e-12f, fConst107 * (((iConst105) ? 0.86000985f * fVec261[(IOTA0 - iConst106) & 262143] : 0.0f) + ((iConst103) ? 0.86000985f * fVec260[(IOTA0 - iConst104) & 131071] : 0.0f) + ((iConst101) ? 0.86000985f * fVec259[(IOTA0 - iConst102) & 65535] : 0.0f) + ((iConst99) ? 0.86000985f * fVec258[(IOTA0 - iConst100) & 32767] : 0.0f) + ((iConst97) ? 0.86000985f * fVec257[(IOTA0 - iConst98) & 16383] : 0.0f) + ((iConst95) ? 0.86000985f * fVec256[(IOTA0 - iConst96) & 8191] : 0.0f) + ((iConst93) ? 0.86000985f * fVec255[(IOTA0 - iConst94) & 4095] : 0.0f) + ((iConst91) ? 0.86000985f * fVec254[(IOTA0 - iConst92) & 2047] : 0.0f) + ((iConst89) ? 0.86000985f * fVec253[(IOTA0 - iConst90) & 1023] : 0.0f) + ((iConst87) ? 0.86000985f * fVec252[(IOTA0 - iConst88) & 511] : 0.0f) + ((iConst85) ? 0.86000985f * fVec251[(IOTA0 - iConst86) & 255] : 0.0f) + ((iConst83) ? 0.86000985f * fVec250[(IOTA0 - iConst84) & 127] : 0.0f) + ((iConst81) ? 0.86000985f * fVec249[(IOTA0 - iConst82) & 63] : 0.0f) + ((iConst79) ? 0.86000985f * fVec248[(IOTA0 - iConst80) & 31] : 0.0f) + ((iConst77) ? 0.86000985f * fVec247[iConst78] : 0.0f) + ((iConst75) ? 0.86000985f * fVec246[iConst76] : 0.0f) + ((iConst74) ? 0.86000985f * fTemp246 : 0.0f) + ((iConst51) ? 0.86000985f * fVec245[iConst74] : 0.0f))))) + -19.0f - fSlow18);
			fVbargraph12 = FAUSTFLOAT(fTemp263);
			fRec75[0] = fTemp10 - fConst211 * (fConst209 * fRec75[2] + fConst207 * fRec75[1]);
			float fTemp264 = fConst212 * fRec75[0] + fConst213 * fRec75[2];
			fVec262[IOTA0 & 32767] = fTemp264;
			float fTemp265 = fVec262[(IOTA0 - 1) & 32767];
			fVec263[0] = fConst64 * fTemp265 - fConst62 * fRec78[1];
			fRec79[0] = fConst65 * (fVec263[1] - fConst60 * fRec79[1] + fConst58 * fTemp265 + fConst56 * fTemp264);
			fRec78[0] = fRec79[0];
			fVec264[0] = 0.50032705f * fRec78[1] - fConst70 * fRec76[1];
			fRec77[0] = fConst73 * fRec78[1] + fConst72 * (fVec264[1] - fConst68 * fRec77[1] + 0.50032705f * fRec78[0]);
			fRec76[0] = fRec77[0];
			float fTemp266 = mydsp_faustpower2_f(fRec76[0]);
			fVec265[0] = fTemp266;
			float fTemp267 = fTemp266 + fVec265[1];
			fVec266[0] = fTemp267;
			float fTemp268 = fTemp267 + fVec266[2];
			fVec267[0] = fTemp268;
			float fTemp269 = fTemp268 + fVec267[4];
			fVec268[0] = fTemp269;
			float fTemp270 = fTemp269 + fVec268[8];
			fVec269[IOTA0 & 31] = fTemp270;
			float fTemp271 = fTemp270 + fVec269[(IOTA0 - 16) & 31];
			fVec270[IOTA0 & 63] = fTemp271;
			float fTemp272 = fTemp271 + fVec270[(IOTA0 - 32) & 63];
			fVec271[IOTA0 & 127] = fTemp272;
			float fTemp273 = fTemp272 + fVec271[(IOTA0 - 64) & 127];
			fVec272[IOTA0 & 255] = fTemp273;
			float fTemp274 = fTemp273 + fVec272[(IOTA0 - 128) & 255];
			fVec273[IOTA0 & 511] = fTemp274;
			float fTemp275 = fTemp274 + fVec273[(IOTA0 - 256) & 511];
			fVec274[IOTA0 & 1023] = fTemp275;
			float fTemp276 = fTemp275 + fVec274[(IOTA0 - 512) & 1023];
			fVec275[IOTA0 & 2047] = fTemp276;
			float fTemp277 = fTemp276 + fVec275[(IOTA0 - 1024) & 2047];
			fVec276[IOTA0 & 4095] = fTemp277;
			float fTemp278 = fTemp277 + fVec276[(IOTA0 - 2048) & 4095];
			fVec277[IOTA0 & 8191] = fTemp278;
			float fTemp279 = fTemp278 + fVec277[(IOTA0 - 4096) & 8191];
			fVec278[IOTA0 & 16383] = fTemp279;
			float fTemp280 = fTemp279 + fVec278[(IOTA0 - 8192) & 16383];
			fVec279[IOTA0 & 32767] = fTemp280;
			float fTemp281 = fTemp280 + fVec279[(IOTA0 - 16384) & 32767];
			fVec280[IOTA0 & 65535] = fTemp281;
			float fTemp282 = fTemp281 + fVec280[(IOTA0 - 32768) & 65535];
			fVec281[IOTA0 & 131071] = fTemp282;
			fVec282[IOTA0 & 262143] = fTemp282 + fVec281[(IOTA0 - 65536) & 131071];
			float fTemp283 = fSlow14 * fTemp62 * (4.3429446f * (fTemp47 - std::log(std::max<float>(1e-12f, fConst107 * (((iConst105) ? 0.86000985f * fVec282[(IOTA0 - iConst106) & 262143] : 0.0f) + ((iConst103) ? 0.86000985f * fVec281[(IOTA0 - iConst104) & 131071] : 0.0f) + ((iConst101) ? 0.86000985f * fVec280[(IOTA0 - iConst102) & 65535] : 0.0f) + ((iConst99) ? 0.86000985f * fVec279[(IOTA0 - iConst100) & 32767] : 0.0f) + ((iConst97) ? 0.86000985f * fVec278[(IOTA0 - iConst98) & 16383] : 0.0f) + ((iConst95) ? 0.86000985f * fVec277[(IOTA0 - iConst96) & 8191] : 0.0f) + ((iConst93) ? 0.86000985f * fVec276[(IOTA0 - iConst94) & 4095] : 0.0f) + ((iConst91) ? 0.86000985f * fVec275[(IOTA0 - iConst92) & 2047] : 0.0f) + ((iConst89) ? 0.86000985f * fVec274[(IOTA0 - iConst90) & 1023] : 0.0f) + ((iConst87) ? 0.86000985f * fVec273[(IOTA0 - iConst88) & 511] : 0.0f) + ((iConst85) ? 0.86000985f * fVec272[(IOTA0 - iConst86) & 255] : 0.0f) + ((iConst83) ? 0.86000985f * fVec271[(IOTA0 - iConst84) & 127] : 0.0f) + ((iConst81) ? 0.86000985f * fVec270[(IOTA0 - iConst82) & 63] : 0.0f) + ((iConst79) ? 0.86000985f * fVec269[(IOTA0 - iConst80) & 31] : 0.0f) + ((iConst77) ? 0.86000985f * fVec268[iConst78] : 0.0f) + ((iConst75) ? 0.86000985f * fVec267[iConst76] : 0.0f) + ((iConst74) ? 0.86000985f * fTemp266 : 0.0f) + ((iConst51) ? 0.86000985f * fVec266[iConst74] : 0.0f))))) + -18.0f - fSlow20);
			fVbargraph13 = FAUSTFLOAT(fTemp283);
			fRec80[0] = fTemp10 - fConst219 * (fConst217 * fRec80[2] + fConst215 * fRec80[1]);
			float fTemp284 = fConst220 * fRec80[0] + fConst221 * fRec80[2];
			fVec283[IOTA0 & 32767] = fTemp284;
			float fTemp285 = fVec283[(IOTA0 - 1) & 32767];
			fVec284[0] = fConst64 * fTemp285 - fConst62 * fRec83[1];
			fRec84[0] = fConst65 * (fVec284[1] - fConst60 * fRec84[1] + fConst58 * fTemp285 + fConst56 * fTemp284);
			fRec83[0] = fRec84[0];
			fVec285[0] = 0.50032705f * fRec83[1] - fConst70 * fRec81[1];
			fRec82[0] = fConst73 * fRec83[1] + fConst72 * (fVec285[1] - fConst68 * fRec82[1] + 0.50032705f * fRec83[0]);
			fRec81[0] = fRec82[0];
			float fTemp286 = mydsp_faustpower2_f(fRec81[0]);
			fVec286[0] = fTemp286;
			float fTemp287 = fTemp286 + fVec286[1];
			fVec287[0] = fTemp287;
			float fTemp288 = fTemp287 + fVec287[2];
			fVec288[0] = fTemp288;
			float fTemp289 = fTemp288 + fVec288[4];
			fVec289[0] = fTemp289;
			float fTemp290 = fTemp289 + fVec289[8];
			fVec290[IOTA0 & 31] = fTemp290;
			float fTemp291 = fTemp290 + fVec290[(IOTA0 - 16) & 31];
			fVec291[IOTA0 & 63] = fTemp291;
			float fTemp292 = fTemp291 + fVec291[(IOTA0 - 32) & 63];
			fVec292[IOTA0 & 127] = fTemp292;
			float fTemp293 = fTemp292 + fVec292[(IOTA0 - 64) & 127];
			fVec293[IOTA0 & 255] = fTemp293;
			float fTemp294 = fTemp293 + fVec293[(IOTA0 - 128) & 255];
			fVec294[IOTA0 & 511] = fTemp294;
			float fTemp295 = fTemp294 + fVec294[(IOTA0 - 256) & 511];
			fVec295[IOTA0 & 1023] = fTemp295;
			float fTemp296 = fTemp295 + fVec295[(IOTA0 - 512) & 1023];
			fVec296[IOTA0 & 2047] = fTemp296;
			float fTemp297 = fTemp296 + fVec296[(IOTA0 - 1024) & 2047];
			fVec297[IOTA0 & 4095] = fTemp297;
			float fTemp298 = fTemp297 + fVec297[(IOTA0 - 2048) & 4095];
			fVec298[IOTA0 & 8191] = fTemp298;
			float fTemp299 = fTemp298 + fVec298[(IOTA0 - 4096) & 8191];
			fVec299[IOTA0 & 16383] = fTemp299;
			float fTemp300 = fTemp299 + fVec299[(IOTA0 - 8192) & 16383];
			fVec300[IOTA0 & 32767] = fTemp300;
			float fTemp301 = fTemp300 + fVec300[(IOTA0 - 16384) & 32767];
			fVec301[IOTA0 & 65535] = fTemp301;
			float fTemp302 = fTemp301 + fVec301[(IOTA0 - 32768) & 65535];
			fVec302[IOTA0 & 131071] = fTemp302;
			fVec303[IOTA0 & 262143] = fTemp302 + fVec302[(IOTA0 - 65536) & 131071];
			float fTemp303 = fSlow14 * fTemp62 * (4.3429446f * (fTemp47 - std::log(std::max<float>(1e-12f, fConst107 * (((iConst105) ? 0.86000985f * fVec303[(IOTA0 - iConst106) & 262143] : 0.0f) + ((iConst103) ? 0.86000985f * fVec302[(IOTA0 - iConst104) & 131071] : 0.0f) + ((iConst101) ? 0.86000985f * fVec301[(IOTA0 - iConst102) & 65535] : 0.0f) + ((iConst99) ? 0.86000985f * fVec300[(IOTA0 - iConst100) & 32767] : 0.0f) + ((iConst97) ? 0.86000985f * fVec299[(IOTA0 - iConst98) & 16383] : 0.0f) + ((iConst95) ? 0.86000985f * fVec298[(IOTA0 - iConst96) & 8191] : 0.0f) + ((iConst93) ? 0.86000985f * fVec297[(IOTA0 - iConst94) & 4095] : 0.0f) + ((iConst91) ? 0.86000985f * fVec296[(IOTA0 - iConst92) & 2047] : 0.0f) + ((iConst89) ? 0.86000985f * fVec295[(IOTA0 - iConst90) & 1023] : 0.0f) + ((iConst87) ? 0.86000985f * fVec294[(IOTA0 - iConst88) & 511] : 0.0f) + ((iConst85) ? 0.86000985f * fVec293[(IOTA0 - iConst86) & 255] : 0.0f) + ((iConst83) ? 0.86000985f * fVec292[(IOTA0 - iConst84) & 127] : 0.0f) + ((iConst81) ? 0.86000985f * fVec291[(IOTA0 - iConst82) & 63] : 0.0f) + ((iConst79) ? 0.86000985f * fVec290[(IOTA0 - iConst80) & 31] : 0.0f) + ((iConst77) ? 0.86000985f * fVec289[iConst78] : 0.0f) + ((iConst75) ? 0.86000985f * fVec288[iConst76] : 0.0f) + ((iConst74) ? 0.86000985f * fTemp286 : 0.0f) + ((iConst51) ? 0.86000985f * fVec287[iConst74] : 0.0f))))) + -18.0f);
			fVbargraph14 = FAUSTFLOAT(fTemp303);
			fRec85[0] = fTemp10 - fConst227 * (fConst225 * fRec85[2] + fConst223 * fRec85[1]);
			float fTemp304 = fConst228 * fRec85[0] + fConst229 * fRec85[2];
			fVec304[IOTA0 & 32767] = fTemp304;
			float fTemp305 = fVec304[(IOTA0 - 1) & 32767];
			fVec305[0] = fConst64 * fTemp305 - fConst62 * fRec88[1];
			fRec89[0] = fConst65 * (fVec305[1] - fConst60 * fRec89[1] + fConst58 * fTemp305 + fConst56 * fTemp304);
			fRec88[0] = fRec89[0];
			fVec306[0] = 0.50032705f * fRec88[1] - fConst70 * fRec86[1];
			fRec87[0] = fConst73 * fRec88[1] + fConst72 * (fVec306[1] - fConst68 * fRec87[1] + 0.50032705f * fRec88[0]);
			fRec86[0] = fRec87[0];
			float fTemp306 = mydsp_faustpower2_f(fRec86[0]);
			fVec307[0] = fTemp306;
			float fTemp307 = fTemp306 + fVec307[1];
			fVec308[0] = fTemp307;
			float fTemp308 = fTemp307 + fVec308[2];
			fVec309[0] = fTemp308;
			float fTemp309 = fTemp308 + fVec309[4];
			fVec310[0] = fTemp309;
			float fTemp310 = fTemp309 + fVec310[8];
			fVec311[IOTA0 & 31] = fTemp310;
			float fTemp311 = fTemp310 + fVec311[(IOTA0 - 16) & 31];
			fVec312[IOTA0 & 63] = fTemp311;
			float fTemp312 = fTemp311 + fVec312[(IOTA0 - 32) & 63];
			fVec313[IOTA0 & 127] = fTemp312;
			float fTemp313 = fTemp312 + fVec313[(IOTA0 - 64) & 127];
			fVec314[IOTA0 & 255] = fTemp313;
			float fTemp314 = fTemp313 + fVec314[(IOTA0 - 128) & 255];
			fVec315[IOTA0 & 511] = fTemp314;
			float fTemp315 = fTemp314 + fVec315[(IOTA0 - 256) & 511];
			fVec316[IOTA0 & 1023] = fTemp315;
			float fTemp316 = fTemp315 + fVec316[(IOTA0 - 512) & 1023];
			fVec317[IOTA0 & 2047] = fTemp316;
			float fTemp317 = fTemp316 + fVec317[(IOTA0 - 1024) & 2047];
			fVec318[IOTA0 & 4095] = fTemp317;
			float fTemp318 = fTemp317 + fVec318[(IOTA0 - 2048) & 4095];
			fVec319[IOTA0 & 8191] = fTemp318;
			float fTemp319 = fTemp318 + fVec319[(IOTA0 - 4096) & 8191];
			fVec320[IOTA0 & 16383] = fTemp319;
			float fTemp320 = fTemp319 + fVec320[(IOTA0 - 8192) & 16383];
			fVec321[IOTA0 & 32767] = fTemp320;
			float fTemp321 = fTemp320 + fVec321[(IOTA0 - 16384) & 32767];
			fVec322[IOTA0 & 65535] = fTemp321;
			float fTemp322 = fTemp321 + fVec322[(IOTA0 - 32768) & 65535];
			fVec323[IOTA0 & 131071] = fTemp322;
			fVec324[IOTA0 & 262143] = fTemp322 + fVec323[(IOTA0 - 65536) & 131071];
			float fTemp323 = fSlow14 * fTemp62 * (4.3429446f * (fTemp47 - std::log(std::max<float>(1e-12f, fConst107 * (((iConst105) ? 0.86000985f * fVec324[(IOTA0 - iConst106) & 262143] : 0.0f) + ((iConst103) ? 0.86000985f * fVec323[(IOTA0 - iConst104) & 131071] : 0.0f) + ((iConst101) ? 0.86000985f * fVec322[(IOTA0 - iConst102) & 65535] : 0.0f) + ((iConst99) ? 0.86000985f * fVec321[(IOTA0 - iConst100) & 32767] : 0.0f) + ((iConst97) ? 0.86000985f * fVec320[(IOTA0 - iConst98) & 16383] : 0.0f) + ((iConst95) ? 0.86000985f * fVec319[(IOTA0 - iConst96) & 8191] : 0.0f) + ((iConst93) ? 0.86000985f * fVec318[(IOTA0 - iConst94) & 4095] : 0.0f) + ((iConst91) ? 0.86000985f * fVec317[(IOTA0 - iConst92) & 2047] : 0.0f) + ((iConst89) ? 0.86000985f * fVec316[(IOTA0 - iConst90) & 1023] : 0.0f) + ((iConst87) ? 0.86000985f * fVec315[(IOTA0 - iConst88) & 511] : 0.0f) + ((iConst85) ? 0.86000985f * fVec314[(IOTA0 - iConst86) & 255] : 0.0f) + ((iConst83) ? 0.86000985f * fVec313[(IOTA0 - iConst84) & 127] : 0.0f) + ((iConst81) ? 0.86000985f * fVec312[(IOTA0 - iConst82) & 63] : 0.0f) + ((iConst79) ? 0.86000985f * fVec311[(IOTA0 - iConst80) & 31] : 0.0f) + ((iConst77) ? 0.86000985f * fVec310[iConst78] : 0.0f) + ((iConst75) ? 0.86000985f * fVec309[iConst76] : 0.0f) + ((iConst74) ? 0.86000985f * fTemp306 : 0.0f) + ((iConst51) ? 0.86000985f * fVec308[iConst74] : 0.0f))))) + -18.0f);
			fVbargraph15 = FAUSTFLOAT(fTemp323);
			fRec90[0] = fTemp10 - fConst235 * (fConst233 * fRec90[2] + fConst231 * fRec90[1]);
			float fTemp324 = fConst236 * fRec90[0] + fConst237 * fRec90[2];
			fVec325[IOTA0 & 32767] = fTemp324;
			float fTemp325 = fVec325[(IOTA0 - 1) & 32767];
			fVec326[0] = fConst64 * fTemp325 - fConst62 * fRec93[1];
			fRec94[0] = fConst65 * (fVec326[1] - fConst60 * fRec94[1] + fConst58 * fTemp325 + fConst56 * fTemp324);
			fRec93[0] = fRec94[0];
			fVec327[0] = 0.50032705f * fRec93[1] - fConst70 * fRec91[1];
			fRec92[0] = fConst73 * fRec93[1] + fConst72 * (fVec327[1] - fConst68 * fRec92[1] + 0.50032705f * fRec93[0]);
			fRec91[0] = fRec92[0];
			float fTemp326 = mydsp_faustpower2_f(fRec91[0]);
			fVec328[0] = fTemp326;
			float fTemp327 = fTemp326 + fVec328[1];
			fVec329[0] = fTemp327;
			float fTemp328 = fTemp327 + fVec329[2];
			fVec330[0] = fTemp328;
			float fTemp329 = fTemp328 + fVec330[4];
			fVec331[0] = fTemp329;
			float fTemp330 = fTemp329 + fVec331[8];
			fVec332[IOTA0 & 31] = fTemp330;
			float fTemp331 = fTemp330 + fVec332[(IOTA0 - 16) & 31];
			fVec333[IOTA0 & 63] = fTemp331;
			float fTemp332 = fTemp331 + fVec333[(IOTA0 - 32) & 63];
			fVec334[IOTA0 & 127] = fTemp332;
			float fTemp333 = fTemp332 + fVec334[(IOTA0 - 64) & 127];
			fVec335[IOTA0 & 255] = fTemp333;
			float fTemp334 = fTemp333 + fVec335[(IOTA0 - 128) & 255];
			fVec336[IOTA0 & 511] = fTemp334;
			float fTemp335 = fTemp334 + fVec336[(IOTA0 - 256) & 511];
			fVec337[IOTA0 & 1023] = fTemp335;
			float fTemp336 = fTemp335 + fVec337[(IOTA0 - 512) & 1023];
			fVec338[IOTA0 & 2047] = fTemp336;
			float fTemp337 = fTemp336 + fVec338[(IOTA0 - 1024) & 2047];
			fVec339[IOTA0 & 4095] = fTemp337;
			float fTemp338 = fTemp337 + fVec339[(IOTA0 - 2048) & 4095];
			fVec340[IOTA0 & 8191] = fTemp338;
			float fTemp339 = fTemp338 + fVec340[(IOTA0 - 4096) & 8191];
			fVec341[IOTA0 & 16383] = fTemp339;
			float fTemp340 = fTemp339 + fVec341[(IOTA0 - 8192) & 16383];
			fVec342[IOTA0 & 32767] = fTemp340;
			float fTemp341 = fTemp340 + fVec342[(IOTA0 - 16384) & 32767];
			fVec343[IOTA0 & 65535] = fTemp341;
			float fTemp342 = fTemp341 + fVec343[(IOTA0 - 32768) & 65535];
			fVec344[IOTA0 & 131071] = fTemp342;
			fVec345[IOTA0 & 262143] = fTemp342 + fVec344[(IOTA0 - 65536) & 131071];
			float fTemp343 = fSlow14 * fTemp62 * (4.3429446f * (fTemp47 - std::log(std::max<float>(1e-12f, fConst107 * (((iConst105) ? 0.86000985f * fVec345[(IOTA0 - iConst106) & 262143] : 0.0f) + ((iConst103) ? 0.86000985f * fVec344[(IOTA0 - iConst104) & 131071] : 0.0f) + ((iConst101) ? 0.86000985f * fVec343[(IOTA0 - iConst102) & 65535] : 0.0f) + ((iConst99) ? 0.86000985f * fVec342[(IOTA0 - iConst100) & 32767] : 0.0f) + ((iConst97) ? 0.86000985f * fVec341[(IOTA0 - iConst98) & 16383] : 0.0f) + ((iConst95) ? 0.86000985f * fVec340[(IOTA0 - iConst96) & 8191] : 0.0f) + ((iConst93) ? 0.86000985f * fVec339[(IOTA0 - iConst94) & 4095] : 0.0f) + ((iConst91) ? 0.86000985f * fVec338[(IOTA0 - iConst92) & 2047] : 0.0f) + ((iConst89) ? 0.86000985f * fVec337[(IOTA0 - iConst90) & 1023] : 0.0f) + ((iConst87) ? 0.86000985f * fVec336[(IOTA0 - iConst88) & 511] : 0.0f) + ((iConst85) ? 0.86000985f * fVec335[(IOTA0 - iConst86) & 255] : 0.0f) + ((iConst83) ? 0.86000985f * fVec334[(IOTA0 - iConst84) & 127] : 0.0f) + ((iConst81) ? 0.86000985f * fVec333[(IOTA0 - iConst82) & 63] : 0.0f) + ((iConst79) ? 0.86000985f * fVec332[(IOTA0 - iConst80) & 31] : 0.0f) + ((iConst77) ? 0.86000985f * fVec331[iConst78] : 0.0f) + ((iConst75) ? 0.86000985f * fVec330[iConst76] : 0.0f) + ((iConst74) ? 0.86000985f * fTemp326 : 0.0f) + ((iConst51) ? 0.86000985f * fVec329[iConst74] : 0.0f))))) + -18.0f);
			fVbargraph16 = FAUSTFLOAT(fTemp343);
			fRec95[0] = fTemp10 - fConst243 * (fConst241 * fRec95[2] + fConst239 * fRec95[1]);
			float fTemp344 = fConst244 * fRec95[0] + fConst245 * fRec95[2];
			fVec346[IOTA0 & 32767] = fTemp344;
			float fTemp345 = fVec346[(IOTA0 - 1) & 32767];
			fVec347[0] = fConst64 * fTemp345 - fConst62 * fRec98[1];
			fRec99[0] = fConst65 * (fVec347[1] - fConst60 * fRec99[1] + fConst58 * fTemp345 + fConst56 * fTemp344);
			fRec98[0] = fRec99[0];
			fVec348[0] = 0.50032705f * fRec98[1] - fConst70 * fRec96[1];
			fRec97[0] = fConst73 * fRec98[1] + fConst72 * (fVec348[1] - fConst68 * fRec97[1] + 0.50032705f * fRec98[0]);
			fRec96[0] = fRec97[0];
			float fTemp346 = mydsp_faustpower2_f(fRec96[0]);
			fVec349[0] = fTemp346;
			float fTemp347 = fTemp346 + fVec349[1];
			fVec350[0] = fTemp347;
			float fTemp348 = fTemp347 + fVec350[2];
			fVec351[0] = fTemp348;
			float fTemp349 = fTemp348 + fVec351[4];
			fVec352[0] = fTemp349;
			float fTemp350 = fTemp349 + fVec352[8];
			fVec353[IOTA0 & 31] = fTemp350;
			float fTemp351 = fTemp350 + fVec353[(IOTA0 - 16) & 31];
			fVec354[IOTA0 & 63] = fTemp351;
			float fTemp352 = fTemp351 + fVec354[(IOTA0 - 32) & 63];
			fVec355[IOTA0 & 127] = fTemp352;
			float fTemp353 = fTemp352 + fVec355[(IOTA0 - 64) & 127];
			fVec356[IOTA0 & 255] = fTemp353;
			float fTemp354 = fTemp353 + fVec356[(IOTA0 - 128) & 255];
			fVec357[IOTA0 & 511] = fTemp354;
			float fTemp355 = fTemp354 + fVec357[(IOTA0 - 256) & 511];
			fVec358[IOTA0 & 1023] = fTemp355;
			float fTemp356 = fTemp355 + fVec358[(IOTA0 - 512) & 1023];
			fVec359[IOTA0 & 2047] = fTemp356;
			float fTemp357 = fTemp356 + fVec359[(IOTA0 - 1024) & 2047];
			fVec360[IOTA0 & 4095] = fTemp357;
			float fTemp358 = fTemp357 + fVec360[(IOTA0 - 2048) & 4095];
			fVec361[IOTA0 & 8191] = fTemp358;
			float fTemp359 = fTemp358 + fVec361[(IOTA0 - 4096) & 8191];
			fVec362[IOTA0 & 16383] = fTemp359;
			float fTemp360 = fTemp359 + fVec362[(IOTA0 - 8192) & 16383];
			fVec363[IOTA0 & 32767] = fTemp360;
			float fTemp361 = fTemp360 + fVec363[(IOTA0 - 16384) & 32767];
			fVec364[IOTA0 & 65535] = fTemp361;
			float fTemp362 = fTemp361 + fVec364[(IOTA0 - 32768) & 65535];
			fVec365[IOTA0 & 131071] = fTemp362;
			fVec366[IOTA0 & 262143] = fTemp362 + fVec365[(IOTA0 - 65536) & 131071];
			float fTemp363 = fSlow14 * fTemp62 * (4.3429446f * (fTemp47 - std::log(std::max<float>(1e-12f, fConst107 * (((iConst105) ? 0.86000985f * fVec366[(IOTA0 - iConst106) & 262143] : 0.0f) + ((iConst103) ? 0.86000985f * fVec365[(IOTA0 - iConst104) & 131071] : 0.0f) + ((iConst101) ? 0.86000985f * fVec364[(IOTA0 - iConst102) & 65535] : 0.0f) + ((iConst99) ? 0.86000985f * fVec363[(IOTA0 - iConst100) & 32767] : 0.0f) + ((iConst97) ? 0.86000985f * fVec362[(IOTA0 - iConst98) & 16383] : 0.0f) + ((iConst95) ? 0.86000985f * fVec361[(IOTA0 - iConst96) & 8191] : 0.0f) + ((iConst93) ? 0.86000985f * fVec360[(IOTA0 - iConst94) & 4095] : 0.0f) + ((iConst91) ? 0.86000985f * fVec359[(IOTA0 - iConst92) & 2047] : 0.0f) + ((iConst89) ? 0.86000985f * fVec358[(IOTA0 - iConst90) & 1023] : 0.0f) + ((iConst87) ? 0.86000985f * fVec357[(IOTA0 - iConst88) & 511] : 0.0f) + ((iConst85) ? 0.86000985f * fVec356[(IOTA0 - iConst86) & 255] : 0.0f) + ((iConst83) ? 0.86000985f * fVec355[(IOTA0 - iConst84) & 127] : 0.0f) + ((iConst81) ? 0.86000985f * fVec354[(IOTA0 - iConst82) & 63] : 0.0f) + ((iConst79) ? 0.86000985f * fVec353[(IOTA0 - iConst80) & 31] : 0.0f) + ((iConst77) ? 0.86000985f * fVec352[iConst78] : 0.0f) + ((iConst75) ? 0.86000985f * fVec351[iConst76] : 0.0f) + ((iConst74) ? 0.86000985f * fTemp346 : 0.0f) + ((iConst51) ? 0.86000985f * fVec350[iConst74] : 0.0f))))) + -17.0f - fSlow19);
			fVbargraph17 = FAUSTFLOAT(fTemp363);
			fRec100[0] = fTemp10 - fConst251 * (fConst249 * fRec100[2] + fConst247 * fRec100[1]);
			float fTemp364 = fConst252 * fRec100[0] + fConst253 * fRec100[2];
			fVec367[IOTA0 & 32767] = fTemp364;
			float fTemp365 = fVec367[(IOTA0 - 1) & 32767];
			fVec368[0] = fConst64 * fTemp365 - fConst62 * fRec103[1];
			fRec104[0] = fConst65 * (fVec368[1] - fConst60 * fRec104[1] + fConst58 * fTemp365 + fConst56 * fTemp364);
			fRec103[0] = fRec104[0];
			fVec369[0] = 0.50032705f * fRec103[1] - fConst70 * fRec101[1];
			fRec102[0] = fConst73 * fRec103[1] + fConst72 * (fVec369[1] - fConst68 * fRec102[1] + 0.50032705f * fRec103[0]);
			fRec101[0] = fRec102[0];
			float fTemp366 = mydsp_faustpower2_f(fRec101[0]);
			fVec370[0] = fTemp366;
			float fTemp367 = fTemp366 + fVec370[1];
			fVec371[0] = fTemp367;
			float fTemp368 = fTemp367 + fVec371[2];
			fVec372[0] = fTemp368;
			float fTemp369 = fTemp368 + fVec372[4];
			fVec373[0] = fTemp369;
			float fTemp370 = fTemp369 + fVec373[8];
			fVec374[IOTA0 & 31] = fTemp370;
			float fTemp371 = fTemp370 + fVec374[(IOTA0 - 16) & 31];
			fVec375[IOTA0 & 63] = fTemp371;
			float fTemp372 = fTemp371 + fVec375[(IOTA0 - 32) & 63];
			fVec376[IOTA0 & 127] = fTemp372;
			float fTemp373 = fTemp372 + fVec376[(IOTA0 - 64) & 127];
			fVec377[IOTA0 & 255] = fTemp373;
			float fTemp374 = fTemp373 + fVec377[(IOTA0 - 128) & 255];
			fVec378[IOTA0 & 511] = fTemp374;
			float fTemp375 = fTemp374 + fVec378[(IOTA0 - 256) & 511];
			fVec379[IOTA0 & 1023] = fTemp375;
			float fTemp376 = fTemp375 + fVec379[(IOTA0 - 512) & 1023];
			fVec380[IOTA0 & 2047] = fTemp376;
			float fTemp377 = fTemp376 + fVec380[(IOTA0 - 1024) & 2047];
			fVec381[IOTA0 & 4095] = fTemp377;
			float fTemp378 = fTemp377 + fVec381[(IOTA0 - 2048) & 4095];
			fVec382[IOTA0 & 8191] = fTemp378;
			float fTemp379 = fTemp378 + fVec382[(IOTA0 - 4096) & 8191];
			fVec383[IOTA0 & 16383] = fTemp379;
			float fTemp380 = fTemp379 + fVec383[(IOTA0 - 8192) & 16383];
			fVec384[IOTA0 & 32767] = fTemp380;
			float fTemp381 = fTemp380 + fVec384[(IOTA0 - 16384) & 32767];
			fVec385[IOTA0 & 65535] = fTemp381;
			float fTemp382 = fTemp381 + fVec385[(IOTA0 - 32768) & 65535];
			fVec386[IOTA0 & 131071] = fTemp382;
			fVec387[IOTA0 & 262143] = fTemp382 + fVec386[(IOTA0 - 65536) & 131071];
			float fTemp383 = fSlow14 * fTemp62 * (4.3429446f * (fTemp47 - std::log(std::max<float>(1e-12f, fConst107 * (((iConst105) ? 0.86000985f * fVec387[(IOTA0 - iConst106) & 262143] : 0.0f) + ((iConst103) ? 0.86000985f * fVec386[(IOTA0 - iConst104) & 131071] : 0.0f) + ((iConst101) ? 0.86000985f * fVec385[(IOTA0 - iConst102) & 65535] : 0.0f) + ((iConst99) ? 0.86000985f * fVec384[(IOTA0 - iConst100) & 32767] : 0.0f) + ((iConst97) ? 0.86000985f * fVec383[(IOTA0 - iConst98) & 16383] : 0.0f) + ((iConst95) ? 0.86000985f * fVec382[(IOTA0 - iConst96) & 8191] : 0.0f) + ((iConst93) ? 0.86000985f * fVec381[(IOTA0 - iConst94) & 4095] : 0.0f) + ((iConst91) ? 0.86000985f * fVec380[(IOTA0 - iConst92) & 2047] : 0.0f) + ((iConst89) ? 0.86000985f * fVec379[(IOTA0 - iConst90) & 1023] : 0.0f) + ((iConst87) ? 0.86000985f * fVec378[(IOTA0 - iConst88) & 511] : 0.0f) + ((iConst85) ? 0.86000985f * fVec377[(IOTA0 - iConst86) & 255] : 0.0f) + ((iConst83) ? 0.86000985f * fVec376[(IOTA0 - iConst84) & 127] : 0.0f) + ((iConst81) ? 0.86000985f * fVec375[(IOTA0 - iConst82) & 63] : 0.0f) + ((iConst79) ? 0.86000985f * fVec374[(IOTA0 - iConst80) & 31] : 0.0f) + ((iConst77) ? 0.86000985f * fVec373[iConst78] : 0.0f) + ((iConst75) ? 0.86000985f * fVec372[iConst76] : 0.0f) + ((iConst74) ? 0.86000985f * fTemp366 : 0.0f) + ((iConst51) ? 0.86000985f * fVec371[iConst74] : 0.0f))))) + -16.0f - fSlow18);
			fVbargraph18 = FAUSTFLOAT(fTemp383);
			fRec105[0] = fTemp10 - fConst259 * (fConst257 * fRec105[2] + fConst255 * fRec105[1]);
			float fTemp384 = fConst260 * fRec105[0] + fConst261 * fRec105[2];
			fVec388[IOTA0 & 32767] = fTemp384;
			float fTemp385 = fVec388[(IOTA0 - 1) & 32767];
			fVec389[0] = fConst64 * fTemp385 - fConst62 * fRec108[1];
			fRec109[0] = fConst65 * (fVec389[1] - fConst60 * fRec109[1] + fConst58 * fTemp385 + fConst56 * fTemp384);
			fRec108[0] = fRec109[0];
			fVec390[0] = 0.50032705f * fRec108[1] - fConst70 * fRec106[1];
			fRec107[0] = fConst73 * fRec108[1] + fConst72 * (fVec390[1] - fConst68 * fRec107[1] + 0.50032705f * fRec108[0]);
			fRec106[0] = fRec107[0];
			float fTemp386 = mydsp_faustpower2_f(fRec106[0]);
			fVec391[0] = fTemp386;
			float fTemp387 = fTemp386 + fVec391[1];
			fVec392[0] = fTemp387;
			float fTemp388 = fTemp387 + fVec392[2];
			fVec393[0] = fTemp388;
			float fTemp389 = fTemp388 + fVec393[4];
			fVec394[0] = fTemp389;
			float fTemp390 = fTemp389 + fVec394[8];
			fVec395[IOTA0 & 31] = fTemp390;
			float fTemp391 = fTemp390 + fVec395[(IOTA0 - 16) & 31];
			fVec396[IOTA0 & 63] = fTemp391;
			float fTemp392 = fTemp391 + fVec396[(IOTA0 - 32) & 63];
			fVec397[IOTA0 & 127] = fTemp392;
			float fTemp393 = fTemp392 + fVec397[(IOTA0 - 64) & 127];
			fVec398[IOTA0 & 255] = fTemp393;
			float fTemp394 = fTemp393 + fVec398[(IOTA0 - 128) & 255];
			fVec399[IOTA0 & 511] = fTemp394;
			float fTemp395 = fTemp394 + fVec399[(IOTA0 - 256) & 511];
			fVec400[IOTA0 & 1023] = fTemp395;
			float fTemp396 = fTemp395 + fVec400[(IOTA0 - 512) & 1023];
			fVec401[IOTA0 & 2047] = fTemp396;
			float fTemp397 = fTemp396 + fVec401[(IOTA0 - 1024) & 2047];
			fVec402[IOTA0 & 4095] = fTemp397;
			float fTemp398 = fTemp397 + fVec402[(IOTA0 - 2048) & 4095];
			fVec403[IOTA0 & 8191] = fTemp398;
			float fTemp399 = fTemp398 + fVec403[(IOTA0 - 4096) & 8191];
			fVec404[IOTA0 & 16383] = fTemp399;
			float fTemp400 = fTemp399 + fVec404[(IOTA0 - 8192) & 16383];
			fVec405[IOTA0 & 32767] = fTemp400;
			float fTemp401 = fTemp400 + fVec405[(IOTA0 - 16384) & 32767];
			fVec406[IOTA0 & 65535] = fTemp401;
			float fTemp402 = fTemp401 + fVec406[(IOTA0 - 32768) & 65535];
			fVec407[IOTA0 & 131071] = fTemp402;
			fVec408[IOTA0 & 262143] = fTemp402 + fVec407[(IOTA0 - 65536) & 131071];
			float fTemp403 = fSlow14 * fTemp62 * (4.3429446f * (fTemp47 - std::log(std::max<float>(1e-12f, fConst107 * (((iConst105) ? 0.86000985f * fVec408[(IOTA0 - iConst106) & 262143] : 0.0f) + ((iConst103) ? 0.86000985f * fVec407[(IOTA0 - iConst104) & 131071] : 0.0f) + ((iConst101) ? 0.86000985f * fVec406[(IOTA0 - iConst102) & 65535] : 0.0f) + ((iConst99) ? 0.86000985f * fVec405[(IOTA0 - iConst100) & 32767] : 0.0f) + ((iConst97) ? 0.86000985f * fVec404[(IOTA0 - iConst98) & 16383] : 0.0f) + ((iConst95) ? 0.86000985f * fVec403[(IOTA0 - iConst96) & 8191] : 0.0f) + ((iConst93) ? 0.86000985f * fVec402[(IOTA0 - iConst94) & 4095] : 0.0f) + ((iConst91) ? 0.86000985f * fVec401[(IOTA0 - iConst92) & 2047] : 0.0f) + ((iConst89) ? 0.86000985f * fVec400[(IOTA0 - iConst90) & 1023] : 0.0f) + ((iConst87) ? 0.86000985f * fVec399[(IOTA0 - iConst88) & 511] : 0.0f) + ((iConst85) ? 0.86000985f * fVec398[(IOTA0 - iConst86) & 255] : 0.0f) + ((iConst83) ? 0.86000985f * fVec397[(IOTA0 - iConst84) & 127] : 0.0f) + ((iConst81) ? 0.86000985f * fVec396[(IOTA0 - iConst82) & 63] : 0.0f) + ((iConst79) ? 0.86000985f * fVec395[(IOTA0 - iConst80) & 31] : 0.0f) + ((iConst77) ? 0.86000985f * fVec394[iConst78] : 0.0f) + ((iConst75) ? 0.86000985f * fVec393[iConst76] : 0.0f) + ((iConst74) ? 0.86000985f * fTemp386 : 0.0f) + ((iConst51) ? 0.86000985f * fVec392[iConst74] : 0.0f))))) + -18.0f - fSlow20);
			fVbargraph19 = FAUSTFLOAT(fTemp403);
			fRec110[0] = fTemp10 - fConst267 * (fConst265 * fRec110[2] + fConst263 * fRec110[1]);
			float fTemp404 = fConst268 * fRec110[0] + fConst269 * fRec110[2];
			fVec409[IOTA0 & 32767] = fTemp404;
			float fTemp405 = fVec409[(IOTA0 - 1) & 32767];
			fVec410[0] = fConst64 * fTemp405 - fConst62 * fRec113[1];
			fRec114[0] = fConst65 * (fVec410[1] - fConst60 * fRec114[1] + fConst58 * fTemp405 + fConst56 * fTemp404);
			fRec113[0] = fRec114[0];
			fVec411[0] = 0.50032705f * fRec113[1] - fConst70 * fRec111[1];
			fRec112[0] = fConst73 * fRec113[1] + fConst72 * (fVec411[1] - fConst68 * fRec112[1] + 0.50032705f * fRec113[0]);
			fRec111[0] = fRec112[0];
			float fTemp406 = mydsp_faustpower2_f(fRec111[0]);
			fVec412[0] = fTemp406;
			float fTemp407 = fTemp406 + fVec412[1];
			fVec413[0] = fTemp407;
			float fTemp408 = fTemp407 + fVec413[2];
			fVec414[0] = fTemp408;
			float fTemp409 = fTemp408 + fVec414[4];
			fVec415[0] = fTemp409;
			float fTemp410 = fTemp409 + fVec415[8];
			fVec416[IOTA0 & 31] = fTemp410;
			float fTemp411 = fTemp410 + fVec416[(IOTA0 - 16) & 31];
			fVec417[IOTA0 & 63] = fTemp411;
			float fTemp412 = fTemp411 + fVec417[(IOTA0 - 32) & 63];
			fVec418[IOTA0 & 127] = fTemp412;
			float fTemp413 = fTemp412 + fVec418[(IOTA0 - 64) & 127];
			fVec419[IOTA0 & 255] = fTemp413;
			float fTemp414 = fTemp413 + fVec419[(IOTA0 - 128) & 255];
			fVec420[IOTA0 & 511] = fTemp414;
			float fTemp415 = fTemp414 + fVec420[(IOTA0 - 256) & 511];
			fVec421[IOTA0 & 1023] = fTemp415;
			float fTemp416 = fTemp415 + fVec421[(IOTA0 - 512) & 1023];
			fVec422[IOTA0 & 2047] = fTemp416;
			float fTemp417 = fTemp416 + fVec422[(IOTA0 - 1024) & 2047];
			fVec423[IOTA0 & 4095] = fTemp417;
			float fTemp418 = fTemp417 + fVec423[(IOTA0 - 2048) & 4095];
			fVec424[IOTA0 & 8191] = fTemp418;
			float fTemp419 = fTemp418 + fVec424[(IOTA0 - 4096) & 8191];
			fVec425[IOTA0 & 16383] = fTemp419;
			float fTemp420 = fTemp419 + fVec425[(IOTA0 - 8192) & 16383];
			fVec426[IOTA0 & 32767] = fTemp420;
			float fTemp421 = fTemp420 + fVec426[(IOTA0 - 16384) & 32767];
			fVec427[IOTA0 & 65535] = fTemp421;
			float fTemp422 = fTemp421 + fVec427[(IOTA0 - 32768) & 65535];
			fVec428[IOTA0 & 131071] = fTemp422;
			fVec429[IOTA0 & 262143] = fTemp422 + fVec428[(IOTA0 - 65536) & 131071];
			float fTemp423 = fSlow14 * fTemp62 * (4.3429446f * (fTemp47 - std::log(std::max<float>(1e-12f, fConst107 * (((iConst105) ? 0.86000985f * fVec429[(IOTA0 - iConst106) & 262143] : 0.0f) + ((iConst103) ? 0.86000985f * fVec428[(IOTA0 - iConst104) & 131071] : 0.0f) + ((iConst101) ? 0.86000985f * fVec427[(IOTA0 - iConst102) & 65535] : 0.0f) + ((iConst99) ? 0.86000985f * fVec426[(IOTA0 - iConst100) & 32767] : 0.0f) + ((iConst97) ? 0.86000985f * fVec425[(IOTA0 - iConst98) & 16383] : 0.0f) + ((iConst95) ? 0.86000985f * fVec424[(IOTA0 - iConst96) & 8191] : 0.0f) + ((iConst93) ? 0.86000985f * fVec423[(IOTA0 - iConst94) & 4095] : 0.0f) + ((iConst91) ? 0.86000985f * fVec422[(IOTA0 - iConst92) & 2047] : 0.0f) + ((iConst89) ? 0.86000985f * fVec421[(IOTA0 - iConst90) & 1023] : 0.0f) + ((iConst87) ? 0.86000985f * fVec420[(IOTA0 - iConst88) & 511] : 0.0f) + ((iConst85) ? 0.86000985f * fVec419[(IOTA0 - iConst86) & 255] : 0.0f) + ((iConst83) ? 0.86000985f * fVec418[(IOTA0 - iConst84) & 127] : 0.0f) + ((iConst81) ? 0.86000985f * fVec417[(IOTA0 - iConst82) & 63] : 0.0f) + ((iConst79) ? 0.86000985f * fVec416[(IOTA0 - iConst80) & 31] : 0.0f) + ((iConst77) ? 0.86000985f * fVec415[iConst78] : 0.0f) + ((iConst75) ? 0.86000985f * fVec414[iConst76] : 0.0f) + ((iConst74) ? 0.86000985f * fTemp406 : 0.0f) + ((iConst51) ? 0.86000985f * fVec413[iConst74] : 0.0f))))) + -19.0f - fSlow18);
			fVbargraph20 = FAUSTFLOAT(fTemp423);
			fRec115[0] = fTemp10 - fConst272 * (fConst270 * fRec115[2] + fConst41 * fRec115[1]);
			float fTemp424 = fConst273 * fRec115[0] + fConst274 * fRec115[2];
			fVec430[IOTA0 & 32767] = fTemp424;
			float fTemp425 = fVec430[(IOTA0 - 1) & 32767];
			fVec431[0] = fConst64 * fTemp425 - fConst62 * fRec118[1];
			fRec119[0] = fConst65 * (fVec431[1] - fConst60 * fRec119[1] + fConst58 * fTemp425 + fConst56 * fTemp424);
			fRec118[0] = fRec119[0];
			fVec432[0] = 0.50032705f * fRec118[1] - fConst70 * fRec116[1];
			fRec117[0] = fConst73 * fRec118[1] + fConst72 * (fVec432[1] - fConst68 * fRec117[1] + 0.50032705f * fRec118[0]);
			fRec116[0] = fRec117[0];
			float fTemp426 = mydsp_faustpower2_f(fRec116[0]);
			fVec433[0] = fTemp426;
			float fTemp427 = fTemp426 + fVec433[1];
			fVec434[0] = fTemp427;
			float fTemp428 = fTemp427 + fVec434[2];
			fVec435[0] = fTemp428;
			float fTemp429 = fTemp428 + fVec435[4];
			fVec436[0] = fTemp429;
			float fTemp430 = fTemp429 + fVec436[8];
			fVec437[IOTA0 & 31] = fTemp430;
			float fTemp431 = fTemp430 + fVec437[(IOTA0 - 16) & 31];
			fVec438[IOTA0 & 63] = fTemp431;
			float fTemp432 = fTemp431 + fVec438[(IOTA0 - 32) & 63];
			fVec439[IOTA0 & 127] = fTemp432;
			float fTemp433 = fTemp432 + fVec439[(IOTA0 - 64) & 127];
			fVec440[IOTA0 & 255] = fTemp433;
			float fTemp434 = fTemp433 + fVec440[(IOTA0 - 128) & 255];
			fVec441[IOTA0 & 511] = fTemp434;
			float fTemp435 = fTemp434 + fVec441[(IOTA0 - 256) & 511];
			fVec442[IOTA0 & 1023] = fTemp435;
			float fTemp436 = fTemp435 + fVec442[(IOTA0 - 512) & 1023];
			fVec443[IOTA0 & 2047] = fTemp436;
			float fTemp437 = fTemp436 + fVec443[(IOTA0 - 1024) & 2047];
			fVec444[IOTA0 & 4095] = fTemp437;
			float fTemp438 = fTemp437 + fVec444[(IOTA0 - 2048) & 4095];
			fVec445[IOTA0 & 8191] = fTemp438;
			float fTemp439 = fTemp438 + fVec445[(IOTA0 - 4096) & 8191];
			fVec446[IOTA0 & 16383] = fTemp439;
			float fTemp440 = fTemp439 + fVec446[(IOTA0 - 8192) & 16383];
			fVec447[IOTA0 & 32767] = fTemp440;
			float fTemp441 = fTemp440 + fVec447[(IOTA0 - 16384) & 32767];
			fVec448[IOTA0 & 65535] = fTemp441;
			float fTemp442 = fTemp441 + fVec448[(IOTA0 - 32768) & 65535];
			fVec449[IOTA0 & 131071] = fTemp442;
			fVec450[IOTA0 & 262143] = fTemp442 + fVec449[(IOTA0 - 65536) & 131071];
			float fTemp443 = fSlow14 * (-22.0f - 4.3429446f * (std::log(std::max<float>(1e-12f, fConst107 * (((iConst105) ? 0.86000985f * fVec450[(IOTA0 - iConst106) & 262143] : 0.0f) + ((iConst103) ? 0.86000985f * fVec449[(IOTA0 - iConst104) & 131071] : 0.0f) + ((iConst101) ? 0.86000985f * fVec448[(IOTA0 - iConst102) & 65535] : 0.0f) + ((iConst99) ? 0.86000985f * fVec447[(IOTA0 - iConst100) & 32767] : 0.0f) + ((iConst97) ? 0.86000985f * fVec446[(IOTA0 - iConst98) & 16383] : 0.0f) + ((iConst95) ? 0.86000985f * fVec445[(IOTA0 - iConst96) & 8191] : 0.0f) + ((iConst93) ? 0.86000985f * fVec444[(IOTA0 - iConst94) & 4095] : 0.0f) + ((iConst91) ? 0.86000985f * fVec443[(IOTA0 - iConst92) & 2047] : 0.0f) + ((iConst89) ? 0.86000985f * fVec442[(IOTA0 - iConst90) & 1023] : 0.0f) + ((iConst87) ? 0.86000985f * fVec441[(IOTA0 - iConst88) & 511] : 0.0f) + ((iConst85) ? 0.86000985f * fVec440[(IOTA0 - iConst86) & 255] : 0.0f) + ((iConst83) ? 0.86000985f * fVec439[(IOTA0 - iConst84) & 127] : 0.0f) + ((iConst81) ? 0.86000985f * fVec438[(IOTA0 - iConst82) & 63] : 0.0f) + ((iConst79) ? 0.86000985f * fVec437[(IOTA0 - iConst80) & 31] : 0.0f) + ((iConst77) ? 0.86000985f * fVec436[iConst78] : 0.0f) + ((iConst75) ? 0.86000985f * fVec435[iConst76] : 0.0f) + ((iConst74) ? 0.86000985f * fTemp426 : 0.0f) + ((iConst51) ? 0.86000985f * fVec434[iConst74] : 0.0f)))) - fTemp47) - fSlow20) * fTemp62;
			fVbargraph21 = FAUSTFLOAT(fTemp443);
			fRec120[0] = fSlow22 + fConst32 * fRec120[1];
			float fTemp444 = 0.2236068f * (1.0f - fRec120[0]) * (std::pow(1e+01f, 0.05f * fTemp443) * fVec430[(IOTA0 - iConst49) & 32767] + std::pow(1e+01f, 0.05f * fTemp423) * fVec409[(IOTA0 - iConst49) & 32767] + std::pow(1e+01f, 0.05f * fTemp403) * fVec388[(IOTA0 - iConst49) & 32767] + std::pow(1e+01f, 0.05f * fTemp383) * fVec367[(IOTA0 - iConst49) & 32767] + std::pow(1e+01f, 0.05f * fTemp363) * fVec346[(IOTA0 - iConst49) & 32767] + std::pow(1e+01f, 0.05f * fTemp343) * fVec325[(IOTA0 - iConst49) & 32767] + std::pow(1e+01f, 0.05f * fTemp323) * fVec304[(IOTA0 - iConst49) & 32767] + std::pow(1e+01f, 0.05f * fTemp303) * fVec283[(IOTA0 - iConst49) & 32767] + std::pow(1e+01f, 0.05f * fTemp283) * fVec262[(IOTA0 - iConst49) & 32767] + std::pow(1e+01f, 0.05f * fTemp263) * fVec241[(IOTA0 - iConst49) & 32767] + std::pow(1e+01f, 0.05f * fTemp243) * fVec220[(IOTA0 - iConst49) & 32767] + std::pow(1e+01f, 0.05f * fTemp223) * fVec199[(IOTA0 - iConst49) & 32767] + std::pow(1e+01f, 0.05f * fTemp203) * fVec178[(IOTA0 - iConst49) & 32767] + std::pow(1e+01f, 0.05f * fTemp183) * fVec157[(IOTA0 - iConst49) & 32767] + std::pow(1e+01f, 0.05f * fTemp163) * fVec136[(IOTA0 - iConst49) & 32767] + std::pow(1e+01f, 0.05f * fTemp143) * fVec115[(IOTA0 - iConst49) & 32767] + std::pow(1e+01f, 0.05f * fTemp123) * fVec94[(IOTA0 - iConst49) & 32767] + std::pow(1e+01f, 0.05f * fTemp103) * fVec73[(IOTA0 - iConst49) & 32767] + std::pow(1e+01f, 0.05f * fTemp83) * fVec52[(IOTA0 - iConst49) & 32767] + std::pow(1e+01f, 0.05f * fTemp63) * fVec3[(IOTA0 - iConst49) & 32767]);
			fVec451[IOTA0 & 32767] = fTemp5 * fRec11[0] + fConst37 * fTemp8 * fTemp7;
			float fTemp445 = fRec120[0] * fVec451[(IOTA0 - iConst49) & 32767] + fTemp444;
			fRec121[0] = fSlow23 + fConst32 * fRec121[1];
			float fTemp446 = 1.0f - fRec121[0];
			float fTemp447 = std::fabs(std::fabs(fRec122[1]) + std::fabs(fRec123[1]));
			fVec452[0] = fTemp447;
			float fTemp448 = std::max<float>(fTemp447, fVec452[1]);
			fVec453[0] = fTemp448;
			float fTemp449 = std::max<float>(fTemp448, fVec453[2]);
			fVec454[0] = fTemp449;
			float fTemp450 = std::max<float>(fTemp449, fVec454[4]);
			fVec455[0] = fTemp450;
			fVec456[IOTA0 & 31] = std::max<float>(fTemp450, fVec455[8]);
			float fTemp451 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst277) ? fTemp447 : -3.4028235e+38f), ((iConst278) ? fVec453[iConst277] : -3.4028235e+38f)), ((iConst279) ? fVec454[iConst280] : -3.4028235e+38f)), ((iConst281) ? fVec455[iConst282] : -3.4028235e+38f)), ((iConst283) ? fVec456[(IOTA0 - iConst284) & 31] : -3.4028235e+38f))));
			int iTemp452 = (fTemp451 > fSlow25) + (fTemp451 > fSlow24);
			float fTemp453 = std::max<float>(-3.4028235e+38f, ((iTemp452 == 0) ? fTemp451 + -1e+01f - fSlow0 : ((iTemp452 == 1) ? 0.0f - 4194304.0f * mydsp_faustpower2_f(fTemp451 + -1e+01f - fSlow0) : 0.0f)));
			float fTemp454 = ((fTemp453 > fRec132[1]) ? 0.0f : fConst285);
			fRec132[0] = fTemp453 * (1.0f - fTemp454) + fRec132[1] * fTemp454;
			float fTemp455 = std::min<float>(1.0f, std::max<float>(0.0f, std::pow(1e+01f, 0.05f * fRec132[0])));
			float fTemp456 = std::tan(fConst286 * std::min<float>(fConst275, fTemp455 * (fConst276 * std::fabs(fRec125[1]) + 0.1316f)));
			float fTemp457 = fTemp456 + 2.0f;
			float fTemp458 = fTemp456 * fTemp457 + 1.0f;
			fVec457[0] = 0.0f - fConst65 * (fConst62 * fRec135[1] - fConst63 * fRec123[2]);
			fRec136[0] = fVec457[1] + fConst65 * (fConst55 * fRec123[1] - 2.0f * (fConst59 * fRec136[1] - fConst57 * fRec123[2]));
			fRec135[0] = fRec136[0];
			fVec458[0] = 0.50032705f * fRec135[1] - fConst70 * fRec133[1];
			fRec134[0] = fConst73 * fRec135[1] + fConst72 * (fVec458[1] - fConst68 * fRec134[1] + 0.50032705f * fRec135[0]);
			fRec133[0] = fRec134[0];
			float fTemp459 = mydsp_faustpower2_f(fRec133[0]);
			fVec459[0] = fTemp459;
			float fTemp460 = fTemp459 + fVec459[1];
			fVec460[0] = fTemp460;
			float fTemp461 = fTemp460 + fVec460[2];
			fVec461[0] = fTemp461;
			float fTemp462 = fTemp461 + fVec461[4];
			fVec462[0] = fTemp462;
			float fTemp463 = fTemp462 + fVec462[8];
			fVec463[IOTA0 & 31] = fTemp463;
			float fTemp464 = fTemp463 + fVec463[(IOTA0 - 16) & 31];
			fVec464[IOTA0 & 63] = fTemp464;
			float fTemp465 = fTemp464 + fVec464[(IOTA0 - 32) & 63];
			fVec465[IOTA0 & 127] = fTemp465;
			float fTemp466 = fTemp465 + fVec465[(IOTA0 - 64) & 127];
			fVec466[IOTA0 & 255] = fTemp466;
			float fTemp467 = fTemp466 + fVec466[(IOTA0 - 128) & 255];
			fVec467[IOTA0 & 511] = fTemp467;
			float fTemp468 = fTemp467 + fVec467[(IOTA0 - 256) & 511];
			fVec468[IOTA0 & 1023] = fTemp468;
			fVec469[IOTA0 & 2047] = fTemp468 + fVec468[(IOTA0 - 512) & 1023];
			fVec470[0] = 0.0f - fConst65 * (fConst62 * fRec139[1] - fConst63 * fRec122[2]);
			fRec140[0] = fVec470[1] + fConst65 * (fConst55 * fRec122[1] - 2.0f * (fConst59 * fRec140[1] - fConst57 * fRec122[2]));
			fRec139[0] = fRec140[0];
			fVec471[0] = 0.50032705f * fRec139[1] - fConst70 * fRec137[1];
			fRec138[0] = fConst73 * fRec139[1] + fConst72 * (fVec471[1] - fConst68 * fRec138[1] + 0.50032705f * fRec139[0]);
			fRec137[0] = fRec138[0];
			float fTemp469 = mydsp_faustpower2_f(fRec137[0]);
			fVec472[0] = fTemp469;
			float fTemp470 = fTemp469 + fVec472[1];
			fVec473[0] = fTemp470;
			float fTemp471 = fTemp470 + fVec473[2];
			fVec474[0] = fTemp471;
			float fTemp472 = fTemp471 + fVec474[4];
			fVec475[0] = fTemp472;
			float fTemp473 = fTemp472 + fVec475[8];
			fVec476[IOTA0 & 31] = fTemp473;
			float fTemp474 = fTemp473 + fVec476[(IOTA0 - 16) & 31];
			fVec477[IOTA0 & 63] = fTemp474;
			float fTemp475 = fTemp474 + fVec477[(IOTA0 - 32) & 63];
			fVec478[IOTA0 & 127] = fTemp475;
			float fTemp476 = fTemp475 + fVec478[(IOTA0 - 64) & 127];
			fVec479[IOTA0 & 255] = fTemp476;
			float fTemp477 = fTemp476 + fVec479[(IOTA0 - 128) & 255];
			fVec480[IOTA0 & 511] = fTemp477;
			float fTemp478 = fTemp477 + fVec480[(IOTA0 - 256) & 511];
			fVec481[IOTA0 & 1023] = fTemp478;
			fVec482[IOTA0 & 2047] = fTemp478 + fVec481[(IOTA0 - 512) & 1023];
			float fTemp479 = fSlow0 + fRec124[1] + (0.691f - (4.3429446f * std::log(std::max<float>(1e-12f, fConst309 * (((iConst307) ? 0.86000985f * fVec482[(IOTA0 - iConst308) & 2047] : 0.0f) + ((iConst305) ? 0.86000985f * fVec481[(IOTA0 - iConst306) & 1023] : 0.0f) + ((iConst303) ? 0.86000985f * fVec480[(IOTA0 - iConst304) & 511] : 0.0f) + ((iConst301) ? 0.86000985f * fVec479[(IOTA0 - iConst302) & 255] : 0.0f) + ((iConst299) ? 0.86000985f * fVec478[(IOTA0 - iConst300) & 127] : 0.0f) + ((iConst297) ? 0.86000985f * fVec477[(IOTA0 - iConst298) & 63] : 0.0f) + ((iConst295) ? 0.86000985f * fVec476[(IOTA0 - iConst296) & 31] : 0.0f) + ((iConst293) ? 0.86000985f * fVec475[iConst294] : 0.0f) + ((iConst291) ? 0.86000985f * fVec474[iConst292] : 0.0f) + ((iConst290) ? 0.86000985f * fTemp469 : 0.0f) + ((iConst289) ? 0.86000985f * fVec473[iConst290] : 0.0f) + ((iConst307) ? 0.86000985f * fVec469[(IOTA0 - iConst308) & 2047] : 0.0f) + ((iConst305) ? 0.86000985f * fVec468[(IOTA0 - iConst306) & 1023] : 0.0f) + ((iConst303) ? 0.86000985f * fVec467[(IOTA0 - iConst304) & 511] : 0.0f) + ((iConst301) ? 0.86000985f * fVec466[(IOTA0 - iConst302) & 255] : 0.0f) + ((iConst299) ? 0.86000985f * fVec465[(IOTA0 - iConst300) & 127] : 0.0f) + ((iConst297) ? 0.86000985f * fVec464[(IOTA0 - iConst298) & 63] : 0.0f) + ((iConst295) ? 0.86000985f * fVec463[(IOTA0 - iConst296) & 31] : 0.0f) + ((iConst293) ? 0.86000985f * fVec462[iConst294] : 0.0f) + ((iConst291) ? 0.86000985f * fVec461[iConst292] : 0.0f) + ((iConst290) ? 0.86000985f * fTemp459 : 0.0f) + ((iConst289) ? 0.86000985f * fVec460[iConst290] : 0.0f)))) + fRec127[1] * fTemp457 + fRec128[1]));
			float fTemp480 = fTemp456 * fTemp479 / fTemp458;
			fRec127[0] = fRec127[1] + 2.0f * fTemp480;
			float fTemp481 = fRec127[1] + fTemp480;
			float fTemp482 = fTemp456 * fTemp481;
			fRec128[0] = fRec128[1] + 2.0f * fTemp482;
			float fRec129 = fTemp481;
			float fRec130 = fTemp479 / fTemp458;
			float fRec131 = fRec128[1] + fTemp482;
			fRec125[0] = fRec129;
			float fRec126 = fRec131;
			fVbargraph22 = FAUSTFLOAT(std::max<float>(-3e+01f, std::min<float>(3e+01f, fRec126)));
			fRec124[0] = fVbargraph22;
			float fTemp483 = std::pow(1e+01f, 0.05f * fRec124[0]);
			fRec122[0] = fTemp483 * fTemp445;
			fVec483[IOTA0 & 32767] = fRec11[0] * fTemp2 + fConst37 * fTemp8 * fTemp6;
			float fTemp484 = fTemp444 + fRec120[0] * fVec483[(IOTA0 - iConst49) & 32767];
			fRec123[0] = fTemp483 * fTemp484;
			float fTemp485 = fRec122[0] * fTemp446 + fRec121[0] * fTemp445;
			fRec6[0] = fTemp485 - fConst23 * (fConst22 * fRec6[2] + fConst16 * fRec6[1]);
			fRec5[0] = fConst23 * (fConst15 * fRec6[0] + fConst310 * fRec6[1] + fConst15 * fRec6[2]) - fConst21 * (fConst20 * fRec5[2] + fConst16 * fRec5[1]);
			fRec4[0] = fConst21 * (fConst15 * fRec5[0] + fConst310 * fRec5[1] + fConst15 * fRec5[2]) - fConst19 * (fConst18 * fRec4[2] + fConst16 * fRec4[1]);
			float fTemp486 = std::fabs(fConst19 * (fConst15 * fRec4[0] + fConst310 * fRec4[1] + fConst15 * fRec4[2]));
			fVec484[0] = fTemp486;
			float fTemp487 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp486));
			int iTemp488 = (fTemp487 > fSlow27) + (fTemp487 > fSlow10);
			float fTemp489 = fTemp487 + 18.0f - fSlow0;
			float fTemp490 = 0.0f - fSlow29 * std::max<float>(0.0f, ((iTemp488 == 0) ? 0.0f : ((iTemp488 == 1) ? fSlow28 * mydsp_faustpower2_f(fSlow26 + fTemp489) : fSlow4 + fTemp489)));
			float fTemp491 = ((fTemp490 > fRec3[1]) ? fConst311 : fSlow33);
			fRec3[0] = fTemp490 * (1.0f - fTemp491) + fRec3[1] * fTemp491;
			float fTemp492 = fRec123[0] * fTemp446 + fRec121[0] * fTemp484;
			fRec144[0] = fTemp492 - fConst23 * (fConst22 * fRec144[2] + fConst16 * fRec144[1]);
			fRec143[0] = fConst23 * (fConst15 * fRec144[0] + fConst310 * fRec144[1] + fConst15 * fRec144[2]) - fConst21 * (fConst20 * fRec143[2] + fConst16 * fRec143[1]);
			fRec142[0] = fConst21 * (fConst15 * fRec143[0] + fConst310 * fRec143[1] + fConst15 * fRec143[2]) - fConst19 * (fConst18 * fRec142[2] + fConst16 * fRec142[1]);
			float fTemp493 = std::fabs(fConst19 * (fConst15 * fRec142[0] + fConst310 * fRec142[1] + fConst15 * fRec142[2]));
			fVec485[0] = fTemp493;
			float fTemp494 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp493));
			int iTemp495 = (fTemp494 > fSlow27) + (fTemp494 > fSlow10);
			float fTemp496 = fTemp494 + 18.0f - fSlow0;
			float fTemp497 = 0.0f - fSlow29 * std::max<float>(0.0f, ((iTemp495 == 0) ? 0.0f : ((iTemp495 == 1) ? fSlow28 * mydsp_faustpower2_f(fSlow26 + fTemp496) : fSlow4 + fTemp496)));
			float fTemp498 = ((fTemp497 > fRec141[1]) ? fConst311 : fSlow33);
			fRec141[0] = fTemp497 * (1.0f - fTemp498) + fRec141[1] * fTemp498;
			float fTemp499 = std::max<float>(fTemp486, fVec484[1]);
			fVec486[0] = fTemp499;
			float fTemp500 = std::max<float>(fTemp499, fVec486[2]);
			fVec487[0] = fTemp500;
			float fTemp501 = std::max<float>(fTemp500, fVec487[4]);
			fVec488[0] = fTemp501;
			float fTemp502 = std::max<float>(fTemp501, fVec488[8]);
			fVec489[IOTA0 & 31] = fTemp502;
			float fTemp503 = std::max<float>(fTemp502, fVec489[(IOTA0 - 16) & 31]);
			fVec490[IOTA0 & 63] = fTemp503;
			float fTemp504 = std::max<float>(fTemp503, fVec490[(IOTA0 - 32) & 63]);
			fVec491[IOTA0 & 127] = fTemp504;
			float fTemp505 = std::max<float>(fTemp504, fVec491[(IOTA0 - 64) & 127]);
			fVec492[IOTA0 & 255] = fTemp505;
			float fTemp506 = std::max<float>(fTemp505, fVec492[(IOTA0 - 128) & 255]);
			fVec493[IOTA0 & 511] = fTemp506;
			float fTemp507 = std::max<float>(fTemp506, fVec493[(IOTA0 - 256) & 511]);
			fVec494[IOTA0 & 1023] = fTemp507;
			float fTemp508 = std::max<float>(fTemp507, fVec494[(IOTA0 - 512) & 1023]);
			fVec495[IOTA0 & 2047] = fTemp508;
			fVec496[IOTA0 & 4095] = std::max<float>(fTemp508, fVec495[(IOTA0 - 1024) & 2047]);
			float fTemp509 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst312) ? fTemp486 : -3.4028235e+38f), ((iConst313) ? fVec486[iConst312] : -3.4028235e+38f)), ((iConst314) ? fVec487[iConst315] : -3.4028235e+38f)), ((iConst316) ? fVec488[iConst317] : -3.4028235e+38f)), ((iConst318) ? fVec489[(IOTA0 - iConst319) & 31] : -3.4028235e+38f)), ((iConst320) ? fVec490[(IOTA0 - iConst321) & 63] : -3.4028235e+38f)), ((iConst322) ? fVec491[(IOTA0 - iConst323) & 127] : -3.4028235e+38f)), ((iConst324) ? fVec492[(IOTA0 - iConst325) & 255] : -3.4028235e+38f)), ((iConst326) ? fVec493[(IOTA0 - iConst327) & 511] : -3.4028235e+38f)), ((iConst328) ? fVec494[(IOTA0 - iConst329) & 1023] : -3.4028235e+38f)), ((iConst330) ? fVec495[(IOTA0 - iConst331) & 2047] : -3.4028235e+38f)), ((iConst332) ? fVec496[(IOTA0 - iConst333) & 4095] : -3.4028235e+38f))));
			int iTemp510 = (fTemp509 > fSlow40) + (fTemp509 > fSlow38);
			float fTemp511 = fTemp509 + 18.0f;
			float fTemp512 = std::max<float>(fSlow34, fSlow43 * ((iTemp510 == 0) ? fSlow4 + (fTemp511 - fSlow0) : ((iTemp510 == 1) ? fSlow41 * mydsp_faustpower2_f(fSlow4 + (fTemp511 - fSlow37)) : 0.0f)));
			float fTemp513 = (((fSlow45 * fTemp512) > fRec145[1]) ? fSlow52 : fSlow49);
			fRec145[0] = fSlow45 * fTemp512 * (1.0f - fTemp513) + fRec145[1] * fTemp513;
			float fTemp514 = std::max<float>(fTemp493, fVec485[1]);
			fVec497[0] = fTemp514;
			float fTemp515 = std::max<float>(fTemp514, fVec497[2]);
			fVec498[0] = fTemp515;
			float fTemp516 = std::max<float>(fTemp515, fVec498[4]);
			fVec499[0] = fTemp516;
			float fTemp517 = std::max<float>(fTemp516, fVec499[8]);
			fVec500[IOTA0 & 31] = fTemp517;
			float fTemp518 = std::max<float>(fTemp517, fVec500[(IOTA0 - 16) & 31]);
			fVec501[IOTA0 & 63] = fTemp518;
			float fTemp519 = std::max<float>(fTemp518, fVec501[(IOTA0 - 32) & 63]);
			fVec502[IOTA0 & 127] = fTemp519;
			float fTemp520 = std::max<float>(fTemp519, fVec502[(IOTA0 - 64) & 127]);
			fVec503[IOTA0 & 255] = fTemp520;
			float fTemp521 = std::max<float>(fTemp520, fVec503[(IOTA0 - 128) & 255]);
			fVec504[IOTA0 & 511] = fTemp521;
			float fTemp522 = std::max<float>(fTemp521, fVec504[(IOTA0 - 256) & 511]);
			fVec505[IOTA0 & 1023] = fTemp522;
			float fTemp523 = std::max<float>(fTemp522, fVec505[(IOTA0 - 512) & 1023]);
			fVec506[IOTA0 & 2047] = fTemp523;
			fVec507[IOTA0 & 4095] = std::max<float>(fTemp523, fVec506[(IOTA0 - 1024) & 2047]);
			float fTemp524 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst312) ? fTemp493 : -3.4028235e+38f), ((iConst313) ? fVec497[iConst312] : -3.4028235e+38f)), ((iConst314) ? fVec498[iConst315] : -3.4028235e+38f)), ((iConst316) ? fVec499[iConst317] : -3.4028235e+38f)), ((iConst318) ? fVec500[(IOTA0 - iConst319) & 31] : -3.4028235e+38f)), ((iConst320) ? fVec501[(IOTA0 - iConst321) & 63] : -3.4028235e+38f)), ((iConst322) ? fVec502[(IOTA0 - iConst323) & 127] : -3.4028235e+38f)), ((iConst324) ? fVec503[(IOTA0 - iConst325) & 255] : -3.4028235e+38f)), ((iConst326) ? fVec504[(IOTA0 - iConst327) & 511] : -3.4028235e+38f)), ((iConst328) ? fVec505[(IOTA0 - iConst329) & 1023] : -3.4028235e+38f)), ((iConst330) ? fVec506[(IOTA0 - iConst331) & 2047] : -3.4028235e+38f)), ((iConst332) ? fVec507[(IOTA0 - iConst333) & 4095] : -3.4028235e+38f))));
			int iTemp525 = (fTemp524 > fSlow40) + (fTemp524 > fSlow38);
			float fTemp526 = fTemp524 + 18.0f;
			float fTemp527 = std::max<float>(fSlow34, fSlow43 * ((iTemp525 == 0) ? fSlow4 + (fTemp526 - fSlow0) : ((iTemp525 == 1) ? fSlow41 * mydsp_faustpower2_f(fSlow4 + (fTemp526 - fSlow37)) : 0.0f)));
			float fTemp528 = (((fSlow45 * fTemp527) > fRec146[1]) ? fSlow52 : fSlow49);
			fRec146[0] = fSlow45 * fTemp527 * (1.0f - fTemp528) + fRec146[1] * fTemp528;
			float fTemp529 = fSlow6 + std::min<float>(std::min<float>(fRec3[0], fRec141[0]), std::max<float>(fRec145[0], fRec146[0]));
			fVbargraph23 = FAUSTFLOAT(std::min<float>(12.0f, std::max<float>(-12.0f, fTemp529)));
			float fTemp530 = std::pow(1e+01f, 0.025f * fTemp529);
			float fTemp531 = 1.0f - mydsp_faustpower2_f(fTemp530);
			float fTemp532 = std::sqrt(fTemp530);
			float fTemp533 = fConst13 * fTemp532 * (fConst13 * fTemp532 + 1.4285715f) + 1.0f;
			fRec156[0] = fConst23 * (fRec6[2] + fRec6[0] + 2.0f * fRec6[1]) - fConst21 * (fConst20 * fRec156[2] + fConst16 * fRec156[1]);
			fRec155[0] = fConst21 * (fRec156[2] + fRec156[0] + 2.0f * fRec156[1]) - fConst19 * (fConst18 * fRec155[2] + fConst16 * fRec155[1]);
			fRec154[0] = fConst19 * (fRec155[2] + fRec155[0] + 2.0f * fRec155[1]) - fConst344 * (fConst343 * fRec154[2] + fConst337 * fRec154[1]);
			fRec153[0] = fConst344 * (fConst336 * fRec154[0] + fConst345 * fRec154[1] + fConst336 * fRec154[2]) - fConst342 * (fConst341 * fRec153[2] + fConst337 * fRec153[1]);
			fRec152[0] = fConst342 * (fConst336 * fRec153[0] + fConst345 * fRec153[1] + fConst336 * fRec153[2]) - fConst340 * (fConst339 * fRec152[2] + fConst337 * fRec152[1]);
			float fTemp534 = std::fabs(fConst340 * (fConst336 * fRec152[0] + fConst345 * fRec152[1] + fConst336 * fRec152[2]));
			fVec508[0] = fTemp534;
			float fTemp535 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp534));
			int iTemp536 = (fTemp535 > fSlow57) + (fTemp535 > fSlow55);
			float fTemp537 = fTemp535 + 16.0f - fSlow0;
			float fTemp538 = 0.0f - fSlow29 * std::max<float>(0.0f, ((iTemp536 == 0) ? 0.0f : ((iTemp536 == 1) ? fSlow28 * mydsp_faustpower2_f(fSlow56 + fTemp537) : fSlow53 + fTemp537)));
			float fTemp539 = ((fTemp538 > fRec151[1]) ? fSlow60 : fSlow33);
			fRec151[0] = fTemp538 * (1.0f - fTemp539) + fRec151[1] * fTemp539;
			fRec162[0] = fConst23 * (fRec144[2] + fRec144[0] + 2.0f * fRec144[1]) - fConst21 * (fConst20 * fRec162[2] + fConst16 * fRec162[1]);
			fRec161[0] = fConst21 * (fRec162[2] + fRec162[0] + 2.0f * fRec162[1]) - fConst19 * (fConst18 * fRec161[2] + fConst16 * fRec161[1]);
			fRec160[0] = fConst19 * (fRec161[2] + fRec161[0] + 2.0f * fRec161[1]) - fConst344 * (fConst343 * fRec160[2] + fConst337 * fRec160[1]);
			fRec159[0] = fConst344 * (fConst336 * fRec160[0] + fConst345 * fRec160[1] + fConst336 * fRec160[2]) - fConst342 * (fConst341 * fRec159[2] + fConst337 * fRec159[1]);
			fRec158[0] = fConst342 * (fConst336 * fRec159[0] + fConst345 * fRec159[1] + fConst336 * fRec159[2]) - fConst340 * (fConst339 * fRec158[2] + fConst337 * fRec158[1]);
			float fTemp540 = std::fabs(fConst340 * (fConst336 * fRec158[0] + fConst345 * fRec158[1] + fConst336 * fRec158[2]));
			fVec509[0] = fTemp540;
			float fTemp541 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp540));
			int iTemp542 = (fTemp541 > fSlow57) + (fTemp541 > fSlow55);
			float fTemp543 = fTemp541 + 16.0f - fSlow0;
			float fTemp544 = 0.0f - fSlow29 * std::max<float>(0.0f, ((iTemp542 == 0) ? 0.0f : ((iTemp542 == 1) ? fSlow28 * mydsp_faustpower2_f(fSlow56 + fTemp543) : fSlow53 + fTemp543)));
			float fTemp545 = ((fTemp544 > fRec157[1]) ? fSlow60 : fSlow33);
			fRec157[0] = fTemp544 * (1.0f - fTemp545) + fRec157[1] * fTemp545;
			float fTemp546 = std::max<float>(fTemp534, fVec508[1]);
			fVec510[0] = fTemp546;
			float fTemp547 = std::max<float>(fTemp546, fVec510[2]);
			fVec511[0] = fTemp547;
			float fTemp548 = std::max<float>(fTemp547, fVec511[4]);
			fVec512[0] = fTemp548;
			float fTemp549 = std::max<float>(fTemp548, fVec512[8]);
			fVec513[IOTA0 & 31] = fTemp549;
			float fTemp550 = std::max<float>(fTemp549, fVec513[(IOTA0 - 16) & 31]);
			fVec514[IOTA0 & 63] = fTemp550;
			float fTemp551 = std::max<float>(fTemp550, fVec514[(IOTA0 - 32) & 63]);
			fVec515[IOTA0 & 127] = fTemp551;
			float fTemp552 = std::max<float>(fTemp551, fVec515[(IOTA0 - 64) & 127]);
			fVec516[IOTA0 & 255] = fTemp552;
			float fTemp553 = std::max<float>(fTemp552, fVec516[(IOTA0 - 128) & 255]);
			fVec517[IOTA0 & 511] = fTemp553;
			float fTemp554 = std::max<float>(fTemp553, fVec517[(IOTA0 - 256) & 511]);
			fVec518[IOTA0 & 1023] = fTemp554;
			float fTemp555 = std::max<float>(fTemp554, fVec518[(IOTA0 - 512) & 1023]);
			fVec519[IOTA0 & 2047] = fTemp555;
			fVec520[IOTA0 & 4095] = std::max<float>(fTemp555, fVec519[(IOTA0 - 1024) & 2047]);
			float fTemp556 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst312) ? fTemp534 : -3.4028235e+38f), ((iConst313) ? fVec510[iConst312] : -3.4028235e+38f)), ((iConst314) ? fVec511[iConst315] : -3.4028235e+38f)), ((iConst316) ? fVec512[iConst317] : -3.4028235e+38f)), ((iConst318) ? fVec513[(IOTA0 - iConst319) & 31] : -3.4028235e+38f)), ((iConst320) ? fVec514[(IOTA0 - iConst321) & 63] : -3.4028235e+38f)), ((iConst322) ? fVec515[(IOTA0 - iConst323) & 127] : -3.4028235e+38f)), ((iConst324) ? fVec516[(IOTA0 - iConst325) & 255] : -3.4028235e+38f)), ((iConst326) ? fVec517[(IOTA0 - iConst327) & 511] : -3.4028235e+38f)), ((iConst328) ? fVec518[(IOTA0 - iConst329) & 1023] : -3.4028235e+38f)), ((iConst330) ? fVec519[(IOTA0 - iConst331) & 2047] : -3.4028235e+38f)), ((iConst332) ? fVec520[(IOTA0 - iConst333) & 4095] : -3.4028235e+38f))));
			int iTemp557 = (fTemp556 > fSlow62) + (fTemp556 > fSlow61);
			float fTemp558 = fTemp556 + 16.0f;
			float fTemp559 = std::max<float>(fSlow34, fSlow64 * ((iTemp557 == 0) ? fSlow53 + (fTemp558 - fSlow0) : ((iTemp557 == 1) ? fSlow41 * mydsp_faustpower2_f(fSlow53 + (fTemp558 - fSlow37)) : 0.0f)));
			float fTemp560 = (((fSlow66 * fTemp559) > fRec163[1]) ? fSlow72 : fSlow69);
			fRec163[0] = fSlow66 * fTemp559 * (1.0f - fTemp560) + fRec163[1] * fTemp560;
			float fTemp561 = std::max<float>(fTemp540, fVec509[1]);
			fVec521[0] = fTemp561;
			float fTemp562 = std::max<float>(fTemp561, fVec521[2]);
			fVec522[0] = fTemp562;
			float fTemp563 = std::max<float>(fTemp562, fVec522[4]);
			fVec523[0] = fTemp563;
			float fTemp564 = std::max<float>(fTemp563, fVec523[8]);
			fVec524[IOTA0 & 31] = fTemp564;
			float fTemp565 = std::max<float>(fTemp564, fVec524[(IOTA0 - 16) & 31]);
			fVec525[IOTA0 & 63] = fTemp565;
			float fTemp566 = std::max<float>(fTemp565, fVec525[(IOTA0 - 32) & 63]);
			fVec526[IOTA0 & 127] = fTemp566;
			float fTemp567 = std::max<float>(fTemp566, fVec526[(IOTA0 - 64) & 127]);
			fVec527[IOTA0 & 255] = fTemp567;
			float fTemp568 = std::max<float>(fTemp567, fVec527[(IOTA0 - 128) & 255]);
			fVec528[IOTA0 & 511] = fTemp568;
			float fTemp569 = std::max<float>(fTemp568, fVec528[(IOTA0 - 256) & 511]);
			fVec529[IOTA0 & 1023] = fTemp569;
			float fTemp570 = std::max<float>(fTemp569, fVec529[(IOTA0 - 512) & 1023]);
			fVec530[IOTA0 & 2047] = fTemp570;
			fVec531[IOTA0 & 4095] = std::max<float>(fTemp570, fVec530[(IOTA0 - 1024) & 2047]);
			float fTemp571 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst312) ? fTemp540 : -3.4028235e+38f), ((iConst313) ? fVec521[iConst312] : -3.4028235e+38f)), ((iConst314) ? fVec522[iConst315] : -3.4028235e+38f)), ((iConst316) ? fVec523[iConst317] : -3.4028235e+38f)), ((iConst318) ? fVec524[(IOTA0 - iConst319) & 31] : -3.4028235e+38f)), ((iConst320) ? fVec525[(IOTA0 - iConst321) & 63] : -3.4028235e+38f)), ((iConst322) ? fVec526[(IOTA0 - iConst323) & 127] : -3.4028235e+38f)), ((iConst324) ? fVec527[(IOTA0 - iConst325) & 255] : -3.4028235e+38f)), ((iConst326) ? fVec528[(IOTA0 - iConst327) & 511] : -3.4028235e+38f)), ((iConst328) ? fVec529[(IOTA0 - iConst329) & 1023] : -3.4028235e+38f)), ((iConst330) ? fVec530[(IOTA0 - iConst331) & 2047] : -3.4028235e+38f)), ((iConst332) ? fVec531[(IOTA0 - iConst333) & 4095] : -3.4028235e+38f))));
			int iTemp572 = (fTemp571 > fSlow62) + (fTemp571 > fSlow61);
			float fTemp573 = fTemp571 + 16.0f;
			float fTemp574 = std::max<float>(fSlow34, fSlow64 * ((iTemp572 == 0) ? fSlow53 + (fTemp573 - fSlow0) : ((iTemp572 == 1) ? fSlow41 * mydsp_faustpower2_f(fSlow53 + (fTemp573 - fSlow37)) : 0.0f)));
			float fTemp575 = (((fSlow66 * fTemp574) > fRec164[1]) ? fSlow72 : fSlow69);
			fRec164[0] = fSlow66 * fTemp574 * (1.0f - fTemp575) + fRec164[1] * fTemp575;
			float fTemp576 = fSlow6 + std::min<float>(std::min<float>(fRec151[0], fRec157[0]), std::max<float>(fRec163[0], fRec164[0]));
			fVbargraph24 = FAUSTFLOAT(std::min<float>(12.0f, std::max<float>(-12.0f, fTemp576)));
			float fTemp577 = 0.025f * fTemp576;
			float fTemp578 = std::pow(1e+01f, fTemp577);
			float fTemp579 = mydsp_faustpower2_f(fTemp578) + -1.0f;
			float fTemp580 = std::sqrt(fTemp578);
			float fTemp581 = fConst13 * ((fConst13 / fTemp580 + 1.4285715f) / fTemp580) + 1.0f;
			float fTemp582 = std::pow(1e+01f, 0.0f - fTemp577);
			float fTemp583 = mydsp_faustpower2_f(fTemp582) + -1.0f;
			float fTemp584 = std::sqrt(fTemp582);
			float fTemp585 = fConst334 * ((fConst334 / fTemp584 + 1.4285715f) / fTemp584) + 1.0f;
			fRec178[0] = fConst344 * (fRec154[2] + fRec154[0] + 2.0f * fRec154[1]) - fConst342 * (fConst341 * fRec178[2] + fConst337 * fRec178[1]);
			fRec177[0] = fConst342 * (fRec178[2] + fRec178[0] + 2.0f * fRec178[1]) - fConst340 * (fConst339 * fRec177[2] + fConst337 * fRec177[1]);
			fRec176[0] = fConst340 * (fRec177[2] + fRec177[0] + 2.0f * fRec177[1]) - fConst356 * (fConst355 * fRec176[2] + fConst349 * fRec176[1]);
			fRec175[0] = fConst356 * (fConst348 * fRec176[0] + fConst357 * fRec176[1] + fConst348 * fRec176[2]) - fConst354 * (fConst353 * fRec175[2] + fConst349 * fRec175[1]);
			fRec174[0] = fConst354 * (fConst348 * fRec175[0] + fConst357 * fRec175[1] + fConst348 * fRec175[2]) - fConst352 * (fConst351 * fRec174[2] + fConst349 * fRec174[1]);
			float fTemp586 = std::fabs(fConst352 * (fConst348 * fRec174[0] + fConst357 * fRec174[1] + fConst348 * fRec174[2]));
			fVec532[0] = fTemp586;
			float fTemp587 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp586));
			int iTemp588 = (fTemp587 > fSlow76) + (fTemp587 > fSlow74);
			float fTemp589 = fTemp587 + 12.0f - fSlow0;
			float fTemp590 = 0.0f - fSlow29 * std::max<float>(0.0f, ((iTemp588 == 0) ? 0.0f : ((iTemp588 == 1) ? fSlow28 * mydsp_faustpower2_f(fSlow75 + fTemp589) : fSlow6 + fTemp589)));
			float fTemp591 = ((fTemp590 > fRec173[1]) ? fSlow79 : fSlow33);
			fRec173[0] = fTemp590 * (1.0f - fTemp591) + fRec173[1] * fTemp591;
			fRec184[0] = fConst344 * (fRec160[2] + fRec160[0] + 2.0f * fRec160[1]) - fConst342 * (fConst341 * fRec184[2] + fConst337 * fRec184[1]);
			fRec183[0] = fConst342 * (fRec184[2] + fRec184[0] + 2.0f * fRec184[1]) - fConst340 * (fConst339 * fRec183[2] + fConst337 * fRec183[1]);
			fRec182[0] = fConst340 * (fRec183[2] + fRec183[0] + 2.0f * fRec183[1]) - fConst356 * (fConst355 * fRec182[2] + fConst349 * fRec182[1]);
			fRec181[0] = fConst356 * (fConst348 * fRec182[0] + fConst357 * fRec182[1] + fConst348 * fRec182[2]) - fConst354 * (fConst353 * fRec181[2] + fConst349 * fRec181[1]);
			fRec180[0] = fConst354 * (fConst348 * fRec181[0] + fConst357 * fRec181[1] + fConst348 * fRec181[2]) - fConst352 * (fConst351 * fRec180[2] + fConst349 * fRec180[1]);
			float fTemp592 = std::fabs(fConst352 * (fConst348 * fRec180[0] + fConst357 * fRec180[1] + fConst348 * fRec180[2]));
			fVec533[0] = fTemp592;
			float fTemp593 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp592));
			int iTemp594 = (fTemp593 > fSlow76) + (fTemp593 > fSlow74);
			float fTemp595 = fTemp593 + 12.0f - fSlow0;
			float fTemp596 = 0.0f - fSlow29 * std::max<float>(0.0f, ((iTemp594 == 0) ? 0.0f : ((iTemp594 == 1) ? fSlow28 * mydsp_faustpower2_f(fSlow75 + fTemp595) : fSlow6 + fTemp595)));
			float fTemp597 = ((fTemp596 > fRec179[1]) ? fSlow79 : fSlow33);
			fRec179[0] = fTemp596 * (1.0f - fTemp597) + fRec179[1] * fTemp597;
			float fTemp598 = std::max<float>(fTemp586, fVec532[1]);
			fVec534[0] = fTemp598;
			float fTemp599 = std::max<float>(fTemp598, fVec534[2]);
			fVec535[0] = fTemp599;
			float fTemp600 = std::max<float>(fTemp599, fVec535[4]);
			fVec536[0] = fTemp600;
			float fTemp601 = std::max<float>(fTemp600, fVec536[8]);
			fVec537[IOTA0 & 31] = fTemp601;
			float fTemp602 = std::max<float>(fTemp601, fVec537[(IOTA0 - 16) & 31]);
			fVec538[IOTA0 & 63] = fTemp602;
			float fTemp603 = std::max<float>(fTemp602, fVec538[(IOTA0 - 32) & 63]);
			fVec539[IOTA0 & 127] = fTemp603;
			float fTemp604 = std::max<float>(fTemp603, fVec539[(IOTA0 - 64) & 127]);
			fVec540[IOTA0 & 255] = fTemp604;
			float fTemp605 = std::max<float>(fTemp604, fVec540[(IOTA0 - 128) & 255]);
			fVec541[IOTA0 & 511] = fTemp605;
			float fTemp606 = std::max<float>(fTemp605, fVec541[(IOTA0 - 256) & 511]);
			fVec542[IOTA0 & 1023] = fTemp606;
			float fTemp607 = std::max<float>(fTemp606, fVec542[(IOTA0 - 512) & 1023]);
			fVec543[IOTA0 & 2047] = fTemp607;
			fVec544[IOTA0 & 4095] = std::max<float>(fTemp607, fVec543[(IOTA0 - 1024) & 2047]);
			float fTemp608 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst312) ? fTemp586 : -3.4028235e+38f), ((iConst313) ? fVec534[iConst312] : -3.4028235e+38f)), ((iConst314) ? fVec535[iConst315] : -3.4028235e+38f)), ((iConst316) ? fVec536[iConst317] : -3.4028235e+38f)), ((iConst318) ? fVec537[(IOTA0 - iConst319) & 31] : -3.4028235e+38f)), ((iConst320) ? fVec538[(IOTA0 - iConst321) & 63] : -3.4028235e+38f)), ((iConst322) ? fVec539[(IOTA0 - iConst323) & 127] : -3.4028235e+38f)), ((iConst324) ? fVec540[(IOTA0 - iConst325) & 255] : -3.4028235e+38f)), ((iConst326) ? fVec541[(IOTA0 - iConst327) & 511] : -3.4028235e+38f)), ((iConst328) ? fVec542[(IOTA0 - iConst329) & 1023] : -3.4028235e+38f)), ((iConst330) ? fVec543[(IOTA0 - iConst331) & 2047] : -3.4028235e+38f)), ((iConst332) ? fVec544[(IOTA0 - iConst333) & 4095] : -3.4028235e+38f))));
			int iTemp609 = (fTemp608 > fSlow81) + (fTemp608 > fSlow80);
			float fTemp610 = fTemp608 + 12.0f;
			float fTemp611 = std::max<float>(fSlow34, fSlow83 * ((iTemp609 == 0) ? fSlow6 + (fTemp610 - fSlow0) : ((iTemp609 == 1) ? fSlow41 * mydsp_faustpower2_f(fSlow6 + (fTemp610 - fSlow37)) : 0.0f)));
			float fTemp612 = (((fSlow85 * fTemp611) > fRec185[1]) ? fSlow92 : fSlow89);
			fRec185[0] = fSlow85 * fTemp611 * (1.0f - fTemp612) + fRec185[1] * fTemp612;
			float fTemp613 = std::max<float>(fTemp592, fVec533[1]);
			fVec545[0] = fTemp613;
			float fTemp614 = std::max<float>(fTemp613, fVec545[2]);
			fVec546[0] = fTemp614;
			float fTemp615 = std::max<float>(fTemp614, fVec546[4]);
			fVec547[0] = fTemp615;
			float fTemp616 = std::max<float>(fTemp615, fVec547[8]);
			fVec548[IOTA0 & 31] = fTemp616;
			float fTemp617 = std::max<float>(fTemp616, fVec548[(IOTA0 - 16) & 31]);
			fVec549[IOTA0 & 63] = fTemp617;
			float fTemp618 = std::max<float>(fTemp617, fVec549[(IOTA0 - 32) & 63]);
			fVec550[IOTA0 & 127] = fTemp618;
			float fTemp619 = std::max<float>(fTemp618, fVec550[(IOTA0 - 64) & 127]);
			fVec551[IOTA0 & 255] = fTemp619;
			float fTemp620 = std::max<float>(fTemp619, fVec551[(IOTA0 - 128) & 255]);
			fVec552[IOTA0 & 511] = fTemp620;
			float fTemp621 = std::max<float>(fTemp620, fVec552[(IOTA0 - 256) & 511]);
			fVec553[IOTA0 & 1023] = fTemp621;
			float fTemp622 = std::max<float>(fTemp621, fVec553[(IOTA0 - 512) & 1023]);
			fVec554[IOTA0 & 2047] = fTemp622;
			fVec555[IOTA0 & 4095] = std::max<float>(fTemp622, fVec554[(IOTA0 - 1024) & 2047]);
			float fTemp623 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst312) ? fTemp592 : -3.4028235e+38f), ((iConst313) ? fVec545[iConst312] : -3.4028235e+38f)), ((iConst314) ? fVec546[iConst315] : -3.4028235e+38f)), ((iConst316) ? fVec547[iConst317] : -3.4028235e+38f)), ((iConst318) ? fVec548[(IOTA0 - iConst319) & 31] : -3.4028235e+38f)), ((iConst320) ? fVec549[(IOTA0 - iConst321) & 63] : -3.4028235e+38f)), ((iConst322) ? fVec550[(IOTA0 - iConst323) & 127] : -3.4028235e+38f)), ((iConst324) ? fVec551[(IOTA0 - iConst325) & 255] : -3.4028235e+38f)), ((iConst326) ? fVec552[(IOTA0 - iConst327) & 511] : -3.4028235e+38f)), ((iConst328) ? fVec553[(IOTA0 - iConst329) & 1023] : -3.4028235e+38f)), ((iConst330) ? fVec554[(IOTA0 - iConst331) & 2047] : -3.4028235e+38f)), ((iConst332) ? fVec555[(IOTA0 - iConst333) & 4095] : -3.4028235e+38f))));
			int iTemp624 = (fTemp623 > fSlow81) + (fTemp623 > fSlow80);
			float fTemp625 = fTemp623 + 12.0f;
			float fTemp626 = std::max<float>(fSlow34, fSlow83 * ((iTemp624 == 0) ? fSlow6 + (fTemp625 - fSlow0) : ((iTemp624 == 1) ? fSlow41 * mydsp_faustpower2_f(fSlow6 + (fTemp625 - fSlow37)) : 0.0f)));
			float fTemp627 = (((fSlow85 * fTemp626) > fRec186[1]) ? fSlow92 : fSlow89);
			fRec186[0] = fSlow85 * fTemp626 * (1.0f - fTemp627) + fRec186[1] * fTemp627;
			float fTemp628 = fSlow6 + std::min<float>(std::min<float>(fRec173[0], fRec179[0]), std::max<float>(fRec185[0], fRec186[0]));
			fVbargraph25 = FAUSTFLOAT(std::min<float>(12.0f, std::max<float>(-12.0f, fTemp628)));
			float fTemp629 = 0.025f * fTemp628;
			float fTemp630 = std::pow(1e+01f, fTemp629);
			float fTemp631 = mydsp_faustpower2_f(fTemp630) + -1.0f;
			float fTemp632 = std::sqrt(fTemp630);
			float fTemp633 = fConst334 * ((fConst334 / fTemp632 + 1.4285715f) / fTemp632) + 1.0f;
			float fTemp634 = std::pow(1e+01f, 0.0f - fTemp629);
			float fTemp635 = mydsp_faustpower2_f(fTemp634) + -1.0f;
			float fTemp636 = std::sqrt(fTemp634);
			float fTemp637 = fConst346 * ((fConst346 / fTemp636 + 1.4285715f) / fTemp636) + 1.0f;
			fRec200[0] = fConst356 * (fRec176[2] + fRec176[0] + 2.0f * fRec176[1]) - fConst354 * (fConst353 * fRec200[2] + fConst349 * fRec200[1]);
			fRec199[0] = fConst354 * (fRec200[2] + fRec200[0] + 2.0f * fRec200[1]) - fConst352 * (fConst351 * fRec199[2] + fConst349 * fRec199[1]);
			fRec198[0] = fConst352 * (fRec199[2] + fRec199[0] + 2.0f * fRec199[1]) - fConst368 * (fConst367 * fRec198[2] + fConst361 * fRec198[1]);
			fRec197[0] = fConst368 * (fConst360 * fRec198[0] + fConst369 * fRec198[1] + fConst360 * fRec198[2]) - fConst366 * (fConst365 * fRec197[2] + fConst361 * fRec197[1]);
			fRec196[0] = fConst366 * (fConst360 * fRec197[0] + fConst369 * fRec197[1] + fConst360 * fRec197[2]) - fConst364 * (fConst363 * fRec196[2] + fConst361 * fRec196[1]);
			float fTemp638 = std::fabs(fConst364 * (fConst360 * fRec196[0] + fConst369 * fRec196[1] + fConst360 * fRec196[2]));
			fVec556[0] = fTemp638;
			float fTemp639 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp638));
			int iTemp640 = (fTemp639 > fSlow95) + (fTemp639 > fSlow94);
			float fTemp641 = fTemp639 + 12.0f - fSlow0;
			float fTemp642 = 0.0f - fSlow29 * std::max<float>(0.0f, ((iTemp640 == 0) ? 0.0f : ((iTemp640 == 1) ? fSlow28 * mydsp_faustpower2_f(fSlow26 + fTemp641) : fSlow4 + fTemp641)));
			float fTemp643 = ((fTemp642 > fRec195[1]) ? fSlow98 : fSlow33);
			fRec195[0] = fTemp642 * (1.0f - fTemp643) + fRec195[1] * fTemp643;
			fRec206[0] = fConst356 * (fRec182[2] + fRec182[0] + 2.0f * fRec182[1]) - fConst354 * (fConst353 * fRec206[2] + fConst349 * fRec206[1]);
			fRec205[0] = fConst354 * (fRec206[2] + fRec206[0] + 2.0f * fRec206[1]) - fConst352 * (fConst351 * fRec205[2] + fConst349 * fRec205[1]);
			fRec204[0] = fConst352 * (fRec205[2] + fRec205[0] + 2.0f * fRec205[1]) - fConst368 * (fConst367 * fRec204[2] + fConst361 * fRec204[1]);
			fRec203[0] = fConst368 * (fConst360 * fRec204[0] + fConst369 * fRec204[1] + fConst360 * fRec204[2]) - fConst366 * (fConst365 * fRec203[2] + fConst361 * fRec203[1]);
			fRec202[0] = fConst366 * (fConst360 * fRec203[0] + fConst369 * fRec203[1] + fConst360 * fRec203[2]) - fConst364 * (fConst363 * fRec202[2] + fConst361 * fRec202[1]);
			float fTemp644 = std::fabs(fConst364 * (fConst360 * fRec202[0] + fConst369 * fRec202[1] + fConst360 * fRec202[2]));
			fVec557[0] = fTemp644;
			float fTemp645 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp644));
			int iTemp646 = (fTemp645 > fSlow95) + (fTemp645 > fSlow94);
			float fTemp647 = fTemp645 + 12.0f - fSlow0;
			float fTemp648 = 0.0f - fSlow29 * std::max<float>(0.0f, ((iTemp646 == 0) ? 0.0f : ((iTemp646 == 1) ? fSlow28 * mydsp_faustpower2_f(fSlow26 + fTemp647) : fSlow4 + fTemp647)));
			float fTemp649 = ((fTemp648 > fRec201[1]) ? fSlow98 : fSlow33);
			fRec201[0] = fTemp648 * (1.0f - fTemp649) + fRec201[1] * fTemp649;
			float fTemp650 = std::max<float>(fTemp638, fVec556[1]);
			fVec558[0] = fTemp650;
			float fTemp651 = std::max<float>(fTemp650, fVec558[2]);
			fVec559[0] = fTemp651;
			float fTemp652 = std::max<float>(fTemp651, fVec559[4]);
			fVec560[0] = fTemp652;
			float fTemp653 = std::max<float>(fTemp652, fVec560[8]);
			fVec561[IOTA0 & 31] = fTemp653;
			float fTemp654 = std::max<float>(fTemp653, fVec561[(IOTA0 - 16) & 31]);
			fVec562[IOTA0 & 63] = fTemp654;
			float fTemp655 = std::max<float>(fTemp654, fVec562[(IOTA0 - 32) & 63]);
			fVec563[IOTA0 & 127] = fTemp655;
			float fTemp656 = std::max<float>(fTemp655, fVec563[(IOTA0 - 64) & 127]);
			fVec564[IOTA0 & 255] = fTemp656;
			float fTemp657 = std::max<float>(fTemp656, fVec564[(IOTA0 - 128) & 255]);
			fVec565[IOTA0 & 511] = fTemp657;
			float fTemp658 = std::max<float>(fTemp657, fVec565[(IOTA0 - 256) & 511]);
			fVec566[IOTA0 & 1023] = fTemp658;
			float fTemp659 = std::max<float>(fTemp658, fVec566[(IOTA0 - 512) & 1023]);
			fVec567[IOTA0 & 2047] = fTemp659;
			fVec568[IOTA0 & 4095] = std::max<float>(fTemp659, fVec567[(IOTA0 - 1024) & 2047]);
			float fTemp660 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst312) ? fTemp638 : -3.4028235e+38f), ((iConst313) ? fVec558[iConst312] : -3.4028235e+38f)), ((iConst314) ? fVec559[iConst315] : -3.4028235e+38f)), ((iConst316) ? fVec560[iConst317] : -3.4028235e+38f)), ((iConst318) ? fVec561[(IOTA0 - iConst319) & 31] : -3.4028235e+38f)), ((iConst320) ? fVec562[(IOTA0 - iConst321) & 63] : -3.4028235e+38f)), ((iConst322) ? fVec563[(IOTA0 - iConst323) & 127] : -3.4028235e+38f)), ((iConst324) ? fVec564[(IOTA0 - iConst325) & 255] : -3.4028235e+38f)), ((iConst326) ? fVec565[(IOTA0 - iConst327) & 511] : -3.4028235e+38f)), ((iConst328) ? fVec566[(IOTA0 - iConst329) & 1023] : -3.4028235e+38f)), ((iConst330) ? fVec567[(IOTA0 - iConst331) & 2047] : -3.4028235e+38f)), ((iConst332) ? fVec568[(IOTA0 - iConst333) & 4095] : -3.4028235e+38f))));
			int iTemp661 = (fTemp660 > fSlow100) + (fTemp660 > fSlow99);
			float fTemp662 = fTemp660 + 12.0f;
			float fTemp663 = std::max<float>(fSlow34, fSlow102 * ((iTemp661 == 0) ? fSlow4 + (fTemp662 - fSlow0) : ((iTemp661 == 1) ? fSlow41 * mydsp_faustpower2_f(fSlow4 + (fTemp662 - fSlow37)) : 0.0f)));
			float fTemp664 = (((fSlow104 * fTemp663) > fRec207[1]) ? fSlow111 : fSlow108);
			fRec207[0] = fSlow104 * fTemp663 * (1.0f - fTemp664) + fRec207[1] * fTemp664;
			float fTemp665 = std::max<float>(fTemp644, fVec557[1]);
			fVec569[0] = fTemp665;
			float fTemp666 = std::max<float>(fTemp665, fVec569[2]);
			fVec570[0] = fTemp666;
			float fTemp667 = std::max<float>(fTemp666, fVec570[4]);
			fVec571[0] = fTemp667;
			float fTemp668 = std::max<float>(fTemp667, fVec571[8]);
			fVec572[IOTA0 & 31] = fTemp668;
			float fTemp669 = std::max<float>(fTemp668, fVec572[(IOTA0 - 16) & 31]);
			fVec573[IOTA0 & 63] = fTemp669;
			float fTemp670 = std::max<float>(fTemp669, fVec573[(IOTA0 - 32) & 63]);
			fVec574[IOTA0 & 127] = fTemp670;
			float fTemp671 = std::max<float>(fTemp670, fVec574[(IOTA0 - 64) & 127]);
			fVec575[IOTA0 & 255] = fTemp671;
			float fTemp672 = std::max<float>(fTemp671, fVec575[(IOTA0 - 128) & 255]);
			fVec576[IOTA0 & 511] = fTemp672;
			float fTemp673 = std::max<float>(fTemp672, fVec576[(IOTA0 - 256) & 511]);
			fVec577[IOTA0 & 1023] = fTemp673;
			float fTemp674 = std::max<float>(fTemp673, fVec577[(IOTA0 - 512) & 1023]);
			fVec578[IOTA0 & 2047] = fTemp674;
			fVec579[IOTA0 & 4095] = std::max<float>(fTemp674, fVec578[(IOTA0 - 1024) & 2047]);
			float fTemp675 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst312) ? fTemp644 : -3.4028235e+38f), ((iConst313) ? fVec569[iConst312] : -3.4028235e+38f)), ((iConst314) ? fVec570[iConst315] : -3.4028235e+38f)), ((iConst316) ? fVec571[iConst317] : -3.4028235e+38f)), ((iConst318) ? fVec572[(IOTA0 - iConst319) & 31] : -3.4028235e+38f)), ((iConst320) ? fVec573[(IOTA0 - iConst321) & 63] : -3.4028235e+38f)), ((iConst322) ? fVec574[(IOTA0 - iConst323) & 127] : -3.4028235e+38f)), ((iConst324) ? fVec575[(IOTA0 - iConst325) & 255] : -3.4028235e+38f)), ((iConst326) ? fVec576[(IOTA0 - iConst327) & 511] : -3.4028235e+38f)), ((iConst328) ? fVec577[(IOTA0 - iConst329) & 1023] : -3.4028235e+38f)), ((iConst330) ? fVec578[(IOTA0 - iConst331) & 2047] : -3.4028235e+38f)), ((iConst332) ? fVec579[(IOTA0 - iConst333) & 4095] : -3.4028235e+38f))));
			int iTemp676 = (fTemp675 > fSlow100) + (fTemp675 > fSlow99);
			float fTemp677 = fTemp675 + 12.0f;
			float fTemp678 = std::max<float>(fSlow34, fSlow102 * ((iTemp676 == 0) ? fSlow4 + (fTemp677 - fSlow0) : ((iTemp676 == 1) ? fSlow41 * mydsp_faustpower2_f(fSlow4 + (fTemp677 - fSlow37)) : 0.0f)));
			float fTemp679 = (((fSlow104 * fTemp678) > fRec208[1]) ? fSlow111 : fSlow108);
			fRec208[0] = fSlow104 * fTemp678 * (1.0f - fTemp679) + fRec208[1] * fTemp679;
			float fTemp680 = fSlow6 + std::min<float>(std::min<float>(fRec195[0], fRec201[0]), std::max<float>(fRec207[0], fRec208[0]));
			fVbargraph26 = FAUSTFLOAT(std::min<float>(12.0f, std::max<float>(-12.0f, fTemp680)));
			float fTemp681 = 0.025f * fTemp680;
			float fTemp682 = std::pow(1e+01f, fTemp681);
			float fTemp683 = mydsp_faustpower2_f(fTemp682) + -1.0f;
			float fTemp684 = std::sqrt(fTemp682);
			float fTemp685 = fConst346 * ((fConst346 / fTemp684 + 1.4285715f) / fTemp684) + 1.0f;
			float fTemp686 = std::pow(1e+01f, 0.0f - fTemp681);
			float fTemp687 = mydsp_faustpower2_f(fTemp686) + -1.0f;
			float fTemp688 = std::sqrt(fTemp686);
			float fTemp689 = fConst358 * ((fConst358 / fTemp688 + 1.4285715f) / fTemp688) + 1.0f;
			fRec219[0] = fConst368 * (fRec198[2] + fRec198[0] + 2.0f * fRec198[1]) - fConst366 * (fConst365 * fRec219[2] + fConst361 * fRec219[1]);
			fRec218[0] = fConst366 * (fRec219[2] + fRec219[0] + 2.0f * fRec219[1]) - fConst364 * (fConst363 * fRec218[2] + fConst361 * fRec218[1]);
			float fTemp690 = std::fabs(fConst364 * (fRec218[2] + fRec218[0] + 2.0f * fRec218[1]));
			fVec580[0] = fTemp690;
			float fTemp691 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp690));
			int iTemp692 = (fTemp691 > fSlow115) + (fTemp691 > fSlow113);
			float fTemp693 = fTemp691 + 18.0f - fSlow0;
			float fTemp694 = 0.0f - fSlow29 * std::max<float>(0.0f, ((iTemp692 == 0) ? 0.0f : ((iTemp692 == 1) ? fSlow28 * mydsp_faustpower2_f(fSlow114 + fTemp693) : fSlow2 + fTemp693)));
			float fTemp695 = ((fTemp694 > fRec217[1]) ? fSlow118 : fSlow33);
			fRec217[0] = fTemp694 * (1.0f - fTemp695) + fRec217[1] * fTemp695;
			fRec222[0] = fConst368 * (fRec204[2] + fRec204[0] + 2.0f * fRec204[1]) - fConst366 * (fConst365 * fRec222[2] + fConst361 * fRec222[1]);
			fRec221[0] = fConst366 * (fRec222[2] + fRec222[0] + 2.0f * fRec222[1]) - fConst364 * (fConst363 * fRec221[2] + fConst361 * fRec221[1]);
			float fTemp696 = std::fabs(fConst364 * (fRec221[2] + fRec221[0] + 2.0f * fRec221[1]));
			fVec581[0] = fTemp696;
			float fTemp697 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp696));
			int iTemp698 = (fTemp697 > fSlow115) + (fTemp697 > fSlow113);
			float fTemp699 = fTemp697 + 18.0f - fSlow0;
			float fTemp700 = 0.0f - fSlow29 * std::max<float>(0.0f, ((iTemp698 == 0) ? 0.0f : ((iTemp698 == 1) ? fSlow28 * mydsp_faustpower2_f(fSlow114 + fTemp699) : fSlow2 + fTemp699)));
			float fTemp701 = ((fTemp700 > fRec220[1]) ? fSlow118 : fSlow33);
			fRec220[0] = fTemp700 * (1.0f - fTemp701) + fRec220[1] * fTemp701;
			float fTemp702 = std::max<float>(fTemp690, fVec580[1]);
			fVec582[0] = fTemp702;
			float fTemp703 = std::max<float>(fTemp702, fVec582[2]);
			fVec583[0] = fTemp703;
			float fTemp704 = std::max<float>(fTemp703, fVec583[4]);
			fVec584[0] = fTemp704;
			float fTemp705 = std::max<float>(fTemp704, fVec584[8]);
			fVec585[IOTA0 & 31] = fTemp705;
			float fTemp706 = std::max<float>(fTemp705, fVec585[(IOTA0 - 16) & 31]);
			fVec586[IOTA0 & 63] = fTemp706;
			float fTemp707 = std::max<float>(fTemp706, fVec586[(IOTA0 - 32) & 63]);
			fVec587[IOTA0 & 127] = fTemp707;
			float fTemp708 = std::max<float>(fTemp707, fVec587[(IOTA0 - 64) & 127]);
			fVec588[IOTA0 & 255] = fTemp708;
			float fTemp709 = std::max<float>(fTemp708, fVec588[(IOTA0 - 128) & 255]);
			fVec589[IOTA0 & 511] = fTemp709;
			float fTemp710 = std::max<float>(fTemp709, fVec589[(IOTA0 - 256) & 511]);
			fVec590[IOTA0 & 1023] = fTemp710;
			float fTemp711 = std::max<float>(fTemp710, fVec590[(IOTA0 - 512) & 1023]);
			fVec591[IOTA0 & 2047] = fTemp711;
			fVec592[IOTA0 & 4095] = std::max<float>(fTemp711, fVec591[(IOTA0 - 1024) & 2047]);
			float fTemp712 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst312) ? fTemp690 : -3.4028235e+38f), ((iConst313) ? fVec582[iConst312] : -3.4028235e+38f)), ((iConst314) ? fVec583[iConst315] : -3.4028235e+38f)), ((iConst316) ? fVec584[iConst317] : -3.4028235e+38f)), ((iConst318) ? fVec585[(IOTA0 - iConst319) & 31] : -3.4028235e+38f)), ((iConst320) ? fVec586[(IOTA0 - iConst321) & 63] : -3.4028235e+38f)), ((iConst322) ? fVec587[(IOTA0 - iConst323) & 127] : -3.4028235e+38f)), ((iConst324) ? fVec588[(IOTA0 - iConst325) & 255] : -3.4028235e+38f)), ((iConst326) ? fVec589[(IOTA0 - iConst327) & 511] : -3.4028235e+38f)), ((iConst328) ? fVec590[(IOTA0 - iConst329) & 1023] : -3.4028235e+38f)), ((iConst330) ? fVec591[(IOTA0 - iConst331) & 2047] : -3.4028235e+38f)), ((iConst332) ? fVec592[(IOTA0 - iConst333) & 4095] : -3.4028235e+38f))));
			int iTemp713 = (fTemp712 > fSlow120) + (fTemp712 > fSlow119);
			float fTemp714 = fTemp712 + 18.0f;
			float fTemp715 = std::max<float>(fSlow34, fSlow102 * ((iTemp713 == 0) ? fSlow2 + (fTemp714 - fSlow0) : ((iTemp713 == 1) ? fSlow41 * mydsp_faustpower2_f(fSlow2 + (fTemp714 - fSlow37)) : 0.0f)));
			float fTemp716 = (((fSlow104 * fTemp715) > fRec223[1]) ? fSlow127 : fSlow124);
			fRec223[0] = fSlow104 * fTemp715 * (1.0f - fTemp716) + fRec223[1] * fTemp716;
			float fTemp717 = std::max<float>(fTemp696, fVec581[1]);
			fVec593[0] = fTemp717;
			float fTemp718 = std::max<float>(fTemp717, fVec593[2]);
			fVec594[0] = fTemp718;
			float fTemp719 = std::max<float>(fTemp718, fVec594[4]);
			fVec595[0] = fTemp719;
			float fTemp720 = std::max<float>(fTemp719, fVec595[8]);
			fVec596[IOTA0 & 31] = fTemp720;
			float fTemp721 = std::max<float>(fTemp720, fVec596[(IOTA0 - 16) & 31]);
			fVec597[IOTA0 & 63] = fTemp721;
			float fTemp722 = std::max<float>(fTemp721, fVec597[(IOTA0 - 32) & 63]);
			fVec598[IOTA0 & 127] = fTemp722;
			float fTemp723 = std::max<float>(fTemp722, fVec598[(IOTA0 - 64) & 127]);
			fVec599[IOTA0 & 255] = fTemp723;
			float fTemp724 = std::max<float>(fTemp723, fVec599[(IOTA0 - 128) & 255]);
			fVec600[IOTA0 & 511] = fTemp724;
			float fTemp725 = std::max<float>(fTemp724, fVec600[(IOTA0 - 256) & 511]);
			fVec601[IOTA0 & 1023] = fTemp725;
			float fTemp726 = std::max<float>(fTemp725, fVec601[(IOTA0 - 512) & 1023]);
			fVec602[IOTA0 & 2047] = fTemp726;
			fVec603[IOTA0 & 4095] = std::max<float>(fTemp726, fVec602[(IOTA0 - 1024) & 2047]);
			float fTemp727 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst312) ? fTemp696 : -3.4028235e+38f), ((iConst313) ? fVec593[iConst312] : -3.4028235e+38f)), ((iConst314) ? fVec594[iConst315] : -3.4028235e+38f)), ((iConst316) ? fVec595[iConst317] : -3.4028235e+38f)), ((iConst318) ? fVec596[(IOTA0 - iConst319) & 31] : -3.4028235e+38f)), ((iConst320) ? fVec597[(IOTA0 - iConst321) & 63] : -3.4028235e+38f)), ((iConst322) ? fVec598[(IOTA0 - iConst323) & 127] : -3.4028235e+38f)), ((iConst324) ? fVec599[(IOTA0 - iConst325) & 255] : -3.4028235e+38f)), ((iConst326) ? fVec600[(IOTA0 - iConst327) & 511] : -3.4028235e+38f)), ((iConst328) ? fVec601[(IOTA0 - iConst329) & 1023] : -3.4028235e+38f)), ((iConst330) ? fVec602[(IOTA0 - iConst331) & 2047] : -3.4028235e+38f)), ((iConst332) ? fVec603[(IOTA0 - iConst333) & 4095] : -3.4028235e+38f))));
			int iTemp728 = (fTemp727 > fSlow120) + (fTemp727 > fSlow119);
			float fTemp729 = fTemp727 + 18.0f;
			float fTemp730 = std::max<float>(fSlow34, fSlow102 * ((iTemp728 == 0) ? fSlow2 + (fTemp729 - fSlow0) : ((iTemp728 == 1) ? fSlow41 * mydsp_faustpower2_f(fSlow2 + (fTemp729 - fSlow37)) : 0.0f)));
			float fTemp731 = (((fSlow104 * fTemp730) > fRec224[1]) ? fSlow127 : fSlow124);
			fRec224[0] = fSlow104 * fTemp730 * (1.0f - fTemp731) + fRec224[1] * fTemp731;
			float fTemp732 = fSlow6 + std::min<float>(std::min<float>(fRec217[0], fRec220[0]), std::max<float>(fRec223[0], fRec224[0]));
			fVbargraph27 = FAUSTFLOAT(std::min<float>(12.0f, std::max<float>(-12.0f, fTemp732)));
			float fTemp733 = std::pow(1e+01f, 0.025f * fTemp732);
			float fTemp734 = mydsp_faustpower2_f(fTemp733) + -1.0f;
			float fTemp735 = std::sqrt(fTemp733);
			float fTemp736 = fConst358 * ((fConst358 / fTemp735 + 1.4285715f) / fTemp735) + 1.0f;
			float fTemp737 = fRec225[1] + fConst358 * ((fTemp485 - fRec226[1]) / fTemp735);
			float fTemp738 = fTemp737 / fTemp736;
			fRec225[0] = 2.0f * fTemp738 - fRec225[1];
			float fTemp739 = fTemp735 * fTemp736;
			float fTemp740 = fRec226[1] + fConst358 * (fTemp737 / fTemp739);
			fRec226[0] = 2.0f * fTemp740 - fRec226[1];
			float fRec227 = fTemp738;
			float fRec228 = fTemp740;
			float fTemp741 = fRec228 * fTemp734;
			float fTemp742 = fTemp733 + -1.0f;
			float fTemp743 = fRec227 * fTemp742;
			float fTemp744 = fTemp485 + 1.4285715f * fTemp743 + fTemp741;
			float fTemp745 = fRec213[1] + fConst358 * ((fTemp744 - fRec214[1]) / fTemp688);
			float fTemp746 = fTemp745 / fTemp689;
			fRec213[0] = 2.0f * fTemp746 - fRec213[1];
			float fTemp747 = fTemp688 * fTemp689;
			float fTemp748 = fRec214[1] + fConst358 * (fTemp745 / fTemp747);
			fRec214[0] = 2.0f * fTemp748 - fRec214[1];
			float fRec215 = fTemp746;
			float fRec216 = fTemp748;
			float fTemp749 = fRec216 * fTemp687;
			float fTemp750 = fTemp485 + fTemp741;
			float fTemp751 = fTemp686 + -1.0f;
			float fTemp752 = fTemp743 + fRec215 * fTemp751;
			float fTemp753 = 1.4285715f * fTemp752 + fTemp750 + fTemp749;
			float fTemp754 = fRec209[1] + fConst346 * ((fTemp753 - fRec210[1]) / fTemp684);
			float fTemp755 = fTemp754 / fTemp685;
			fRec209[0] = 2.0f * fTemp755 - fRec209[1];
			float fTemp756 = fTemp684 * fTemp685;
			float fTemp757 = fRec210[1] + fConst346 * (fTemp754 / fTemp756);
			fRec210[0] = 2.0f * fTemp757 - fRec210[1];
			float fRec211 = fTemp755;
			float fRec212 = fTemp757;
			float fTemp758 = fRec212 * fTemp683;
			float fTemp759 = fTemp750 + fTemp749;
			float fTemp760 = fTemp682 + -1.0f;
			float fTemp761 = fTemp752 + fRec211 * fTemp760;
			float fTemp762 = 1.4285715f * fTemp761 + fTemp759 + fTemp758;
			float fTemp763 = fRec191[1] + fConst346 * ((fTemp762 - fRec192[1]) / fTemp636);
			float fTemp764 = fTemp763 / fTemp637;
			fRec191[0] = 2.0f * fTemp764 - fRec191[1];
			float fTemp765 = fTemp636 * fTemp637;
			float fTemp766 = fRec192[1] + fConst346 * (fTemp763 / fTemp765);
			fRec192[0] = 2.0f * fTemp766 - fRec192[1];
			float fRec193 = fTemp764;
			float fRec194 = fTemp766;
			float fTemp767 = fTemp759 + fTemp758 + fRec194 * fTemp635;
			float fTemp768 = fTemp634 + -1.0f;
			float fTemp769 = fTemp761 + fRec193 * fTemp768;
			float fTemp770 = 1.4285715f * fTemp769 + fTemp767;
			float fTemp771 = fRec187[1] + fConst334 * ((fTemp770 - fRec188[1]) / fTemp632);
			float fTemp772 = fTemp771 / fTemp633;
			fRec187[0] = 2.0f * fTemp772 - fRec187[1];
			float fTemp773 = fTemp632 * fTemp633;
			float fTemp774 = fRec188[1] + fConst334 * (fTemp771 / fTemp773);
			fRec188[0] = 2.0f * fTemp774 - fRec188[1];
			float fRec189 = fTemp772;
			float fRec190 = fTemp774;
			float fTemp775 = fRec190 * fTemp631;
			float fTemp776 = fTemp630 + -1.0f;
			float fTemp777 = fTemp769 + fRec189 * fTemp776;
			float fTemp778 = fTemp767 + 1.4285715f * fTemp777 + fTemp775;
			float fTemp779 = fRec169[1] + fConst334 * ((fTemp778 - fRec170[1]) / fTemp584);
			float fTemp780 = fTemp779 / fTemp585;
			fRec169[0] = 2.0f * fTemp780 - fRec169[1];
			float fTemp781 = fTemp584 * fTemp585;
			float fTemp782 = fRec170[1] + fConst334 * (fTemp779 / fTemp781);
			fRec170[0] = 2.0f * fTemp782 - fRec170[1];
			float fRec171 = fTemp780;
			float fRec172 = fTemp782;
			float fTemp783 = fRec172 * fTemp583;
			float fTemp784 = fTemp767 + fTemp775;
			float fTemp785 = fTemp582 + -1.0f;
			float fTemp786 = fTemp777 + fRec171 * fTemp785;
			float fTemp787 = 1.4285715f * fTemp786 + fTemp784 + fTemp783;
			float fTemp788 = fRec165[1] + fConst13 * ((fTemp787 - fRec166[1]) / fTemp580);
			float fTemp789 = fTemp788 / fTemp581;
			fRec165[0] = 2.0f * fTemp789 - fRec165[1];
			float fTemp790 = fTemp580 * fTemp581;
			float fTemp791 = fRec166[1] + fConst13 * (fTemp788 / fTemp790);
			fRec166[0] = 2.0f * fTemp791 - fRec166[1];
			float fRec167 = fTemp789;
			float fRec168 = fTemp791;
			float fTemp792 = fTemp578 + -1.0f;
			float fTemp793 = 1.4285715f * (fTemp786 + fRec167 * fTemp792) + fTemp784 + fTemp783 + fRec168 * fTemp579;
			float fTemp794 = fRec147[1] + fConst13 * fTemp532 * (fTemp793 - fRec148[1]);
			float fTemp795 = fTemp794 / fTemp533;
			fRec147[0] = 2.0f * fTemp795 - fRec147[1];
			float fTemp796 = fRec148[1] + fConst13 * (fTemp532 * fTemp794 / fTemp533);
			fRec148[0] = 2.0f * fTemp796 - fRec148[1];
			float fRec149 = fTemp795;
			float fRec150 = fTemp796;
			float fTemp797 = 1.0f - fTemp530;
			fRec229[0] = fSlow128 + fConst32 * fRec229[1];
			float fTemp798 = 1.0f - fRec229[0];
			float fTemp799 = fRec229[0] * fTemp485 + fTemp798 * (fTemp530 * (fTemp530 * fTemp793 + 1.4285715f * fRec149 * fTemp797) + fRec150 * fTemp531);
			fRec2[0] = fTemp799 - fConst12 * (fConst10 * fRec2[1] + fConst9 * fRec2[2]);
			float fTemp800 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fConst370 * fRec2[0] + fConst371 * fRec2[2])));
			int iTemp801 = (fTemp800 > fSlow129) + (fTemp800 > fSlow1);
			float fTemp802 = 0.0f - 0.75f * std::max<float>(0.0f, ((iTemp801 == 0) ? 0.0f : ((iTemp801 == 1) ? 0.083333336f * mydsp_faustpower2_f(fTemp800 + 7.0f - fSlow0) : fTemp800 + 4.0f - fSlow0)));
			float fTemp803 = ((fTemp802 > fRec1[1]) ? fConst285 : fConst372);
			fRec1[0] = fTemp802 * (1.0f - fTemp803) + fRec1[1] * fTemp803;
			float fTemp804 = fRec260[1] + fConst358 * ((fTemp492 - fRec261[1]) / fTemp735);
			float fTemp805 = fTemp804 / fTemp736;
			fRec260[0] = 2.0f * fTemp805 - fRec260[1];
			float fTemp806 = fRec261[1] + fConst358 * (fTemp804 / fTemp739);
			fRec261[0] = 2.0f * fTemp806 - fRec261[1];
			float fRec262 = fTemp805;
			float fRec263 = fTemp806;
			float fTemp807 = fRec263 * fTemp734;
			float fTemp808 = fRec262 * fTemp742;
			float fTemp809 = fTemp492 + 1.4285715f * fTemp808 + fTemp807;
			float fTemp810 = fRec256[1] + fConst358 * ((fTemp809 - fRec257[1]) / fTemp688);
			float fTemp811 = fTemp810 / fTemp689;
			fRec256[0] = 2.0f * fTemp811 - fRec256[1];
			float fTemp812 = fRec257[1] + fConst358 * (fTemp810 / fTemp747);
			fRec257[0] = 2.0f * fTemp812 - fRec257[1];
			float fRec258 = fTemp811;
			float fRec259 = fTemp812;
			float fTemp813 = fRec259 * fTemp687;
			float fTemp814 = fTemp492 + fTemp807;
			float fTemp815 = fTemp808 + fRec258 * fTemp751;
			float fTemp816 = 1.4285715f * fTemp815 + fTemp814 + fTemp813;
			float fTemp817 = fRec252[1] + fConst346 * ((fTemp816 - fRec253[1]) / fTemp684);
			float fTemp818 = fTemp817 / fTemp685;
			fRec252[0] = 2.0f * fTemp818 - fRec252[1];
			float fTemp819 = fRec253[1] + fConst346 * (fTemp817 / fTemp756);
			fRec253[0] = 2.0f * fTemp819 - fRec253[1];
			float fRec254 = fTemp818;
			float fRec255 = fTemp819;
			float fTemp820 = fRec255 * fTemp683;
			float fTemp821 = fTemp814 + fTemp813;
			float fTemp822 = fTemp815 + fRec254 * fTemp760;
			float fTemp823 = 1.4285715f * fTemp822 + fTemp821 + fTemp820;
			float fTemp824 = fRec248[1] + fConst346 * ((fTemp823 - fRec249[1]) / fTemp636);
			float fTemp825 = fTemp824 / fTemp637;
			fRec248[0] = 2.0f * fTemp825 - fRec248[1];
			float fTemp826 = fRec249[1] + fConst346 * (fTemp824 / fTemp765);
			fRec249[0] = 2.0f * fTemp826 - fRec249[1];
			float fRec250 = fTemp825;
			float fRec251 = fTemp826;
			float fTemp827 = fRec251 * fTemp635;
			float fTemp828 = fTemp821 + fTemp820;
			float fTemp829 = fTemp822 + fRec250 * fTemp768;
			float fTemp830 = 1.4285715f * fTemp829 + fTemp828 + fTemp827;
			float fTemp831 = fRec244[1] + fConst334 * ((fTemp830 - fRec245[1]) / fTemp632);
			float fTemp832 = fTemp831 / fTemp633;
			fRec244[0] = 2.0f * fTemp832 - fRec244[1];
			float fTemp833 = fRec245[1] + fConst334 * (fTemp831 / fTemp773);
			fRec245[0] = 2.0f * fTemp833 - fRec245[1];
			float fRec246 = fTemp832;
			float fRec247 = fTemp833;
			float fTemp834 = fRec247 * fTemp631;
			float fTemp835 = fTemp828 + fTemp827;
			float fTemp836 = fTemp829 + fRec246 * fTemp776;
			float fTemp837 = 1.4285715f * fTemp836 + fTemp835 + fTemp834;
			float fTemp838 = fRec240[1] + fConst334 * ((fTemp837 - fRec241[1]) / fTemp584);
			float fTemp839 = fTemp838 / fTemp585;
			fRec240[0] = 2.0f * fTemp839 - fRec240[1];
			float fTemp840 = fRec241[1] + fConst334 * (fTemp838 / fTemp781);
			fRec241[0] = 2.0f * fTemp840 - fRec241[1];
			float fRec242 = fTemp839;
			float fRec243 = fTemp840;
			float fTemp841 = fRec243 * fTemp583;
			float fTemp842 = fTemp835 + fTemp834;
			float fTemp843 = fTemp836 + fRec242 * fTemp785;
			float fTemp844 = 1.4285715f * fTemp843 + fTemp842 + fTemp841;
			float fTemp845 = fRec236[1] + fConst13 * ((fTemp844 - fRec237[1]) / fTemp580);
			float fTemp846 = fTemp845 / fTemp581;
			fRec236[0] = 2.0f * fTemp846 - fRec236[1];
			float fTemp847 = fRec237[1] + fConst13 * (fTemp845 / fTemp790);
			fRec237[0] = 2.0f * fTemp847 - fRec237[1];
			float fRec238 = fTemp846;
			float fRec239 = fTemp847;
			float fTemp848 = 1.4285715f * (fTemp843 + fRec238 * fTemp792) + fTemp842 + fTemp841 + fRec239 * fTemp579;
			float fTemp849 = fRec232[1] + fConst13 * fTemp532 * (fTemp848 - fRec233[1]);
			float fTemp850 = fTemp849 / fTemp533;
			fRec232[0] = 2.0f * fTemp850 - fRec232[1];
			float fTemp851 = fRec233[1] + fConst13 * (fTemp532 * fTemp849 / fTemp533);
			fRec233[0] = 2.0f * fTemp851 - fRec233[1];
			float fRec234 = fTemp850;
			float fRec235 = fTemp851;
			float fTemp852 = fRec229[0] * fTemp492 + fTemp798 * (fTemp530 * (fTemp530 * fTemp848 + 1.4285715f * fRec234 * fTemp797) + fRec235 * fTemp531);
			fRec231[0] = fTemp852 - fConst12 * (fConst10 * fRec231[1] + fConst9 * fRec231[2]);
			float fTemp853 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fConst370 * fRec231[0] + fConst371 * fRec231[2])));
			int iTemp854 = (fTemp853 > fSlow129) + (fTemp853 > fSlow1);
			float fTemp855 = 0.0f - 0.75f * std::max<float>(0.0f, ((iTemp854 == 0) ? 0.0f : ((iTemp854 == 1) ? 0.083333336f * mydsp_faustpower2_f(fTemp853 + 7.0f - fSlow0) : fTemp853 + 4.0f - fSlow0)));
			float fTemp856 = ((fTemp855 > fRec230[1]) ? fConst285 : fConst372);
			fRec230[0] = fTemp855 * (1.0f - fTemp856) + fRec230[1] * fTemp856;
			float fTemp857 = std::min<float>(fRec1[0], fRec230[0]);
			int iTemp858 = fTemp857 > 0.0f;
			float fTemp859 = fConst373 * std::pow(1e+01f, 0.05f * std::fabs(fTemp857));
			float fTemp860 = ((iTemp858) ? fConst373 : fTemp859);
			float fTemp861 = fConst375 * (fConst375 + fTemp860) + 1.0f;
			float fTemp862 = ((iTemp858) ? fTemp859 : fConst373);
			float fTemp863 = fConst375 * (fConst375 - fTemp862) + 1.0f;
			float fTemp864 = fConst376 * fRec264[1];
			float fTemp865 = fConst375 * (fConst375 - fTemp860) + 1.0f;
			fRec264[0] = fTemp799 - (fRec264[2] * fTemp865 + fTemp864) / fTemp861;
			float fTemp866 = fConst375 * (fConst375 + fTemp862) + 1.0f;
			float fTemp867 = fRec11[0] * fTemp799 + fTemp8 * (fTemp864 + fRec264[0] * fTemp866 + fRec264[2] * fTemp863) / fTemp861;
			fVec604[IOTA0 & 2047] = fTemp867;
			float fTemp868 = fConst376 * fRec269[1];
			fRec269[0] = fTemp852 - (fTemp865 * fRec269[2] + fTemp868) / fTemp861;
			float fTemp869 = fRec11[0] * fTemp852 + fTemp8 * (fTemp868 + fRec269[0] * fTemp866 + fTemp863 * fRec269[2]) / fTemp861;
			fVec605[IOTA0 & 2047] = fTemp869;
			float fTemp870 = std::fabs(std::max<float>(std::fabs(fTemp867), std::fabs(fTemp869)));
			int iTemp871 = (fTemp870 >= fRec268[1]) | (float(iRec267[1]) >= fConst48);
			iRec267[0] = ((iTemp871) ? 0 : iRec267[1] + 1);
			fRec268[0] = ((iTemp871) ? fTemp870 : fRec268[1]);
			fRec266[0] = fConst380 * fRec268[0] + fConst379 * fRec266[1];
			float fTemp872 = std::fabs(fRec266[0]);
			fRec265[0] = std::max<float>(fTemp872, fConst381 * fRec265[1] + fConst382 * fTemp872);
			float fTemp873 = std::min<float>(1.0f, 0.8912509f / std::max<float>(fRec265[0], 1.1920929e-07f));
			fVbargraph29 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fTemp873))));
			fRec270[0] = fSlow130 + fConst32 * fRec270[1];
			float fTemp874 = (1.0f - fRec270[0]) * fTemp873;
			float fTemp875 = fRec270[0] * fVec1[(IOTA0 - iConst383) & 32767] + fTemp874 * fVec604[(IOTA0 - iConst378) & 2047];
			fRec0[0] = std::max<float>(fRec0[1] - fConst1, std::min<float>(12.0f, 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(0.00031622776f, std::fabs(fTemp875))))));
			fVbargraph30 = FAUSTFLOAT(fRec0[0]);
			float fTemp876 = fTemp875;
			fVec606[0] = fTemp876;
			output0[i0] = FAUSTFLOAT(fTemp876);
			float fTemp877 = fRec270[0] * fVec0[(IOTA0 - iConst383) & 32767] + fTemp874 * fVec605[(IOTA0 - iConst378) & 2047];
			fRec275[0] = std::max<float>(fRec275[1] - fConst1, std::min<float>(12.0f, 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(0.00031622776f, std::fabs(fTemp877))))));
			fVbargraph31 = FAUSTFLOAT(fRec275[0]);
			float fTemp878 = fTemp877;
			fVec607[0] = fTemp878;
			fVec608[0] = 0.0f - fConst65 * (fConst62 * fRec273[1] - fConst63 * fVec607[1]);
			fRec274[0] = fVec608[1] + fConst65 * (fConst55 * fTemp878 - 2.0f * (fConst59 * fRec274[1] - fConst57 * fVec607[1]));
			fRec273[0] = fRec274[0];
			fVec609[0] = 0.50032705f * fRec273[1] - fConst70 * fRec271[1];
			fRec272[0] = fConst73 * fRec273[1] + fConst72 * (fVec609[1] - fConst68 * fRec272[1] + 0.50032705f * fRec273[0]);
			fRec271[0] = fRec272[0];
			float fTemp879 = mydsp_faustpower2_f(fRec271[0]);
			fVec610[0] = fTemp879;
			float fTemp880 = fTemp879 + fVec610[1];
			fVec611[0] = fTemp880;
			float fTemp881 = fTemp880 + fVec611[2];
			fVec612[0] = fTemp881;
			float fTemp882 = fTemp881 + fVec612[4];
			fVec613[0] = fTemp882;
			float fTemp883 = fTemp882 + fVec613[8];
			fVec614[IOTA0 & 31] = fTemp883;
			float fTemp884 = fTemp883 + fVec614[(IOTA0 - 16) & 31];
			fVec615[IOTA0 & 63] = fTemp884;
			float fTemp885 = fTemp884 + fVec615[(IOTA0 - 32) & 63];
			fVec616[IOTA0 & 127] = fTemp885;
			float fTemp886 = fTemp885 + fVec616[(IOTA0 - 64) & 127];
			fVec617[IOTA0 & 255] = fTemp886;
			float fTemp887 = fTemp886 + fVec617[(IOTA0 - 128) & 255];
			fVec618[IOTA0 & 511] = fTemp887;
			float fTemp888 = fTemp887 + fVec618[(IOTA0 - 256) & 511];
			fVec619[IOTA0 & 1023] = fTemp888;
			float fTemp889 = fTemp888 + fVec619[(IOTA0 - 512) & 1023];
			fVec620[IOTA0 & 2047] = fTemp889;
			float fTemp890 = fTemp889 + fVec620[(IOTA0 - 1024) & 2047];
			fVec621[IOTA0 & 4095] = fTemp890;
			float fTemp891 = fTemp890 + fVec621[(IOTA0 - 2048) & 4095];
			fVec622[IOTA0 & 8191] = fTemp891;
			float fTemp892 = fTemp891 + fVec622[(IOTA0 - 4096) & 8191];
			fVec623[IOTA0 & 16383] = fTemp892;
			float fTemp893 = fTemp892 + fVec623[(IOTA0 - 8192) & 16383];
			fVec624[IOTA0 & 32767] = fTemp893;
			float fTemp894 = fTemp893 + fVec624[(IOTA0 - 16384) & 32767];
			fVec625[IOTA0 & 65535] = fTemp894;
			float fTemp895 = fTemp894 + fVec625[(IOTA0 - 32768) & 65535];
			fVec626[IOTA0 & 131071] = fTemp895;
			float fTemp896 = fTemp895 + fVec626[(IOTA0 - 65536) & 131071];
			fVec627[IOTA0 & 262143] = fTemp896;
			float fTemp897 = fTemp896 + fVec627[(IOTA0 - 131072) & 262143];
			fVec628[IOTA0 & 524287] = fTemp897;
			fVec629[IOTA0 & 1048575] = fTemp897 + fVec628[(IOTA0 - 262144) & 524287];
			fVec630[0] = 0.0f - fConst65 * (fConst62 * fRec278[1] - fConst63 * fVec606[1]);
			fRec279[0] = fVec630[1] + fConst65 * (fConst55 * fTemp876 - 2.0f * (fConst59 * fRec279[1] - fConst57 * fVec606[1]));
			fRec278[0] = fRec279[0];
			fVec631[0] = 0.50032705f * fRec278[1] - fConst70 * fRec276[1];
			fRec277[0] = fConst73 * fRec278[1] + fConst72 * (fVec631[1] - fConst68 * fRec277[1] + 0.50032705f * fRec278[0]);
			fRec276[0] = fRec277[0];
			float fTemp898 = mydsp_faustpower2_f(fRec276[0]);
			fVec632[0] = fTemp898;
			float fTemp899 = fTemp898 + fVec632[1];
			fVec633[0] = fTemp899;
			float fTemp900 = fTemp899 + fVec633[2];
			fVec634[0] = fTemp900;
			float fTemp901 = fTemp900 + fVec634[4];
			fVec635[0] = fTemp901;
			float fTemp902 = fTemp901 + fVec635[8];
			fVec636[IOTA0 & 31] = fTemp902;
			float fTemp903 = fTemp902 + fVec636[(IOTA0 - 16) & 31];
			fVec637[IOTA0 & 63] = fTemp903;
			float fTemp904 = fTemp903 + fVec637[(IOTA0 - 32) & 63];
			fVec638[IOTA0 & 127] = fTemp904;
			float fTemp905 = fTemp904 + fVec638[(IOTA0 - 64) & 127];
			fVec639[IOTA0 & 255] = fTemp905;
			float fTemp906 = fTemp905 + fVec639[(IOTA0 - 128) & 255];
			fVec640[IOTA0 & 511] = fTemp906;
			float fTemp907 = fTemp906 + fVec640[(IOTA0 - 256) & 511];
			fVec641[IOTA0 & 1023] = fTemp907;
			float fTemp908 = fTemp907 + fVec641[(IOTA0 - 512) & 1023];
			fVec642[IOTA0 & 2047] = fTemp908;
			float fTemp909 = fTemp908 + fVec642[(IOTA0 - 1024) & 2047];
			fVec643[IOTA0 & 4095] = fTemp909;
			float fTemp910 = fTemp909 + fVec643[(IOTA0 - 2048) & 4095];
			fVec644[IOTA0 & 8191] = fTemp910;
			float fTemp911 = fTemp910 + fVec644[(IOTA0 - 4096) & 8191];
			fVec645[IOTA0 & 16383] = fTemp911;
			float fTemp912 = fTemp911 + fVec645[(IOTA0 - 8192) & 16383];
			fVec646[IOTA0 & 32767] = fTemp912;
			float fTemp913 = fTemp912 + fVec646[(IOTA0 - 16384) & 32767];
			fVec647[IOTA0 & 65535] = fTemp913;
			float fTemp914 = fTemp913 + fVec647[(IOTA0 - 32768) & 65535];
			fVec648[IOTA0 & 131071] = fTemp914;
			float fTemp915 = fTemp914 + fVec648[(IOTA0 - 65536) & 131071];
			fVec649[IOTA0 & 262143] = fTemp915;
			float fTemp916 = fTemp915 + fVec649[(IOTA0 - 131072) & 262143];
			fVec650[IOTA0 & 524287] = fTemp916;
			fVec651[IOTA0 & 1048575] = fTemp916 + fVec650[(IOTA0 - 262144) & 524287];
			fVbargraph32 = FAUSTFLOAT(4.3429446f * std::log(std::max<float>(1e-12f, fConst423 * (((iConst421) ? 0.86000985f * fVec651[(IOTA0 - iConst422) & 1048575] : 0.0f) + ((iConst419) ? 0.86000985f * fVec650[(IOTA0 - iConst420) & 524287] : 0.0f) + ((iConst417) ? 0.86000985f * fVec649[(IOTA0 - iConst418) & 262143] : 0.0f) + ((iConst415) ? 0.86000985f * fVec648[(IOTA0 - iConst416) & 131071] : 0.0f) + ((iConst413) ? 0.86000985f * fVec647[(IOTA0 - iConst414) & 65535] : 0.0f) + ((iConst411) ? 0.86000985f * fVec646[(IOTA0 - iConst412) & 32767] : 0.0f) + ((iConst409) ? 0.86000985f * fVec645[(IOTA0 - iConst410) & 16383] : 0.0f) + ((iConst407) ? 0.86000985f * fVec644[(IOTA0 - iConst408) & 8191] : 0.0f) + ((iConst405) ? 0.86000985f * fVec643[(IOTA0 - iConst406) & 4095] : 0.0f) + ((iConst403) ? 0.86000985f * fVec642[(IOTA0 - iConst404) & 2047] : 0.0f) + ((iConst401) ? 0.86000985f * fVec641[(IOTA0 - iConst402) & 1023] : 0.0f) + ((iConst399) ? 0.86000985f * fVec640[(IOTA0 - iConst400) & 511] : 0.0f) + ((iConst397) ? 0.86000985f * fVec639[(IOTA0 - iConst398) & 255] : 0.0f) + ((iConst395) ? 0.86000985f * fVec638[(IOTA0 - iConst396) & 127] : 0.0f) + ((iConst393) ? 0.86000985f * fVec637[(IOTA0 - iConst394) & 63] : 0.0f) + ((iConst391) ? 0.86000985f * fVec636[(IOTA0 - iConst392) & 31] : 0.0f) + ((iConst389) ? 0.86000985f * fVec635[iConst390] : 0.0f) + ((iConst387) ? 0.86000985f * fVec634[iConst388] : 0.0f) + ((iConst386) ? 0.86000985f * fTemp898 : 0.0f) + ((iConst385) ? 0.86000985f * fVec633[iConst386] : 0.0f) + ((iConst421) ? 0.86000985f * fVec629[(IOTA0 - iConst422) & 1048575] : 0.0f) + ((iConst419) ? 0.86000985f * fVec628[(IOTA0 - iConst420) & 524287] : 0.0f) + ((iConst417) ? 0.86000985f * fVec627[(IOTA0 - iConst418) & 262143] : 0.0f) + ((iConst415) ? 0.86000985f * fVec626[(IOTA0 - iConst416) & 131071] : 0.0f) + ((iConst413) ? 0.86000985f * fVec625[(IOTA0 - iConst414) & 65535] : 0.0f) + ((iConst411) ? 0.86000985f * fVec624[(IOTA0 - iConst412) & 32767] : 0.0f) + ((iConst409) ? 0.86000985f * fVec623[(IOTA0 - iConst410) & 16383] : 0.0f) + ((iConst407) ? 0.86000985f * fVec622[(IOTA0 - iConst408) & 8191] : 0.0f) + ((iConst405) ? 0.86000985f * fVec621[(IOTA0 - iConst406) & 4095] : 0.0f) + ((iConst403) ? 0.86000985f * fVec620[(IOTA0 - iConst404) & 2047] : 0.0f) + ((iConst401) ? 0.86000985f * fVec619[(IOTA0 - iConst402) & 1023] : 0.0f) + ((iConst399) ? 0.86000985f * fVec618[(IOTA0 - iConst400) & 511] : 0.0f) + ((iConst397) ? 0.86000985f * fVec617[(IOTA0 - iConst398) & 255] : 0.0f) + ((iConst395) ? 0.86000985f * fVec616[(IOTA0 - iConst396) & 127] : 0.0f) + ((iConst393) ? 0.86000985f * fVec615[(IOTA0 - iConst394) & 63] : 0.0f) + ((iConst391) ? 0.86000985f * fVec614[(IOTA0 - iConst392) & 31] : 0.0f) + ((iConst389) ? 0.86000985f * fVec613[iConst390] : 0.0f) + ((iConst387) ? 0.86000985f * fVec612[iConst388] : 0.0f) + ((iConst386) ? 0.86000985f * fTemp879 : 0.0f) + ((iConst385) ? 0.86000985f * fVec611[iConst386] : 0.0f)))) + -0.691f);
			output1[i0] = FAUSTFLOAT(fTemp878);
			fRec9[1] = fRec9[0];
			IOTA0 = IOTA0 + 1;
			fRec8[1] = fRec8[0];
			fRec10[1] = fRec10[0];
			fRec11[1] = fRec11[0];
			fRec13[2] = fRec13[1];
			fRec13[1] = fRec13[0];
			fRec12[2] = fRec12[1];
			fRec12[1] = fRec12[0];
			fRec15[2] = fRec15[1];
			fRec15[1] = fRec15[0];
			fRec14[2] = fRec14[1];
			fRec14[1] = fRec14[0];
			fVec2[1] = fVec2[0];
			fRec7[2] = fRec7[1];
			fRec7[1] = fRec7[0];
			fVec4[1] = fVec4[0];
			fRec19[1] = fRec19[0];
			fRec18[1] = fRec18[0];
			fVec5[1] = fVec5[0];
			fRec17[1] = fRec17[0];
			fRec16[1] = fRec16[0];
			fVec6[1] = fVec6[0];
			fVec7[2] = fVec7[1];
			fVec7[1] = fVec7[0];
			for (int j0 = 6; j0 > 0; j0 = j0 - 1) {
				fVec8[j0] = fVec8[j0 - 1];
			}
			for (int j1 = 14; j1 > 0; j1 = j1 - 1) {
				fVec9[j1] = fVec9[j1 - 1];
			}
			fVec24[1] = fVec24[0];
			fRec23[1] = fRec23[0];
			fRec22[1] = fRec22[0];
			fVec25[1] = fVec25[0];
			fRec21[1] = fRec21[0];
			fRec20[1] = fRec20[0];
			fVec26[1] = fVec26[0];
			fVec27[2] = fVec27[1];
			fVec27[1] = fVec27[0];
			for (int j2 = 6; j2 > 0; j2 = j2 - 1) {
				fVec28[j2] = fVec28[j2 - 1];
			}
			for (int j3 = 14; j3 > 0; j3 = j3 - 1) {
				fVec29[j3] = fVec29[j3 - 1];
			}
			fVec44[1] = fVec44[0];
			fVec45[2] = fVec45[1];
			fVec45[1] = fVec45[0];
			for (int j4 = 6; j4 > 0; j4 = j4 - 1) {
				fVec46[j4] = fVec46[j4 - 1];
			}
			for (int j5 = 14; j5 > 0; j5 = j5 - 1) {
				fVec47[j5] = fVec47[j5 - 1];
			}
			fRec24[1] = fRec24[0];
			fRec25[2] = fRec25[1];
			fRec25[1] = fRec25[0];
			fVec53[1] = fVec53[0];
			fRec29[1] = fRec29[0];
			fRec28[1] = fRec28[0];
			fVec54[1] = fVec54[0];
			fRec27[1] = fRec27[0];
			fRec26[1] = fRec26[0];
			fVec55[1] = fVec55[0];
			fVec56[2] = fVec56[1];
			fVec56[1] = fVec56[0];
			for (int j6 = 6; j6 > 0; j6 = j6 - 1) {
				fVec57[j6] = fVec57[j6 - 1];
			}
			for (int j7 = 14; j7 > 0; j7 = j7 - 1) {
				fVec58[j7] = fVec58[j7 - 1];
			}
			fRec30[2] = fRec30[1];
			fRec30[1] = fRec30[0];
			fVec74[1] = fVec74[0];
			fRec34[1] = fRec34[0];
			fRec33[1] = fRec33[0];
			fVec75[1] = fVec75[0];
			fRec32[1] = fRec32[0];
			fRec31[1] = fRec31[0];
			fVec76[1] = fVec76[0];
			fVec77[2] = fVec77[1];
			fVec77[1] = fVec77[0];
			for (int j8 = 6; j8 > 0; j8 = j8 - 1) {
				fVec78[j8] = fVec78[j8 - 1];
			}
			for (int j9 = 14; j9 > 0; j9 = j9 - 1) {
				fVec79[j9] = fVec79[j9 - 1];
			}
			fRec35[2] = fRec35[1];
			fRec35[1] = fRec35[0];
			fVec95[1] = fVec95[0];
			fRec39[1] = fRec39[0];
			fRec38[1] = fRec38[0];
			fVec96[1] = fVec96[0];
			fRec37[1] = fRec37[0];
			fRec36[1] = fRec36[0];
			fVec97[1] = fVec97[0];
			fVec98[2] = fVec98[1];
			fVec98[1] = fVec98[0];
			for (int j10 = 6; j10 > 0; j10 = j10 - 1) {
				fVec99[j10] = fVec99[j10 - 1];
			}
			for (int j11 = 14; j11 > 0; j11 = j11 - 1) {
				fVec100[j11] = fVec100[j11 - 1];
			}
			fRec40[2] = fRec40[1];
			fRec40[1] = fRec40[0];
			fVec116[1] = fVec116[0];
			fRec44[1] = fRec44[0];
			fRec43[1] = fRec43[0];
			fVec117[1] = fVec117[0];
			fRec42[1] = fRec42[0];
			fRec41[1] = fRec41[0];
			fVec118[1] = fVec118[0];
			fVec119[2] = fVec119[1];
			fVec119[1] = fVec119[0];
			for (int j12 = 6; j12 > 0; j12 = j12 - 1) {
				fVec120[j12] = fVec120[j12 - 1];
			}
			for (int j13 = 14; j13 > 0; j13 = j13 - 1) {
				fVec121[j13] = fVec121[j13 - 1];
			}
			fRec45[2] = fRec45[1];
			fRec45[1] = fRec45[0];
			fVec137[1] = fVec137[0];
			fRec49[1] = fRec49[0];
			fRec48[1] = fRec48[0];
			fVec138[1] = fVec138[0];
			fRec47[1] = fRec47[0];
			fRec46[1] = fRec46[0];
			fVec139[1] = fVec139[0];
			fVec140[2] = fVec140[1];
			fVec140[1] = fVec140[0];
			for (int j14 = 6; j14 > 0; j14 = j14 - 1) {
				fVec141[j14] = fVec141[j14 - 1];
			}
			for (int j15 = 14; j15 > 0; j15 = j15 - 1) {
				fVec142[j15] = fVec142[j15 - 1];
			}
			fRec50[2] = fRec50[1];
			fRec50[1] = fRec50[0];
			fVec158[1] = fVec158[0];
			fRec54[1] = fRec54[0];
			fRec53[1] = fRec53[0];
			fVec159[1] = fVec159[0];
			fRec52[1] = fRec52[0];
			fRec51[1] = fRec51[0];
			fVec160[1] = fVec160[0];
			fVec161[2] = fVec161[1];
			fVec161[1] = fVec161[0];
			for (int j16 = 6; j16 > 0; j16 = j16 - 1) {
				fVec162[j16] = fVec162[j16 - 1];
			}
			for (int j17 = 14; j17 > 0; j17 = j17 - 1) {
				fVec163[j17] = fVec163[j17 - 1];
			}
			fRec55[2] = fRec55[1];
			fRec55[1] = fRec55[0];
			fVec179[1] = fVec179[0];
			fRec59[1] = fRec59[0];
			fRec58[1] = fRec58[0];
			fVec180[1] = fVec180[0];
			fRec57[1] = fRec57[0];
			fRec56[1] = fRec56[0];
			fVec181[1] = fVec181[0];
			fVec182[2] = fVec182[1];
			fVec182[1] = fVec182[0];
			for (int j18 = 6; j18 > 0; j18 = j18 - 1) {
				fVec183[j18] = fVec183[j18 - 1];
			}
			for (int j19 = 14; j19 > 0; j19 = j19 - 1) {
				fVec184[j19] = fVec184[j19 - 1];
			}
			fRec60[2] = fRec60[1];
			fRec60[1] = fRec60[0];
			fVec200[1] = fVec200[0];
			fRec64[1] = fRec64[0];
			fRec63[1] = fRec63[0];
			fVec201[1] = fVec201[0];
			fRec62[1] = fRec62[0];
			fRec61[1] = fRec61[0];
			fVec202[1] = fVec202[0];
			fVec203[2] = fVec203[1];
			fVec203[1] = fVec203[0];
			for (int j20 = 6; j20 > 0; j20 = j20 - 1) {
				fVec204[j20] = fVec204[j20 - 1];
			}
			for (int j21 = 14; j21 > 0; j21 = j21 - 1) {
				fVec205[j21] = fVec205[j21 - 1];
			}
			fRec65[2] = fRec65[1];
			fRec65[1] = fRec65[0];
			fVec221[1] = fVec221[0];
			fRec69[1] = fRec69[0];
			fRec68[1] = fRec68[0];
			fVec222[1] = fVec222[0];
			fRec67[1] = fRec67[0];
			fRec66[1] = fRec66[0];
			fVec223[1] = fVec223[0];
			fVec224[2] = fVec224[1];
			fVec224[1] = fVec224[0];
			for (int j22 = 6; j22 > 0; j22 = j22 - 1) {
				fVec225[j22] = fVec225[j22 - 1];
			}
			for (int j23 = 14; j23 > 0; j23 = j23 - 1) {
				fVec226[j23] = fVec226[j23 - 1];
			}
			fRec70[2] = fRec70[1];
			fRec70[1] = fRec70[0];
			fVec242[1] = fVec242[0];
			fRec74[1] = fRec74[0];
			fRec73[1] = fRec73[0];
			fVec243[1] = fVec243[0];
			fRec72[1] = fRec72[0];
			fRec71[1] = fRec71[0];
			fVec244[1] = fVec244[0];
			fVec245[2] = fVec245[1];
			fVec245[1] = fVec245[0];
			for (int j24 = 6; j24 > 0; j24 = j24 - 1) {
				fVec246[j24] = fVec246[j24 - 1];
			}
			for (int j25 = 14; j25 > 0; j25 = j25 - 1) {
				fVec247[j25] = fVec247[j25 - 1];
			}
			fRec75[2] = fRec75[1];
			fRec75[1] = fRec75[0];
			fVec263[1] = fVec263[0];
			fRec79[1] = fRec79[0];
			fRec78[1] = fRec78[0];
			fVec264[1] = fVec264[0];
			fRec77[1] = fRec77[0];
			fRec76[1] = fRec76[0];
			fVec265[1] = fVec265[0];
			fVec266[2] = fVec266[1];
			fVec266[1] = fVec266[0];
			for (int j26 = 6; j26 > 0; j26 = j26 - 1) {
				fVec267[j26] = fVec267[j26 - 1];
			}
			for (int j27 = 14; j27 > 0; j27 = j27 - 1) {
				fVec268[j27] = fVec268[j27 - 1];
			}
			fRec80[2] = fRec80[1];
			fRec80[1] = fRec80[0];
			fVec284[1] = fVec284[0];
			fRec84[1] = fRec84[0];
			fRec83[1] = fRec83[0];
			fVec285[1] = fVec285[0];
			fRec82[1] = fRec82[0];
			fRec81[1] = fRec81[0];
			fVec286[1] = fVec286[0];
			fVec287[2] = fVec287[1];
			fVec287[1] = fVec287[0];
			for (int j28 = 6; j28 > 0; j28 = j28 - 1) {
				fVec288[j28] = fVec288[j28 - 1];
			}
			for (int j29 = 14; j29 > 0; j29 = j29 - 1) {
				fVec289[j29] = fVec289[j29 - 1];
			}
			fRec85[2] = fRec85[1];
			fRec85[1] = fRec85[0];
			fVec305[1] = fVec305[0];
			fRec89[1] = fRec89[0];
			fRec88[1] = fRec88[0];
			fVec306[1] = fVec306[0];
			fRec87[1] = fRec87[0];
			fRec86[1] = fRec86[0];
			fVec307[1] = fVec307[0];
			fVec308[2] = fVec308[1];
			fVec308[1] = fVec308[0];
			for (int j30 = 6; j30 > 0; j30 = j30 - 1) {
				fVec309[j30] = fVec309[j30 - 1];
			}
			for (int j31 = 14; j31 > 0; j31 = j31 - 1) {
				fVec310[j31] = fVec310[j31 - 1];
			}
			fRec90[2] = fRec90[1];
			fRec90[1] = fRec90[0];
			fVec326[1] = fVec326[0];
			fRec94[1] = fRec94[0];
			fRec93[1] = fRec93[0];
			fVec327[1] = fVec327[0];
			fRec92[1] = fRec92[0];
			fRec91[1] = fRec91[0];
			fVec328[1] = fVec328[0];
			fVec329[2] = fVec329[1];
			fVec329[1] = fVec329[0];
			for (int j32 = 6; j32 > 0; j32 = j32 - 1) {
				fVec330[j32] = fVec330[j32 - 1];
			}
			for (int j33 = 14; j33 > 0; j33 = j33 - 1) {
				fVec331[j33] = fVec331[j33 - 1];
			}
			fRec95[2] = fRec95[1];
			fRec95[1] = fRec95[0];
			fVec347[1] = fVec347[0];
			fRec99[1] = fRec99[0];
			fRec98[1] = fRec98[0];
			fVec348[1] = fVec348[0];
			fRec97[1] = fRec97[0];
			fRec96[1] = fRec96[0];
			fVec349[1] = fVec349[0];
			fVec350[2] = fVec350[1];
			fVec350[1] = fVec350[0];
			for (int j34 = 6; j34 > 0; j34 = j34 - 1) {
				fVec351[j34] = fVec351[j34 - 1];
			}
			for (int j35 = 14; j35 > 0; j35 = j35 - 1) {
				fVec352[j35] = fVec352[j35 - 1];
			}
			fRec100[2] = fRec100[1];
			fRec100[1] = fRec100[0];
			fVec368[1] = fVec368[0];
			fRec104[1] = fRec104[0];
			fRec103[1] = fRec103[0];
			fVec369[1] = fVec369[0];
			fRec102[1] = fRec102[0];
			fRec101[1] = fRec101[0];
			fVec370[1] = fVec370[0];
			fVec371[2] = fVec371[1];
			fVec371[1] = fVec371[0];
			for (int j36 = 6; j36 > 0; j36 = j36 - 1) {
				fVec372[j36] = fVec372[j36 - 1];
			}
			for (int j37 = 14; j37 > 0; j37 = j37 - 1) {
				fVec373[j37] = fVec373[j37 - 1];
			}
			fRec105[2] = fRec105[1];
			fRec105[1] = fRec105[0];
			fVec389[1] = fVec389[0];
			fRec109[1] = fRec109[0];
			fRec108[1] = fRec108[0];
			fVec390[1] = fVec390[0];
			fRec107[1] = fRec107[0];
			fRec106[1] = fRec106[0];
			fVec391[1] = fVec391[0];
			fVec392[2] = fVec392[1];
			fVec392[1] = fVec392[0];
			for (int j38 = 6; j38 > 0; j38 = j38 - 1) {
				fVec393[j38] = fVec393[j38 - 1];
			}
			for (int j39 = 14; j39 > 0; j39 = j39 - 1) {
				fVec394[j39] = fVec394[j39 - 1];
			}
			fRec110[2] = fRec110[1];
			fRec110[1] = fRec110[0];
			fVec410[1] = fVec410[0];
			fRec114[1] = fRec114[0];
			fRec113[1] = fRec113[0];
			fVec411[1] = fVec411[0];
			fRec112[1] = fRec112[0];
			fRec111[1] = fRec111[0];
			fVec412[1] = fVec412[0];
			fVec413[2] = fVec413[1];
			fVec413[1] = fVec413[0];
			for (int j40 = 6; j40 > 0; j40 = j40 - 1) {
				fVec414[j40] = fVec414[j40 - 1];
			}
			for (int j41 = 14; j41 > 0; j41 = j41 - 1) {
				fVec415[j41] = fVec415[j41 - 1];
			}
			fRec115[2] = fRec115[1];
			fRec115[1] = fRec115[0];
			fVec431[1] = fVec431[0];
			fRec119[1] = fRec119[0];
			fRec118[1] = fRec118[0];
			fVec432[1] = fVec432[0];
			fRec117[1] = fRec117[0];
			fRec116[1] = fRec116[0];
			fVec433[1] = fVec433[0];
			fVec434[2] = fVec434[1];
			fVec434[1] = fVec434[0];
			for (int j42 = 6; j42 > 0; j42 = j42 - 1) {
				fVec435[j42] = fVec435[j42 - 1];
			}
			for (int j43 = 14; j43 > 0; j43 = j43 - 1) {
				fVec436[j43] = fVec436[j43 - 1];
			}
			fRec120[1] = fRec120[0];
			fRec121[1] = fRec121[0];
			fVec452[1] = fVec452[0];
			fVec453[2] = fVec453[1];
			fVec453[1] = fVec453[0];
			for (int j44 = 6; j44 > 0; j44 = j44 - 1) {
				fVec454[j44] = fVec454[j44 - 1];
			}
			for (int j45 = 14; j45 > 0; j45 = j45 - 1) {
				fVec455[j45] = fVec455[j45 - 1];
			}
			fRec132[1] = fRec132[0];
			fVec457[1] = fVec457[0];
			fRec136[1] = fRec136[0];
			fRec135[1] = fRec135[0];
			fVec458[1] = fVec458[0];
			fRec134[1] = fRec134[0];
			fRec133[1] = fRec133[0];
			fVec459[1] = fVec459[0];
			fVec460[2] = fVec460[1];
			fVec460[1] = fVec460[0];
			for (int j46 = 6; j46 > 0; j46 = j46 - 1) {
				fVec461[j46] = fVec461[j46 - 1];
			}
			for (int j47 = 14; j47 > 0; j47 = j47 - 1) {
				fVec462[j47] = fVec462[j47 - 1];
			}
			fVec470[1] = fVec470[0];
			fRec140[1] = fRec140[0];
			fRec139[1] = fRec139[0];
			fVec471[1] = fVec471[0];
			fRec138[1] = fRec138[0];
			fRec137[1] = fRec137[0];
			fVec472[1] = fVec472[0];
			fVec473[2] = fVec473[1];
			fVec473[1] = fVec473[0];
			for (int j48 = 6; j48 > 0; j48 = j48 - 1) {
				fVec474[j48] = fVec474[j48 - 1];
			}
			for (int j49 = 14; j49 > 0; j49 = j49 - 1) {
				fVec475[j49] = fVec475[j49 - 1];
			}
			fRec127[1] = fRec127[0];
			fRec128[1] = fRec128[0];
			fRec125[1] = fRec125[0];
			fRec124[1] = fRec124[0];
			fRec122[2] = fRec122[1];
			fRec122[1] = fRec122[0];
			fRec123[2] = fRec123[1];
			fRec123[1] = fRec123[0];
			fRec6[2] = fRec6[1];
			fRec6[1] = fRec6[0];
			fRec5[2] = fRec5[1];
			fRec5[1] = fRec5[0];
			fRec4[2] = fRec4[1];
			fRec4[1] = fRec4[0];
			fVec484[1] = fVec484[0];
			fRec3[1] = fRec3[0];
			fRec144[2] = fRec144[1];
			fRec144[1] = fRec144[0];
			fRec143[2] = fRec143[1];
			fRec143[1] = fRec143[0];
			fRec142[2] = fRec142[1];
			fRec142[1] = fRec142[0];
			fVec485[1] = fVec485[0];
			fRec141[1] = fRec141[0];
			fVec486[2] = fVec486[1];
			fVec486[1] = fVec486[0];
			for (int j50 = 6; j50 > 0; j50 = j50 - 1) {
				fVec487[j50] = fVec487[j50 - 1];
			}
			for (int j51 = 14; j51 > 0; j51 = j51 - 1) {
				fVec488[j51] = fVec488[j51 - 1];
			}
			fRec145[1] = fRec145[0];
			fVec497[2] = fVec497[1];
			fVec497[1] = fVec497[0];
			for (int j52 = 6; j52 > 0; j52 = j52 - 1) {
				fVec498[j52] = fVec498[j52 - 1];
			}
			for (int j53 = 14; j53 > 0; j53 = j53 - 1) {
				fVec499[j53] = fVec499[j53 - 1];
			}
			fRec146[1] = fRec146[0];
			fRec156[2] = fRec156[1];
			fRec156[1] = fRec156[0];
			fRec155[2] = fRec155[1];
			fRec155[1] = fRec155[0];
			fRec154[2] = fRec154[1];
			fRec154[1] = fRec154[0];
			fRec153[2] = fRec153[1];
			fRec153[1] = fRec153[0];
			fRec152[2] = fRec152[1];
			fRec152[1] = fRec152[0];
			fVec508[1] = fVec508[0];
			fRec151[1] = fRec151[0];
			fRec162[2] = fRec162[1];
			fRec162[1] = fRec162[0];
			fRec161[2] = fRec161[1];
			fRec161[1] = fRec161[0];
			fRec160[2] = fRec160[1];
			fRec160[1] = fRec160[0];
			fRec159[2] = fRec159[1];
			fRec159[1] = fRec159[0];
			fRec158[2] = fRec158[1];
			fRec158[1] = fRec158[0];
			fVec509[1] = fVec509[0];
			fRec157[1] = fRec157[0];
			fVec510[2] = fVec510[1];
			fVec510[1] = fVec510[0];
			for (int j54 = 6; j54 > 0; j54 = j54 - 1) {
				fVec511[j54] = fVec511[j54 - 1];
			}
			for (int j55 = 14; j55 > 0; j55 = j55 - 1) {
				fVec512[j55] = fVec512[j55 - 1];
			}
			fRec163[1] = fRec163[0];
			fVec521[2] = fVec521[1];
			fVec521[1] = fVec521[0];
			for (int j56 = 6; j56 > 0; j56 = j56 - 1) {
				fVec522[j56] = fVec522[j56 - 1];
			}
			for (int j57 = 14; j57 > 0; j57 = j57 - 1) {
				fVec523[j57] = fVec523[j57 - 1];
			}
			fRec164[1] = fRec164[0];
			fRec178[2] = fRec178[1];
			fRec178[1] = fRec178[0];
			fRec177[2] = fRec177[1];
			fRec177[1] = fRec177[0];
			fRec176[2] = fRec176[1];
			fRec176[1] = fRec176[0];
			fRec175[2] = fRec175[1];
			fRec175[1] = fRec175[0];
			fRec174[2] = fRec174[1];
			fRec174[1] = fRec174[0];
			fVec532[1] = fVec532[0];
			fRec173[1] = fRec173[0];
			fRec184[2] = fRec184[1];
			fRec184[1] = fRec184[0];
			fRec183[2] = fRec183[1];
			fRec183[1] = fRec183[0];
			fRec182[2] = fRec182[1];
			fRec182[1] = fRec182[0];
			fRec181[2] = fRec181[1];
			fRec181[1] = fRec181[0];
			fRec180[2] = fRec180[1];
			fRec180[1] = fRec180[0];
			fVec533[1] = fVec533[0];
			fRec179[1] = fRec179[0];
			fVec534[2] = fVec534[1];
			fVec534[1] = fVec534[0];
			for (int j58 = 6; j58 > 0; j58 = j58 - 1) {
				fVec535[j58] = fVec535[j58 - 1];
			}
			for (int j59 = 14; j59 > 0; j59 = j59 - 1) {
				fVec536[j59] = fVec536[j59 - 1];
			}
			fRec185[1] = fRec185[0];
			fVec545[2] = fVec545[1];
			fVec545[1] = fVec545[0];
			for (int j60 = 6; j60 > 0; j60 = j60 - 1) {
				fVec546[j60] = fVec546[j60 - 1];
			}
			for (int j61 = 14; j61 > 0; j61 = j61 - 1) {
				fVec547[j61] = fVec547[j61 - 1];
			}
			fRec186[1] = fRec186[0];
			fRec200[2] = fRec200[1];
			fRec200[1] = fRec200[0];
			fRec199[2] = fRec199[1];
			fRec199[1] = fRec199[0];
			fRec198[2] = fRec198[1];
			fRec198[1] = fRec198[0];
			fRec197[2] = fRec197[1];
			fRec197[1] = fRec197[0];
			fRec196[2] = fRec196[1];
			fRec196[1] = fRec196[0];
			fVec556[1] = fVec556[0];
			fRec195[1] = fRec195[0];
			fRec206[2] = fRec206[1];
			fRec206[1] = fRec206[0];
			fRec205[2] = fRec205[1];
			fRec205[1] = fRec205[0];
			fRec204[2] = fRec204[1];
			fRec204[1] = fRec204[0];
			fRec203[2] = fRec203[1];
			fRec203[1] = fRec203[0];
			fRec202[2] = fRec202[1];
			fRec202[1] = fRec202[0];
			fVec557[1] = fVec557[0];
			fRec201[1] = fRec201[0];
			fVec558[2] = fVec558[1];
			fVec558[1] = fVec558[0];
			for (int j62 = 6; j62 > 0; j62 = j62 - 1) {
				fVec559[j62] = fVec559[j62 - 1];
			}
			for (int j63 = 14; j63 > 0; j63 = j63 - 1) {
				fVec560[j63] = fVec560[j63 - 1];
			}
			fRec207[1] = fRec207[0];
			fVec569[2] = fVec569[1];
			fVec569[1] = fVec569[0];
			for (int j64 = 6; j64 > 0; j64 = j64 - 1) {
				fVec570[j64] = fVec570[j64 - 1];
			}
			for (int j65 = 14; j65 > 0; j65 = j65 - 1) {
				fVec571[j65] = fVec571[j65 - 1];
			}
			fRec208[1] = fRec208[0];
			fRec219[2] = fRec219[1];
			fRec219[1] = fRec219[0];
			fRec218[2] = fRec218[1];
			fRec218[1] = fRec218[0];
			fVec580[1] = fVec580[0];
			fRec217[1] = fRec217[0];
			fRec222[2] = fRec222[1];
			fRec222[1] = fRec222[0];
			fRec221[2] = fRec221[1];
			fRec221[1] = fRec221[0];
			fVec581[1] = fVec581[0];
			fRec220[1] = fRec220[0];
			fVec582[2] = fVec582[1];
			fVec582[1] = fVec582[0];
			for (int j66 = 6; j66 > 0; j66 = j66 - 1) {
				fVec583[j66] = fVec583[j66 - 1];
			}
			for (int j67 = 14; j67 > 0; j67 = j67 - 1) {
				fVec584[j67] = fVec584[j67 - 1];
			}
			fRec223[1] = fRec223[0];
			fVec593[2] = fVec593[1];
			fVec593[1] = fVec593[0];
			for (int j68 = 6; j68 > 0; j68 = j68 - 1) {
				fVec594[j68] = fVec594[j68 - 1];
			}
			for (int j69 = 14; j69 > 0; j69 = j69 - 1) {
				fVec595[j69] = fVec595[j69 - 1];
			}
			fRec224[1] = fRec224[0];
			fRec225[1] = fRec225[0];
			fRec226[1] = fRec226[0];
			fRec213[1] = fRec213[0];
			fRec214[1] = fRec214[0];
			fRec209[1] = fRec209[0];
			fRec210[1] = fRec210[0];
			fRec191[1] = fRec191[0];
			fRec192[1] = fRec192[0];
			fRec187[1] = fRec187[0];
			fRec188[1] = fRec188[0];
			fRec169[1] = fRec169[0];
			fRec170[1] = fRec170[0];
			fRec165[1] = fRec165[0];
			fRec166[1] = fRec166[0];
			fRec147[1] = fRec147[0];
			fRec148[1] = fRec148[0];
			fRec229[1] = fRec229[0];
			fRec2[2] = fRec2[1];
			fRec2[1] = fRec2[0];
			fRec1[1] = fRec1[0];
			fRec260[1] = fRec260[0];
			fRec261[1] = fRec261[0];
			fRec256[1] = fRec256[0];
			fRec257[1] = fRec257[0];
			fRec252[1] = fRec252[0];
			fRec253[1] = fRec253[0];
			fRec248[1] = fRec248[0];
			fRec249[1] = fRec249[0];
			fRec244[1] = fRec244[0];
			fRec245[1] = fRec245[0];
			fRec240[1] = fRec240[0];
			fRec241[1] = fRec241[0];
			fRec236[1] = fRec236[0];
			fRec237[1] = fRec237[0];
			fRec232[1] = fRec232[0];
			fRec233[1] = fRec233[0];
			fRec231[2] = fRec231[1];
			fRec231[1] = fRec231[0];
			fRec230[1] = fRec230[0];
			fRec264[2] = fRec264[1];
			fRec264[1] = fRec264[0];
			fRec269[2] = fRec269[1];
			fRec269[1] = fRec269[0];
			iRec267[1] = iRec267[0];
			fRec268[1] = fRec268[0];
			fRec266[1] = fRec266[0];
			fRec265[1] = fRec265[0];
			fRec270[1] = fRec270[0];
			fRec0[1] = fRec0[0];
			fVec606[1] = fVec606[0];
			fRec275[1] = fRec275[0];
			fVec607[1] = fVec607[0];
			fVec608[1] = fVec608[0];
			fRec274[1] = fRec274[0];
			fRec273[1] = fRec273[0];
			fVec609[1] = fVec609[0];
			fRec272[1] = fRec272[0];
			fRec271[1] = fRec271[0];
			fVec610[1] = fVec610[0];
			fVec611[2] = fVec611[1];
			fVec611[1] = fVec611[0];
			for (int j70 = 6; j70 > 0; j70 = j70 - 1) {
				fVec612[j70] = fVec612[j70 - 1];
			}
			for (int j71 = 14; j71 > 0; j71 = j71 - 1) {
				fVec613[j71] = fVec613[j71 - 1];
			}
			fVec630[1] = fVec630[0];
			fRec279[1] = fRec279[0];
			fRec278[1] = fRec278[0];
			fVec631[1] = fVec631[0];
			fRec277[1] = fRec277[0];
			fRec276[1] = fRec276[0];
			fVec632[1] = fVec632[0];
			fVec633[2] = fVec633[1];
			fVec633[1] = fVec633[0];
			for (int j72 = 6; j72 > 0; j72 = j72 - 1) {
				fVec634[j72] = fVec634[j72 - 1];
			}
			for (int j73 = 14; j73 > 0; j73 = j73 - 1) {
				fVec635[j73] = fVec635[j73 - 1];
			}
		}
	}

};
FAUSTPP_END_NAMESPACE


#if defined(__GNUC__)
#   pragma GCC diagnostic pop
#endif



// --------------------------------------------------------------------------------------------------------------------

START_NAMESPACE_DISTRHO

// --------------------------------------------------------------------------------------------------------------------

class FaustGeneratedPlugin : public Plugin
{
protected:
    ScopedPointer<mydsp> dsp;

public:
    FaustGeneratedPlugin(const uint32_t extraParameters = 0,
                         const uint32_t extraPrograms = 0,
                         const uint32_t extraStates = 0)
        : Plugin(kParameterCount + extraParameters, kProgramCount + extraPrograms, kStateCount + extraStates)
    {
        dsp = new mydsp;
        dsp->init(getSampleRate());

        // passive controls are only updated on first run, make sure they have valid values now
        dsp->fVbargraph28 = 0;
        dsp->fVbargraph21 = 0;
        dsp->fVbargraph20 = 0;
        dsp->fVbargraph19 = 0;
        dsp->fVbargraph18 = 0;
        dsp->fVbargraph17 = 0;
        dsp->fVbargraph16 = 0;
        dsp->fVbargraph15 = 0;
        dsp->fVbargraph14 = 0;
        dsp->fVbargraph13 = 0;
        dsp->fVbargraph12 = 0;
        dsp->fVbargraph11 = 0;
        dsp->fVbargraph10 = 0;
        dsp->fVbargraph9 = 0;
        dsp->fVbargraph8 = 0;
        dsp->fVbargraph7 = 0;
        dsp->fVbargraph6 = 0;
        dsp->fVbargraph5 = 0;
        dsp->fVbargraph4 = 0;
        dsp->fVbargraph3 = 0;
        dsp->fVbargraph2 = 0;
        dsp->fVbargraph1 = 0;
        dsp->fVbargraph0 = 0;
        dsp->fVbargraph22 = 0;
        dsp->fVbargraph27 = 0;
        dsp->fVbargraph26 = 0;
        dsp->fVbargraph25 = 0;
        dsp->fVbargraph24 = 0;
        dsp->fVbargraph23 = 0;
        dsp->fVbargraph29 = 0;
        dsp->fVbargraph32 = 0;
        dsp->fVbargraph30 = 0;
        dsp->fVbargraph31 = 0;
        
    }

    /*
    void printCurrentValues()
    {
        d_stdout("==== preset data start ===");
        printf("%.12g,", dsp->fCheckbox0);
        printf("%.12g,", dsp->fCheckbox1);
        printf("%.12g,", dsp->fCheckbox2);
        printf("%.12g,", dsp->fCheckbox3);
        printf("%.12g,", dsp->fVslider4);
        printf("%.12g,", dsp->fVslider3);
        printf("%.12g,", dsp->fVslider2);
        printf("%.12g,", dsp->fVslider0);
        printf("%.12g,", dsp->fVslider1);
        
        d_stdout("\n==== preset data end ===");
    }
    */

protected:
   /* -----------------------------------------------------------------------------------------------------------------
    * Information */

    const char* getLabel() const override
    {
        return "pp_track";
    }

    const char* getDescription() const override
    {
        return "";
    }

    const char* getMaker() const override
    {
        return "Klaus Scheuermann";
    }

    const char* getHomePage() const override
    {
        return "https://4ohm.de/";
    }

    const char* getLicense() const override
    {
        return "GPLv3+";
    }

    uint32_t getVersion() const override
    {
        return d_version(0, 1, 0);
    }

   /* -----------------------------------------------------------------------------------------------------------------
    * Init */

    void initAudioPort(const bool input, const uint32_t index, AudioPort& port) override
    {
        /* make assumptions related to IO.
         * 1 audio port means mono, 2 means stereo.
         */
        
            
            
        port.groupId = kPortGroupStereo;
            
        

        // everything else is as default
        Plugin::initAudioPort(input, index, port);
    }

    void initParameter(const uint32_t index, Parameter& param) override
    {
        switch (index)
        {
        case kParameter_bypass_timbre:
            param.hints = kParameterIsAutomatable
            
            
                |kParameterIsBoolean
            
            
                |kParameterIsInteger
            
            
            ;
            param.name = kParameterNames[0];
            param.unit = kParameterUnits[0];
            param.symbol = kParameterSymbols[0];
            param.shortName = "";
            param.ranges.def = kParameterRanges[0].def;
            param.ranges.min = kParameterRanges[0].min;
            param.ranges.max = kParameterRanges[0].max;
            break;
        case kParameter_bypass_leveler:
            param.hints = kParameterIsAutomatable
            
            
                |kParameterIsBoolean
            
            
                |kParameterIsInteger
            
            
            ;
            param.name = kParameterNames[1];
            param.unit = kParameterUnits[1];
            param.symbol = kParameterSymbols[1];
            param.shortName = "";
            param.ranges.def = kParameterRanges[1].def;
            param.ranges.min = kParameterRanges[1].min;
            param.ranges.max = kParameterRanges[1].max;
            break;
        case kParameter_bypass_style:
            param.hints = kParameterIsAutomatable
            
            
                |kParameterIsBoolean
            
            
                |kParameterIsInteger
            
            
            ;
            param.name = kParameterNames[2];
            param.unit = kParameterUnits[2];
            param.symbol = kParameterSymbols[2];
            param.shortName = "";
            param.ranges.def = kParameterRanges[2].def;
            param.ranges.min = kParameterRanges[2].min;
            param.ranges.max = kParameterRanges[2].max;
            break;
        case kParameter_bypass_global:
            param.hints = kParameterIsAutomatable
            
            
                |kParameterIsBoolean
            
            
                |kParameterIsInteger
            
            
            ;
            param.name = kParameterNames[3];
            param.unit = kParameterUnits[3];
            param.symbol = kParameterSymbols[3];
            param.shortName = "";
            param.ranges.def = kParameterRanges[3].def;
            param.ranges.min = kParameterRanges[3].min;
            param.ranges.max = kParameterRanges[3].max;
            break;
        case kParameter_timbre_strength:
            param.hints = kParameterIsAutomatable
            
            
            
            
            ;
            param.name = kParameterNames[4];
            param.unit = kParameterUnits[4];
            param.symbol = kParameterSymbols[4];
            param.shortName = "";
            param.ranges.def = kParameterRanges[4].def;
            param.ranges.min = kParameterRanges[4].min;
            param.ranges.max = kParameterRanges[4].max;
            break;
        case kParameter_timbre:
            param.hints = kParameterIsAutomatable
            
            
            
            
            ;
            param.name = kParameterNames[5];
            param.unit = kParameterUnits[5];
            param.symbol = kParameterSymbols[5];
            param.shortName = "";
            param.ranges.def = kParameterRanges[5].def;
            param.ranges.min = kParameterRanges[5].min;
            param.ranges.max = kParameterRanges[5].max;
            break;
        case kParameter_input_gain:
            param.hints = kParameterIsAutomatable
            
            
            
            
            ;
            param.name = kParameterNames[6];
            param.unit = kParameterUnits[6];
            param.symbol = kParameterSymbols[6];
            param.shortName = "";
            param.ranges.def = kParameterRanges[6].def;
            param.ranges.min = kParameterRanges[6].min;
            param.ranges.max = kParameterRanges[6].max;
            break;
        case kParameter_leveler_target:
            param.hints = kParameterIsAutomatable
            
            
            
            
            ;
            param.name = kParameterNames[7];
            param.unit = kParameterUnits[7];
            param.symbol = kParameterSymbols[7];
            param.shortName = "";
            param.ranges.def = kParameterRanges[7].def;
            param.ranges.min = kParameterRanges[7].min;
            param.ranges.max = kParameterRanges[7].max;
            break;
        case kParameter_style:
            param.hints = kParameterIsAutomatable
            
            
            
            
            ;
            param.name = kParameterNames[8];
            param.unit = kParameterUnits[8];
            param.symbol = kParameterSymbols[8];
            param.shortName = "";
            param.ranges.def = kParameterRanges[8].def;
            param.ranges.min = kParameterRanges[8].min;
            param.ranges.max = kParameterRanges[8].max;
            break;
        
        case kParameter_latency_global:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[9];
            param.unit = kParameterUnits[9];
            param.symbol = kParameterSymbols[9];
            param.shortName = "";
            param.ranges.def = kParameterRanges[9].def;
            param.ranges.min = kParameterRanges[9].min;
            param.ranges.max = kParameterRanges[9].max;
            break;
        case kParameter_spectral_ballancer_gain_band__0:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[10];
            param.unit = kParameterUnits[10];
            param.symbol = kParameterSymbols[10];
            param.shortName = "";
            param.ranges.def = kParameterRanges[10].def;
            param.ranges.min = kParameterRanges[10].min;
            param.ranges.max = kParameterRanges[10].max;
            break;
        case kParameter_spectral_ballancer_gain_band__1:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[11];
            param.unit = kParameterUnits[11];
            param.symbol = kParameterSymbols[11];
            param.shortName = "";
            param.ranges.def = kParameterRanges[11].def;
            param.ranges.min = kParameterRanges[11].min;
            param.ranges.max = kParameterRanges[11].max;
            break;
        case kParameter_spectral_ballancer_gain_band__2:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[12];
            param.unit = kParameterUnits[12];
            param.symbol = kParameterSymbols[12];
            param.shortName = "";
            param.ranges.def = kParameterRanges[12].def;
            param.ranges.min = kParameterRanges[12].min;
            param.ranges.max = kParameterRanges[12].max;
            break;
        case kParameter_spectral_ballancer_gain_band__3:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[13];
            param.unit = kParameterUnits[13];
            param.symbol = kParameterSymbols[13];
            param.shortName = "";
            param.ranges.def = kParameterRanges[13].def;
            param.ranges.min = kParameterRanges[13].min;
            param.ranges.max = kParameterRanges[13].max;
            break;
        case kParameter_spectral_ballancer_gain_band__4:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[14];
            param.unit = kParameterUnits[14];
            param.symbol = kParameterSymbols[14];
            param.shortName = "";
            param.ranges.def = kParameterRanges[14].def;
            param.ranges.min = kParameterRanges[14].min;
            param.ranges.max = kParameterRanges[14].max;
            break;
        case kParameter_spectral_ballancer_gain_band__5:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[15];
            param.unit = kParameterUnits[15];
            param.symbol = kParameterSymbols[15];
            param.shortName = "";
            param.ranges.def = kParameterRanges[15].def;
            param.ranges.min = kParameterRanges[15].min;
            param.ranges.max = kParameterRanges[15].max;
            break;
        case kParameter_spectral_ballancer_gain_band__6:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[16];
            param.unit = kParameterUnits[16];
            param.symbol = kParameterSymbols[16];
            param.shortName = "";
            param.ranges.def = kParameterRanges[16].def;
            param.ranges.min = kParameterRanges[16].min;
            param.ranges.max = kParameterRanges[16].max;
            break;
        case kParameter_spectral_ballancer_gain_band__7:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[17];
            param.unit = kParameterUnits[17];
            param.symbol = kParameterSymbols[17];
            param.shortName = "";
            param.ranges.def = kParameterRanges[17].def;
            param.ranges.min = kParameterRanges[17].min;
            param.ranges.max = kParameterRanges[17].max;
            break;
        case kParameter_spectral_ballancer_gain_band__8:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[18];
            param.unit = kParameterUnits[18];
            param.symbol = kParameterSymbols[18];
            param.shortName = "";
            param.ranges.def = kParameterRanges[18].def;
            param.ranges.min = kParameterRanges[18].min;
            param.ranges.max = kParameterRanges[18].max;
            break;
        case kParameter_spectral_ballancer_gain_band__9:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[19];
            param.unit = kParameterUnits[19];
            param.symbol = kParameterSymbols[19];
            param.shortName = "";
            param.ranges.def = kParameterRanges[19].def;
            param.ranges.min = kParameterRanges[19].min;
            param.ranges.max = kParameterRanges[19].max;
            break;
        case kParameter_spectral_ballancer_gain_band_10:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[20];
            param.unit = kParameterUnits[20];
            param.symbol = kParameterSymbols[20];
            param.shortName = "";
            param.ranges.def = kParameterRanges[20].def;
            param.ranges.min = kParameterRanges[20].min;
            param.ranges.max = kParameterRanges[20].max;
            break;
        case kParameter_spectral_ballancer_gain_band_11:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[21];
            param.unit = kParameterUnits[21];
            param.symbol = kParameterSymbols[21];
            param.shortName = "";
            param.ranges.def = kParameterRanges[21].def;
            param.ranges.min = kParameterRanges[21].min;
            param.ranges.max = kParameterRanges[21].max;
            break;
        case kParameter_spectral_ballancer_gain_band_12:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[22];
            param.unit = kParameterUnits[22];
            param.symbol = kParameterSymbols[22];
            param.shortName = "";
            param.ranges.def = kParameterRanges[22].def;
            param.ranges.min = kParameterRanges[22].min;
            param.ranges.max = kParameterRanges[22].max;
            break;
        case kParameter_spectral_ballancer_gain_band_13:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[23];
            param.unit = kParameterUnits[23];
            param.symbol = kParameterSymbols[23];
            param.shortName = "";
            param.ranges.def = kParameterRanges[23].def;
            param.ranges.min = kParameterRanges[23].min;
            param.ranges.max = kParameterRanges[23].max;
            break;
        case kParameter_spectral_ballancer_gain_band_14:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[24];
            param.unit = kParameterUnits[24];
            param.symbol = kParameterSymbols[24];
            param.shortName = "";
            param.ranges.def = kParameterRanges[24].def;
            param.ranges.min = kParameterRanges[24].min;
            param.ranges.max = kParameterRanges[24].max;
            break;
        case kParameter_spectral_ballancer_gain_band_15:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[25];
            param.unit = kParameterUnits[25];
            param.symbol = kParameterSymbols[25];
            param.shortName = "";
            param.ranges.def = kParameterRanges[25].def;
            param.ranges.min = kParameterRanges[25].min;
            param.ranges.max = kParameterRanges[25].max;
            break;
        case kParameter_spectral_ballancer_gain_band_16:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[26];
            param.unit = kParameterUnits[26];
            param.symbol = kParameterSymbols[26];
            param.shortName = "";
            param.ranges.def = kParameterRanges[26].def;
            param.ranges.min = kParameterRanges[26].min;
            param.ranges.max = kParameterRanges[26].max;
            break;
        case kParameter_spectral_ballancer_gain_band_17:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[27];
            param.unit = kParameterUnits[27];
            param.symbol = kParameterSymbols[27];
            param.shortName = "";
            param.ranges.def = kParameterRanges[27].def;
            param.ranges.min = kParameterRanges[27].min;
            param.ranges.max = kParameterRanges[27].max;
            break;
        case kParameter_spectral_ballancer_gain_band_18:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[28];
            param.unit = kParameterUnits[28];
            param.symbol = kParameterSymbols[28];
            param.shortName = "";
            param.ranges.def = kParameterRanges[28].def;
            param.ranges.min = kParameterRanges[28].min;
            param.ranges.max = kParameterRanges[28].max;
            break;
        case kParameter_spectral_ballancer_gain_band_19:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[29];
            param.unit = kParameterUnits[29];
            param.symbol = kParameterSymbols[29];
            param.shortName = "";
            param.ranges.def = kParameterRanges[29].def;
            param.ranges.min = kParameterRanges[29].min;
            param.ranges.max = kParameterRanges[29].max;
            break;
        case kParameter_input_peak_channel_0:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[30];
            param.unit = kParameterUnits[30];
            param.symbol = kParameterSymbols[30];
            param.shortName = "";
            param.ranges.def = kParameterRanges[30].def;
            param.ranges.min = kParameterRanges[30].min;
            param.ranges.max = kParameterRanges[30].max;
            break;
        case kParameter_input_peak_channel_1:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[31];
            param.unit = kParameterUnits[31];
            param.symbol = kParameterSymbols[31];
            param.shortName = "";
            param.ranges.def = kParameterRanges[31].def;
            param.ranges.min = kParameterRanges[31].min;
            param.ranges.max = kParameterRanges[31].max;
            break;
        case kParameter_leveler_gain:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[32];
            param.unit = kParameterUnits[32];
            param.symbol = kParameterSymbols[32];
            param.shortName = "";
            param.ranges.def = kParameterRanges[32].def;
            param.ranges.min = kParameterRanges[32].min;
            param.ranges.max = kParameterRanges[32].max;
            break;
        case kParameter_multiband_compressor_gain_band_1:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[33];
            param.unit = kParameterUnits[33];
            param.symbol = kParameterSymbols[33];
            param.shortName = "";
            param.ranges.def = kParameterRanges[33].def;
            param.ranges.min = kParameterRanges[33].min;
            param.ranges.max = kParameterRanges[33].max;
            break;
        case kParameter_multiband_compressor_gain_band_2:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[34];
            param.unit = kParameterUnits[34];
            param.symbol = kParameterSymbols[34];
            param.shortName = "";
            param.ranges.def = kParameterRanges[34].def;
            param.ranges.min = kParameterRanges[34].min;
            param.ranges.max = kParameterRanges[34].max;
            break;
        case kParameter_multiband_compressor_gain_band_3:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[35];
            param.unit = kParameterUnits[35];
            param.symbol = kParameterSymbols[35];
            param.shortName = "";
            param.ranges.def = kParameterRanges[35].def;
            param.ranges.min = kParameterRanges[35].min;
            param.ranges.max = kParameterRanges[35].max;
            break;
        case kParameter_multiband_compressor_gain_band_4:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[36];
            param.unit = kParameterUnits[36];
            param.symbol = kParameterSymbols[36];
            param.shortName = "";
            param.ranges.def = kParameterRanges[36].def;
            param.ranges.min = kParameterRanges[36].min;
            param.ranges.max = kParameterRanges[36].max;
            break;
        case kParameter_multiband_compressor_gain_band_5:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[37];
            param.unit = kParameterUnits[37];
            param.symbol = kParameterSymbols[37];
            param.shortName = "";
            param.ranges.def = kParameterRanges[37].def;
            param.ranges.min = kParameterRanges[37].min;
            param.ranges.max = kParameterRanges[37].max;
            break;
        case kParameter_limiter_gain:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[38];
            param.unit = kParameterUnits[38];
            param.symbol = kParameterSymbols[38];
            param.shortName = "";
            param.ranges.def = kParameterRanges[38].def;
            param.ranges.min = kParameterRanges[38].min;
            param.ranges.max = kParameterRanges[38].max;
            break;
        case kParameter_lufs_out_meter:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[39];
            param.unit = kParameterUnits[39];
            param.symbol = kParameterSymbols[39];
            param.shortName = "";
            param.ranges.def = kParameterRanges[39].def;
            param.ranges.min = kParameterRanges[39].min;
            param.ranges.max = kParameterRanges[39].max;
            break;
        case kParameter_output_peak_channel_0:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[40];
            param.unit = kParameterUnits[40];
            param.symbol = kParameterSymbols[40];
            param.shortName = "";
            param.ranges.def = kParameterRanges[40].def;
            param.ranges.min = kParameterRanges[40].min;
            param.ranges.max = kParameterRanges[40].max;
            break;
        case kParameter_output_peak_channel_1:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[41];
            param.unit = kParameterUnits[41];
            param.symbol = kParameterSymbols[41];
            param.shortName = "";
            param.ranges.def = kParameterRanges[41].def;
            param.ranges.min = kParameterRanges[41].min;
            param.ranges.max = kParameterRanges[41].max;
            break;
        
        }
    }

   /* -----------------------------------------------------------------------------------------------------------------
    * Internal data */

    float getParameterValue(const uint32_t index) const override
    {
        switch (index)
        {
        case kParameter_bypass_timbre:
            return dsp->fCheckbox0;
        case kParameter_bypass_leveler:
            return dsp->fCheckbox1;
        case kParameter_bypass_style:
            return dsp->fCheckbox2;
        case kParameter_bypass_global:
            return dsp->fCheckbox3;
        case kParameter_timbre_strength:
            return dsp->fVslider4;
        case kParameter_timbre:
            return dsp->fVslider3;
        case kParameter_input_gain:
            return dsp->fVslider2;
        case kParameter_leveler_target:
            return dsp->fVslider0;
        case kParameter_style:
            return dsp->fVslider1;
        case kParameter_latency_global:
            return dsp->fVbargraph28;
        case kParameter_spectral_ballancer_gain_band__0:
            return dsp->fVbargraph21;
        case kParameter_spectral_ballancer_gain_band__1:
            return dsp->fVbargraph20;
        case kParameter_spectral_ballancer_gain_band__2:
            return dsp->fVbargraph19;
        case kParameter_spectral_ballancer_gain_band__3:
            return dsp->fVbargraph18;
        case kParameter_spectral_ballancer_gain_band__4:
            return dsp->fVbargraph17;
        case kParameter_spectral_ballancer_gain_band__5:
            return dsp->fVbargraph16;
        case kParameter_spectral_ballancer_gain_band__6:
            return dsp->fVbargraph15;
        case kParameter_spectral_ballancer_gain_band__7:
            return dsp->fVbargraph14;
        case kParameter_spectral_ballancer_gain_band__8:
            return dsp->fVbargraph13;
        case kParameter_spectral_ballancer_gain_band__9:
            return dsp->fVbargraph12;
        case kParameter_spectral_ballancer_gain_band_10:
            return dsp->fVbargraph11;
        case kParameter_spectral_ballancer_gain_band_11:
            return dsp->fVbargraph10;
        case kParameter_spectral_ballancer_gain_band_12:
            return dsp->fVbargraph9;
        case kParameter_spectral_ballancer_gain_band_13:
            return dsp->fVbargraph8;
        case kParameter_spectral_ballancer_gain_band_14:
            return dsp->fVbargraph7;
        case kParameter_spectral_ballancer_gain_band_15:
            return dsp->fVbargraph6;
        case kParameter_spectral_ballancer_gain_band_16:
            return dsp->fVbargraph5;
        case kParameter_spectral_ballancer_gain_band_17:
            return dsp->fVbargraph4;
        case kParameter_spectral_ballancer_gain_band_18:
            return dsp->fVbargraph3;
        case kParameter_spectral_ballancer_gain_band_19:
            return dsp->fVbargraph2;
        case kParameter_input_peak_channel_0:
            return dsp->fVbargraph1;
        case kParameter_input_peak_channel_1:
            return dsp->fVbargraph0;
        case kParameter_leveler_gain:
            return dsp->fVbargraph22;
        case kParameter_multiband_compressor_gain_band_1:
            return dsp->fVbargraph27;
        case kParameter_multiband_compressor_gain_band_2:
            return dsp->fVbargraph26;
        case kParameter_multiband_compressor_gain_band_3:
            return dsp->fVbargraph25;
        case kParameter_multiband_compressor_gain_band_4:
            return dsp->fVbargraph24;
        case kParameter_multiband_compressor_gain_band_5:
            return dsp->fVbargraph23;
        case kParameter_limiter_gain:
            return dsp->fVbargraph29;
        case kParameter_lufs_out_meter:
            return dsp->fVbargraph32;
        case kParameter_output_peak_channel_0:
            return dsp->fVbargraph30;
        case kParameter_output_peak_channel_1:
            return dsp->fVbargraph31;
        
        default:
            return 0.0f;
        }
    }

    void setParameterValue(const uint32_t index, const float value) override
    {
        switch (index)
        {
        case kParameter_bypass_timbre:
            dsp->fCheckbox0 = value;
            break;
        case kParameter_bypass_leveler:
            dsp->fCheckbox1 = value;
            break;
        case kParameter_bypass_style:
            dsp->fCheckbox2 = value;
            break;
        case kParameter_bypass_global:
            dsp->fCheckbox3 = value;
            break;
        case kParameter_timbre_strength:
            dsp->fVslider4 = value;
            break;
        case kParameter_timbre:
            dsp->fVslider3 = value;
            break;
        case kParameter_input_gain:
            dsp->fVslider2 = value;
            break;
        case kParameter_leveler_target:
            dsp->fVslider0 = value;
            break;
        case kParameter_style:
            dsp->fVslider1 = value;
            break;
        
        }
    }

   /* -----------------------------------------------------------------------------------------------------------------
    * Audio/MIDI Processing */

    void run(const float** const inputs, float** const outputs, const uint32_t frames) override
    {
        dsp->compute(frames, const_cast<float**>(inputs), outputs);
    }

    void sampleRateChanged(const double newSampleRate) override
    {
        // retrieve parameter info first
        float params[9] = {
            dsp->fCheckbox0,
            dsp->fCheckbox1,
            dsp->fCheckbox2,
            dsp->fCheckbox3,
            dsp->fVslider4,
            dsp->fVslider3,
            dsp->fVslider2,
            dsp->fVslider0,
            dsp->fVslider1,
            
        };

        // tell dsp to change sample rate
        dsp->init(newSampleRate);

        // set parameters back, which have been reset in the dsp
        dsp->fCheckbox0 = params[0];
        dsp->fCheckbox1 = params[1];
        dsp->fCheckbox2 = params[2];
        dsp->fCheckbox3 = params[3];
        dsp->fVslider4 = params[4];
        dsp->fVslider3 = params[5];
        dsp->fVslider2 = params[6];
        dsp->fVslider0 = params[7];
        dsp->fVslider1 = params[8];
        
    }

    // ----------------------------------------------------------------------------------------------------------------

    DISTRHO_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(FaustGeneratedPlugin)
};

// --------------------------------------------------------------------------------------------------------------------

#if 0


Plugin* createPlugin()
{
    return new FaustGeneratedPlugin();
}


#endif

// --------------------------------------------------------------------------------------------------------------------

END_NAMESPACE_DISTRHO