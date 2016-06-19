//  THIS SOFTWARE IS PROVIDED ``AS IS'' AND ANY EXPRESSED OR IMPLIED WARRANTIES,
//  INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND
//  FITNESS  FOR A PARTICULAR  PURPOSE ARE  DISCLAIMED.  IN NO  EVENT SHALL  THE
//  APACHE SOFTWARE  FOUNDATION  OR ITS CONTRIBUTORS  BE LIABLE FOR  ANY DIRECT,
//  INDIRECT, INCIDENTAL, SPECIAL,  EXEMPLARY, OR CONSEQUENTIAL  DAMAGES (INCLU-
//  DING, BUT NOT LIMITED TO, PROCUREMENT  OF SUBSTITUTE GOODS OR SERVICES; LOSS
//  OF USE, DATA, OR  PROFITS; OR BUSINESS  INTERRUPTION)  HOWEVER CAUSED AND ON
//  ANY  THEORY OF LIABILITY,  WHETHER  IN CONTRACT,  STRICT LIABILITY,  OR TORT
//  (INCLUDING  NEGLIGENCE OR  OTHERWISE) ARISING IN  ANY WAY OUT OF THE  USE OF
//  THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

/*
 * This is just an aggregator header file. 
 */

#if ! defined (CPPMANIFEST_H)
#define CPPMANIFEST_H

#if defined (CPPMANIFEST_HAVE_PRAGMA_ONCE)
#pragma once
#endif

#include "version.h"
#include "build_info.h"

namespace cppmanifest {

    static std::string getUserName() {
        return CPPMANIFEST_USERNAME_STR;
    }

    static std::string getVersion() {
        std::string verStr(CPPMANIFEST_VERSION_STR);
        bool stripLastChar = verStr.find("-") == verStr.length()-1;
        if (stripLastChar) {
            // dump the last char
            verStr.resize(verStr.find("-"));
        }
        return verStr;
    }
}

#endif
/*
 * Do not put content below here.
 */