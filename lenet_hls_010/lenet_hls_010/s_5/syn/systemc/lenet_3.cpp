#include "lenet.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void lenet::thread_hdltv_gen() {
    const char* dump_tv = std::getenv("AP_WRITE_TV");
    if (!(dump_tv && string(dump_tv) == "on")) return;

    wait();

    mHdltvinHandle << "[ " << endl;
    mHdltvoutHandle << "[ " << endl;
    int ap_cycleNo = 0;
    while (1) {
        wait();
        const char* mComma = ap_cycleNo == 0 ? " " : ", " ;
        mHdltvinHandle << mComma << "{"  <<  " \"ap_rst_n\" :  \"" << ap_rst_n.read() << "\" ";
        mHdltvoutHandle << mComma << "{"  <<  " \"input_r_Addr_A\" :  \"" << input_r_Addr_A.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_r_EN_A\" :  \"" << input_r_EN_A.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_r_WEN_A\" :  \"" << input_r_WEN_A.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_r_Din_A\" :  \"" << input_r_Din_A.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_r_Dout_A\" :  \"" << input_r_Dout_A.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_r_Clk_A\" :  \"" << input_r_Clk_A.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_r_Rst_A\" :  \"" << input_r_Rst_A.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"Cout_Addr_A\" :  \"" << Cout_Addr_A.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"Cout_EN_A\" :  \"" << Cout_EN_A.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"Cout_WEN_A\" :  \"" << Cout_WEN_A.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"Cout_Din_A\" :  \"" << Cout_Din_A.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"Cout_Dout_A\" :  \"" << Cout_Dout_A.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"Cout_Clk_A\" :  \"" << Cout_Clk_A.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"Cout_Rst_A\" :  \"" << Cout_Rst_A.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_Crtl_AWVALID\" :  \"" << s_axi_Crtl_AWVALID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_Crtl_AWREADY\" :  \"" << s_axi_Crtl_AWREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_Crtl_AWADDR\" :  \"" << s_axi_Crtl_AWADDR.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_Crtl_WVALID\" :  \"" << s_axi_Crtl_WVALID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_Crtl_WREADY\" :  \"" << s_axi_Crtl_WREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_Crtl_WDATA\" :  \"" << s_axi_Crtl_WDATA.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_Crtl_WSTRB\" :  \"" << s_axi_Crtl_WSTRB.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_Crtl_ARVALID\" :  \"" << s_axi_Crtl_ARVALID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_Crtl_ARREADY\" :  \"" << s_axi_Crtl_ARREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_Crtl_ARADDR\" :  \"" << s_axi_Crtl_ARADDR.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_Crtl_RVALID\" :  \"" << s_axi_Crtl_RVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_Crtl_RREADY\" :  \"" << s_axi_Crtl_RREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_Crtl_RDATA\" :  \"" << s_axi_Crtl_RDATA.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_Crtl_RRESP\" :  \"" << s_axi_Crtl_RRESP.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_Crtl_BVALID\" :  \"" << s_axi_Crtl_BVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_Crtl_BREADY\" :  \"" << s_axi_Crtl_BREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_Crtl_BRESP\" :  \"" << s_axi_Crtl_BRESP.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"interrupt\" :  \"" << interrupt.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}

