/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#define _CXXTEST_HAVE_STD
#define _CXXTEST_HAVE_EH
#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>
#include <cxxtest/TestMain.h>
#include <cxxtest/ErrorPrinter.h>

int main( int argc, char *argv[] ) {
 int status;
    CxxTest::ErrorPrinter tmp;
    CxxTest::RealWorldDescription::_worldName = "cxxtest";
    status = CxxTest::Main< CxxTest::ErrorPrinter >( tmp, argc, argv );
    return status;
}
bool suite_HebbianUpdatingAgentUTest_init = false;
#include "../../../tests/attention/HebbianUpdatingAgentUTest.cxxtest"

static HebbianUpdatingAgentUTest suite_HebbianUpdatingAgentUTest;

static CxxTest::List Tests_HebbianUpdatingAgentUTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_HebbianUpdatingAgentUTest( "/home/silence/Documents/again/attention/tests/attention/HebbianUpdatingAgentUTest.cxxtest", 43, "HebbianUpdatingAgentUTest", suite_HebbianUpdatingAgentUTest, Tests_HebbianUpdatingAgentUTest );

static class TestDescription_suite_HebbianUpdatingAgentUTest_testHebbianLinkUpdating : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_HebbianUpdatingAgentUTest_testHebbianLinkUpdating() : CxxTest::RealTestDescription( Tests_HebbianUpdatingAgentUTest, suiteDescription_HebbianUpdatingAgentUTest, 78, "testHebbianLinkUpdating" ) {}
 void runTest() { suite_HebbianUpdatingAgentUTest.testHebbianLinkUpdating(); }
} testDescription_suite_HebbianUpdatingAgentUTest_testHebbianLinkUpdating;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
